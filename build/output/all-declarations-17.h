#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @programComponentForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_programComponentForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_programComponentForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_programComponentForGeneration_2D_weak (const class GALGAS_programComponentForGeneration & inSource) ;

  public: GALGAS_programComponentForGeneration_2D_weak & operator = (const class GALGAS_programComponentForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_programComponentForGeneration bang_programComponentForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_programComponentForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_programComponentForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programComponentForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_programComponentForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const class GALGAS_analysisContext constin_inAnalysisContext,
                                                       class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                       const class GALGAS_bool constin_inHasTranslateFeature,
                                                       const class GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       class GALGAS_stringlist & io_ioAssignementList,
                                                       class GALGAS_localVarManager & io_ioVariableMap,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primitiveTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_primitiveTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_primitiveTypeForGeneration (const class cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mPredefinedTypeName (void) const ;

  public: class GALGAS_string readProperty_mCppDeclarationString (void) const ;

  public: class GALGAS_bool readProperty_isPackage (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primitiveTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primitiveTypeForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_bool & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primitiveTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @primitiveTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GALGAS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GALGAS_string & ioHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mPredefinedTypeName ;
  public: GALGAS_string mProperty_mCppDeclarationString ;
  public: GALGAS_bool mProperty_isPackage ;

//--- Constructor
  public: cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                           const GALGAS_string & in_mPredefinedTypeName,
                                           const GALGAS_string & in_mCppDeclarationString,
                                           const GALGAS_bool & in_isPackage
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
// Phase 1: @primitiveTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primitiveTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_primitiveTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_primitiveTypeForGeneration_2D_weak (const class GALGAS_primitiveTypeForGeneration & inSource) ;

  public: GALGAS_primitiveTypeForGeneration_2D_weak & operator = (const class GALGAS_primitiveTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_primitiveTypeForGeneration bang_primitiveTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primitiveTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primitiveTypeForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_primitiveTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primitiveTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (class GALGAS_localVarManager & ioObject,
                                                     const class GALGAS_lstring constin_inVarName,
                                                     const class GALGAS_bool constin_inWarnsIfNotMutated,
                                                     const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                     const class GALGAS_string constin_inCppName,
                                                     const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GALGAS_localVarManager & ioObject,
                                              const class GALGAS_lstring constin_inVarName,
                                              const class GALGAS_unifiedTypeMapEntry constin_inType,
                                              const class GALGAS_string constin_inCppName,
                                              const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (class GALGAS_localVarManager & ioObject,
                                                     const class GALGAS_lstring constin_inVarName,
                                                     const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                     const class GALGAS_string constin_inCppName,
                                                     const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (class GALGAS_localVarManager & ioObject,
                                                  const class GALGAS_lstring constin_inVarName,
                                                  const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                  const class GALGAS_string constin_inCppName,
                                                  const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (class GALGAS_localVarManager & ioObject,
                                                                const class GALGAS_lstring constin_inVarName,
                                                                const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                                const class GALGAS_string constin_inCppName,
                                                                const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                const class GALGAS_lstring constin_inVarName,
                                                const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                const class GALGAS_string constin_inCppName,
                                                const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (class GALGAS_localVarManager & ioObject,
                                                                        const class GALGAS_lstring constin_inVarName,
                                                                        const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                                        const class GALGAS_string constin_inCppName,
                                                                        const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                        const class GALGAS_lstring constin_inVarName,
                                                        const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                        const class GALGAS_string constin_inCppName,
                                                        const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                 const class GALGAS_lstring constin_inVarName,
                                                 const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                 const class GALGAS_string constin_inCppName,
                                                 const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (class GALGAS_localVarManager & ioObject,
                                                                      const class GALGAS_lstring constin_inVarName,
                                                                      const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                                      const class GALGAS_string constin_inCppName,
                                                                      const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (class GALGAS_localVarManager & ioObject,
                                                      const class GALGAS_lstring constin_inVarName,
                                                      const class GALGAS_unifiedTypeMapEntry constin_inType,
                                                      const class GALGAS_string constin_inCppName,
                                                      const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (class GALGAS_localVarManager & ioObject,
                                               const class GALGAS_lstring constin_inVarName,
                                               const class GALGAS_unifiedTypeMapEntry constin_inType,
                                               const class GALGAS_string constin_inCppName,
                                               const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (class GALGAS_localVarManager & ioObject,
                                            const class GALGAS_lstring constin_inVarName,
                                            const class GALGAS_unifiedTypeMapEntry constin_inType,
                                            const class GALGAS_string constin_inCppName,
                                            const class GALGAS_string constin_inNameForCheckingFormalParameterUsing,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GALGAS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GALGAS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GALGAS_localVarManager & ioObject,
                                    const class GALGAS_location constin_inEndOfBranchLocation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GALGAS_localVarManager & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GALGAS_localVarManager & ioObject,
                                  const class GALGAS_location constin_inEndOfBranchLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (class GALGAS_localVarManager & ioObject,
                                    const class GALGAS_lstring constin_inVarName,
                                    class GALGAS_unifiedTypeMapEntry & out_outType,
                                    class GALGAS_string & out_outCppName,
                                    class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (class GALGAS_localVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (class GALGAS_localVarManager & ioObject,
                                           const class GALGAS_lstring constin_inVarName,
                                           class GALGAS_unifiedTypeMapEntry & out_outType,
                                           class GALGAS_string & out_outCppName,
                                           class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (class GALGAS_localVarManager & ioObject,
                                          const class GALGAS_lstring constin_inVarName,
                                          class GALGAS_unifiedTypeMapEntry & out_outType,
                                          class GALGAS_string & out_outCppName,
                                          class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (class GALGAS_localVarManager & ioObject,
                                               const class GALGAS_lstring constin_inVarName,
                                               class GALGAS_unifiedTypeMapEntry & out_outType,
                                               class GALGAS_string & out_outCppName,
                                               class GALGAS_string & out_outNameForCheckingFormalParameterUsing,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const class GALGAS_localVarManager inObject,
                                           const class GALGAS_location constin_inErrorLocation,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstringlist extensionGetter_unsolvedEntryList (const class GALGAS_unifiedTypeMap & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

