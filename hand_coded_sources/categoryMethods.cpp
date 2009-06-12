//---------------------------------------------------------------------------*
//                                                                           *
//  Generate category methods and readers                                    *
//                                                                           *
//  Copyright (C) 2008, ..., 2009 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
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
               " (C_Compiler & inLexique"
            << ",\n                                "
               "const cPtr_" << mClassName << " * inObjectPtr" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      inHfile << " " ;
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
      inCppFile << " inLexique" ;
    }
    inCppFile << ",\n                                "
                 "const cPtr_" << mClassName << " * operand_" << cStringWithSigned (mMagicNumber.location ()) ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionList, currentArgument._mCppName (HERE), true) ;
      inCppFile << " " ;
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
                 "  if (operand_" << cStringWithSigned (mMagicNumber.location ()) << " != NULL) {\n" ;
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
              << "> gDispatchTableForMethod__" << mClassName << "__" << mMethodName << " ;\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void\n"
                 "enterCategoryMethod__" << mClassName << "__" << mMethodName
              << " (typeCategoryMethod__" << mClassName << "__" << mMethodName << " inRoutine,\n"
                 "                     const sint32 inClassID) {\n"
                 "  gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassID, inRoutine, NULL) ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "typeCategoryMethod__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryMethod__" << mClassName << "__" << mMethodName
              << " (AC_galgasClassRunTimeInformation * inClassPtr) {\n"
                 "  typeCategoryMethod__" << mClassName << "__" << mMethodName << " result = NULL ;\n"
                 "  if (inClassPtr->slotID () < gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".count ()) {\n"
                 "    result = gDispatchTableForMethod__" << mClassName << "__" << mMethodName << " (inClassPtr->slotID () COMMA_HERE) ;\n"
                 "  }\n"
                 "  if (result == NULL) {\n"
                 "    AC_galgasClassRunTimeInformation * superClassPtr = inClassPtr->superClassPtr () ;\n"
                 "    if (superClassPtr != NULL) {\n"
                 "      result = findCategoryMethod__" << mClassName << "__" << mMethodName << " (superClassPtr) ;\n"
                 "      gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassPtr->slotID (), result, NULL) ;\n"
                 "    }\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Category Reader
#endif

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inHfile.appendCppTitleComment (C_String ("Category reader '@") + mClassName + "." + mMethodName + "'") ;
    inHfile << "typedef " ;
    mReturnedType (HERE)->generateCppClassName (inHfile) ;
    inHfile << " (*typeCategoryReader__" << mClassName << "__" << mMethodName << ") "
               " (C_Compiler & inLexique"
            << ",\n                                "
               "const cPtr_" << mClassName << " * inObjectPtr" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hasCurrentObject ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      inHfile << " " ;
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inHfile) ;
      currentArgument.next () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "void\n"
               "enterCategoryReader__" << mClassName << "__" << mMethodName
            << " (typeCategoryReader__" << mClassName << "__" << mMethodName << " inRoutine,\n"
               "                     const sint32 inClassID) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "typeCategoryReader__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryReader__" << mClassName << "__" << mMethodName
            << " (AC_galgasClassRunTimeInformation * inClassPtr) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_categoryReaderToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
enterPrologueEpilogueAction (AC_OutputStream & inPrologueActions,
                             AC_OutputStream & /* inEpilogueActions */) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inPrologueActions << " enterCategoryReader__" << mBaseClassName << "__" << mMethodName << " (" ;
    if (mCategoryMethodKind.enumValue () == GGS_categoryMethodKind::enum_overridingMethod) {
      inPrologueActions << "(typeCategoryReader__" << mBaseClassName << "__" << mMethodName << ") " ;
    }
    inPrologueActions << "category_reader__"
                      << mClassName << "__" << mMethodName << ", gClassInfoFor__"
                      << mClassName << ".slotID ()) ;\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                             const C_String & /* inTargetFileName*/,
                             sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
//--- Generate method
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inCppFile.appendCppTitleComment (C_String ("Category reader '@") + mClassName + "." + mMethodName + "'") ;
    inCppFile << "static " ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "\n"
                 "category_reader__" << mClassName << "__" << mMethodName
              << " (C_Compiler &" ;
    if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
      inCppFile << " inLexique" ;
    }
    inCppFile << ",\n                                "
                 "const cPtr_" << mClassName << " * operand_" << cStringWithSigned (mMagicNumber.location ()) ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      const bool variableUtilisee = formalArgumentIsUsedForList (mInstructionList, currentArgument._mCppName (HERE), true) ;
      inCppFile << " " ;
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
                 "  " ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " " ;
    mReturnedCppVariableName (HERE)->generateCplusPlusName (inCppFile) ;
    inCppFile << " ;\n"
                 "  if (operand_" << cStringWithSigned (mMagicNumber.location ()) << " != NULL) {\n" ;
    inCppFile.incIndentation (+2) ;
    generateInstructionListForList (mInstructionList, inCppFile,
                                    inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ;
    inCppFile.incIndentation (-2) ;
    inCppFile << "  }\n"
                 "  return " ;
    mReturnedCppVariableName (HERE)->generateCplusPlusName (inCppFile) ;
    inCppFile << " ;\n"
                 "}\n\n" ;
  }
//--- Generate virtual table
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inCppFile.appendCppTitleComment (C_String ("Virtual Table for category reader '@") + mClassName + "." + mMethodName + "'") ;
    inCppFile << "static TC_UniqueArray <typeCategoryReader__" << mClassName << "__" << mMethodName
              << "> gDispatchTableForReader__" << mClassName << "__" << mMethodName << " ;\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void\n"
                 "enterCategoryReader__" << mClassName << "__" << mMethodName
              << " (typeCategoryReader__" << mClassName << "__" << mMethodName << " inRoutine,\n"
                 "                     const sint32 inClassID) {\n"
                 "  gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassID, inRoutine, NULL) ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
//--- Generate default routine
    inCppFile << "static " ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "\n"
                 "category_reader__" << mClassName << "_defaultReader (C_Compiler &"
                 ",\n                                "
                 "const cPtr_" << mClassName << " *" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      inCppFile << " " ;
      currentArgument.next () ;
    }
    inCppFile << "\n                                "
                 "COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  return " ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " () ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
//--- Generate find routine
    inCppFile << "typeCategoryReader__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryReader__" << mClassName << "__" << mMethodName
              << " (AC_galgasClassRunTimeInformation * inClassPtr) {\n"
                 "  typeCategoryReader__" << mClassName << "__" << mMethodName << " result = NULL ;\n"
                 "  if (inClassPtr->slotID () < gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".count ()) {\n"
                 "    result = gDispatchTableForReader__" << mClassName << "__" << mMethodName << " (inClassPtr->slotID () COMMA_HERE) ;\n"
                 "  }\n"
                 "  if (result == NULL) {\n"
                 "    AC_galgasClassRunTimeInformation * superClassPtr = inClassPtr->superClassPtr () ;\n"
                 "    if (superClassPtr != NULL) {\n"
                 "      result = findCategoryReader__" << mClassName << "__" << mMethodName << " (superClassPtr) ;\n"
                 "      gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassPtr->slotID (), result, NULL) ;\n"
                 "    }\n"
                 "  }\n"
                 "  if (NULL == result) {\n"
                 "    result = category_reader__" << mClassName << "_defaultReader ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*
