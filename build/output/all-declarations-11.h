#ifndef all_2D_declarations_2D__31__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivlyEnumerateRegularFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivlyEnumerateRegularFile (const class GALGAS_wrapperFileMap constinArgument0,
                                             const class GALGAS_wrapperDirectoryMap constinArgument1,
                                             class GALGAS_stringlist & ioArgument2,
                                             class GALGAS_stringlist & ioArgument3,
                                             class GALGAS_stringlist & ioArgument4,
                                             class GALGAS_stringlist & ioArgument5,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateWrapperContents'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateWrapperContents (const class GALGAS_string constinArgument0,
                                      const class GALGAS_string constinArgument1,
                                      const class GALGAS_uint constinArgument2,
                                      const class GALGAS_wrapperFileMap constinArgument3,
                                      const class GALGAS_wrapperDirectoryMap constinArgument4,
                                      class GALGAS_string & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'predefinedTypeGenerationTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate sint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate object_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate uint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate bool_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate function_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate type_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate location_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate data_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate char_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate double_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate string_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate application_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate timer_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'generatePredefinedTypeFiles'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePredefinedTypeFiles (const class GALGAS_string constinArgument0,
                                          const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument1,
                                          class GALGAS_stringlist & ioArgument2,
                                          class GALGAS_stringlist & ioArgument3,
                                          class GALGAS_stringset & ioArgument4,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_appendPrimitiveTypeDeclaration (const int32_t inClassIndex,
                                                          enterExtensionGetter_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_semanticDeclarationForGeneration_appendTypeGenericImplementation) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_appendTypeGenericImplementation (const int32_t inClassIndex,
                                                           enterExtensionGetter_semanticDeclarationForGeneration_appendTypeGenericImplementation inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension getter '@semanticDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_semanticDeclarationForGeneration_isPredefined) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isPredefined (const int32_t inClassIndex,
                                        enterExtensionGetter_semanticDeclarationForGeneration_isPredefined inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_isPredefined (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@semanticDeclarationForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 class GALGAS_stringset & ioArgument0,
                                                                                                 class GALGAS_string & outArgument1,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_appendDeclaration_31_ (const int32_t inClassIndex,
                                                 extensionMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_ inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_appendDeclaration_31_ (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_string & out_outHeader,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@semanticDeclarationForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const class GALGAS_string constinArgument0,
                                                                                                 class GALGAS_stringset & ioArgument1,
                                                                                                 class GALGAS_string & outArgument2,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_appendDeclaration_32_ (const int32_t inClassIndex,
                                                 extensionMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_ inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_appendDeclaration_32_ (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                const GALGAS_string constin_inOutputDirectory,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_string & out_outHeader,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticDeclarationForGeneration_appendPrimitiveTypePreDeclaration) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                             class GALGAS_string & ioArgument0,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_appendPrimitiveTypePreDeclaration (const int32_t inClassIndex,
                                                             extensionMethodSignature_semanticDeclarationForGeneration_appendPrimitiveTypePreDeclaration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_appendPrimitiveTypePreDeclaration (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                            GALGAS_string & io_ioHeader,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                        const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                        class GALGAS_stringset & ioArgument1,
                                                                                                        class GALGAS_string & outArgument2,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_appendSpecificImplementation (const int32_t inClassIndex,
                                                        extensionMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_appendSpecificImplementation (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                       const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GALGAS_stringset & io_ioInclusionSet,
                                                       GALGAS_string & out_outImplementation,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'semanticFileGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                     const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'buildLexiqueComponentMapForSemanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexiqueComponentMapForSemanticAnalysis (const class GALGAS_parsedComponentStruct constinArgument0,
                                                          class GALGAS_lexiqueComponentMapForSemanticAnalysis & outArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @parsedComponentStruct struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_parsedComponentStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_parsedSemanticsComponentMap mAttribute_mParsedSemanticsComponentMap ;
  public : GALGAS_parsedLexiqueComponentMap mAttribute_mParsedLexiqueComponentMap ;
  public : GALGAS_parsedSyntaxComponentMap mAttribute_mParsedSyntaxComponentMap ;
  public : GALGAS_parsedOptionComponentMap mAttribute_mParsedOptionComponentMap ;
  public : GALGAS_parsedGrammarComponentMap mAttribute_mParsedGrammarComponentMap ;
  public : GALGAS_parsedProgramComponentMap mAttribute_mParsedProgramComponentMap ;
  public : GALGAS_parsedGuiComponentMap mAttribute_mParsedGuiComponentMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_parsedComponentStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_parsedComponentStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_parsedComponentStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_parsedComponentStruct (const GALGAS_parsedSemanticsComponentMap & in_mParsedSemanticsComponentMap,
                                         const GALGAS_parsedLexiqueComponentMap & in_mParsedLexiqueComponentMap,
                                         const GALGAS_parsedSyntaxComponentMap & in_mParsedSyntaxComponentMap,
                                         const GALGAS_parsedOptionComponentMap & in_mParsedOptionComponentMap,
                                         const GALGAS_parsedGrammarComponentMap & in_mParsedGrammarComponentMap,
                                         const GALGAS_parsedProgramComponentMap & in_mParsedProgramComponentMap,
                                         const GALGAS_parsedGuiComponentMap & in_mParsedGuiComponentMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_parsedComponentStruct extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_parsedComponentStruct constructor_new (const class GALGAS_parsedSemanticsComponentMap & inOperand0,
                                                                      const class GALGAS_parsedLexiqueComponentMap & inOperand1,
                                                                      const class GALGAS_parsedSyntaxComponentMap & inOperand2,
                                                                      const class GALGAS_parsedOptionComponentMap & inOperand3,
                                                                      const class GALGAS_parsedGrammarComponentMap & inOperand4,
                                                                      const class GALGAS_parsedProgramComponentMap & inOperand5,
                                                                      const class GALGAS_parsedGuiComponentMap & inOperand6
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parsedComponentStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGrammarComponentMap getter_mParsedGrammarComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGuiComponentMap getter_mParsedGuiComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedLexiqueComponentMap getter_mParsedLexiqueComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedOptionComponentMap getter_mParsedOptionComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedProgramComponentMap getter_mParsedProgramComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSemanticsComponentMap getter_mParsedSemanticsComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSyntaxComponentMap getter_mParsedSyntaxComponentMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parsedComponentStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parsedComponentStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Routine 'buildGrammarComponentMapForSemanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGrammarComponentMapForSemanticAnalysis (const class GALGAS_grammarComponentASTList constinArgument0,
                                                          class GALGAS_semanticContext & ioArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'appendPredefinedListTypeAST'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefinedListTypeAST (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                          const class GALGAS_string constinArgument1,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendPredefined2StringListTypeAST'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefined_32_StringListTypeAST (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendPredefined2LStringListTypeAST'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefined_32_LStringListTypeAST (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'appendStructASTForTypeWithLocation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendStructASTForTypeWithLocation (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                                 const class GALGAS_string constinArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'appendStructASTForRangeType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendStructASTForRangeType (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'appendPredefinedTypesASTs'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_appendPredefinedTypesASTs (class GALGAS_semanticDeclarationListAST & ioArgument0,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

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
//                                            Routine 'printFeaturesOfType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_printFeaturesOfType (const class GALGAS_string constinArgument0,
                                  const class GALGAS_typeKindEnum constinArgument1,
                                  const class GALGAS_typedPropertyList constinArgument2,
                                  const class GALGAS_constructorMap constinArgument3,
                                  const class GALGAS_getterMap constinArgument4,
                                  const class GALGAS_setterMap constinArgument5,
                                  const class GALGAS_instanceMethodMap constinArgument6,
                                  const class GALGAS_classMethodMap constinArgument7,
                                  const class GALGAS_uint constinArgument8,
                                  const class GALGAS_unifiedTypeMapProxyAndParameterList constinArgument9,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

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
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeErrorOrWarningInstruction (const class GALGAS_analysisContext constinArgument0,
                                               const class GALGAS_semanticExpressionAST constinArgument1,
                                               const class GALGAS_semanticExpressionAST constinArgument2,
                                               const class GALGAS_location constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               class GALGAS_variableMap & ioArgument5,
                                               class GALGAS_semanticExpressionForGeneration & outArgument6,
                                               class GALGAS_semanticExpressionForGeneration & outArgument7,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checksetterImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_checksetterImplementationInSuperClasses (const class GALGAS_lstring & constinArgument0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'syntaxSignatureOfInstructionList'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const class GALGAS_string & constinArgument0,
                                                                                             const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@semanticInstructionForGeneration appendSyntaxSignature'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature) (const class cPtr_semanticInstructionForGeneration * inObject,
                                                                                                 const class GALGAS_string constinArgument0,
                                                                                                 class GALGAS_semanticInstructionListForGeneration & ioArgument1,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_appendSyntaxSignature (const int32_t inClassIndex,
                                                 extensionMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_appendSyntaxSignature (const class cPtr_semanticInstructionForGeneration * inObject,
                                                const GALGAS_string constin_inPosfix,
                                                GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'compareSyntaxSignature'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool function_compareSyntaxSignature (const class GALGAS_semanticInstructionListForGeneration & constinArgument0,
                                                   const class GALGAS_semanticInstructionListForGeneration & constinArgument1,
                                                   const class GALGAS_location & constinArgument2,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @syntaxInstructionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syntaxInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_syntaxInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_syntaxInstructionForGeneration * ptr (void) const { return (const cPtr_syntaxInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syntaxInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syntaxInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @syntaxInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syntaxInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_syntaxInstructionForGeneration (const GALGAS_location & in_mInstructionLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension getter '@semanticInstructionForGeneration compareInstructionSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature) (const class cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                      const class GALGAS_semanticInstructionForGeneration & constinArgument0,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_compareInstructionSyntaxSignature (const int32_t inClassIndex,
                                                             enterExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                         const GALGAS_semanticInstructionForGeneration & constin_inTestedInstruction,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'groupSyntaxComponentsGalgas3'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_groupSyntaxComponentsGalgas_33_ (const class GALGAS_galgas_33_SyntaxComponentListAST constinArgument0,
                                              const class GALGAS_syntaxExtensions constinArgument1,
                                              class GALGAS_semanticDeclarationListAST & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @galgas_33_SyntaxComponentAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_galgas_33_SyntaxComponentAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_galgas_33_SyntaxComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_SyntaxComponentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_galgas_33_SyntaxComponentAST * ptr (void) const { return (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxComponentAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_SyntaxComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                             const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                             const class GALGAS_bool & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @galgas3SyntaxComponentAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_galgas_33_SyntaxComponentAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSyntaxComponentName ;
  public : GALGAS_lstring mAttribute_mLexiqueName ;
  public : GALGAS_nonterminalDeclarationListAST mAttribute_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mAttribute_mRuleList ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;

//--- Constructor
  public : cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mSyntaxComponentName,
                                              const GALGAS_lstring & in_mLexiqueName,
                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                              const GALGAS_syntaxRuleListAST & in_mRuleList,
                                              const GALGAS_bool & in_mHasTranslateFeature
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'transformLabelMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const class GALGAS_nonTerminalLabelListAST & constinArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'checkLabelMap'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkLabelMap (const class GALGAS_location constinArgument0,
                            const class GALGAS_nonTerminalLabelListAST constinArgument1,
                            const class GALGAS_location constinArgument2,
                            const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument3,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension getter '@formalArgumentPassingModeAST formalArgumentString' (as function)                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_formalArgumentString (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleNonTerminalDeclarations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleNonTerminalDeclarations (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                            const class GALGAS_nonterminalDeclarationListAST constinArgument1,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleNonTerminalDeclarationsFromRuleList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleNonTerminalDeclarationsFromRuleList (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument0,
                                                        const class GALGAS_syntaxRuleListAST constinArgument1,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'transformInstructionList'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_transformInstructionList (const class GALGAS_syntaxInstructionList constinArgument0,
                                       class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument1,
                                       const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                       class GALGAS_uint & ioArgument3,
                                       class GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument4,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension method '@syntaxInstructionAST transformInstruction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_syntaxInstructionAST_transformInstruction) (const class cPtr_syntaxInstructionAST * inObject,
                                                                                    class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument0,
                                                                                    const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument1,
                                                                                    class GALGAS_uint & ioArgument2,
                                                                                    class GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument3,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_transformInstruction (const int32_t inClassIndex,
                                                extensionMethodSignature_syntaxInstructionAST_transformInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_transformInstruction (const class cPtr_syntaxInstructionAST * inObject,
                                               GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               GALGAS_uint & io_ioAddedNonTerminalIndex,
                                               GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'buildRuleList'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildRuleList (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument0,
                            const class GALGAS_lstring constinArgument1,
                            const class GALGAS_syntaxRuleListAST constinArgument2,
                            class GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument3,
                            class GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument4,
                            class GALGAS_uint & ioArgument5,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'grammarGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'grammarGenerationTemplate grammarZone2HeaderGalgas3'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_32_HeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_GRAMMAR_5F_COMPONENT_5F_ROOT
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'grammarGenerationTemplate grammarZone3Header'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_Header (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                   const class GALGAS_galgas_33_GrammarComponentListAST_2D_element & in_GRAMMAR_5F_COMPONENT_5F_ROOT,
                                                                                   const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                   const class GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                   const class GALGAS_bool & in_HAS_5F_INDEXING
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const class GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                             const class GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const class GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const class GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'grammarAnalysisAndGeneration'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_grammarAnalysisAndGeneration (const class GALGAS_stringset constinArgument0,
                                           const class GALGAS_lstring constinArgument1,
                                           const class GALGAS_lstring constinArgument2,
                                           const class GALGAS_uint constinArgument3,
                                           const class GALGAS_string constinArgument4,
                                           const class GALGAS_terminalSymbolsMapForGrammarAnalysis constinArgument5,
                                           const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument6,
                                           const class GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis constinArgument7,
                                           const class GALGAS_string constinArgument8,
                                           const class GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis constinArgument9,
                                           const class GALGAS_bool constinArgument10,
                                           const class GALGAS_string constinArgument11,
                                           class GALGAS_string & outArgument12,
                                           class GALGAS_string & outArgument13,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'grammarRulesInTexDocumentTemplate'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'grammarRulesInTexDocumentTemplate document'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_DOCUMENT_5F_NAME
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'escapeForTex'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_escapeForTex (const class GALGAS_string & constinArgument0,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitProductionRulesInTexFile'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitProductionRulesInTexFile (const class GALGAS_string constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument2,
                                           const class GALGAS_syntaxComponentListForGrammarAnalysis constinArgument3,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                                                   class GALGAS_rowList & ioArgument0,
                                                                                                                   const class GALGAS_uint constinArgument1,
                                                                                                                   class GALGAS_uint & ioArgument2,
                                                                                                                   class GALGAS_string & ioArgument3,
                                                                                                                   class GALGAS_string & ioArgument4,
                                                                                                                   class GALGAS_string & ioArgument5,
                                                                                                                   class GALGAS_uint & ioArgument6,
                                                                                                                   const class GALGAS_bool constinArgument7,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_tikzNodeForSyntaxInstruction (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_tikzNodeForSyntaxInstruction (const class cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GALGAS_rowList & io_ioRowList,
                                                       const GALGAS_uint constin_inRow,
                                                       GALGAS_uint & io_ioColumn,
                                                       GALGAS_string & io_ioCurrentNode,
                                                       GALGAS_string & io_ioArrowShape,
                                                       GALGAS_string & io_ioArrows,
                                                       GALGAS_uint & io_ioMaxUsedRowIndex,
                                                       const GALGAS_bool constin_inDebug,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'programFileGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'programFileGenerationTemplate programFileImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                           const class GALGAS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                           const class GALGAS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                           const class GALGAS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileBeforeClauseGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileBeforeClauseGalgas_33_ (const class GALGAS_analysisContext constinArgument0,
                                            const class GALGAS_prologueEpilogueList constinArgument1,
                                            class GALGAS_programListForGeneration & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @semanticDeclarationWithHeaderForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticDeclarationWithHeaderForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--- Constructor
  public : GALGAS_semanticDeclarationWithHeaderForGeneration (void) ;

//---
  public : inline const class cPtr_semanticDeclarationWithHeaderForGeneration * ptr (void) const { return (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticDeclarationWithHeaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHeader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationCppFileName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationWithHeaderForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @semanticDeclarationWithHeaderForGeneration class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticDeclarationWithHeaderForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mHasHeader ;
  public : GALGAS_string mAttribute_mImplementationCppFileName ;

//--- Constructor
  public : cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                            const GALGAS_string & in_mImplementationCppFileName
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHeader (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mImplementationCppFileName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @routinePrototypeDeclarationForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routinePrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_routinePrototypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routinePrototypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_routinePrototypeDeclarationForGeneration * ptr (void) const { return (const cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routinePrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routinePrototypeDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_string & inOperand1,
                                                                                         const class GALGAS_string & inOperand2,
                                                                                         const class GALGAS_formalParameterListForGeneration & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routinePrototypeDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @routinePrototypeDeclarationForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routinePrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mRoutineName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mFormalArgumentList ;

//--- Constructor
  public : cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                          const GALGAS_string & in_mRoutineName,
                                                          const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mFormalArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineImplementationForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineImplementationForGeneration : public GALGAS_routinePrototypeDeclarationForGeneration {
//--- Constructor
  public : GALGAS_routineImplementationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineImplementationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_routineImplementationForGeneration * ptr (void) const { return (const cPtr_routineImplementationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineImplementationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_formalParameterListForGeneration & inOperand3,
                                                                                   const class GALGAS_bool & inOperand4,
                                                                                   const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateStatic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mRoutineInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineImplementationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @routineImplementationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routineImplementationForGeneration : public cPtr_routinePrototypeDeclarationForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mGenerateStatic ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mRoutineInstructionList ;

//--- Constructor
  public : cPtr_routineImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                    const GALGAS_string & in_mRoutineName,
                                                    const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                    const GALGAS_bool & in_mGenerateStatic,
                                                    const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mGenerateStatic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mRoutineInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @semanticBlockInstructionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticBlockInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_semanticBlockInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticBlockInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_semanticBlockInstructionForGeneration * ptr (void) const { return (const cPtr_semanticBlockInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticBlockInstructionForGeneration (const cPtr_semanticBlockInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticBlockInstructionForGeneration constructor_new (const class GALGAS_semanticInstructionListForGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticBlockInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @semanticBlockInstructionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticBlockInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mInstructionList ;

//--- Constructor
  public : cPtr_semanticBlockInstructionForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileProgramRulesGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProgramRulesGalgas_33_ (const class GALGAS_analysisContext constinArgument0,
                                            const class GALGAS_programRuleList constinArgument1,
                                            class GALGAS_programListForGeneration & ioArgument2,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'compileAfterClauseGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileAfterClauseGalgas_33_ (const class GALGAS_analysisContext constinArgument0,
                                           const class GALGAS_prologueEpilogueList constinArgument1,
                                           class GALGAS_programListForGeneration & ioArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'compileProgramComponentGalgas3'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProgramComponentGalgas_33_ (const class GALGAS_prologueEpilogueList constinArgument0,
                                                const class GALGAS_programRuleList constinArgument1,
                                                const class GALGAS_prologueEpilogueList constinArgument2,
                                                const class GALGAS_semanticContext constinArgument3,
                                                const class GALGAS_string constinArgument4,
                                                class GALGAS_programComponentForGeneration & outArgument5,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @programComponentForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInclusionSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programComponentForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @programComponentForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_programComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_stringset mAttribute_mInclusionSet ;
  public : GALGAS_string mAttribute_mImplementationString ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mImplementationString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Routine 'checkGMP'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkGMP (class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'parseAndAnalyzeProject'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseAndAnalyzeProject (const class GALGAS_lstring constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const class GALGAS_lstring constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_galgas_33_ProjectComponentAST constinArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_8_typeDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'typeDumpGenerationTemplate typeDump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (class C_Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'linkForType'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForType (const class GALGAS_string & constinArgument0,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'compileSemanticDeclarationsGalgas3'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileSemanticDeclarationsGalgas_33_ (const class GALGAS_string constinArgument0,
                                                    const class GALGAS_location constinArgument1,
                                                    const class GALGAS_semanticDeclarationListAST constinArgument2,
                                                    class GALGAS_semanticContext & outArgument3,
                                                    class GALGAS_semanticDeclarationSortedListForGeneration & outArgument4,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'performGalgas3ProjectGlobalCheckings'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performGalgas_33_ProjectGlobalCheckings (const class GALGAS_semanticContext constinArgument0,
                                                      const class GALGAS_semanticDeclarationListAST constinArgument1,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'projectGeneration'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_projectGeneration (const class GALGAS_unifiedTypeMap constinArgument0,
                                const class GALGAS_string constinArgument1,
                                const class GALGAS_optionComponentMapForGeneration constinArgument2,
                                const class GALGAS_stringlist constinArgument3,
                                const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument4,
                                const class GALGAS_programRuleList constinArgument5,
                                const class GALGAS_galgas_33_ProjectComponentAST constinArgument6,
                                const class GALGAS_string constinArgument7,
                                const class GALGAS_stringset constinArgument8,
                                const class GALGAS_stringlist constinArgument9,
                                const class GALGAS_stringlist constinArgument10,
                                const class GALGAS_stringlist constinArgument11,
                                const class GALGAS_stringlist constinArgument12,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'generateSemanticDeclarationsGalgas3'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSemanticDeclarationsGalgas_33_ (const class GALGAS_unifiedTypeMap constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     const class GALGAS_semanticDeclarationSortedListForGeneration constinArgument2,
                                                     class GALGAS_stringlist & ioArgument3,
                                                     class GALGAS_stringlist & ioArgument4,
                                                     class GALGAS_stringset & ioArgument5,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'updateGalgas3Targets'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_updateGalgas_33_Targets (const class GALGAS_string constinArgument0,
                                      const class GALGAS_string constinArgument1,
                                      const class GALGAS_location constinArgument2,
                                      const class GALGAS_string constinArgument3,
                                      const class GALGAS_projectQualifiedFeatureMap constinArgument4,
                                      const class GALGAS_lstringlist constinArgument5,
                                      const class GALGAS_bool constinArgument6,
                                      const class GALGAS_stringlist constinArgument7,
                                      const class GALGAS_stringlist constinArgument8,
                                      const class GALGAS_stringlist constinArgument9,
                                      const class GALGAS_stringlist constinArgument10,
                                      const class GALGAS_stringlist constinArgument11,
                                      const class GALGAS_stringset constinArgument12,
                                      const class GALGAS_stringset constinArgument13,
                                      class GALGAS_stringset & ioArgument14,
                                      const class GALGAS_stringlist constinArgument15,
                                      const class GALGAS_stringlist constinArgument16,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'outputDirectory'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_outputDirectory (const class GALGAS_lstring & constinArgument0,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'checkextensionSetterDefinitionForClass'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkextensionSetterDefinitionForClass (const class GALGAS_string constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     const class GALGAS_lstring constinArgument2,
                                                     const class GALGAS_descendantClassListMap constinArgument3,
                                                     const class GALGAS_genericExtensionMethodListMap constinArgument4,
                                                     const class GALGAS_unifiedTypeMap constinArgument5,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'checkExtensionMethodDefinitionForClass'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExtensionMethodDefinitionForClass (const class GALGAS_string constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     const class GALGAS_lstring constinArgument2,
                                                     const class GALGAS_descendantClassListMap constinArgument3,
                                                     const class GALGAS_genericExtensionMethodListMap constinArgument4,
                                                     const class GALGAS_unifiedTypeMap constinArgument5,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'checkExtensionGetterDefinitionForClass'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExtensionGetterDefinitionForClass (const class GALGAS_string constinArgument0,
                                                     const class GALGAS_string constinArgument1,
                                                     const class GALGAS_lstring constinArgument2,
                                                     const class GALGAS_descendantClassListMap constinArgument3,
                                                     const class GALGAS_genericExtensionMethodListMap constinArgument4,
                                                     const class GALGAS_unifiedTypeMap constinArgument5,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@semanticDeclarationAST buildExtensionListMaps'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_semanticDeclarationAST_buildExtensionListMaps) (const class cPtr_semanticDeclarationAST * inObject,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument0,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument1,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument2,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument3,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument4,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument5,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument6,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument7,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument8,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument9,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument10,
                                                                                        class GALGAS_genericExtensionMethodListMap & ioArgument11,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_buildExtensionListMaps (const int32_t inClassIndex,
                                                  extensionMethodSignature_semanticDeclarationAST_buildExtensionListMaps inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_buildExtensionListMaps (const class cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionSettierListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Filewrapper 'libpmFileWrapper'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_libpmFileWrapper ;
extern const char * gWrapperFileContent_1_libpmFileWrapper ;
extern const char * gWrapperFileContent_2_libpmFileWrapper ;
extern const char * gWrapperFileContent_3_libpmFileWrapper ;
extern const char * gWrapperFileContent_4_libpmFileWrapper ;
extern const char * gWrapperFileContent_5_libpmFileWrapper ;
extern const char * gWrapperFileContent_6_libpmFileWrapper ;
extern const char * gWrapperFileContent_7_libpmFileWrapper ;
extern const char * gWrapperFileContent_8_libpmFileWrapper ;
extern const char * gWrapperFileContent_9_libpmFileWrapper ;
extern const char * gWrapperFileContent_10_libpmFileWrapper ;
extern const char * gWrapperFileContent_11_libpmFileWrapper ;
extern const char * gWrapperFileContent_12_libpmFileWrapper ;
extern const char * gWrapperFileContent_13_libpmFileWrapper ;
extern const char * gWrapperFileContent_14_libpmFileWrapper ;
extern const char * gWrapperFileContent_15_libpmFileWrapper ;
extern const char * gWrapperFileContent_17_libpmFileWrapper ;
extern const char * gWrapperFileContent_18_libpmFileWrapper ;
extern const char * gWrapperFileContent_19_libpmFileWrapper ;
extern const char * gWrapperFileContent_20_libpmFileWrapper ;
extern const char * gWrapperFileContent_21_libpmFileWrapper ;
extern const char * gWrapperFileContent_22_libpmFileWrapper ;
extern const char * gWrapperFileContent_23_libpmFileWrapper ;
extern const char * gWrapperFileContent_24_libpmFileWrapper ;
extern const char * gWrapperFileContent_25_libpmFileWrapper ;
extern const char * gWrapperFileContent_26_libpmFileWrapper ;
extern const char * gWrapperFileContent_27_libpmFileWrapper ;
extern const char * gWrapperFileContent_28_libpmFileWrapper ;
extern const char * gWrapperFileContent_29_libpmFileWrapper ;
extern const char * gWrapperFileContent_30_libpmFileWrapper ;
extern const char * gWrapperFileContent_31_libpmFileWrapper ;
extern const char * gWrapperFileContent_32_libpmFileWrapper ;
extern const char * gWrapperFileContent_33_libpmFileWrapper ;
extern const char * gWrapperFileContent_34_libpmFileWrapper ;
extern const char * gWrapperFileContent_35_libpmFileWrapper ;
extern const char * gWrapperFileContent_36_libpmFileWrapper ;
extern const char * gWrapperFileContent_37_libpmFileWrapper ;
extern const char * gWrapperFileContent_38_libpmFileWrapper ;
extern const char * gWrapperFileContent_39_libpmFileWrapper ;
extern const char * gWrapperFileContent_40_libpmFileWrapper ;
extern const char * gWrapperFileContent_41_libpmFileWrapper ;
extern const char * gWrapperFileContent_42_libpmFileWrapper ;
extern const char * gWrapperFileContent_43_libpmFileWrapper ;
extern const char * gWrapperFileContent_44_libpmFileWrapper ;
extern const char * gWrapperFileContent_45_libpmFileWrapper ;
extern const char * gWrapperFileContent_46_libpmFileWrapper ;
extern const char * gWrapperFileContent_47_libpmFileWrapper ;
extern const char * gWrapperFileContent_48_libpmFileWrapper ;
extern const char * gWrapperFileContent_49_libpmFileWrapper ;
extern const char * gWrapperFileContent_50_libpmFileWrapper ;
extern const char * gWrapperFileContent_51_libpmFileWrapper ;
extern const char * gWrapperFileContent_52_libpmFileWrapper ;
extern const char * gWrapperFileContent_53_libpmFileWrapper ;
extern const char * gWrapperFileContent_54_libpmFileWrapper ;
extern const char * gWrapperFileContent_55_libpmFileWrapper ;
extern const char * gWrapperFileContent_56_libpmFileWrapper ;
extern const char * gWrapperFileContent_57_libpmFileWrapper ;
extern const char * gWrapperFileContent_58_libpmFileWrapper ;
extern const char * gWrapperFileContent_59_libpmFileWrapper ;
extern const char * gWrapperFileContent_60_libpmFileWrapper ;
extern const char * gWrapperFileContent_62_libpmFileWrapper ;
extern const char * gWrapperFileContent_63_libpmFileWrapper ;
extern const char * gWrapperFileContent_67_libpmFileWrapper ;
extern const char * gWrapperFileContent_68_libpmFileWrapper ;
extern const char * gWrapperFileContent_69_libpmFileWrapper ;
extern const char * gWrapperFileContent_70_libpmFileWrapper ;
extern const char * gWrapperFileContent_71_libpmFileWrapper ;
extern const char * gWrapperFileContent_72_libpmFileWrapper ;
extern const char * gWrapperFileContent_73_libpmFileWrapper ;
extern const char * gWrapperFileContent_74_libpmFileWrapper ;
extern const char * gWrapperFileContent_75_libpmFileWrapper ;
extern const char * gWrapperFileContent_76_libpmFileWrapper ;
extern const char * gWrapperFileContent_77_libpmFileWrapper ;
extern const char * gWrapperFileContent_78_libpmFileWrapper ;
extern const char * gWrapperFileContent_79_libpmFileWrapper ;
extern const char * gWrapperFileContent_80_libpmFileWrapper ;
extern const char * gWrapperFileContent_81_libpmFileWrapper ;
extern const char * gWrapperFileContent_82_libpmFileWrapper ;
extern const char * gWrapperFileContent_83_libpmFileWrapper ;
extern const char * gWrapperFileContent_84_libpmFileWrapper ;
extern const char * gWrapperFileContent_85_libpmFileWrapper ;
extern const char * gWrapperFileContent_86_libpmFileWrapper ;
extern const char * gWrapperFileContent_87_libpmFileWrapper ;
extern const char * gWrapperFileContent_88_libpmFileWrapper ;
extern const char * gWrapperFileContent_89_libpmFileWrapper ;
extern const char * gWrapperFileContent_90_libpmFileWrapper ;
extern const char * gWrapperFileContent_91_libpmFileWrapper ;
extern const char * gWrapperFileContent_92_libpmFileWrapper ;
extern const char * gWrapperFileContent_93_libpmFileWrapper ;
extern const char * gWrapperFileContent_94_libpmFileWrapper ;
extern const char * gWrapperFileContent_95_libpmFileWrapper ;
extern const char * gWrapperFileContent_96_libpmFileWrapper ;
extern const char * gWrapperFileContent_97_libpmFileWrapper ;
extern const char * gWrapperFileContent_98_libpmFileWrapper ;
extern const char * gWrapperFileContent_99_libpmFileWrapper ;
extern const char * gWrapperFileContent_100_libpmFileWrapper ;
extern const char * gWrapperFileContent_101_libpmFileWrapper ;
extern const char * gWrapperFileContent_102_libpmFileWrapper ;
extern const char * gWrapperFileContent_103_libpmFileWrapper ;
extern const char * gWrapperFileContent_104_libpmFileWrapper ;
extern const char * gWrapperFileContent_105_libpmFileWrapper ;
extern const char * gWrapperFileContent_106_libpmFileWrapper ;
extern const char * gWrapperFileContent_107_libpmFileWrapper ;
extern const char * gWrapperFileContent_108_libpmFileWrapper ;
extern const char * gWrapperFileContent_109_libpmFileWrapper ;
extern const char * gWrapperFileContent_110_libpmFileWrapper ;
extern const char * gWrapperFileContent_111_libpmFileWrapper ;
extern const char * gWrapperFileContent_112_libpmFileWrapper ;
extern const char * gWrapperFileContent_113_libpmFileWrapper ;
extern const char * gWrapperFileContent_114_libpmFileWrapper ;
extern const char * gWrapperFileContent_115_libpmFileWrapper ;
extern const char * gWrapperFileContent_116_libpmFileWrapper ;
extern const char * gWrapperFileContent_117_libpmFileWrapper ;
extern const char * gWrapperFileContent_118_libpmFileWrapper ;
extern const char * gWrapperFileContent_119_libpmFileWrapper ;
extern const char * gWrapperFileContent_120_libpmFileWrapper ;
extern const char * gWrapperFileContent_121_libpmFileWrapper ;
extern const char * gWrapperFileContent_122_libpmFileWrapper ;
extern const char * gWrapperFileContent_123_libpmFileWrapper ;
extern const char * gWrapperFileContent_124_libpmFileWrapper ;
extern const char * gWrapperFileContent_125_libpmFileWrapper ;
extern const char * gWrapperFileContent_126_libpmFileWrapper ;
extern const char * gWrapperFileContent_127_libpmFileWrapper ;
extern const char * gWrapperFileContent_128_libpmFileWrapper ;
extern const char * gWrapperFileContent_129_libpmFileWrapper ;
extern const char * gWrapperFileContent_130_libpmFileWrapper ;
extern const char * gWrapperFileContent_131_libpmFileWrapper ;
extern const char * gWrapperFileContent_132_libpmFileWrapper ;
extern const char * gWrapperFileContent_133_libpmFileWrapper ;
extern const char * gWrapperFileContent_134_libpmFileWrapper ;
extern const char * gWrapperFileContent_135_libpmFileWrapper ;
extern const char * gWrapperFileContent_136_libpmFileWrapper ;
extern const char * gWrapperFileContent_137_libpmFileWrapper ;
extern const char * gWrapperFileContent_138_libpmFileWrapper ;
extern const char * gWrapperFileContent_139_libpmFileWrapper ;
extern const char * gWrapperFileContent_140_libpmFileWrapper ;
extern const char * gWrapperFileContent_141_libpmFileWrapper ;
extern const char * gWrapperFileContent_142_libpmFileWrapper ;
extern const char * gWrapperFileContent_143_libpmFileWrapper ;
extern const char * gWrapperFileContent_144_libpmFileWrapper ;
extern const char * gWrapperFileContent_145_libpmFileWrapper ;
extern const char * gWrapperFileContent_146_libpmFileWrapper ;
extern const char * gWrapperFileContent_147_libpmFileWrapper ;
extern const char * gWrapperFileContent_148_libpmFileWrapper ;
extern const char * gWrapperFileContent_149_libpmFileWrapper ;
extern const char * gWrapperFileContent_150_libpmFileWrapper ;
extern const char * gWrapperFileContent_151_libpmFileWrapper ;
extern const char * gWrapperFileContent_152_libpmFileWrapper ;
extern const char * gWrapperFileContent_153_libpmFileWrapper ;
extern const char * gWrapperFileContent_154_libpmFileWrapper ;
extern const char * gWrapperFileContent_155_libpmFileWrapper ;
extern const char * gWrapperFileContent_156_libpmFileWrapper ;
extern const char * gWrapperFileContent_157_libpmFileWrapper ;
extern const char * gWrapperFileContent_158_libpmFileWrapper ;
extern const char * gWrapperFileContent_159_libpmFileWrapper ;
extern const char * gWrapperFileContent_160_libpmFileWrapper ;
extern const char * gWrapperFileContent_161_libpmFileWrapper ;
extern const char * gWrapperFileContent_162_libpmFileWrapper ;
extern const char * gWrapperFileContent_163_libpmFileWrapper ;
extern const char * gWrapperFileContent_164_libpmFileWrapper ;
extern const char * gWrapperFileContent_165_libpmFileWrapper ;
extern const char * gWrapperFileContent_166_libpmFileWrapper ;
extern const char * gWrapperFileContent_167_libpmFileWrapper ;
extern const char * gWrapperFileContent_168_libpmFileWrapper ;
extern const char * gWrapperFileContent_169_libpmFileWrapper ;
extern const char * gWrapperFileContent_170_libpmFileWrapper ;
extern const char * gWrapperFileContent_171_libpmFileWrapper ;
extern const char * gWrapperFileContent_172_libpmFileWrapper ;
extern const char * gWrapperFileContent_173_libpmFileWrapper ;
extern const char * gWrapperFileContent_174_libpmFileWrapper ;
extern const char * gWrapperFileContent_175_libpmFileWrapper ;
extern const char * gWrapperFileContent_176_libpmFileWrapper ;
extern const char * gWrapperFileContent_177_libpmFileWrapper ;
extern const char * gWrapperFileContent_178_libpmFileWrapper ;
extern const char * gWrapperFileContent_179_libpmFileWrapper ;
extern const char * gWrapperFileContent_180_libpmFileWrapper ;
extern const char * gWrapperFileContent_181_libpmFileWrapper ;
extern const char * gWrapperFileContent_182_libpmFileWrapper ;
extern const char * gWrapperFileContent_183_libpmFileWrapper ;
extern const char * gWrapperFileContent_184_libpmFileWrapper ;
extern const char * gWrapperFileContent_185_libpmFileWrapper ;
extern const char * gWrapperFileContent_186_libpmFileWrapper ;
extern const char * gWrapperFileContent_187_libpmFileWrapper ;
extern const char * gWrapperFileContent_188_libpmFileWrapper ;
extern const char * gWrapperFileContent_189_libpmFileWrapper ;
extern const char * gWrapperFileContent_190_libpmFileWrapper ;
extern const char * gWrapperFileContent_191_libpmFileWrapper ;
extern const char * gWrapperFileContent_192_libpmFileWrapper ;
extern const char * gWrapperFileContent_193_libpmFileWrapper ;
extern const char * gWrapperFileContent_194_libpmFileWrapper ;
extern const char * gWrapperFileContent_195_libpmFileWrapper ;
extern const char * gWrapperFileContent_196_libpmFileWrapper ;
extern const char * gWrapperFileContent_197_libpmFileWrapper ;
extern const char * gWrapperFileContent_198_libpmFileWrapper ;
extern const char * gWrapperFileContent_199_libpmFileWrapper ;
extern const char * gWrapperFileContent_200_libpmFileWrapper ;
extern const char * gWrapperFileContent_201_libpmFileWrapper ;
extern const char * gWrapperFileContent_202_libpmFileWrapper ;
extern const char * gWrapperFileContent_203_libpmFileWrapper ;
extern const char * gWrapperFileContent_204_libpmFileWrapper ;
extern const char * gWrapperFileContent_205_libpmFileWrapper ;
extern const char * gWrapperFileContent_206_libpmFileWrapper ;
extern const char * gWrapperFileContent_207_libpmFileWrapper ;
extern const char * gWrapperFileContent_208_libpmFileWrapper ;
extern const char * gWrapperFileContent_209_libpmFileWrapper ;
extern const char * gWrapperFileContent_210_libpmFileWrapper ;
extern const char * gWrapperFileContent_211_libpmFileWrapper ;
extern const char * gWrapperFileContent_212_libpmFileWrapper ;
extern const char * gWrapperFileContent_213_libpmFileWrapper ;
extern const char * gWrapperFileContent_214_libpmFileWrapper ;
extern const char * gWrapperFileContent_215_libpmFileWrapper ;
extern const char * gWrapperFileContent_216_libpmFileWrapper ;
extern const char * gWrapperFileContent_217_libpmFileWrapper ;
extern const char * gWrapperFileContent_218_libpmFileWrapper ;
extern const char * gWrapperFileContent_219_libpmFileWrapper ;
extern const char * gWrapperFileContent_220_libpmFileWrapper ;
extern const char * gWrapperFileContent_221_libpmFileWrapper ;
extern const char * gWrapperFileContent_222_libpmFileWrapper ;
extern const char * gWrapperFileContent_223_libpmFileWrapper ;
extern const char * gWrapperFileContent_224_libpmFileWrapper ;
extern const char * gWrapperFileContent_225_libpmFileWrapper ;
extern const char * gWrapperFileContent_226_libpmFileWrapper ;
extern const char * gWrapperFileContent_227_libpmFileWrapper ;
extern const char * gWrapperFileContent_228_libpmFileWrapper ;
extern const char * gWrapperFileContent_229_libpmFileWrapper ;
extern const char * gWrapperFileContent_230_libpmFileWrapper ;
extern const char * gWrapperFileContent_231_libpmFileWrapper ;
extern const char * gWrapperFileContent_232_libpmFileWrapper ;
extern const char * gWrapperFileContent_233_libpmFileWrapper ;
extern const char * gWrapperFileContent_234_libpmFileWrapper ;
extern const char * gWrapperFileContent_235_libpmFileWrapper ;
extern const char * gWrapperFileContent_236_libpmFileWrapper ;
extern const char * gWrapperFileContent_237_libpmFileWrapper ;
extern const char * gWrapperFileContent_238_libpmFileWrapper ;
extern const char * gWrapperFileContent_239_libpmFileWrapper ;
extern const char * gWrapperFileContent_240_libpmFileWrapper ;
extern const char * gWrapperFileContent_241_libpmFileWrapper ;
extern const char * gWrapperFileContent_242_libpmFileWrapper ;
extern const char * gWrapperFileContent_243_libpmFileWrapper ;
extern const char * gWrapperFileContent_244_libpmFileWrapper ;
extern const char * gWrapperFileContent_245_libpmFileWrapper ;
extern const char * gWrapperFileContent_246_libpmFileWrapper ;
extern const char * gWrapperFileContent_247_libpmFileWrapper ;
extern const char * gWrapperFileContent_248_libpmFileWrapper ;
extern const char * gWrapperFileContent_249_libpmFileWrapper ;
extern const char * gWrapperFileContent_250_libpmFileWrapper ;
extern const char * gWrapperFileContent_251_libpmFileWrapper ;
extern const char * gWrapperFileContent_252_libpmFileWrapper ;
extern const char * gWrapperFileContent_253_libpmFileWrapper ;
extern const char * gWrapperFileContent_254_libpmFileWrapper ;
extern const char * gWrapperFileContent_255_libpmFileWrapper ;
extern const char * gWrapperFileContent_256_libpmFileWrapper ;
extern const char * gWrapperFileContent_257_libpmFileWrapper ;
extern const char * gWrapperFileContent_258_libpmFileWrapper ;
extern const char * gWrapperFileContent_259_libpmFileWrapper ;
extern const char * gWrapperFileContent_260_libpmFileWrapper ;
extern const char * gWrapperFileContent_261_libpmFileWrapper ;
extern const char * gWrapperFileContent_262_libpmFileWrapper ;
extern const char * gWrapperFileContent_263_libpmFileWrapper ;
extern const char * gWrapperFileContent_264_libpmFileWrapper ;
extern const char * gWrapperFileContent_265_libpmFileWrapper ;
extern const char * gWrapperFileContent_266_libpmFileWrapper ;
extern const char * gWrapperFileContent_267_libpmFileWrapper ;
extern const char * gWrapperFileContent_268_libpmFileWrapper ;
extern const char * gWrapperFileContent_269_libpmFileWrapper ;
extern const char * gWrapperFileContent_270_libpmFileWrapper ;
extern const char * gWrapperFileContent_271_libpmFileWrapper ;
extern const char * gWrapperFileContent_272_libpmFileWrapper ;
extern const char * gWrapperFileContent_273_libpmFileWrapper ;
extern const char * gWrapperFileContent_274_libpmFileWrapper ;
extern const char * gWrapperFileContent_275_libpmFileWrapper ;
extern const char * gWrapperFileContent_276_libpmFileWrapper ;
extern const char * gWrapperFileContent_277_libpmFileWrapper ;
extern const char * gWrapperFileContent_278_libpmFileWrapper ;
extern const char * gWrapperFileContent_279_libpmFileWrapper ;
extern const char * gWrapperFileContent_280_libpmFileWrapper ;
extern const char * gWrapperFileContent_281_libpmFileWrapper ;
extern const char * gWrapperFileContent_282_libpmFileWrapper ;
extern const char * gWrapperFileContent_283_libpmFileWrapper ;
extern const char * gWrapperFileContent_284_libpmFileWrapper ;
extern const char * gWrapperFileContent_285_libpmFileWrapper ;
extern const char * gWrapperFileContent_286_libpmFileWrapper ;
extern const char * gWrapperFileContent_287_libpmFileWrapper ;
extern const char * gWrapperFileContent_288_libpmFileWrapper ;
extern const char * gWrapperFileContent_289_libpmFileWrapper ;
extern const char * gWrapperFileContent_290_libpmFileWrapper ;
extern const char * gWrapperFileContent_291_libpmFileWrapper ;
extern const char * gWrapperFileContent_292_libpmFileWrapper ;
extern const char * gWrapperFileContent_293_libpmFileWrapper ;
extern const char * gWrapperFileContent_294_libpmFileWrapper ;
extern const char * gWrapperFileContent_295_libpmFileWrapper ;
extern const char * gWrapperFileContent_296_libpmFileWrapper ;
extern const char * gWrapperFileContent_297_libpmFileWrapper ;
extern const char * gWrapperFileContent_298_libpmFileWrapper ;
extern const char * gWrapperFileContent_299_libpmFileWrapper ;
extern const char * gWrapperFileContent_300_libpmFileWrapper ;
extern const char * gWrapperFileContent_301_libpmFileWrapper ;
extern const char * gWrapperFileContent_302_libpmFileWrapper ;
extern const char * gWrapperFileContent_303_libpmFileWrapper ;
extern const char * gWrapperFileContent_304_libpmFileWrapper ;
extern const char * gWrapperFileContent_305_libpmFileWrapper ;
extern const char * gWrapperFileContent_306_libpmFileWrapper ;
extern const char * gWrapperFileContent_307_libpmFileWrapper ;
extern const char * gWrapperFileContent_308_libpmFileWrapper ;
extern const char * gWrapperFileContent_309_libpmFileWrapper ;
extern const char * gWrapperFileContent_310_libpmFileWrapper ;
extern const char * gWrapperFileContent_311_libpmFileWrapper ;
extern const char * gWrapperFileContent_312_libpmFileWrapper ;
extern const char * gWrapperFileContent_313_libpmFileWrapper ;
extern const char * gWrapperFileContent_314_libpmFileWrapper ;
extern const char * gWrapperFileContent_315_libpmFileWrapper ;
extern const char * gWrapperFileContent_316_libpmFileWrapper ;
extern const char * gWrapperFileContent_317_libpmFileWrapper ;
extern const char * gWrapperFileContent_318_libpmFileWrapper ;
extern const char * gWrapperFileContent_319_libpmFileWrapper ;
extern const char * gWrapperFileContent_320_libpmFileWrapper ;
extern const char * gWrapperFileContent_321_libpmFileWrapper ;
extern const char * gWrapperFileContent_322_libpmFileWrapper ;
extern const char * gWrapperFileContent_323_libpmFileWrapper ;
extern const char * gWrapperFileContent_324_libpmFileWrapper ;
extern const char * gWrapperFileContent_325_libpmFileWrapper ;
extern const char * gWrapperFileContent_326_libpmFileWrapper ;
extern const char * gWrapperFileContent_327_libpmFileWrapper ;
extern const char * gWrapperFileContent_328_libpmFileWrapper ;
extern const char * gWrapperFileContent_329_libpmFileWrapper ;
extern const char * gWrapperFileContent_330_libpmFileWrapper ;
extern const char * gWrapperFileContent_331_libpmFileWrapper ;
extern const char * gWrapperFileContent_332_libpmFileWrapper ;
extern const char * gWrapperFileContent_333_libpmFileWrapper ;
extern const char * gWrapperFileContent_334_libpmFileWrapper ;
extern const char * gWrapperFileContent_335_libpmFileWrapper ;
extern const char * gWrapperFileContent_336_libpmFileWrapper ;
extern const char * gWrapperFileContent_337_libpmFileWrapper ;
extern const char * gWrapperFileContent_338_libpmFileWrapper ;
extern const char * gWrapperFileContent_339_libpmFileWrapper ;
extern const char * gWrapperFileContent_340_libpmFileWrapper ;
extern const char * gWrapperFileContent_341_libpmFileWrapper ;
extern const char * gWrapperFileContent_342_libpmFileWrapper ;
extern const char * gWrapperFileContent_343_libpmFileWrapper ;
extern const char * gWrapperFileContent_344_libpmFileWrapper ;
extern const char * gWrapperFileContent_345_libpmFileWrapper ;
extern const char * gWrapperFileContent_346_libpmFileWrapper ;
extern const char * gWrapperFileContent_347_libpmFileWrapper ;
extern const char * gWrapperFileContent_348_libpmFileWrapper ;
extern const char * gWrapperFileContent_349_libpmFileWrapper ;
extern const char * gWrapperFileContent_350_libpmFileWrapper ;
extern const char * gWrapperFileContent_351_libpmFileWrapper ;
extern const char * gWrapperFileContent_352_libpmFileWrapper ;
extern const char * gWrapperFileContent_353_libpmFileWrapper ;
extern const char * gWrapperFileContent_354_libpmFileWrapper ;
extern const char * gWrapperFileContent_355_libpmFileWrapper ;
extern const char * gWrapperFileContent_356_libpmFileWrapper ;
extern const char * gWrapperFileContent_357_libpmFileWrapper ;
extern const char * gWrapperFileContent_358_libpmFileWrapper ;
extern const char * gWrapperFileContent_359_libpmFileWrapper ;
extern const char * gWrapperFileContent_360_libpmFileWrapper ;
extern const char * gWrapperFileContent_361_libpmFileWrapper ;
extern const char * gWrapperFileContent_362_libpmFileWrapper ;
extern const char * gWrapperFileContent_363_libpmFileWrapper ;
extern const char * gWrapperFileContent_364_libpmFileWrapper ;
extern const char * gWrapperFileContent_365_libpmFileWrapper ;
extern const char * gWrapperFileContent_366_libpmFileWrapper ;
extern const char * gWrapperFileContent_367_libpmFileWrapper ;
extern const char * gWrapperFileContent_368_libpmFileWrapper ;
extern const char * gWrapperFileContent_369_libpmFileWrapper ;
extern const char * gWrapperFileContent_370_libpmFileWrapper ;
extern const char * gWrapperFileContent_371_libpmFileWrapper ;
extern const char * gWrapperFileContent_372_libpmFileWrapper ;
extern const char * gWrapperFileContent_373_libpmFileWrapper ;
extern const char * gWrapperFileContent_374_libpmFileWrapper ;
extern const char * gWrapperFileContent_375_libpmFileWrapper ;
extern const char * gWrapperFileContent_376_libpmFileWrapper ;
extern const char * gWrapperFileContent_377_libpmFileWrapper ;
extern const char * gWrapperFileContent_378_libpmFileWrapper ;
extern const char * gWrapperFileContent_379_libpmFileWrapper ;
extern const char * gWrapperFileContent_380_libpmFileWrapper ;
extern const char * gWrapperFileContent_381_libpmFileWrapper ;
extern const char * gWrapperFileContent_382_libpmFileWrapper ;
extern const char * gWrapperFileContent_383_libpmFileWrapper ;
extern const char * gWrapperFileContent_384_libpmFileWrapper ;
extern const char * gWrapperFileContent_385_libpmFileWrapper ;
extern const char * gWrapperFileContent_386_libpmFileWrapper ;
extern const char * gWrapperFileContent_387_libpmFileWrapper ;
extern const char * gWrapperFileContent_388_libpmFileWrapper ;
extern const char * gWrapperFileContent_389_libpmFileWrapper ;
extern const char * gWrapperFileContent_390_libpmFileWrapper ;
extern const char * gWrapperFileContent_391_libpmFileWrapper ;
extern const char * gWrapperFileContent_392_libpmFileWrapper ;
extern const char * gWrapperFileContent_393_libpmFileWrapper ;
extern const char * gWrapperFileContent_394_libpmFileWrapper ;
extern const char * gWrapperFileContent_395_libpmFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*

extern const uint8_t gWrapperFileContent_16_libpmFileWrapper [] ;
extern const uint8_t gWrapperFileContent_61_libpmFileWrapper [] ;
extern const uint8_t gWrapperFileContent_64_libpmFileWrapper [] ;
extern const uint8_t gWrapperFileContent_65_libpmFileWrapper [] ;
extern const uint8_t gWrapperFileContent_66_libpmFileWrapper [] ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_1_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_2_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_3_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_4_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_5_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_6_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_7_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_8_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_9_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_10_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_11_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_12_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_13_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_14_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_15_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_16_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_17_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_18_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_19_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_20_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_21_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_22_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_23_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_24_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_25_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_26_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_27_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_28_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_29_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_30_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_31_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_32_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_33_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_34_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_35_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_36_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_37_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_38_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_39_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_40_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_41_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_42_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_43_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_44_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_45_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_46_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_47_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_48_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_49_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_50_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_51_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_52_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_53_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_54_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_55_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_56_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_57_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_58_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_59_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_60_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_61_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_62_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_63_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_64_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_65_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_66_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_67_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_68_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_69_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_70_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_71_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_72_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_73_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_74_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_75_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_76_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_77_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_78_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_79_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_80_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_81_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_82_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_83_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_84_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_85_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_86_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_87_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_88_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_89_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_90_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_91_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_92_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_93_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_94_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_95_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_96_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_97_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_98_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_99_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_100_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_101_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_102_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_103_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_104_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_105_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_106_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_107_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_108_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_109_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_110_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_111_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_112_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_113_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_114_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_115_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_116_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_117_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_118_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_119_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_120_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_121_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_122_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_123_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_124_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_125_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_126_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_127_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_128_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_129_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_130_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_131_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_132_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_133_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_134_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_135_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_136_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_137_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_138_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_139_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_140_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_141_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_142_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_143_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_144_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_145_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_146_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_147_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_148_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_149_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_150_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_151_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_152_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_153_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_154_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_155_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_156_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_157_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_158_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_159_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_160_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_161_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_162_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_163_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_164_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_165_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_166_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_167_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_168_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_169_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_170_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_171_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_172_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_173_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_174_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_175_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_176_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_177_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_178_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_179_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_180_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_181_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_182_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_183_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_184_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_185_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_186_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_187_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_188_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_189_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_190_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_191_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_192_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_193_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_194_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_195_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_196_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_197_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_198_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_199_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_200_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_201_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_202_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_203_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_204_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_205_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_206_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_207_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_208_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_209_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_210_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_211_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_212_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_213_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_214_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_215_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_216_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_217_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_218_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_219_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_220_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_221_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_222_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_223_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_224_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_225_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_226_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_227_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_228_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_229_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_230_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_231_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_232_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_233_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_234_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_235_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_236_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_237_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_238_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_239_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_240_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_241_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_242_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_243_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_244_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_245_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_246_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_247_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_248_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_249_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_250_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_251_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_252_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_253_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_254_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_255_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_256_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_257_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_258_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_259_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_260_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_261_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_262_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_263_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_264_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_265_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_266_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_267_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_268_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_269_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_270_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_271_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_272_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_273_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_274_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_275_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_276_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_277_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_278_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_279_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_280_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_281_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_282_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_283_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_284_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_285_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_286_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_287_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_288_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_289_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_290_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_291_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_292_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_293_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_294_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_295_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_296_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_297_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_298_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_299_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_300_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_301_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_302_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_303_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_304_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_305_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_306_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_307_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_308_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_309_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_310_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_311_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_312_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_313_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_314_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_315_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_316_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_317_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_318_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_319_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_320_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_321_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_322_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_323_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_324_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_325_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_326_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_327_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_328_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_329_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_330_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_331_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_332_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_333_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_334_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_335_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_336_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_337_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_338_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_339_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_340_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_341_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_342_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_343_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_344_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_345_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_346_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_347_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_348_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_349_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_350_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_351_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_352_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_353_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_354_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_355_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_356_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_357_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_358_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_359_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_360_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_361_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_362_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_363_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_364_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_365_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_366_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_367_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_368_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_369_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_370_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_371_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_372_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_373_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_374_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_375_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_376_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_377_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_378_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_379_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_380_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_381_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_382_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_383_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_384_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_385_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_386_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_387_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_388_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_389_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_390_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_391_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_392_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_393_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_394_libpmFileWrapper ;
extern const cRegularFileWrapper gWrapperFile_395_libpmFileWrapper ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_1_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_2_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_3_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_4_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_5_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_6_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_7_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_8_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_9_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_10_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_11_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_12_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_13_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_14_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_15_libpmFileWrapper ;
extern const cDirectoryWrapper gWrapperDirectory_16_libpmFileWrapper ;

#endif
