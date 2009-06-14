/*
 *  filewrapper_template_generation.h
 *  galgas
 *
 *
 */

//---------------------------------------------------------------------------*

#ifndef FILEWRAPPER_TEMPLATE_GENERATION_DEFINED
#define FILEWRAPPER_TEMPLATE_GENERATION_DEFINED

//---------------------------------------------------------------------------*

#include "semantics_semantics.h"

//---------------------------------------------------------------------------*

bool templateInstructionListUsesLexique (const GGS_templateInstructionList & inTemplateInstructionList) ;

//---------------------------------------------------------------------------*

bool
templateInstructionListUsesFormalArgument (const GGS_templateInstructionList & inTemplateInstructionList,
                                           const GGS_typeCplusPlusName & inCppName) ;

//---------------------------------------------------------------------------*

#endif
