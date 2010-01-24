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
#include "filewrapper_template_generation.h"
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
               "                     const PMSInt32 inClassID) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "typeCategoryMethod__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryMethod__" << mClassName << "__" << mMethodName
            << " (AC_galgasClassRunTimeInformationEX * inClassPtr) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_categoryMethodToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
enterPrologueEpilogueAction (AC_OutputStream & inPrologueActions,
                             AC_OutputStream & inEpilogueActions) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inPrologueActions << "  enterCategoryMethod__" << mBaseClassName << "__" << mMethodName << " (" ;
    if (mCategoryMethodKind.enumValue () == GGS_categoryMethodKind::enum_overridingMethod) {
      inPrologueActions << "(typeCategoryMethod__" << mBaseClassName << "__" << mMethodName << ") " ;
    }
    inPrologueActions << "category_method__"
                      << mClassName << "__" << mMethodName << ", gClassInfoFor__"
                      << mClassName << ".slotID ()) ;\n" ;
  }
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inEpilogueActions << "  gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".free () ;\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                             const C_String & /* inTargetFileName*/,
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryMethodToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                PMSInt32 & ioPrototypeIndex,
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
                 "                     const PMSInt32 inClassID) {\n"
                 "  gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassID, inRoutine, NULL COMMA_HERE) ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "typeCategoryMethod__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryMethod__" << mClassName << "__" << mMethodName
              << " (AC_galgasClassRunTimeInformationEX * inClassPtr) {\n"
                 "  typeCategoryMethod__" << mClassName << "__" << mMethodName << " result = NULL ;\n"
                 "  if (inClassPtr->slotID () < gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".count ()) {\n"
                 "    result = gDispatchTableForMethod__" << mClassName << "__" << mMethodName << " (inClassPtr->slotID () COMMA_HERE) ;\n"
                 "  }\n"
                 "  if (result == NULL) {\n"
                 "    AC_galgasClassRunTimeInformationEX * superClassPtr = inClassPtr->superClassPtr () ;\n"
                 "    if (superClassPtr != NULL) {\n"
                 "      result = findCategoryMethod__" << mClassName << "__" << mMethodName << " (superClassPtr) ;\n"
                 "      gDispatchTableForMethod__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassPtr->slotID (), result, NULL COMMA_HERE) ;\n"
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
               "                     const PMSInt32 inClassID) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "typeCategoryReader__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryReader__" << mClassName << "__" << mMethodName
            << " (AC_galgasClassRunTimeInformationEX * inClassPtr) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_categoryReaderToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
enterPrologueEpilogueAction (AC_OutputStream & inPrologueActions,
                             AC_OutputStream & inEpilogueActions) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inPrologueActions << "  enterCategoryReader__" << mBaseClassName << "__" << mMethodName << " (" ;
    if (mCategoryMethodKind.enumValue () == GGS_categoryMethodKind::enum_overridingMethod) {
      inPrologueActions << "(typeCategoryReader__" << mBaseClassName << "__" << mMethodName << ") " ;
    }
    inPrologueActions << "category_reader__"
                      << mClassName << "__" << mMethodName << ", gClassInfoFor__"
                      << mClassName << ".slotID ()) ;\n" ;
  }
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inEpilogueActions << "  gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".free () ;\n" ;
 }
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                             const C_String & /* inTargetFileName*/,
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryReaderToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                PMSInt32 & ioPrototypeIndex,
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
                 "                     const PMSInt32 inClassID) {\n"
                 "  gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassID, inRoutine, NULL COMMA_HERE) ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
