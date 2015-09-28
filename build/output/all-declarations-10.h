#ifndef all_2D_declarations_2D__31__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateFunction'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFunction (const class GALGAS_string constinArgument0,
                               class GALGAS_stringset & ioArgument1,
                               const class GALGAS_formalInputParameterListForGeneration constinArgument2,
                               const class GALGAS_semanticInstructionListForGeneration constinArgument3,
                               const class GALGAS_string constinArgument4,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument5,
                               const class GALGAS_string constinArgument6,
                               const class GALGAS_bool constinArgument7,
                               class GALGAS_string & outArgument8,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateCategoryModifier'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryModifier (const class GALGAS_string constinArgument0,
                                       const class GALGAS_string constinArgument1,
                                       const class GALGAS_string constinArgument2,
                                       class GALGAS_stringset & ioArgument3,
                                       const class GALGAS_formalParameterListForGeneration constinArgument4,
                                       const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                       class GALGAS_string & outArgument6,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryMethod'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryMethod (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class GALGAS_stringset & ioArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_formalParameterListForGeneration constinArgument4,
                                     const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                     class GALGAS_string & outArgument6,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryReader'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryReader (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class GALGAS_stringset & ioArgument2,
                                     const class GALGAS_string constinArgument3,
                                     const class GALGAS_formalInputParameterListForGeneration constinArgument4,
                                     const class GALGAS_semanticInstructionListForGeneration constinArgument5,
                                     const class GALGAS_string constinArgument6,
                                     const class GALGAS_string constinArgument7,
                                     const class GALGAS_string constinArgument8,
                                     class GALGAS_string & outArgument9,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'typeGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (class C_Compiler * inCompiler,
                                                                                  const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                  const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const class GALGAS_bool & in_IS_5F_CONCRETE,
                                                                                  const class GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const class GALGAS_getterMap & in_READER_5F_MAP,
                                                                                  const class GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const class GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const class GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const class GALGAS_uint & in_SUPPORTED_5F_OPERATORS,
                                                                                  const class GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'typeGenerationTemplate genericTypeImplementation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (class C_Compiler * inCompiler,
                                                                                    const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const class GALGAS_uint & in_SUPPORTED_5F_OPERATORS
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate externTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_TYPE_5F_NAME,
                                                                               const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const class GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const class GALGAS_string & in_CODE
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate graphTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_TYPE,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const class GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_uint & in_DIMENSION
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_uint & in_DIMENSION,
                                                                                          const class GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                            const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader2'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const class GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const class GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate classTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                              const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                              const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                              const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                              const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part1'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part2'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const class GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate classTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                          const class GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                          const class GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                          const class GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'semanticComponentGenerationTemplate'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryReaderDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                         const class GALGAS_string & in_READER_5F_NAME,
                                                                                                         const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryReaderImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                            const class GALGAS_string & in_READER_5F_NAME,
                                                                                                            const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate categoryReaderDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const class GALGAS_string & in_READER_5F_NAME,
                                                                                                 const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryReaderImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (class C_Compiler * inCompiler,
                                                                                                    const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const class GALGAS_string & in_READER_5F_NAME,
                                                                                                    const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE,
                                                                                                    const class GALGAS_string & in_READER_5F_IMPLEMENTATION
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryReaderImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const class GALGAS_string & in_READER_5F_NAME,
                                                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE,
                                                                                                              const class GALGAS_string & in_READER_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryModifierDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                           const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                           const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryModifierImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                              const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryModifierDeclaration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                   const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                   const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate categoryModifierImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (class C_Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                      const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                      const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryModifierImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (class C_Compiler * inCompiler,
                                                                                                                const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                                const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryMethodDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                         const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                         const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryMethodImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (class C_Compiler * inCompiler,
                                                                                                            const class GALGAS_unifiedTypeMap_2D_proxy & in_RECEIVER_5F_TYPE,
                                                                                                            const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate categoryMethodDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                 const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryMethodImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (class C_Compiler * inCompiler,
                                                                                                    const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                    const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                    const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryMethodImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const class GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const class GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate categoryReaderAsFunctionDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                           const class GALGAS_string & in_READER_5F_NAME,
                                                                                                           const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                           const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryReaderAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const class GALGAS_string & in_READER_5F_NAME,
                                                                                                              const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate categoryMethodAsFunctionDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                           const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                           const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                           const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryMethodAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                              const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_NAME,
                                                                                                              const class GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryModifierAsFunctionDeclaration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (class C_Compiler * inCompiler,
                                                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                             const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Filewrapper template 'semanticComponentGenerationTemplate categoryMmodifierAsFunctionImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMmodifierAsFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                                 const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                                 const class GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                 const class GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (class C_Compiler * inCompiler,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (class C_Compiler * inCompiler,
                                                                                          const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const class GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (class C_Compiler * inCompiler,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const class GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (class C_Compiler * inCompiler,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const class GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const class GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (class C_Compiler * inCompiler,
                                                                                                      const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (class C_Compiler * inCompiler,
                                                                                                         const class GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const class GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const class GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const class GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const class GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const class GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_LOCATION_ARGS) ;

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

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_stringset & in_TYPE_5F_LIST
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
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category reader '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_appendPrimitiveTypeDeclaration (const int32_t inClassIndex,
                                                         categoryReaderSignature_semanticDeclarationForGeneration_appendPrimitiveTypeDeclaration inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category reader '@semanticDeclarationForGeneration appendTypeGenericImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_appendTypeGenericImplementation (const int32_t inClassIndex,
                                                          categoryReaderSignature_semanticDeclarationForGeneration_appendTypeGenericImplementation inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                class GALGAS_stringset & ioArgument0,
                                                                                                class GALGAS_string & outArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendDeclaration_31_ (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_31_ inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendDeclaration_31_ (const class cPtr_semanticDeclarationForGeneration * inObject,
                                               GALGAS_stringset & io_ioInclusionSet,
                                               GALGAS_string & out_outHeader,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@semanticDeclarationForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                const class GALGAS_bool constinArgument0,
                                                                                                const class GALGAS_string constinArgument1,
                                                                                                class GALGAS_stringset & ioArgument2,
                                                                                                class GALGAS_string & outArgument3,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendDeclaration_32_ (const int32_t inClassIndex,
                                                categoryMethodSignature_semanticDeclarationForGeneration_appendDeclaration_32_ inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendDeclaration_32_ (const class cPtr_semanticDeclarationForGeneration * inObject,
                                               const GALGAS_bool constin_inGenerateForGalgas_33_,
                                               const GALGAS_string constin_inOutputDirectory,
                                               GALGAS_stringset & io_ioInclusionSet,
                                               GALGAS_string & out_outHeader,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@semanticDeclarationForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation) (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                       const class GALGAS_unifiedTypeMap constinArgument0,
                                                                                                       class GALGAS_stringset & ioArgument1,
                                                                                                       class GALGAS_string & outArgument2,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_appendSpecificImplementation (const int32_t inClassIndex,
                                                       categoryMethodSignature_semanticDeclarationForGeneration_appendSpecificImplementation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_appendSpecificImplementation (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                      const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                      GALGAS_stringset & io_ioInclusionSet,
                                                      GALGAS_string & out_outImplementation,
                                                      C_Compiler * inCompiler
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
  public : static GALGAS_parsedComponentStruct constructor_new (const class GALGAS_parsedSemanticsComponentMap & inOperand0,
                                                                const class GALGAS_parsedLexiqueComponentMap & inOperand1,
                                                                const class GALGAS_parsedSyntaxComponentMap & inOperand2,
                                                                const class GALGAS_parsedOptionComponentMap & inOperand3,
                                                                const class GALGAS_parsedGrammarComponentMap & inOperand4,
                                                                const class GALGAS_parsedProgramComponentMap & inOperand5,
                                                                const class GALGAS_parsedGuiComponentMap & inOperand6
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_parsedComponentStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGrammarComponentMap reader_mParsedGrammarComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedGuiComponentMap reader_mParsedGuiComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedLexiqueComponentMap reader_mParsedLexiqueComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedOptionComponentMap reader_mParsedOptionComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedProgramComponentMap reader_mParsedProgramComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSemanticsComponentMap reader_mParsedSemanticsComponentMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_parsedSyntaxComponentMap reader_mParsedSyntaxComponentMap (LOCATION_ARGS) const ;


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
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypeKindEnum reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPredefinedTypeName (LOCATION_ARGS) const ;


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
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mPredefinedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_predefinedTypeKindEnum reader_mKind (LOCATION_ARGS) const ;
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
  public : static GALGAS_applicationPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_bigintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_binarysetPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_boolPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_charPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_dataPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_doublePredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_filewrapperPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_functionPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_locationPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_objectPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_sint_36__34_PredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_sintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_stringPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_stringsetPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_timerPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_typePredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_uint_36__34_PredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
  public : static GALGAS_uintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
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
//                                 Category Getter '@typeKindEnum kind' (as function)                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_kind (const class GALGAS_typeKindEnum & inObject,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_LOCATION_ARGS) ;

#endif
