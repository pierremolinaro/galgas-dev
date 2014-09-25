#ifndef proc_2D_recursivelyImportSemanticComponent_1_DEFINED
#define proc_2D_recursivelyImportSemanticComponent_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'recursivelyImportSemanticComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivelyImportSemanticComponent (const class GALGAS_lstring constinArgument0,
                                                 class GALGAS_parsedComponentStruct & ioArgument1,
                                                 class GALGAS_semanticImportDependenceGraph & ioArgument2,
                                                 class GALGAS_lstringlist & ioArgument3,
                                                 class GALGAS_grammarComponentASTList & ioArgument4,
                                                 class GALGAS_semanticDeclarationListAST & ioArgument5,
                                                 class GALGAS_stringset & ioArgument6,
                                                 class GALGAS_stringlist & ioArgument7,
                                                 class GALGAS_stringlist & ioArgument8,
                                                 const class GALGAS_lstringlist constinArgument9,
                                                 const class GALGAS_string constinArgument10,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

