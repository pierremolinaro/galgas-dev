#ifndef filewrapper_2D_syntaxFileGenerationTemplate_1_DEFINED
#define filewrapper_2D_syntaxFileGenerationTemplate_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeader'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeader (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                 const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                 const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeaderGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeaderGalgas_33_ (class C_Compiler * inCompiler,
                                                                                           const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (class C_Compiler * inCompiler,
                                                                                                   const class GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementation (class C_Compiler * inCompiler,
                                                                                         const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                         const class GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (class C_Compiler * inCompiler,
                                                                                               const class GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const class GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const class GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const class GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const class GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const class GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const class GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

