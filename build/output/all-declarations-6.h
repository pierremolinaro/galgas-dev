#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxInstructionAST_2D_weak (const class GALGAS_syntaxInstructionAST & inSource) ;

  public: GALGAS_syntaxInstructionAST_2D_weak & operator = (const class GALGAS_syntaxInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxInstructionAST bang_syntaxInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syntaxInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionAST_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticInstructionAST_2D_weak (const class GALGAS_semanticInstructionAST & inSource) ;

  public: GALGAS_semanticInstructionAST_2D_weak & operator = (const class GALGAS_semanticInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticInstructionAST bang_semanticInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_semanticDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_semanticDeclarationListAST class_func_listWithValue (const class GALGAS_semanticDeclarationAST & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_semanticDeclarationListAST add_operation (const GALGAS_semanticDeclarationListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticDeclarationAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticDeclarationAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticDeclarationAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticDeclarationAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticDeclarationAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSemanticDeclarationAtIndex (class GALGAS_semanticDeclarationAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticDeclarationAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticDeclarationAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationAST getter_mSemanticDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_semanticDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticDeclarationListAST ;
 
} ; // End of GALGAS_semanticDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticDeclarationAST current_mSemanticDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_semanticDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticDeclarationAST mProperty_mSemanticDeclaration ;
  public: inline GALGAS_semanticDeclarationAST readProperty_mSemanticDeclaration (void) const {
    return mProperty_mSemanticDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSemanticDeclaration (const GALGAS_semanticDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSemanticDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationListAST_2D_element init_21_ (const class GALGAS_semanticDeclarationAST & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationListAST_2D_element class_func_new (const class GALGAS_semanticDeclarationAST & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_externFunctionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_externFunctionDeclarationAST (const class cPtr_externFunctionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_formalInputParameterListAST readProperty_mFormalArgumentList (void) const ;

  public: class GALGAS_lstring readProperty_mResultTypeName (void) const ;

  public: class GALGAS_bool readProperty_usefullFunc (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externFunctionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc (const class GALGAS_bool & inOperand0,
                                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                                      const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                                                      const class GALGAS_lstring & inOperand3,
                                                                                                      const class GALGAS_bool & inOperand4,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externFunctionDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3,
                                                                           const class GALGAS_bool & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externFunctionDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externFunctionDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externFunctionDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const class GALGAS_bool & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                                             const class GALGAS_lstring & inOperand3,
                                                                                             const class GALGAS_bool & inOperand4,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_formalInputParameterListAST mProperty_mFormalArgumentList ;
  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: GALGAS_bool mProperty_usefullFunc ;


//--- Default constructor
  public: cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                             const GALGAS_lstring & in_mFunctionName,
                                             const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                             const GALGAS_lstring & in_mResultTypeName,
                                             const GALGAS_bool & in_usefullFunc
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
// Phase 1: @externFunctionDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externFunctionDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externFunctionDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externFunctionDeclarationAST_2D_weak (const class GALGAS_externFunctionDeclarationAST & inSource) ;

  public: GALGAS_externFunctionDeclarationAST_2D_weak & operator = (const class GALGAS_externFunctionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externFunctionDeclarationAST bang_externFunctionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externFunctionDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externFunctionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externFunctionDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionDeclarationAST : public GALGAS_externFunctionDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_functionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_functionDeclarationAST (const class cPtr_functionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mResultVariableName (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mFunctionInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GALGAS_bool readProperty_mIsInternal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionDeclarationAST init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                                const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                                                                const class GALGAS_lstring & inOperand3,
                                                                                                                const class GALGAS_bool & inOperand4,
                                                                                                                const class GALGAS_lstring & inOperand5,
                                                                                                                const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                                                                const class GALGAS_location & inOperand7,
                                                                                                                const class GALGAS_bool & inOperand8,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                     const class GALGAS_lstring & inOperand3,
                                                                     const class GALGAS_bool & inOperand4,
                                                                     const class GALGAS_lstring & inOperand5,
                                                                     const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                     const class GALGAS_location & inOperand7,
                                                                     const class GALGAS_bool & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_externFunctionDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                                       const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                                                       const class GALGAS_lstring & inOperand3,
                                                                                                       const class GALGAS_bool & inOperand4,
                                                                                                       const class GALGAS_lstring & inOperand5,
                                                                                                       const class GALGAS_semanticInstructionListAST & inOperand6,
                                                                                                       const class GALGAS_location & inOperand7,
                                                                                                       const class GALGAS_bool & inOperand8,
                                                                                                       Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mResultVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public: GALGAS_location mProperty_mEndOfFunctionInstructionList ;
  public: GALGAS_bool mProperty_mIsInternal ;


//--- Default constructor
  public: cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                       const GALGAS_lstring & in_mFunctionName,
                                       const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                       const GALGAS_lstring & in_mResultTypeName,
                                       const GALGAS_bool & in_usefullFunc,
                                       const GALGAS_lstring & in_mResultVariableName,
                                       const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                       const GALGAS_location & in_mEndOfFunctionInstructionList,
                                       const GALGAS_bool & in_mIsInternal
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
// Phase 1: @functionDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionDeclarationAST_2D_weak : public GALGAS_externFunctionDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionDeclarationAST_2D_weak (const class GALGAS_functionDeclarationAST & inSource) ;

  public: GALGAS_functionDeclarationAST_2D_weak & operator = (const class GALGAS_functionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionDeclarationAST bang_functionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @onceFunctionDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_onceFunctionDeclarationAST (const class cPtr_onceFunctionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_lstring readProperty_mResultTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mResultVariableName (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mFunctionInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfFunctionInstructionList (void) const ;

  public: class GALGAS_bool readProperty_mIsInternal (void) const ;

  public: class GALGAS_bool readProperty_mIsUsefull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_onceFunctionDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                                     const class GALGAS_lstring & inOperand3,
                                                                                                     const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                                                     const class GALGAS_location & inOperand5,
                                                                                                     const class GALGAS_bool & inOperand6,
                                                                                                     const class GALGAS_bool & inOperand7,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_onceFunctionDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                         const class GALGAS_location & inOperand5,
                                                                         const class GALGAS_bool & inOperand6,
                                                                         const class GALGAS_bool & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_onceFunctionDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @onceFunctionDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_onceFunctionDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_lstring & inOperand2,
                                                                                            const class GALGAS_lstring & inOperand3,
                                                                                            const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                                            const class GALGAS_location & inOperand5,
                                                                                            const class GALGAS_bool & inOperand6,
                                                                                            const class GALGAS_bool & inOperand7,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: GALGAS_lstring mProperty_mResultVariableName ;
  public: GALGAS_semanticInstructionListAST mProperty_mFunctionInstructionList ;
  public: GALGAS_location mProperty_mEndOfFunctionInstructionList ;
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_bool mProperty_mIsUsefull ;


//--- Default constructor
  public: cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                           const GALGAS_lstring & in_mFunctionName,
                                           const GALGAS_lstring & in_mResultTypeName,
                                           const GALGAS_lstring & in_mResultVariableName,
                                           const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                           const GALGAS_location & in_mEndOfFunctionInstructionList,
                                           const GALGAS_bool & in_mIsInternal,
                                           const GALGAS_bool & in_mIsUsefull
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
// Phase 1: @onceFunctionDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_onceFunctionDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_onceFunctionDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_onceFunctionDeclarationAST_2D_weak (const class GALGAS_onceFunctionDeclarationAST & inSource) ;

  public: GALGAS_onceFunctionDeclarationAST_2D_weak & operator = (const class GALGAS_onceFunctionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_onceFunctionDeclarationAST bang_onceFunctionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_onceFunctionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_onceFunctionDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_onceFunctionDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@propertyInCollectionListAST buildPropertyInitializationCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildPropertyInitializationCode (const class GALGAS_propertyInCollectionListAST inObject,
                                                      const class GALGAS_lstring constin_inTypeNameForUsefulness,
                                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                                      const class GALGAS_predefinedTypes constin_inPredefinedTypes,
                                                      class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                      class GALGAS_stringset & out_outUnusedVariableCppNameSet,
                                                      class GALGAS_string & out_outInitializationCode,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @selfMutability enum                                            *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selfMutability : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_selfMutability (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_propertiesAreMutableSelfIsNot,
    kEnum_selfAndPropertiesAreMutable,
    kEnum_initializer
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selfMutability extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_selfMutability class_func_initializer (LOCATION_ARGS) ;

  public: static class GALGAS_selfMutability class_func_none (LOCATION_ARGS) ;

  public: static class GALGAS_selfMutability class_func_propertiesAreMutableSelfIsNot (LOCATION_ARGS) ;

  public: static class GALGAS_selfMutability class_func_selfAndPropertiesAreMutable (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_selfMutability & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInitializer (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPropertiesAreMutableSelfIsNot (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfAndPropertiesAreMutable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_initializer () const ;

  public: VIRTUAL_IN_DEBUG bool optional_none () const ;

  public: VIRTUAL_IN_DEBUG bool optional_propertiesAreMutableSelfIsNot () const ;

  public: VIRTUAL_IN_DEBUG bool optional_selfAndPropertiesAreMutable () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfMutability class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMutability ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @selfAvailability enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_selfAvailability_available : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;
  public: const GALGAS_selfMutability mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_selfAvailability_available (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                            const GALGAS_selfMutability inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_selfAvailability_available (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_compilerCppName (class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (class cPtr_semanticExpressionAST * inObject,
                                                    const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                    const class GALGAS_analysisContext constin_inAnalysisContext,
                                                    class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                    class GALGAS_localVarManager & io_ioVariableMap,
                                                    class GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (class cPtr_semanticExpressionForGeneration * inObject,
                                             class GALGAS_string & io_ioGeneratedCode,
                                             class GALGAS_stringset & io_ioInclusionSet,
                                             class GALGAS_uint & io_ioTemporaryVariableIndex,
                                             class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             class GALGAS_string & out_outCppExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                        const class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                                        const class GALGAS_location constinArgument2,
                                                                        class GALGAS_semanticExpressionForGeneration & ioArgument3,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalTemplateInputParameterListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalTemplateInputParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalTemplateInputParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalTemplateInputParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalTemplateSelector,
                                                 const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                 const class GALGAS_lstring & in_mFormalArgumentName,
                                                 const class GALGAS_bool & in_mIsUnused
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalTemplateInputParameterListAST init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalTemplateInputParameterListAST extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalTemplateInputParameterListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalTemplateInputParameterListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_lstring & inOperand2,
                                                                                            const class GALGAS_bool & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalTemplateInputParameterListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_bool & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalTemplateInputParameterListAST add_operation (const GALGAS_formalTemplateInputParameterListAST & inOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalTemplateSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalTemplateSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_formalTemplateInputParameterListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalTemplateInputParameterListAST ;
 
} ; // End of GALGAS_formalTemplateInputParameterListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalTemplateInputParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalTemplateSelector (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalTemplateInputParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalTemplateInputParameterListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalTemplateInputParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalTemplateSelector ;
  public: inline GALGAS_lstring readProperty_mFormalTemplateSelector (void) const {
    return mProperty_mFormalTemplateSelector ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GALGAS_bool mProperty_mIsUnused ;
  public: inline GALGAS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formalTemplateInputParameterListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalTemplateSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalTemplateSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_formalTemplateInputParameterListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_formalTemplateInputParameterListAST_2D_element (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                 const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                 const GALGAS_lstring & in_mFormalArgumentName,
                                                                 const GALGAS_bool & in_mIsUnused) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalTemplateInputParameterListAST_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_lstring & inOperand2,
                                                                                             const class GALGAS_bool & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalTemplateInputParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalTemplateInputParameterListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_lstring & inOperand2,
                                                                                             const class GALGAS_bool & inOperand3,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalTemplateInputParameterListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_filewrapperTemplateListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFilewrapperTemplateName,
                                                 const class GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                 const class GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperTemplateListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_filewrapperTemplateListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListAST add_operation (const GALGAS_filewrapperTemplateListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_formalTemplateInputParameterListAST constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_formalTemplateInputParameterListAST constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateFormalInputParametersAtIndex (class GALGAS_formalTemplateInputParameterListAST constinArgument0,
                                                                                            class GALGAS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_formalTemplateInputParameterListAST & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalTemplateInputParameterListAST getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_filewrapperTemplateListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperTemplateListAST ;
 
} ; // End of GALGAS_filewrapperTemplateListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public: class GALGAS_formalTemplateInputParameterListAST current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_filewrapperTemplateListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFilewrapperTemplateName ;
  public: inline GALGAS_lstring readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GALGAS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GALGAS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

  public: GALGAS_formalTemplateInputParameterListAST mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GALGAS_formalTemplateInputParameterListAST readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GALGAS_formalTemplateInputParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_filewrapperTemplateListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperTemplateListAST_2D_element (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                        const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                        const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_formalTemplateInputParameterListAST & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_formalTemplateInputParameterListAST & inOperand2,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperDeclarationAST (const class cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsInternal (void) const ;

  public: class GALGAS_string readProperty_mSourceFileAbsolutePath (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperPath (void) const ;

  public: class GALGAS_lstringlist readProperty_mFilewrapperTextFileExtensionList (void) const ;

  public: class GALGAS_lstringlist readProperty_mFilewrapperBinaryFileExtensionList (void) const ;

  public: class GALGAS_filewrapperTemplateListAST readProperty_mFilewrapperTemplateList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_string & inOperand2,
                                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                                    const class GALGAS_lstring & inOperand4,
                                                                                                    const class GALGAS_lstringlist & inOperand5,
                                                                                                    const class GALGAS_lstringlist & inOperand6,
                                                                                                    const class GALGAS_filewrapperTemplateListAST & inOperand7,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_lstring & inOperand3,
                                                                        const class GALGAS_lstring & inOperand4,
                                                                        const class GALGAS_lstringlist & inOperand5,
                                                                        const class GALGAS_lstringlist & inOperand6,
                                                                        const class GALGAS_filewrapperTemplateListAST & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           const class GALGAS_lstring & inOperand3,
                                                                                           const class GALGAS_lstring & inOperand4,
                                                                                           const class GALGAS_lstringlist & inOperand5,
                                                                                           const class GALGAS_lstringlist & inOperand6,
                                                                                           const class GALGAS_filewrapperTemplateListAST & inOperand7,
                                                                                           Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsInternal ;
  public: GALGAS_string mProperty_mSourceFileAbsolutePath ;
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: GALGAS_lstringlist mProperty_mFilewrapperTextFileExtensionList ;
  public: GALGAS_lstringlist mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GALGAS_filewrapperTemplateListAST mProperty_mFilewrapperTemplateList ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_isPredefined,
                                          const GALGAS_bool & in_mIsInternal,
                                          const GALGAS_string & in_mSourceFileAbsolutePath,
                                          const GALGAS_lstring & in_mFilewrapperName,
                                          const GALGAS_lstring & in_mFilewrapperPath,
                                          const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                          const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                          const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
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
// Phase 1: @filewrapperDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperDeclarationAST_2D_weak (const class GALGAS_filewrapperDeclarationAST & inSource) ;

  public: GALGAS_filewrapperDeclarationAST_2D_weak & operator = (const class GALGAS_filewrapperDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperDeclarationAST bang_filewrapperDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_syntaxInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxInstructionList init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxInstructionList class_func_listWithValue (const class GALGAS_syntaxInstructionAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxInstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxInstructionList add_operation (const GALGAS_syntaxInstructionList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_syntaxInstructionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syntaxInstructionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxInstructionList ;
 
} ; // End of GALGAS_syntaxInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxInstructionList (const GALGAS_syntaxInstructionList & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_syntaxInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_syntaxInstructionAST mProperty_mInstruction ;
  public: inline GALGAS_syntaxInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_syntaxInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syntaxInstructionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxInstructionList_2D_element init_21_ (const class GALGAS_syntaxInstructionAST & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxInstructionList_2D_element class_func_new (const class GALGAS_syntaxInstructionAST & inOperand0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalLabelListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonTerminalLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabelName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                 const class GALGAS_location & in_mEndOfArgumentLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonTerminalLabelListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalLabelListAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonTerminalLabelListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalLabelListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalParameterListAST & inOperand1,
                                                                                const class GALGAS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalLabelListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonTerminalLabelListAST add_operation (const GALGAS_nonTerminalLabelListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalParameterListAST constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonTerminalLabelListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonTerminalLabelListAST ;
 
} ; // End of GALGAS_nonTerminalLabelListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalLabelListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabelName ;
  public: inline GALGAS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalArgumentList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalArgumentList (void) const {
    return mProperty_mFormalArgumentList ;
  }

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;
  public: inline GALGAS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonTerminalLabelListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                     const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                     const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonTerminalLabelListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_formalParameterListAST & inOperand1,
                                                                             const class GALGAS_location & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonTerminalLabelListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalParameterListAST & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonTerminalLabelListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonterminalDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mNonterminalName,
                                                 const class GALGAS_nonTerminalLabelListAST & in_mLabels
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalDeclarationListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalDeclarationListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonterminalDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonTerminalLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalDeclarationListAST add_operation (const GALGAS_nonterminalDeclarationListAST & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_nonTerminalLabelListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_nonTerminalLabelListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_nonTerminalLabelListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GALGAS_nonTerminalLabelListAST constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonTerminalLabelListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_nonTerminalLabelListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonterminalDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonterminalDeclarationListAST ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_nonTerminalLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mNonterminalName ;
  public: inline GALGAS_lstring readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GALGAS_nonTerminalLabelListAST mProperty_mLabels ;
  public: inline GALGAS_nonTerminalLabelListAST readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMLabels (const GALGAS_nonTerminalLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonterminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                                           const GALGAS_nonTerminalLabelListAST & in_mLabels) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalDeclarationListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_nonTerminalLabelListAST & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalDeclarationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_nonTerminalLabelListAST & inOperand1,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleLabelListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxRuleLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabelName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalArguments,
                                                 const class GALGAS_location & in_mEndOfArgumentLocation,
                                                 const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxRuleLabelListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleLabelListAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxRuleLabelListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxRuleLabelListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalParameterListAST & inOperand1,
                                                                               const class GALGAS_location & inOperand2,
                                                                               const class GALGAS_syntaxInstructionList & inOperand3,
                                                                               const class GALGAS_location & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleLabelListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2,
                                                     const class GALGAS_syntaxInstructionList & inOperand3,
                                                     const class GALGAS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxRuleLabelListAST add_operation (const GALGAS_syntaxRuleLabelListAST & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalParameterListAST constinArgument1,
                                               class GALGAS_location constinArgument2,
                                               class GALGAS_syntaxInstructionList constinArgument3,
                                               class GALGAS_location constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_syntaxInstructionList constinArgument3,
                                                      class GALGAS_location constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 class GALGAS_syntaxInstructionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                class GALGAS_syntaxInstructionList & outArgument3,
                                                class GALGAS_location & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_syntaxInstructionList & outArgument3,
                                                      class GALGAS_location & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentsAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              class GALGAS_syntaxInstructionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             class GALGAS_syntaxInstructionList & outArgument3,
                                             class GALGAS_location & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalArgumentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syntaxRuleLabelListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxRuleLabelListAST ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalArguments (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxRuleLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleLabelListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabelName ;
  public: inline GALGAS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalArguments ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalArguments (void) const {
    return mProperty_mFormalArguments ;
  }

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;
  public: inline GALGAS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GALGAS_syntaxInstructionList mProperty_mSyntaxInstructionList ;
  public: inline GALGAS_syntaxInstructionList readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInstructionList ;
  public: inline GALGAS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMFormalArguments (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArguments = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMSyntaxInstructionList (const GALGAS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syntaxRuleLabelListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxRuleLabelListAST_2D_element (const GALGAS_lstring & in_mLabelName,
                                                    const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                    const GALGAS_location & in_mEndOfArgumentLocation,
                                                    const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxRuleLabelListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_formalParameterListAST & inOperand1,
                                                                                    const class GALGAS_location & inOperand2,
                                                                                    const class GALGAS_syntaxInstructionList & inOperand3,
                                                                                    const class GALGAS_location & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxRuleLabelListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalParameterListAST & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_syntaxInstructionList & inOperand3,
                                                                                const class GALGAS_location & inOperand4,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxRuleLabelListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mNonterminalName,
                                                 const class GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxRuleListAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleListAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxRuleListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxRuleListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syntaxRuleListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_syntaxRuleLabelListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxRuleListAST add_operation (const GALGAS_syntaxRuleListAST & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_syntaxRuleLabelListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_syntaxRuleLabelListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelListAtIndex (class GALGAS_syntaxRuleLabelListAST constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_syntaxRuleLabelListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleLabelListAST getter_mLabelListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syntaxRuleListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxRuleListAST ;
 
} ; // End of GALGAS_syntaxRuleListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleLabelListAST current_mLabelList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxRuleListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mNonterminalName ;
  public: inline GALGAS_lstring readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GALGAS_syntaxRuleLabelListAST mProperty_mLabelList ;
  public: inline GALGAS_syntaxRuleLabelListAST readProperty_mLabelList (void) const {
    return mProperty_mLabelList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMLabelList (const GALGAS_syntaxRuleLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syntaxRuleListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxRuleListAST_2D_element (const GALGAS_lstring & in_mNonterminalName,
                                               const GALGAS_syntaxRuleLabelListAST & in_mLabelList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxRuleListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_syntaxRuleLabelListAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxRuleListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_syntaxRuleLabelListAST & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxRuleListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSyntaxInstructionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listOfSyntaxInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_listOfSyntaxInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                 const class GALGAS_location & in_mEndOf_5F_instructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listOfSyntaxInstructionList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listOfSyntaxInstructionList extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listOfSyntaxInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_listOfSyntaxInstructionList class_func_listWithValue (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                    const class GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_syntaxInstructionList & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_listOfSyntaxInstructionList add_operation (const GALGAS_listOfSyntaxInstructionList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_syntaxInstructionList constinArgument0,
                                               class GALGAS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_syntaxInstructionList & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_syntaxInstructionList & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_syntaxInstructionList & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOf_5F_instructionsAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxInstructionListAtIndex (class GALGAS_syntaxInstructionList constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_syntaxInstructionList & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_syntaxInstructionList & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_instructionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxInstructionList getter_mSyntaxInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSyntaxInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_listOfSyntaxInstructionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_listOfSyntaxInstructionList ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_listOfSyntaxInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_syntaxInstructionList current_mSyntaxInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOf_5F_instructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_listOfSyntaxInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSyntaxInstructionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listOfSyntaxInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_syntaxInstructionList mProperty_mSyntaxInstructionList ;
  public: inline GALGAS_syntaxInstructionList readProperty_mSyntaxInstructionList (void) const {
    return mProperty_mSyntaxInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOf_5F_instructions ;
  public: inline GALGAS_location readProperty_mEndOf_5F_instructions (void) const {
    return mProperty_mEndOf_5F_instructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxInstructionList (const GALGAS_syntaxInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxInstructionList = inValue ;
  }

  public: inline void setter_setMEndOf_5F_instructions (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOf_5F_instructions = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_listOfSyntaxInstructionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                         const GALGAS_location & in_mEndOf_5F_instructions) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listOfSyntaxInstructionList_2D_element init_21__21_ (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listOfSyntaxInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listOfSyntaxInstructionList_2D_element class_func_new (const class GALGAS_syntaxInstructionList & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listOfSyntaxInstructionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_galgas_33_SyntaxComponentAST (const class cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mSyntaxComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLexiqueName (void) const ;

  public: class GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const ;

  public: class GALGAS_syntaxRuleListAST readProperty_mRuleList (void) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxComponentAST init_21_isPredefined_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
                                                                                               const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                               const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                                               const class GALGAS_bool & inOperand5,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxComponentAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                           const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                           const class GALGAS_bool & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @galgas3SyntaxComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_galgas_33_SyntaxComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                                      const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                                      const class GALGAS_bool & inOperand5,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: GALGAS_lstring mProperty_mLexiqueName ;
  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_isPredefined,
                                             const GALGAS_lstring & in_mSyntaxComponentName,
                                             const GALGAS_lstring & in_mLexiqueName,
                                             const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                             const GALGAS_syntaxRuleListAST & in_mRuleList,
                                             const GALGAS_bool & in_mHasTranslateFeature
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
// Phase 1: @galgas_33_SyntaxComponentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_galgas_33_SyntaxComponentAST_2D_weak (const class GALGAS_galgas_33_SyntaxComponentAST & inSource) ;

  public: GALGAS_galgas_33_SyntaxComponentAST_2D_weak & operator = (const class GALGAS_galgas_33_SyntaxComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_galgas_33_SyntaxComponentAST bang_galgas_33_SyntaxComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxComponentAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_GrammarComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_GrammarComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_GrammarComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_galgas_33_GrammarComponentAST (const class cPtr_galgas_33_GrammarComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lbool readProperty_mHasIndexing (void) const ;

  public: class GALGAS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mGrammarClass (void) const ;

  public: class GALGAS_lstringlist readProperty_mSyntaxComponents (void) const ;

  public: class GALGAS_lstring readProperty_mStartSymbolName (void) const ;

  public: class GALGAS_nonTerminalLabelListAST readProperty_mStartSymbolLabelList (void) const ;

  public: class GALGAS_lstringlist readProperty_mUnusedNonterminalList (void) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_GrammarComponentAST init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                            const class GALGAS_lbool & inOperand1,
                                                                                                            const class GALGAS_lstring & inOperand2,
                                                                                                            const class GALGAS_lstring & inOperand3,
                                                                                                            const class GALGAS_lstringlist & inOperand4,
                                                                                                            const class GALGAS_lstring & inOperand5,
                                                                                                            const class GALGAS_nonTerminalLabelListAST & inOperand6,
                                                                                                            const class GALGAS_lstringlist & inOperand7,
                                                                                                            const class GALGAS_bool & inOperand8,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_GrammarComponentAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_GrammarComponentAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_lbool & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_lstringlist & inOperand4,
                                                                            const class GALGAS_lstring & inOperand5,
                                                                            const class GALGAS_nonTerminalLabelListAST & inOperand6,
                                                                            const class GALGAS_lstringlist & inOperand7,
                                                                            const class GALGAS_bool & inOperand8
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_GrammarComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @galgas3GrammarComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_galgas_33_GrammarComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                   const class GALGAS_lbool & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                                   const class GALGAS_lstringlist & inOperand4,
                                                                                                   const class GALGAS_lstring & inOperand5,
                                                                                                   const class GALGAS_nonTerminalLabelListAST & inOperand6,
                                                                                                   const class GALGAS_lstringlist & inOperand7,
                                                                                                   const class GALGAS_bool & inOperand8,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lbool mProperty_mHasIndexing ;
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mGrammarClass ;
  public: GALGAS_lstringlist mProperty_mSyntaxComponents ;
  public: GALGAS_lstring mProperty_mStartSymbolName ;
  public: GALGAS_nonTerminalLabelListAST mProperty_mStartSymbolLabelList ;
  public: GALGAS_lstringlist mProperty_mUnusedNonterminalList ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_isPredefined,
                                              const GALGAS_lbool & in_mHasIndexing,
                                              const GALGAS_lstring & in_mGrammarComponentName,
                                              const GALGAS_lstring & in_mGrammarClass,
                                              const GALGAS_lstringlist & in_mSyntaxComponents,
                                              const GALGAS_lstring & in_mStartSymbolName,
                                              const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                              const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                              const GALGAS_bool & in_mHasTranslateFeature
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
// Phase 1: @galgas_33_GrammarComponentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_GrammarComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_GrammarComponentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_galgas_33_GrammarComponentAST_2D_weak (const class GALGAS_galgas_33_GrammarComponentAST & inSource) ;

  public: GALGAS_galgas_33_GrammarComponentAST_2D_weak & operator = (const class GALGAS_galgas_33_GrammarComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_galgas_33_GrammarComponentAST bang_galgas_33_GrammarComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_GrammarComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_GrammarComponentAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_galgas_33_GrammarComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_GrammarComponentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxComponentListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName,
                                                 const class GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                 const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GALGAS_syntaxRuleListAST & in_mRuleList,
                                                 const class GALGAS_bool & in_mHasTranslateFeature
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxComponentListAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentListAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxComponentListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_SyntaxComponentListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                         const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                                         const class GALGAS_bool & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GALGAS_syntaxRuleListAST & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxComponentListAST add_operation (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                               class GALGAS_syntaxRuleListAST constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                                      class GALGAS_syntaxRuleListAST constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                 class GALGAS_syntaxRuleListAST & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                class GALGAS_syntaxRuleListAST & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                      class GALGAS_syntaxRuleListAST & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureAtIndex (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImportedLexiqueFilePathAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GALGAS_syntaxRuleListAST constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                              class GALGAS_syntaxRuleListAST & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                             class GALGAS_syntaxRuleListAST & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImportedLexiqueFilePathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxComponentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_galgas_33_SyntaxComponentListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxComponentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mImportedLexiqueFilePath (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_SyntaxComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxComponentListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: inline GALGAS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GALGAS_lstring mProperty_mImportedLexiqueFilePath ;
  public: inline GALGAS_lstring readProperty_mImportedLexiqueFilePath (void) const {
    return mProperty_mImportedLexiqueFilePath ;
  }

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GALGAS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GALGAS_bool mProperty_mHasTranslateFeature ;
  public: inline GALGAS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMImportedLexiqueFilePath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedLexiqueFilePath = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GALGAS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GALGAS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_galgas_33_SyntaxComponentListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_SyntaxComponentListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                              const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                              const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                              const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxComponentListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_lstring & inOperand1,
                                                                                              const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                              const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                                              const class GALGAS_bool & inOperand4,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxComponentListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                          const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3SyntaxExtensionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSyntaxComponentName,
                                                 const class GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                 const class GALGAS_syntaxRuleListAST & in_mRuleList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxExtensionListAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_SyntaxExtensionListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                         const class GALGAS_syntaxRuleListAST & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                     const class GALGAS_syntaxRuleListAST & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_SyntaxExtensionListAST add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                               class GALGAS_syntaxRuleListAST constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                                      class GALGAS_syntaxRuleListAST constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                 class GALGAS_syntaxRuleListAST & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                class GALGAS_syntaxRuleListAST & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                                      class GALGAS_syntaxRuleListAST & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListAtIndex (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListAtIndex (class GALGAS_syntaxRuleListAST constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                              class GALGAS_syntaxRuleListAST & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_nonterminalDeclarationListAST & outArgument1,
                                             class GALGAS_syntaxRuleListAST & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_galgas_33_SyntaxExtensionListAST ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_SyntaxExtensionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_SyntaxExtensionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSyntaxComponentName ;
  public: inline GALGAS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GALGAS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GALGAS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GALGAS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element (const GALGAS_lstring & in_mSyntaxComponentName,
                                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                              const GALGAS_syntaxRuleListAST & in_mRuleList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                      const class GALGAS_syntaxRuleListAST & inOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_SyntaxExtensionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                          const class GALGAS_syntaxRuleListAST & inOperand2,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgas_33_SyntaxExtensionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions list map
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensions : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensions (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxExtensions init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensions extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxExtensions class_func_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GALGAS_syntaxRuleListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_string constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                               class GALGAS_syntaxRuleListAST constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_SyntaxExtensionListAST getter_listForKey (const class GALGAS_string & constinOperand0
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class cEnumerator_syntaxExtensions ;
 
} ; // End of GALGAS_syntaxExtensions class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxExtensions : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_key (LOCATION_ARGS) const ;
  public: class GALGAS_galgas_33_SyntaxExtensionListAST current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxExtensions_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxExtensions_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxExtensions_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_galgas_33_SyntaxExtensionListAST mProperty_mList ;
  public: inline GALGAS_galgas_33_SyntaxExtensionListAST readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GALGAS_galgas_33_SyntaxExtensionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syntaxExtensions_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxExtensions_2D_element (const GALGAS_string & in_key,
                                              const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxExtensions_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxExtensions_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxExtensions_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxExtensions_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prologueEpilogueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_prologueEpilogueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_prologueEpilogueList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prologueEpilogueList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prologueEpilogueList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_prologueEpilogueList class_func_listWithValue (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                             const class GALGAS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_prologueEpilogueList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_prologueEpilogueList add_operation (const GALGAS_prologueEpilogueList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticInstructionListAST constinArgument0,
                                               class GALGAS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionListAST & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionListAST & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionListAST & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionListAST & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionListAST & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prologueEpilogueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_prologueEpilogueList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_prologueEpilogueList ;
 
} ; // End of GALGAS_prologueEpilogueList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_prologueEpilogueList : public cGenericAbstractEnumerator {
  public: cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_prologueEpilogueList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prologueEpilogueList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prologueEpilogueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInstructionList ;
  public: inline GALGAS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_prologueEpilogueList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                  const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_prologueEpilogueList_2D_element init_21__21_ (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prologueEpilogueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prologueEpilogueList_2D_element class_func_new (const class GALGAS_semanticInstructionListAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prologueEpilogueList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_programRuleList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_programRuleList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_programRuleList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSourceFileExtension,
                                                 const class GALGAS_lstring & in_mSourceFileHelp,
                                                 const class GALGAS_lstring & in_mSourceFileVariableName,
                                                 const class GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                 const class GALGAS_lstring & in_mReferenceGrammar,
                                                 const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_programRuleList init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_programRuleList extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_programRuleList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_programRuleList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_bool & inOperand3,
                                                                        const class GALGAS_lstring & inOperand4,
                                                                        const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                        const class GALGAS_location & inOperand6
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_programRuleList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_lstring & inOperand4,
                                                     const class GALGAS_semanticInstructionListAST & inOperand5,
                                                     const class GALGAS_location & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_programRuleList add_operation (const GALGAS_programRuleList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               class GALGAS_lstring constinArgument4,
                                               class GALGAS_semanticInstructionListAST constinArgument5,
                                               class GALGAS_location constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_lstring constinArgument4,
                                                      class GALGAS_semanticInstructionListAST constinArgument5,
                                                      class GALGAS_location constinArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_semanticInstructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_lstring & outArgument4,
                                                class GALGAS_semanticInstructionListAST & outArgument5,
                                                class GALGAS_location & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_lstring & outArgument4,
                                                      class GALGAS_semanticInstructionListAST & outArgument5,
                                                      class GALGAS_location & outArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReferenceGrammarAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileExtensionAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileHelpAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileVariableNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceFileVariableNameIsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_semanticInstructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_lstring & outArgument4,
                                             class GALGAS_semanticInstructionListAST & outArgument5,
                                             class GALGAS_location & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReferenceGrammarAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileExtensionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileHelpAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceFileVariableNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSourceFileVariableNameIsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_programRuleList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_programRuleList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_programRuleList ;
 
} ; // End of GALGAS_programRuleList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_programRuleList : public cGenericAbstractEnumerator {
  public: cEnumerator_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSourceFileExtension (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSourceFileHelp (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSourceFileVariableName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReferenceGrammar (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_programRuleList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programRuleList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_programRuleList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSourceFileExtension ;
  public: inline GALGAS_lstring readProperty_mSourceFileExtension (void) const {
    return mProperty_mSourceFileExtension ;
  }

  public: GALGAS_lstring mProperty_mSourceFileHelp ;
  public: inline GALGAS_lstring readProperty_mSourceFileHelp (void) const {
    return mProperty_mSourceFileHelp ;
  }

  public: GALGAS_lstring mProperty_mSourceFileVariableName ;
  public: inline GALGAS_lstring readProperty_mSourceFileVariableName (void) const {
    return mProperty_mSourceFileVariableName ;
  }

  public: GALGAS_bool mProperty_mSourceFileVariableNameIsUnused ;
  public: inline GALGAS_bool readProperty_mSourceFileVariableNameIsUnused (void) const {
    return mProperty_mSourceFileVariableNameIsUnused ;
  }

  public: GALGAS_lstring mProperty_mReferenceGrammar ;
  public: inline GALGAS_lstring readProperty_mReferenceGrammar (void) const {
    return mProperty_mReferenceGrammar ;
  }

  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInstructionList ;
  public: inline GALGAS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSourceFileExtension (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileExtension = inValue ;
  }

  public: inline void setter_setMSourceFileHelp (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileHelp = inValue ;
  }

  public: inline void setter_setMSourceFileVariableName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableName = inValue ;
  }

  public: inline void setter_setMSourceFileVariableNameIsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceFileVariableNameIsUnused = inValue ;
  }

  public: inline void setter_setMReferenceGrammar (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceGrammar = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_programRuleList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_programRuleList_2D_element (const GALGAS_lstring & in_mSourceFileExtension,
                                             const GALGAS_lstring & in_mSourceFileHelp,
                                             const GALGAS_lstring & in_mSourceFileVariableName,
                                             const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                             const GALGAS_lstring & in_mReferenceGrammar,
                                             const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                             const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_programRuleList_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3,
                                                                                     const class GALGAS_lstring & inOperand4,
                                                                                     const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                                     const class GALGAS_location & inOperand6,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_programRuleList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_programRuleList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lstring & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_lstring & inOperand4,
                                                                         const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                         const class GALGAS_location & inOperand6,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_programRuleList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @galgasDeclarationAST struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_galgasDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticDeclarationListAST mProperty_mDeclarationList ;
  public: inline GALGAS_semanticDeclarationListAST readProperty_mDeclarationList (void) const {
    return mProperty_mDeclarationList ;
  }

  public: GALGAS_stringset mProperty_mImplicitTypeDeclarationSet ;
  public: inline GALGAS_stringset readProperty_mImplicitTypeDeclarationSet (void) const {
    return mProperty_mImplicitTypeDeclarationSet ;
  }

  public: GALGAS_galgas_33_SyntaxComponentListAST mProperty_mSyntaxComponentList ;
  public: inline GALGAS_galgas_33_SyntaxComponentListAST readProperty_mSyntaxComponentList (void) const {
    return mProperty_mSyntaxComponentList ;
  }

  public: GALGAS_syntaxExtensions mProperty_mSyntaxExtensions ;
  public: inline GALGAS_syntaxExtensions readProperty_mSyntaxExtensions (void) const {
    return mProperty_mSyntaxExtensions ;
  }

  public: GALGAS_galgasGUIComponentListAST mProperty_mGUIComponentList ;
  public: inline GALGAS_galgasGUIComponentListAST readProperty_mGUIComponentList (void) const {
    return mProperty_mGUIComponentList ;
  }

  public: GALGAS_prologueEpilogueList mProperty_mPrologueDeclarationList ;
  public: inline GALGAS_prologueEpilogueList readProperty_mPrologueDeclarationList (void) const {
    return mProperty_mPrologueDeclarationList ;
  }

  public: GALGAS_programRuleList mProperty_mSourceRuleList ;
  public: inline GALGAS_programRuleList readProperty_mSourceRuleList (void) const {
    return mProperty_mSourceRuleList ;
  }

  public: GALGAS_prologueEpilogueList mProperty_mEpilogueDeclarationList ;
  public: inline GALGAS_prologueEpilogueList readProperty_mEpilogueDeclarationList (void) const {
    return mProperty_mEpilogueDeclarationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_galgasDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationList (const GALGAS_semanticDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationList = inValue ;
  }

  public: inline void setter_setMImplicitTypeDeclarationSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplicitTypeDeclarationSet = inValue ;
  }

  public: inline void setter_setMSyntaxComponentList (const GALGAS_galgas_33_SyntaxComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentList = inValue ;
  }

  public: inline void setter_setMSyntaxExtensions (const GALGAS_syntaxExtensions & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxExtensions = inValue ;
  }

  public: inline void setter_setMGUIComponentList (const GALGAS_galgasGUIComponentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentList = inValue ;
  }

  public: inline void setter_setMPrologueDeclarationList (const GALGAS_prologueEpilogueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrologueDeclarationList = inValue ;
  }

  public: inline void setter_setMSourceRuleList (const GALGAS_programRuleList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceRuleList = inValue ;
  }

  public: inline void setter_setMEpilogueDeclarationList (const GALGAS_prologueEpilogueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEpilogueDeclarationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_galgasDeclarationAST (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_galgasDeclarationAST (const GALGAS_semanticDeclarationListAST & in_mDeclarationList,
                                       const GALGAS_stringset & in_mImplicitTypeDeclarationSet,
                                       const GALGAS_galgas_33_SyntaxComponentListAST & in_mSyntaxComponentList,
                                       const GALGAS_syntaxExtensions & in_mSyntaxExtensions,
                                       const GALGAS_galgasGUIComponentListAST & in_mGUIComponentList,
                                       const GALGAS_prologueEpilogueList & in_mPrologueDeclarationList,
                                       const GALGAS_programRuleList & in_mSourceRuleList,
                                       const GALGAS_prologueEpilogueList & in_mEpilogueDeclarationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_galgasDeclarationAST init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_galgasDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_galgasDeclarationAST class_func_new (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_galgasDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@functionSignature initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_initializerSignature (const class GALGAS_functionSignature & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mInputArgument ;
  public: inline GALGAS_bool readProperty_mInputArgument (void) const {
    return mProperty_mInputArgument ;
  }

  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInputArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputArgument = inValue ;
  }

  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodSignature_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodSignature_2D_element (const GALGAS_bool & in_mInputArgument,
                                                     const GALGAS_lstring & in_mFormalSelector,
                                                     const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                     const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodSignature_2D_element init_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodSignature_2D_element class_func_new (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionalMethodSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formalParameterSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_formalParameterSignature_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_formalParameterSignature_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                      const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                      const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                      const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_formalParameterSignature_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                  const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formalParameterSignature_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                  const class GALGAS_formalArgumentPassingModeAST & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formalParameterSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@typedPropertyList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_initializerSignature (const class GALGAS_typedPropertyList & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @AccessControl enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_protectedAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_protectedAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControl_protectedAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_protectedSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_protectedSetAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControl_protectedSetAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_privateAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_privateAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControl_privateAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_privateSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_privateSetAccess (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControl_privateSetAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_fileprivateAccess : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_fileprivateAccess (const GALGAS_location inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControl_fileprivateAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_AccessControl_fileprivateSetAccess : public cEnumAssociatedValues {
  public: const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_AccessControl_fileprivateSetAccess (const GALGAS_location inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_AccessControl_fileprivateSetAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantIndexMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedTypeList ;

//--- Constructors
  public: cMapElement_constantIndexMap (const GALGAS_constantIndexMap_2D_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_constantIndexMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_unifiedTypeMapEntryList & in_mAssociatedTypeList
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantIndexMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constantIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedTypeList ;
  public: inline GALGAS_unifiedTypeMapEntryList readProperty_mAssociatedTypeList (void) const {
    return mProperty_mAssociatedTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedTypeList (const GALGAS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedTypeList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_constantIndexMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_constantIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex,
                                              const GALGAS_unifiedTypeMapEntryList & in_mAssociatedTypeList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_constantIndexMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_unifiedTypeMapEntryList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constantIndexMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1,
                                                                          const class GALGAS_unifiedTypeMapEntryList & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_constantIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constantIndexMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineArgumentMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineArgumentMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineArgumentMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_routineArgumentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_routineArgumentMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineArgumentMap (const GALGAS_routineArgumentMap & inSource) ;
  public: GALGAS_routineArgumentMap & operator = (const GALGAS_routineArgumentMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineArgumentMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineArgumentMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineArgumentMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_routineArgumentMap class_func_mapWithMapToOverride (const class GALGAS_routineArgumentMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterSignature & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineArgumentMap add_operation (const GALGAS_routineArgumentMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsFilePrivateForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsFilePrivateForKey (const class GALGAS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mRoutineSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterSignature & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineArgumentMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_routineArgumentMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineArgumentMap ;
 
} ; // End of GALGAS_routineArgumentMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineArgumentMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineArgumentMap (const GALGAS_routineArgumentMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineArgumentMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineArgumentMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@internalRoutineMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_internalRoutineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_routineArgumentMap mProperty_mArgumentMap ;

//--- Constructors
  public: cMapElement_internalRoutineMap (const GALGAS_internalRoutineMap_2D_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_internalRoutineMap (const GALGAS_lstring & inKey,
                                          const GALGAS_routineArgumentMap & in_mArgumentMap
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @internalRoutineMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_internalRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_routineArgumentMap mProperty_mArgumentMap ;
  public: inline GALGAS_routineArgumentMap readProperty_mArgumentMap (void) const {
    return mProperty_mArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_internalRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentMap (const GALGAS_routineArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_internalRoutineMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_internalRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_routineArgumentMap & in_mArgumentMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_internalRoutineMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_routineArgumentMap & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_internalRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_internalRoutineMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_routineArgumentMap & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_internalRoutineMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_internalRoutineMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineArgumentMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineArgumentMap : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterSignature mProperty_mRoutineSignature ;
  public: GALGAS_bool mProperty_mIsFilePrivate ;

//--- Constructors
  public: cMapElement_routineArgumentMap (const GALGAS_routineArgumentMap_2D_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineArgumentMap (const GALGAS_lstring & inKey,
                                          const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                          const GALGAS_bool & in_mIsFilePrivate
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineArgumentMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineArgumentMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterSignature mProperty_mRoutineSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GALGAS_bool mProperty_mIsFilePrivate ;
  public: inline GALGAS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineArgumentMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRoutineSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineArgumentMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineArgumentMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                const GALGAS_bool & in_mIsFilePrivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineArgumentMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_formalParameterSignature & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineArgumentMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineArgumentMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_formalParameterSignature & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineArgumentMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineArgumentMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @acceptableParameterList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_acceptableParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_acceptableParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_acceptableParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                 const class GALGAS_bool & in_mIsFilePrivate
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_acceptableParameterList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_acceptableParameterList extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_acceptableParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_acceptableParameterList class_func_listWithValue (const class GALGAS_formalParameterSignature & inOperand0,
                                                                                const class GALGAS_bool & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_acceptableParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_formalParameterSignature & inOperand0,
                                                     const class GALGAS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_acceptableParameterList add_operation (const GALGAS_acceptableParameterList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_formalParameterSignature constinArgument0,
                                               class GALGAS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_formalParameterSignature constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_formalParameterSignature & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_formalParameterSignature & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_formalParameterSignature & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsFilePrivateAtIndex (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineSignatureAtIndex (class GALGAS_formalParameterSignature constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_formalParameterSignature & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_formalParameterSignature & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsFilePrivateAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mRoutineSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_acceptableParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_acceptableParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_acceptableParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_acceptableParameterList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_acceptableParameterList ;
 
} ; // End of GALGAS_acceptableParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_acceptableParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_acceptableParameterList (const GALGAS_acceptableParameterList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsFilePrivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_acceptableParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_acceptableParameterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @acceptableParameterList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_acceptableParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_formalParameterSignature mProperty_mRoutineSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mRoutineSignature (void) const {
    return mProperty_mRoutineSignature ;
  }

  public: GALGAS_bool mProperty_mIsFilePrivate ;
  public: inline GALGAS_bool readProperty_mIsFilePrivate (void) const {
    return mProperty_mIsFilePrivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_acceptableParameterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineSignature = inValue ;
  }

  public: inline void setter_setMIsFilePrivate (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsFilePrivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_acceptableParameterList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_acceptableParameterList_2D_element (const GALGAS_formalParameterSignature & in_mRoutineSignature,
                                                     const GALGAS_bool & in_mIsFilePrivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_acceptableParameterList_2D_element init_21__21_ (const class GALGAS_formalParameterSignature & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_acceptableParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_acceptableParameterList_2D_element class_func_new (const class GALGAS_formalParameterSignature & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_acceptableParameterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_acceptableParameterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location sourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_sourceFile (const class GALGAS_location & inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@location commaSourceFile' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_commaSourceFile (const class GALGAS_location & inObject,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (class cPtr_semanticInstructionAST * inObject,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExpressionInSemanticContext (class cPtr_semanticExpressionAST * inObject,
                                                           class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionListAST enterInstructionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionListInSemanticContext (const class GALGAS_semanticInstructionListAST inObject,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarLabelMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_grammarLabelMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_grammarLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_grammarLabelMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_grammarLabelMap (const GALGAS_grammarLabelMap & inSource) ;
  public: GALGAS_grammarLabelMap & operator = (const GALGAS_grammarLabelMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_grammarLabelMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarLabelMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_grammarLabelMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_grammarLabelMap class_func_mapWithMapToOverride (const class GALGAS_grammarLabelMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterSignature & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_grammarLabelMap add_operation (const GALGAS_grammarLabelMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mLabelSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterSignature & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_grammarLabelMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_grammarLabelMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_grammarLabelMap ;
 
} ; // End of GALGAS_grammarLabelMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_grammarLabelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_grammarLabelMap (const GALGAS_grammarLabelMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mLabelSignature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_grammarLabelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@grammarLabelMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarLabelMap : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterSignature mProperty_mLabelSignature ;

//--- Constructors
  public: cMapElement_grammarLabelMap (const GALGAS_grammarLabelMap_2D_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_grammarLabelMap (const GALGAS_lstring & inKey,
                                       const GALGAS_formalParameterSignature & in_mLabelSignature
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarLabelMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterSignature mProperty_mLabelSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mLabelSignature (void) const {
    return mProperty_mLabelSignature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelSignature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_grammarLabelMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_grammarLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_formalParameterSignature & in_mLabelSignature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_grammarLabelMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_formalParameterSignature & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_grammarLabelMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_formalParameterSignature & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarLabelMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarLabelMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@grammarMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarMap : public cMapElement {
//--- Map attributes
  public: GALGAS_grammarLabelMap mProperty_mLabelMap ;
  public: GALGAS_bool mProperty_mHasIndexing ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructors
  public: cMapElement_grammarMap (const GALGAS_grammarMap_2D_element & inValue
                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_grammarMap (const GALGAS_lstring & inKey,
                                  const GALGAS_grammarLabelMap & in_mLabelMap,
                                  const GALGAS_bool & in_mHasIndexing,
                                  const GALGAS_bool & in_mHasTranslateFeature
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_grammarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_grammarLabelMap mProperty_mLabelMap ;
  public: inline GALGAS_grammarLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

  public: GALGAS_bool mProperty_mHasIndexing ;
  public: inline GALGAS_bool readProperty_mHasIndexing (void) const {
    return mProperty_mHasIndexing ;
  }

  public: GALGAS_bool mProperty_mHasTranslateFeature ;
  public: inline GALGAS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_grammarMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GALGAS_grammarLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

  public: inline void setter_setMHasIndexing (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasIndexing = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_grammarMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_grammarMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_grammarLabelMap & in_mLabelMap,
                                        const GALGAS_bool & in_mHasIndexing,
                                        const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_grammarMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_grammarLabelMap & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_bool & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_grammarMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_grammarLabelMap & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_bool & inOperand3,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_grammarMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@functionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mFunctionSignature ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GALGAS_bool mProperty_mIsInternal ;

//--- Constructors
  public: cMapElement_functionMap (const GALGAS_functionMap_2D_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_functionMap (const GALGAS_lstring & inKey,
                                   const GALGAS_functionSignature & in_mFunctionSignature,
                                   const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                   const GALGAS_bool & in_mIsInternal
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mFunctionSignature ;
  public: inline GALGAS_functionSignature readProperty_mFunctionSignature (void) const {
    return mProperty_mFunctionSignature ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GALGAS_bool mProperty_mIsInternal ;
  public: inline GALGAS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFunctionSignature (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionSignature = inValue ;
  }

  public: inline void setter_setMResultType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMIsInternal (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_functionMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_functionSignature & in_mFunctionSignature,
                                         const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                         const GALGAS_bool & in_mIsInternal) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_functionSignature & inOperand1,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                     const class GALGAS_bool & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_functionSignature & inOperand1,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                     const class GALGAS_bool & inOperand3,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperFileMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_wrapperFileMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperFileMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_wrapperFileMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) ;
  public: GALGAS_wrapperFileMap & operator = (const GALGAS_wrapperFileMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperFileMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperFileMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperFileMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_wrapperFileMap class_func_mapWithMapToOverride (const class GALGAS_wrapperFileMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_uint & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_wrapperFileMap add_operation (const GALGAS_wrapperFileMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_uint constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbsoluteFilePathForKey (class GALGAS_string constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsTextFileForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperFileIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbsoluteFilePathForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsTextFileForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperFileIndexForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_uint & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperFileMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_wrapperFileMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperFileMap ;
 
} ; // End of GALGAS_wrapperFileMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperFileMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsTextFile (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_wrapperFileMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperFileMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperFileMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mAbsoluteFilePath ;
  public: GALGAS_bool mProperty_mIsTextFile ;
  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;
  public: GALGAS_uint mProperty_mWrapperFileIndex ;

//--- Constructors
  public: cMapElement_wrapperFileMap (const GALGAS_wrapperFileMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                      const GALGAS_string & in_mAbsoluteFilePath,
                                      const GALGAS_bool & in_mIsTextFile,
                                      const GALGAS_uint & in_mWrapperDirectoryIndex,
                                      const GALGAS_uint & in_mWrapperFileIndex
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperFileMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperFileMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mAbsoluteFilePath ;
  public: inline GALGAS_string readProperty_mAbsoluteFilePath (void) const {
    return mProperty_mAbsoluteFilePath ;
  }

  public: GALGAS_bool mProperty_mIsTextFile ;
  public: inline GALGAS_bool readProperty_mIsTextFile (void) const {
    return mProperty_mIsTextFile ;
  }

  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GALGAS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

  public: GALGAS_uint mProperty_mWrapperFileIndex ;
  public: inline GALGAS_uint readProperty_mWrapperFileIndex (void) const {
    return mProperty_mWrapperFileIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAbsoluteFilePath (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAbsoluteFilePath = inValue ;
  }

  public: inline void setter_setMIsTextFile (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTextFile = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

  public: inline void setter_setMWrapperFileIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperFileIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_string & in_mAbsoluteFilePath,
                                            const GALGAS_bool & in_mIsTextFile,
                                            const GALGAS_uint & in_mWrapperDirectoryIndex,
                                            const GALGAS_uint & in_mWrapperFileIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperFileMap_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_uint & inOperand3,
                                                                            const class GALGAS_uint & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperFileMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperFileMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_uint & inOperand3,
                                                                        const class GALGAS_uint & inOperand4,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_wrapperFileMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperDirectoryMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperDirectoryMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_wrapperDirectoryMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) ;
  public: GALGAS_wrapperDirectoryMap & operator = (const GALGAS_wrapperDirectoryMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperDirectoryMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperDirectoryMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperDirectoryMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_wrapperDirectoryMap class_func_mapWithMapToOverride (const class GALGAS_wrapperDirectoryMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_wrapperFileMap & inOperand1,
                                                     const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_wrapperDirectoryMap add_operation (const GALGAS_wrapperDirectoryMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_wrapperFileMap constinArgument1,
                                                  class GALGAS_wrapperDirectoryMap constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_wrapperFileMap & outArgument1,
                                                  class GALGAS_wrapperDirectoryMap & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mRegularFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_wrapperFileMap & outOperand1,
                                                    class GALGAS_wrapperDirectoryMap & outOperand2,
                                                    class GALGAS_uint & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperDirectoryMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_wrapperDirectoryMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperDirectoryMap ;
 
} ; // End of GALGAS_wrapperDirectoryMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperDirectoryMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public: class GALGAS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_wrapperDirectoryMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperDirectoryMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperDirectoryMap : public cMapElement {
//--- Map attributes
  public: GALGAS_wrapperFileMap mProperty_mRegularFileMap ;
  public: GALGAS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;

//--- Constructors
  public: cMapElement_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                           const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                           const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                           const GALGAS_uint & in_mWrapperDirectoryIndex
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperDirectoryMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperDirectoryMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_wrapperFileMap mProperty_mRegularFileMap ;
  public: inline GALGAS_wrapperFileMap readProperty_mRegularFileMap (void) const {
    return mProperty_mRegularFileMap ;
  }

  public: GALGAS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: inline GALGAS_wrapperDirectoryMap readProperty_mDirectoryMap (void) const {
    return mProperty_mDirectoryMap ;
  }

  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GALGAS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegularFileMap (const GALGAS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularFileMap = inValue ;
  }

  public: inline void setter_setMDirectoryMap (const GALGAS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDirectoryMap = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                 const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                 const GALGAS_uint & in_mWrapperDirectoryIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperDirectoryMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_wrapperFileMap & inOperand1,
                                                                             const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                             const class GALGAS_uint & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperDirectoryMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperDirectoryMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_wrapperFileMap & inOperand1,
                                                                             const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                             const class GALGAS_uint & inOperand3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_wrapperDirectoryMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) ;
  public: GALGAS_filewrapperTemplateMap & operator = (const GALGAS_filewrapperTemplateMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateMap init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateMap extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperTemplateMap class_func_mapWithMapToOverride (const class GALGAS_filewrapperTemplateMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_functionSignature & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateMap add_operation (const GALGAS_filewrapperTemplateMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature constinArgument1,
                                                  class GALGAS_lstring constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathForKey (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePathForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mTemplateSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_functionSignature & outOperand1,
                                                    class GALGAS_lstring & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_filewrapperTemplateMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_filewrapperTemplateMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperTemplateMap ;
 
} ; // End of GALGAS_filewrapperTemplateMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateMap : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_mTemplateSignature (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_filewrapperTemplateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@filewrapperTemplateMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperTemplateMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mTemplateSignature ;
  public: GALGAS_lstring mProperty_mFilewrapperTemplatePath ;

//--- Constructors
  public: cMapElement_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap_2D_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                              const GALGAS_functionSignature & in_mTemplateSignature,
                                              const GALGAS_lstring & in_mFilewrapperTemplatePath
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mTemplateSignature ;
  public: inline GALGAS_functionSignature readProperty_mTemplateSignature (void) const {
    return mProperty_mTemplateSignature ;
  }

  public: GALGAS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GALGAS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTemplateSignature (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateSignature = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_functionSignature & in_mTemplateSignature,
                                                    const GALGAS_lstring & in_mFilewrapperTemplatePath) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_functionSignature & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_functionSignature & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@filewrapperMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: GALGAS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: GALGAS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: GALGAS_bool mProperty_mIsInternal ;

//--- Constructors
  public: cMapElement_filewrapperMap (const GALGAS_filewrapperMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                      const GALGAS_lstring & in_mFilewrapperPath,
                                      const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                      const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                      const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                      const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                      const GALGAS_bool & in_mIsInternal
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: inline GALGAS_lstring readProperty_mFilewrapperPath (void) const {
    return mProperty_mFilewrapperPath ;
  }

  public: GALGAS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: inline GALGAS_lstringlist readProperty_mFilewrapperExtensionList (void) const {
    return mProperty_mFilewrapperExtensionList ;
  }

  public: GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: inline GALGAS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const {
    return mProperty_mFilewrapperFileMap ;
  }

  public: GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: inline GALGAS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const {
    return mProperty_mFilewrapperDirectoryMap ;
  }

  public: GALGAS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: inline GALGAS_filewrapperTemplateMap readProperty_mFilewrapperTemplateMap (void) const {
    return mProperty_mFilewrapperTemplateMap ;
  }

  public: GALGAS_bool mProperty_mIsInternal ;
  public: inline GALGAS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFilewrapperPath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperPath = inValue ;
  }

  public: inline void setter_setMFilewrapperExtensionList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperExtensionList = inValue ;
  }

  public: inline void setter_setMFilewrapperFileMap (const GALGAS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperFileMap = inValue ;
  }

  public: inline void setter_setMFilewrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperDirectoryMap = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateMap = inValue ;
  }

  public: inline void setter_setMIsInternal (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_lstring & in_mFilewrapperPath,
                                            const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                            const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                            const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                            const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                            const GALGAS_bool & in_mIsInternal) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperMap_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstringlist & inOperand2,
                                                                                    const class GALGAS_wrapperFileMap & inOperand3,
                                                                                    const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                                    const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                                    const class GALGAS_bool & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                        const class GALGAS_wrapperFileMap & inOperand3,
                                                                        const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                        const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                        const class GALGAS_bool & inOperand6,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;