//--- Generate default routine
    inCppFile << "static " ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "\n"
                 "category_reader__" << mClassName << "_defaultReader_" << mMethodName << " (C_Compiler &"
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
              << " (AC_galgasClassRunTimeInformationEX * inClassPtr) {\n"
                 "  typeCategoryReader__" << mClassName << "__" << mMethodName << " result = NULL ;\n"
                 "  if (inClassPtr->slotID () < gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".count ()) {\n"
                 "    result = gDispatchTableForReader__" << mClassName << "__" << mMethodName << " (inClassPtr->slotID () COMMA_HERE) ;\n"
                 "  }\n"
                 "  if (result == NULL) {\n"
                 "    AC_galgasClassRunTimeInformationEX * superClassPtr = inClassPtr->superClassPtr () ;\n"
                 "    if (superClassPtr != NULL) {\n"
                 "      result = findCategoryReader__" << mClassName << "__" << mMethodName << " (superClassPtr) ;\n"
                 "      gDispatchTableForReader__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassPtr->slotID (), result, NULL COMMA_HERE) ;\n"
                 "    }\n"
                 "  }\n"
                 "  if (NULL == result) {\n"
                 "    result = category_reader__" << mClassName << "_defaultReader_" << mMethodName << " ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Category Template
#endif

//---------------------------------------------------------------------------*

void cPtr_categoryTemplateToImplement::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryTemplateToImplement::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryTemplateToImplement::
generateHdeclarations (AC_OutputStream & inHfile) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inHfile.appendCppTitleComment (C_String ("Category template '@") + mClassName + "." + mMethodName + "'") ;
    inHfile << "typedef C_String (*typeCategoryTemplate__" << mClassName << "__" << mMethodName << ") "
               " (C_Compiler & inLexique"
            << ",\n                                "
               "const PMSInt32 inIndentation"
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
               "enterCategoryTemplate__" << mClassName << "__" << mMethodName
            << " (typeCategoryTemplate__" << mClassName << "__" << mMethodName << " inRoutine,\n"
               "                     const PMSInt32 inClassID) ;\n\n" ;
    inHfile.appendCppHyphenLineComment () ;
    inHfile << "typeCategoryTemplate__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryTemplate__" << mClassName << "__" << mMethodName
            << " (AC_galgasClassRunTimeInformationEX * inClassPtr) ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_categoryTemplateToImplement::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_categoryTemplateToImplement::
enterPrologueEpilogueAction (AC_OutputStream & inPrologueActions,
                             AC_OutputStream & inEpilogueActions) const {
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inPrologueActions << "  enterCategoryTemplate__" << mBaseClassName << "__" << mMethodName << " (" ;
    if (mCategoryMethodKind.enumValue () == GGS_categoryMethodKind::enum_overridingMethod) {
      inPrologueActions << "(typeCategoryTemplate__" << mBaseClassName << "__" << mMethodName << ") " ;
    }
    inPrologueActions << "category_template__"
                      << mClassName << "__" << mMethodName << ", gClassInfoFor__"
                      << mClassName << ".slotID ()) ;\n" ;
  }
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inEpilogueActions << "  gDispatchTableForTemplate__" << mClassName << "__" << mMethodName << ".free () ;\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_categoryTemplateToImplement::
generateCppClassDeclaration (AC_OutputStream & /* inHfile*/,
                             const C_String & /* inTargetFileName*/,
                             PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_categoryTemplateToImplement::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & /* inTargetFileName */,
                                PMSInt32 & /* ioPrototypeIndex */,
                                const bool /* inGenerateDebug */) const {
//--- Generate method
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_abstractMethod) {
    inCppFile.appendCppTitleComment (C_String ("Category template '@") + mClassName + "." + mMethodName + "'") ;
    inCppFile << "static C_String\n"
                 "category_template__" << mClassName << "__" << mMethodName
              << " (C_Compiler &" ;
    if (templateInstructionListUsesLexique (mInstructionList)) {
      inCppFile << " inLexique" ;
    }
    inCppFile << ",\n                                "
                 "const PMSInt32 inIndentation"
                 ",\n                                "
                 "const cPtr_" << mClassName << " * operand_" << cStringWithSigned (mMagicNumber.location ()) ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    while (currentArgument.hasCurrentObject ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      const bool variableUtilisee = templateInstructionListUsesFormalArgument (mInstructionList, currentArgument._mCppName (HERE)) ;
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
                 "  C_String result ;\n"
                 "  result.incIndentation (inIndentation) ;\n"
                 "  if (operand_" << cStringWithSigned (mMagicNumber.location ()) << " != NULL) {\n" ;
    GGS_templateInstructionList::cEnumerator currentInstruction (mInstructionList, true) ;
    inCppFile.incIndentation (+4) ;
    while (currentInstruction.hasCurrentObject ()) {
      currentInstruction._mInstruction (HERE) (HERE)->generateTemplateInstruction (inCppFile) ;
      currentInstruction.next () ;
    }
    inCppFile.incIndentation (-4) ;
    inCppFile << "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }
//--- Generate virtual table
  if (mCategoryMethodKind.enumValue () != GGS_categoryMethodKind::enum_overridingMethod) {
    inCppFile.appendCppTitleComment (C_String ("Virtual Table for category template '@") + mClassName + "." + mMethodName + "'") ;
    inCppFile << "static TC_UniqueArray <typeCategoryTemplate__" << mClassName << "__" << mMethodName
              << "> gDispatchTableForTemplate__" << mClassName << "__" << mMethodName << " ;\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void\n"
                 "enterCategoryTemplate__" << mClassName << "__" << mMethodName
              << " (typeCategoryTemplate__" << mClassName << "__" << mMethodName << " inRoutine,\n"
                 "                     const PMSInt32 inClassID) {\n"
                 "  gDispatchTableForTemplate__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassID, inRoutine, NULL COMMA_HERE) ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
//--- Generate default routine
    inCppFile << "static C_String\n"
                 "category_template__" << mClassName << "_defaultTemplate (C_Compiler &"
                 ",\n                                "
                 "const PMSInt32"
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
                 "  return C_String () ;\n"
                 "}\n\n" ;
    inCppFile.appendCppHyphenLineComment () ;
//--- Generate find routine
    inCppFile << "typeCategoryTemplate__" << mClassName << "__" << mMethodName << "\n"
               "findCategoryTemplate__" << mClassName << "__" << mMethodName
              << " (AC_galgasClassRunTimeInformationEX * inClassPtr) {\n"
                 "  typeCategoryTemplate__" << mClassName << "__" << mMethodName << " result = NULL ;\n"
                 "  if (inClassPtr->slotID () < gDispatchTableForTemplate__" << mClassName << "__" << mMethodName << ".count ()) {\n"
                 "    result = gDispatchTableForTemplate__" << mClassName << "__" << mMethodName << " (inClassPtr->slotID () COMMA_HERE) ;\n"
                 "  }\n"
                 "  if (result == NULL) {\n"
                 "    AC_galgasClassRunTimeInformationEX * superClassPtr = inClassPtr->superClassPtr () ;\n"
                 "    if (superClassPtr != NULL) {\n"
                 "      result = findCategoryTemplate__" << mClassName << "__" << mMethodName << " (superClassPtr) ;\n"
                 "      gDispatchTableForTemplate__" << mClassName << "__" << mMethodName << ".forceObjectAtIndex (inClassPtr->slotID (), result, NULL COMMA_HERE) ;\n"
                 "    }\n"
                 "  }\n"
                 "  if (NULL == result) {\n"
                 "    result = category_template__" << mClassName << "_defaultTemplate ;\n"
                 "  }\n"
                 "  return result ;\n"
                 "}\n\n" ;
  }
}

//---------------------------------------------------------------------------*
