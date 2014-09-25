#ifndef proc_2D_recursivlyEnumerateRegularFile_1_DEFINED
#define proc_2D_recursivlyEnumerateRegularFile_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

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

#endif

