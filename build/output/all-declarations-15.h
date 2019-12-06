#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-14.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @onceFunctionDeclarationForGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_onceFunctionDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_onceFunctionDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_onceFunctionDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_onceFunctionDeclarationForGeneration * ptr (void) const { return (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_onceFunctionDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_onceFunctionDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_string & inOperand2,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionInstructionList (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultVariableCppName (class GALGAS_string inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mResultVariableCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @onceFunctionDeclarationForGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_onceFunctionDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mFunctionName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;
  public : GALGAS_string mProperty_mResultVariableCppName ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mFunctionInstructionList ;

//--- Constructor
  public : cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_string & in_mFunctionName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                      const GALGAS_string & in_mResultVariableCppName,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReturnType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mResultVariableCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultVariableCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionInstructionList (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @primitiveTypeForGeneration class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_primitiveTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_primitiveTypeForGeneration (void) ;

//---
  public : inline const class cPtr_primitiveTypeForGeneration * ptr (void) const { return (const cPtr_primitiveTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primitiveTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primitiveTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_predefinedTypeKindEnum inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPredefinedTypeName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypeKindEnum getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPredefinedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primitiveTypeForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @primitiveTypeForGeneration class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mPredefinedTypeName ;
  public : GALGAS_predefinedTypeKindEnum mProperty_mKind ;

//--- Constructor
  public : cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                            const GALGAS_string & in_mPredefinedTypeName,
                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPredefinedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPredefinedTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_predefinedTypeKindEnum getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_predefinedTypeKindEnum inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @filewrapperDeclarationForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_filewrapperDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_filewrapperDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperDeclarationForGeneration * ptr (void) const { return (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_filewrapperDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_wrapperFileMap & inOperand4,
                                                                                    const class GALGAS_wrapperDirectoryMap & inOperand5,
                                                                                    const class GALGAS_filewrapperTemplateListForGeneration & inOperand6
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperAbsolutePath (class GALGAS_string inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperDirectoryMap (class GALGAS_wrapperDirectoryMap inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileMap (class GALGAS_wrapperFileMap inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateListForGeneration (class GALGAS_filewrapperTemplateListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperAbsolutePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_mFilewrapperTemplateListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @filewrapperDeclarationForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mFilewrapperName ;
  public : GALGAS_string mProperty_mFilewrapperAbsolutePath ;
  public : GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateListForGeneration mProperty_mFilewrapperTemplateListForGeneration ;

//--- Constructor
  public : cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_string & in_mFilewrapperName,
                                                     const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                     const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                     const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                     const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mFilewrapperAbsolutePath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperAbsolutePath (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_wrapperFileMap getter_mFilewrapperFileMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileMap (GALGAS_wrapperFileMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperDirectoryMap (GALGAS_wrapperDirectoryMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListForGeneration getter_mFilewrapperTemplateListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateListForGeneration (GALGAS_filewrapperTemplateListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @programComponentForGeneration class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_programComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_programComponentForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_programComponentForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_programComponentForGeneration * ptr (void) const { return (const cPtr_programComponentForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_programComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_programComponentForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_stringset & inOperand2,
                                                                              const class GALGAS_string & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_programComponentForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMImplementationString (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInclusionSet (class GALGAS_stringset inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInclusionSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programComponentForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @programComponentForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_programComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_stringset mProperty_mInclusionSet ;
  public : GALGAS_string mProperty_mImplementationString ;

//--- Constructor
  public : cPtr_programComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                               const GALGAS_string & in_mImplementationCppFileName,
                                               const GALGAS_stringset & in_mInclusionSet,
                                               const GALGAS_string & in_mImplementationString
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mInclusionSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInclusionSet (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mImplementationString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMImplementationString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
// Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT' *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT) (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                                 const class GALGAS_analysisContext constinArgument0,
                                                                                                                                 const class GALGAS_bool constinArgument1,
                                                                                                                                 const class GALGAS_string constinArgument2,
                                                                                                                                 class GALGAS_stringlist & ioArgument3,
                                                                                                                                 class GALGAS_variableMap & ioArgument4,
                                                                                                                                 class C_Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeGrammarInstructionSDT (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractGrammarInstructionSyntaxDirectedTranslationResult_analyzeGrammarInstructionSDT inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeGrammarInstructionSDT (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_variableMap & io_ioVariableMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @plusEqualnstructionForGeneration class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_plusEqualnstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_plusEqualnstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_plusEqualnstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_plusEqualnstructionForGeneration * ptr (void) const { return (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_plusEqualnstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_plusEqualnstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_location & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_semanticExpressionListForGeneration & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsing (class GALGAS_string inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualnstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @plusEqualnstructionForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_plusEqualnstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mReceiverCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mTargetType ;
  public : GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public : GALGAS_location mProperty_mInstructionLocation ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_semanticExpressionListForGeneration mProperty_mExpressionList ;

//--- Constructor
  public : cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                  const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsing (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @incDecInstructionForGeneration class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_incDecInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_incDecInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_incDecInstructionForGeneration * ptr (void) const { return (const cPtr_incDecInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_incDecInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                               const class GALGAS_lstringlist & inOperand3,
                                                                               const class GALGAS_incDecKind & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_incDecKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @incDecInstructionForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_incDecInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;
  public : GALGAS_string mProperty_mReceiverCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public : cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_string & in_mReceiverCppName,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_incDecKind & in_mKind
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_incDecKind inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @incDecNoOVFInstructionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_incDecNoOVFInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_incDecNoOVFInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_incDecNoOVFInstructionForGeneration * ptr (void) const { return (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecNoOVFInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_incDecNoOVFInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                    const class GALGAS_lstringlist & inOperand3,
                                                                                    const class GALGAS_incDecKind & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_incDecKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @incDecNoOVFInstructionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_incDecNoOVFInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;
  public : GALGAS_string mProperty_mReceiverCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public : cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_string & in_mReceiverCppName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                     const GALGAS_lstringlist & in_mStructAttributeList,
                                                     const GALGAS_incDecKind & in_mKind
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_incDecKind inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @undefinedLocalConstantDeclarationForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_undefinedLocalConstantDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_undefinedLocalConstantDeclarationForGeneration * ptr (void) const { return (const cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_undefinedLocalConstantDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                               const class GALGAS_string & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCppVariableName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @undefinedLocalConstantDeclarationForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mTargetType ;
  public : GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public : cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                const GALGAS_string & in_mCppVariableName
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCppVariableName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @procCallInstructionForGeneration class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_procCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_procCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procCallInstructionForGeneration * ptr (void) const { return (const cPtr_procCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_actualParameterListForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (class GALGAS_actualParameterListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @procCallInstructionForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_procCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;

//--- Constructor
  public : cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @setterCallInstructionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_setterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_setterCallInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_setterCallInstructionForGeneration * ptr (void) const { return (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_setterCallInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                                   const class GALGAS_lstring & inOperand6,
                                                                                   const class GALGAS_methodKind & inOperand7,
                                                                                   const class GALGAS_actualParameterListForGeneration & inOperand8,
                                                                                   const class GALGAS_bool & inOperand9,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand10
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (class GALGAS_actualParameterListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCastType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_methodKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMethodBaseType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverBaseName (class GALGAS_string inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverStructAttributes (class GALGAS_lstringlist inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSetterName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mCastType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mMethodBaseType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverBaseName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @setterCallInstructionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_setterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;
  public : GALGAS_string mProperty_mReceiverCppName ;
  public : GALGAS_string mProperty_mReceiverBaseName ;
  public : GALGAS_lstringlist mProperty_mReceiverStructAttributes ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mCastType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_lstring mProperty_mSetterName ;
  public : GALGAS_methodKind mProperty_mKind ;
  public : GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mMethodBaseType ;

//--- Constructor
  public : cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_string & in_mReceiverCppName,
                                                    const GALGAS_string & in_mReceiverBaseName,
                                                    const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mCastType,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                    const GALGAS_lstring & in_mSetterName,
                                                    const GALGAS_methodKind & in_mKind,
                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                    const GALGAS_bool & in_mHasCompilerArgument,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mMethodBaseType
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverBaseName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverBaseName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverStructAttributes (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mCastType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCastType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSetterName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_methodKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mMethodBaseType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMethodBaseType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @selfSetterCallInstructionForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_selfSetterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_selfSetterCallInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_selfSetterCallInstructionForGeneration * ptr (void) const { return (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfSetterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selfSetterCallInstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_methodKind & inOperand3,
                                                                                       const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                       const class GALGAS_bool & inOperand5
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (class GALGAS_actualParameterListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_methodKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelfCppName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSetterName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @selfSetterCallInstructionForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_selfSetterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mSelfCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_lstring mProperty_mSetterName ;
  public : GALGAS_methodKind mProperty_mKind ;
  public : GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                        const GALGAS_lstring & in_mSetterName,
                                                        const GALGAS_methodKind & in_mKind,
                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelfCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSetterName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_methodKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @typeMethodCallInstructionForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeMethodCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeMethodCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeMethodCallInstructionForGeneration * ptr (void) const { return (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeMethodCallInstructionForGeneration (const cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeMethodCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeMethodCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_actualParameterListForGeneration & inOperand2,
                                                                                       const class GALGAS_bool & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (class GALGAS_actualParameterListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMethodName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @typeMethodCallInstructionForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_lstring mProperty_mMethodName ;
  public : GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_lstring & in_mMethodName,
                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMethodName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @localVariableDeclarationForGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_localVariableDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableDeclarationForGeneration * ptr (void) const { return (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localVariableDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                      const class GALGAS_string & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCppVariableName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMVariableType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @localVariableDeclarationForGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mVariableType ;
  public : GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public : cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType,
                                                       const GALGAS_string & in_mCppVariableName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMVariableType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCppVariableName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

