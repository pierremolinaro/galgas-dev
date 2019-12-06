#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-21.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const class GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'enterBaseGetterWith2Arguments'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterBaseGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_string constinArgument6,
                                               const class GALGAS_string constinArgument7,
                                               const class GALGAS_bool constinArgument8,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'enterInheritedGetterWithArgument'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterInheritedGetterWithArgument (class GALGAS_getterMap & ioArgument0,
                                               class GALGAS_unifiedTypeMap & ioArgument1,
                                               const class GALGAS_string constinArgument2,
                                               const class GALGAS_string constinArgument3,
                                               const class GALGAS_string constinArgument4,
                                               const class GALGAS_string constinArgument5,
                                               const class GALGAS_bool constinArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWithoutArgument'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterInheritedGetterWithoutArgument (class GALGAS_getterMap & ioArgument0,
                                                  class GALGAS_unifiedTypeMap & ioArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS_string constinArgument3,
                                                  const class GALGAS_bool constinArgument4,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'elementTypeNameSuffix'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_elementTypeNameSuffix (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_check_5F_K_5F_L_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'enterConstructorWithoutArgument'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterConstructorWithoutArgument (class GALGAS_constructorMap & ioArgument0,
                                              class GALGAS_unifiedTypeMap & ioArgument1,
                                              const class GALGAS_string constinArgument2,
                                              const class GALGAS_string constinArgument3,
                                              const class GALGAS_bool constinArgument4,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'listGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'listGenerationTemplate listTypeHeader1'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_TYPE_5F_NAME,
                                                                             const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const class GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_check_5F_K_5F_escapeCharacters (class GALGAS_lstring inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'forbiddenKeysForMapAndDict'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'enterConstructorWithArgument'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterConstructorWithArgument (class GALGAS_constructorMap & ioArgument0,
                                           class GALGAS_unifiedTypeMap & ioArgument1,
                                           const class GALGAS_string constinArgument2,
                                           const class GALGAS_string constinArgument3,
                                           const class GALGAS_string constinArgument4,
                                           const class GALGAS_string constinArgument5,
                                           const class GALGAS_bool constinArgument6,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWith2Arguments'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterInheritedGetterWith_32_Arguments (class GALGAS_getterMap & ioArgument0,
                                                    class GALGAS_unifiedTypeMap & ioArgument1,
                                                    const class GALGAS_string constinArgument2,
                                                    const class GALGAS_string constinArgument3,
                                                    const class GALGAS_string constinArgument4,
                                                    const class GALGAS_string constinArgument5,
                                                    const class GALGAS_string constinArgument6,
                                                    const class GALGAS_string constinArgument7,
                                                    const class GALGAS_bool constinArgument8,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'mapProxyGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_mapProxyGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeHeader1'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                     const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                     const class GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeSpecificImplementation'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                                 const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                                 const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const class GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'sharedMapGenerationTemplate'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_sharedMapGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                       const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (class C_Compiler * inCompiler,
                                                                                       const class GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeSpecificImplementation'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const class GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                   const class GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                                   const class GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                                   const class GALGAS_mapAutomatonStateMap & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP,
                                                                                                   const class GALGAS_mapAutomatonActionMap & in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP,
                                                                                                   const class GALGAS_mapStateSortedList & in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST,
                                                                                                   const class GALGAS_mapOverrideList & in_MAP_5F_OVERRIDE_5F_LIST,
                                                                                                   const class GALGAS_keySortedList & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST,
                                                                                                   const class GALGAS_mapAutomatonMessageKind & in_SHADOW_5F_BEHAVIOUR,
                                                                                                   const class GALGAS_string & in_SHADOW_5F_MESSAGE
                                                                                                   COMMA_LOCATION_ARGS) ;

