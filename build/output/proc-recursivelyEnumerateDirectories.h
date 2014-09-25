#ifndef proc_2D_recursivelyEnumerateDirectories_1_DEFINED
#define proc_2D_recursivelyEnumerateDirectories_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivelyEnumerateDirectories'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivelyEnumerateDirectories (const class GALGAS_string constinArgument0,
                                              const class GALGAS_string constinArgument1,
                                              const class GALGAS_wrapperExtensionMap constinArgument2,
                                              const class GALGAS_wrapperExtensionMap constinArgument3,
                                              class GALGAS_wrapperFileMap & outArgument4,
                                              class GALGAS_wrapperDirectoryMap & outArgument5,
                                              class GALGAS_uint & ioArgument6,
                                              class GALGAS_uint & ioArgument7,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

