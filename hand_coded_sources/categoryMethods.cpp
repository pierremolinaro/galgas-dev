//---------------------------------------------------------------------------*
//                                                                           *
//  Generate category methods                                                *
//                                                                           *
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "semantics_semantics.h"
#include "semantics_instructions.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Category Method
#endif

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inHfile.appendCppTitleComment (C_String ("Category method '@") + mClassName + "." + mMethodName + "'") ;
    inHfile << "typedef void (*typeCategoryMethod__" << mClassName << "__" << mMethodName << ") "
               " (C_Compiler & _inLexique"
            << ",\n                                "
               "const cPtr_" << mClassName << " * inObjectPtr" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hc ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      inHfile << ' ' ;
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inHfile) ;
      currentArgument.next () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "void\n"
               "enterCategoryMethod__" << mClassName << "__" << mMethodName
            << " (typeCategoryMethod__" << mClassName << "__" << mMethodName << " inRoutine,\n"
               "                     const sint32 inClassID) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "typeCategoryMethod__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryMethod__" << mClassName << "__" << mMethodName
            << " (AC_galgasClassRunTimeInformation * inClassPtr) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_categoryMethodToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
enterPrologueEpilogueAction (AC_OutputStream & inPrologueActions,
                             AC_OutputStream & /* inEpilogueActions */) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inPrologueActions << " enterCategoryMethod__" << mBaseClassName << "__" << mMethodName << " (" ;
    if (mCategoryMethodKind.enumValue () == GGS_categoryMethodKind::enum_overridingMethod) {
      inPrologueActions << "(typeCategoryMethod__" << mBaseClassName << "__" << mMethodName << ") " ;
    }
    inPrologueActions << "category_method__"
                      << mClassName << "__" << mMethodName << ", gClassInfoFor__"
                      << mClassName << ".slotID ()) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
//--- Generate method
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inCppFile.appendCppTitleComment (C_String ("Category method '@") + mClassName + "." + mMethodName + "'") ;
    inCppFile << "static void\n"
                 "category_method__" << mClassName << "__" << mMethodName
              << " (C_Compiler &" ;
    if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
      inCppFile << " _inLexique" ;
    }
    inCppFile << ",\n                                "
                 "const cPtr_" << mClassName << " * operand_" << mMagicNumber.location () ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hc ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionList, currentArgument._mCppName (HERE), true) ;
      inCppFile << ' ' ;
      if (! variableUtilisee) {
        inCppFile << "/* " ;
      }
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableUtilisee) {
        inCppFile << " */" ;
      }
      currentArgument.next () ;
    }
    inCppFile << "\n                                "
                 "COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  if (operand_" << mMagicNumber.location () << " != NULL) {\n" ;
    inCppFile.incIndentation (+2) ;
    generateInstructionListForList (mInstructionList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ;
    inCppFile.incIndentation (-2) ;
    inCppFile << "  }\n"
                 "}\n\n" ;
  }
//--- Generate virtual table
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inCppFile.appendCppTitleComment (C_String ("Virtual Table for category method '@") + mClassName + "." + mMethodName + "'") ;
    inCppFile << "static TC_UniqueArray <typeCategoryMethod__" << mClassName << "__" << mMethodName
              << "> gDispatchTableFor__" << mClassName << "__" << mMethodName << " ;\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void\n"
                 "enterCategoryMethod__" << mClassName << "__" << mMethodName
              << " (typeCategoryMethod__" << mClassName << "__" << mMethodName << " inRoutine,\n"
                 "                     const sint32 inClassID) {\n"
                 "  gDispatchTableFor__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassID, inRoutine, NULL) ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "typeCategoryMethod__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryMethod__" << mClassName << "__" << mMethodName
              << " (AC_galgasClassRunTimeInformation * inClassPtr) {\n"
                 "  typeCategoryMethod__" << mClassName << "__" << mMethodName << " result = NULL ;\n"
                 "  if (inClassPtr->slotID () < gDispatchTableFor__" << mClassName << "__" << mMethodName << ".count ()) {\n"
                 "    result = gDispatchTableFor__" << mClassName << "__" << mMethodName << " (inClassPtr->slotID () COMMA_HERE) ;\n"
                 "  }\n"
                 "  if (result == NULL) {\n"
                 "    AC_galgasClassRunTimeInformation * superClassPtr = inClassPtr->superClassPtr () ;\n"
                 "    if (superClassPtr != NULL) {\n"
                 "      result = findCategoryMethod__" << mClassName << "__" << mMethodName << " (superClassPtr) ;\n"
                 "      gDispatchTableFor__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassPtr->slotID (), result, NULL) ;\n"
                 "    }\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*
