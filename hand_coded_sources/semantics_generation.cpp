//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999, ..., 2010 Pierre Molinaro.                           *
//                                                                           *
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

#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#include "semantics_instructions.h"
#include "semantics_parser.h"
#include "parser_generation.h"
#include "galgas_start.h"

//---------------------------------------------------------------------------*

#include <stdlib.h>

//---------------------------------------------------------------------------*

void
routine_check_KL_escapeCharacters (C_Compiler & inLexique,
                                   GGS_lstring inString
                                   COMMA_LOCATION_ARGS) {
  if (inString.isBuilt ()) {
    bool gotPercent = false ;
    const utf32 * cString = inString.utf32String (HERE) ;
    while (UNICODE_VALUE (*cString) != '\0') {
      if (gotPercent) {
        if ((UNICODE_VALUE (*cString) != 'K') && (UNICODE_VALUE (*cString) != 'L') && (UNICODE_VALUE (*cString) != '%')) {
          C_String errorMessage ;
          errorMessage << "unknown escape sequence: only %K, %L and %% sequences are defined" ;
          inString.semanticError (inLexique, errorMessage COMMA_THERE) ;
        }
        gotPercent = false ;
      }else if (UNICODE_VALUE (*cString) == '%') {
        gotPercent = true ;
      }
      cString ++ ; 
    }
    if (gotPercent) {
      C_String errorMessage ;
      errorMessage << "string ends with a single %: only %K, %L and %% sequences are defined" ;
      inString.semanticError (inLexique, errorMessage COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

void
routine_check_K_escapeCharacters (C_Compiler & inLexique,
                                  GGS_lstring inString
                                  COMMA_LOCATION_ARGS) {
  if (inString.isBuilt ()) {
    bool gotPercent = false ;
    const utf32 * cString = inString.utf32String (HERE) ;
    while (UNICODE_VALUE (*cString) != '\0') {
      if (gotPercent) {
        if ((UNICODE_VALUE (*cString) != 'K') && (UNICODE_VALUE (*cString) != '%')) {
          C_String errorMessage ;
          errorMessage << "unknown escape sequence: only %K and %% sequences are defined" ;
          inString.semanticError (inLexique, errorMessage COMMA_THERE) ;
        }
        gotPercent = false ;
      }else if (UNICODE_VALUE (*cString) == '%') {
        gotPercent = true ;
      }
      cString ++ ; 
    }
    if (gotPercent) {
      C_String errorMessage ;
      errorMessage << "string ends with a single %: only %K and %% sequences are defined" ;
      inString.semanticError (inLexique, errorMessage COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------*

void
routine_buildFileNameWithPath (C_Compiler &,
                               GGS_lstring & outFileNameWithPath,
                               GGS_lstring inPath,
                               const GGS_lstring inCppClassName,
                               const GGS_lstring inExtension
                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String s ;
  if (inPath.length () > 0) {
    s << inPath << "/" ;
  }
  s << inCppClassName << "." << inExtension ;
  outFileNameWithPath = GGS_lstring (GGS_string (true, s), inCppClassName) ;
}

//---------------------------------------------------------------------------*

void
routine_appendJokersIfNeeded (C_Compiler &,
                              GGS_typeCplusPlusNameList & ioVariablesList,
                              GGS_uint inEffectiveArgumentsCount,
                              GGS_uint inFormalParametersCount,
                              GGS_typeCplusPlusName inNullName
                              COMMA_UNUSED_LOCATION_ARGS) {
  const PMUInt32 effectiveArgumentsCount = inEffectiveArgumentsCount.uintValue () ;
  const PMUInt32 formalParametersCount = inFormalParametersCount.uintValue () ;
  for (unsigned i=effectiveArgumentsCount ; i<formalParametersCount ; i++) {
    ioVariablesList.addAssign_operation (inNullName) ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.appendCppTitleComment (C_String ("Routine '") + mRoutineName + "'") ;
  inHfile << "void routine_" << mRoutineName << " (C_Compiler &" ;
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
  while (currentArgument.hasCurrentObject ()) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
    currentArgument.next () ;
  }
  inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                PMSInt32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
  inCppFile.appendCppTitleComment (C_String ("Implementation of routine \"") + mRoutineName + "\"") ;
  inCppFile << "void routine_" << mRoutineName << " (C_Compiler &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
    inCppFile << " inLexique" ;
  }
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
  inCppFile << " COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  #ifdef DEBUG_TRACE_ENABLED\n"
               "    printf (\"ENTER routine_" << mRoutineName << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
               "  #endif\n" ;
//--- Engendrer la liste d'instructions
  generateInstructionListForList (mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
//--- Fin de la fonction
  inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
               "    printf (\"LEAVE routine_" << mRoutineName << "\\n\") ;\n"
               "  #endif\n" ;
//---
  inCppFile << "}\n\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFonctionAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionAengendrer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.appendCppTitleComment (C_String ("Function '") + mFunctionName + "'") ;
  inHfile << "extern const C_galgas_function_descriptorEX kFunction_descriptor_" << mFunctionName << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ; 
  mReturnedType (HERE)->generateCppClassName (inHfile) ;
  inHfile << " function_" << mFunctionName << " (C_Compiler &" ;
  GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
  while (currentArgument.hasCurrentObject ()) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
    currentArgument.next () ;
  }
  inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFonctionAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionAengendrer::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                PMSInt32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
  inCppFile.appendCppTitleComment (C_String ("Implementation of function \"") + mFunctionName + "\"") ;
//--------------------------------- Function implementation
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " function_" << mFunctionName << " (C_Compiler &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
    inCppFile << " inLexique" ;
  }
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
  inCppFile << " COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  #ifdef DEBUG_TRACE_ENABLED\n"
               "    printf (\"ENTER function_" << mFunctionName << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
               "  #endif\n" ;
//--- Déclarer la variable locale utilisée comme résultat
  inCppFile << "  " ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " " ;
  mReturnedVar (HERE)->generateCplusPlusName (inCppFile) ;
  inCppFile << " ;\n" ;  
//--- Engendrer la liste d'instructions
  generateInstructionListForList (mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
//--- Fin de la fonction
  inCppFile << "  #ifdef DEBUG_TRACE_ENABLED\n"
               "    printf (\"LEAVE function_" << mFunctionName << "\\n\") ;\n"
               "  #endif\n" ;
//--- Engendrer l'instruction return
  inCppFile << "  return " ;
  mReturnedVar (HERE)->generateCplusPlusName (inCppFile) ;
  inCppFile << " ;\n" ;  
//---
  inCppFile << "}\n\n" ;

//--------------------------------- Function call for introspection
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "static GGS_object functionForGenericCall_" << mFunctionName << " (C_Compiler & inLexique,\n"
               "                           const GGS_objectlist & "
            << ((aListeTypeEtNomsArguments.count () == 0) ? "/* inEffectiveParameterArray */" : "inEffectiveParameterArray")
            << ",\n"
               "                           const GGS_location & "
            << ((aListeTypeEtNomsArguments.count () == 0) ? "/* inErrorLocation */" : "inErrorLocation")
            << "\n"
               "                           COMMA_LOCATION_ARGS) {\n" ;
  currentArgument.rewind () ;
  PMUInt32 idx = 0 ;
  while (currentArgument.hasCurrentObject ()) {
    inCppFile << "  const " ;
    currentArgument._mType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << " arg_" << cStringWithUnsigned (idx) << " = " ;
    currentArgument._mType (HERE) (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << "::castFromObject (inLexique, inEffectiveParameterArray.reader_mValueAtIndex (inLexique, GGS_uint (" << cStringWithUnsigned (idx) << ") COMMA_THERE), inErrorLocation COMMA_THERE) ;\n" ;
    idx ++ ;
    currentArgument.next () ;
  }
  inCppFile << "  const " ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " result = function_" << mFunctionName << " (inLexique" ;
  currentArgument.rewind () ;
  idx = 0 ;
  while (currentArgument.hasCurrentObject ()) {
    inCppFile << ",\n                            arg_" << cStringWithUnsigned (idx) ;
    idx ++ ;
    currentArgument.next () ;
  }
  inCppFile << "\n                            COMMA_THERE) ;\n" 
               "  return result.reader_object () ;\n"
               "}\n\n" ;

//--------------------------------- Function implementation
  inCppFile.appendCppHyphenLineComment () ;
  if (aListeTypeEtNomsArguments.count () == 0) {
    inCppFile << "const C_galgas_function_descriptorEX kFunction_descriptor_" << mFunctionName
              << " (\"" << mFunctionName << "\",\n"
                 "                              functionForGenericCall_" << mFunctionName << ",\n"
                 "                              & kTypeDescriptor_" ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << ",\n"
                 "                              0,\n"
                 "                              NULL) ;\n\n" ;
  }else{
    inCppFile << "static const C_galgas_type_descriptorEX *\n"
                 "kArgumentTypeList_" << mFunctionName << " ["
              << cStringWithSigned (aListeTypeEtNomsArguments.count ()) << "] = {" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (aListeTypeEtNomsArguments, true) ;
    bool first = true ;
    while (currentArgument.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        inCppFile << ",\n                              " ;
      }
      inCppFile << "& kTypeDescriptor_" ;
      currentArgument._mType (HERE) (HERE)->generateCppClassName (inCppFile) ;
      currentArgument.next () ;
    }
    inCppFile << "} ;\n\n" ;
    inCppFile << "const C_galgas_function_descriptorEX\n"
                 "kFunction_descriptor_" << mFunctionName
              << " (\"" << mFunctionName << "\",\n"
                 "                              functionForGenericCall_" << mFunctionName << ",\n"
                 "                              & kTypeDescriptor_" ;
    mReturnedType (HERE)->generateCppClassName (inCppFile) ;
    inCppFile << ",\n                              " << cStringWithSigned (aListeTypeEtNomsArguments.count ()) ;
    inCppFile << ",\n                              kArgumentTypeList_" << mFunctionName << ") ;\n\n" ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeOnceFunctionToGenerate::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeOnceFunctionToGenerate::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeOnceFunctionToGenerate::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile.appendCppTitleComment (C_String ("Once function '") + mFunctionName + "'") ;
  inHfile << "extern const C_galgas_function_descriptorEX kFunction_descriptor_" << mFunctionName << " ;\n\n" ;
  inHfile.appendCppHyphenLineComment () ; 
  mReturnedType (HERE)->generateCppClassName (inHfile) ;
  inHfile << " function_" << mFunctionName << " (C_Compiler & COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeOnceFunctionToGenerate::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOnceFunctionToGenerate::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & inEpilogueActions) const {
  inEpilogueActions << "  gCachedResultForOnceFunction_" << mFunctionName << ".drop () ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOnceFunctionToGenerate::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeOnceFunctionToGenerate::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                PMSInt32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
  inCppFile.appendCppTitleComment (C_String ("Implementation of once function \"") + mFunctionName + "\"") ;
//--------------------------------- Function implementation
  inCppFile << "static " ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " gCachedResultForOnceFunction_" << mFunctionName << " ;\n"
               "static bool gCacheFlagForOnceFunction_" << mFunctionName << " = false ;\n\n" ;
  inCppFile.appendCppHyphenLineComment () ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " function_" << mFunctionName << " (C_Compiler &" ;
  if (isLexiqueFormalArgumentUsedForList (mInstructionList, true)) {
    inCppFile << " inLexique" ;
  }
  inCppFile << " COMMA_UNUSED_LOCATION_ARGS) {\n"
               "  if (! gCacheFlagForOnceFunction_" << mFunctionName << ") {\n"
               "    #ifdef DEBUG_TRACE_ENABLED\n"
               "      printf (\"ENTER function_" << mFunctionName << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
               "    #endif\n" ;
//--- Déclarer la variable locale utilisée comme résultat
  inCppFile << "  " ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " " ;
  mReturnedVar (HERE)->generateCplusPlusName (inCppFile) ;
  inCppFile << " ;\n" ;  
//--- Engendrer la liste d'instructions
  inCppFile.incIndentation (+2) ;
  generateInstructionListForList (mInstructionList, inCppFile,
                                  inTargetFileName, ioPrototypeIndex,
                                  inGenerateDebug, true) ;
  inCppFile.incIndentation (-2) ;
//--- Fin de la fonction
  inCppFile << "    #ifdef DEBUG_TRACE_ENABLED\n"
               "      printf (\"LEAVE function_" << mFunctionName << "\\n\") ;\n"
               "    #endif\n"
               "    gCacheFlagForOnceFunction_" << mFunctionName << " = true ;\n"
               "    gCachedResultForOnceFunction_" << mFunctionName << " = " ;
  mReturnedVar (HERE)->generateCplusPlusName (inCppFile) ;
  inCppFile << " ;\n"
               "  }\n" ;
//--- Engendrer l'instruction return
  inCppFile << "  return gCachedResultForOnceFunction_" << mFunctionName << " ;\n" ;  
//---
  inCppFile << "}\n\n" ;

//--------------------------------- Function call for introspection
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "static GGS_object functionForGenericCall_" << mFunctionName << " (C_Compiler & inLexique,\n"
               "                           const GGS_objectlist & /* inEffectiveParameterArray */,\n"
               "                           const GGS_location & /* inErrorLocation */\n"
               "                           COMMA_LOCATION_ARGS) {\n"
               "  const " ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << " result = function_" << mFunctionName << " (inLexique\n"
               "                            COMMA_THERE) ;\n" 
               "  return result.reader_object () ;\n"
               "}\n\n" ;

//--------------------------------- Function implementation
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "const C_galgas_function_descriptorEX kFunction_descriptor_" << mFunctionName
            << " (\"" << mFunctionName << "\",\n"
               "                              functionForGenericCall_" << mFunctionName << ",\n"
               "                              & kTypeDescriptor_" ;
  mReturnedType (HERE)->generateCppClassName (inCppFile) ;
  inCppFile << ",\n"
               "                              0,\n"
               "                              NULL) ;\n\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeRoutineExterneAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineExterneAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineExterneAengendrer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  inHfile << "void routine_" << aNomAction << " (C_Compiler &" ;
  GGS_L_EXsignature::cEnumerator currentArgument (aSignature, true) ;
  while (currentArgument.hasCurrentObject ()) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
    currentArgument.next () ;
  }
  inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeRoutineExterneAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineExterneAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineExterneAengendrer::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeRoutineExterneAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inTargetFileName */,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
}


//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeFonctionExterneAengendrer::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionExterneAengendrer::
generatePredeclarations (AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionExterneAengendrer::
generateHdeclarations (AC_OutputStream & inHfile) const {
  mReturnedType (HERE)->generateCppClassName (inHfile) ;
  inHfile << " function_" << aNomAction << " (C_Compiler &" ;
  GGS_L_EXsignature::cEnumerator currentArgument (aSignature, true) ;
  while (currentArgument.hasCurrentObject ()) {
    inHfile << ",\n                                " ;
    generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
    currentArgument.next () ;
  }
  inHfile << " COMMA_LOCATION_ARGS) ;\n\n" ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeFonctionExterneAengendrer::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionExterneAengendrer::
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionExterneAengendrer::
generateCppClassDeclaration (AC_OutputStream & /* inHfile */,
                               const C_String & /* inTargetFileName */,
                               PMSInt32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeFonctionExterneAengendrer::
generateCppClassImplementation (C_Compiler & /* inLexique */,
                                AC_OutputStream & /* inCppFile */,
                                  const C_String & /* inTargetFileName */,
                                  PMSInt32 & /* ioPrototypeIndex */,
                                  const bool /* inGenerateDebug */) const {
}

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier ".h"                             *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_header_file (C_Compiler & inLexique,
                      const GGS_lstring & nomComposant,
                      const GGS_stringset & inIncludesForHeaderFile,
                      const GGS_string & inLexiqueName,
                      const GGS_typeEntitiesToGenerateList & listeEntitesAengendrer) {
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef " << nomComposant << "_DEFINED\n"
                 << "#define " << nomComposant << "_DEFINED\n"
                 << "\n#include <string.h>\n\n" ;

//--- Include declaration of predefined types
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"galgas/GGS__header.h\"\n" ;

//--- Generate lexique inclusion
  const C_String lexiqueName = inLexiqueName.string () ;
  if (lexiqueName.length () > 0) {
    generatedZone2 << "#include \""<< lexiqueName << ".h\"\n" ;
  }

  generatedZone2 << "\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  
//--- Generate include imported semantics components
  GGS_stringset::cEnumerator fileEnumerator (inIncludesForHeaderFile, true) ;
  if (fileEnumerator. hasCurrentObject ()) {
    generatedZone2.appendCppComment ("Include imported semantics") ;
    while (fileEnumerator. hasCurrentObject ()) {
      generatedZone2 << "#include \"" ;
      generatedZone2 << fileEnumerator._key (HERE) ;
      generatedZone2 << ".h\"\n" ;
      fileEnumerator.next () ;
    }
    generatedZone2 << "\n" ;
  }

  C_String generatedZone3 ; generatedZone3.setCapacity (200000) ;
//--- Generate classes declarations
  GGS_typeEntitiesToGenerateList::cEnumerator element (listeEntitesAengendrer, true) ;
  generatedZone3.appendCppTitleComment ("Class Predeclarations") ;
  while (element.hasCurrentObject ()) {
    element._mEntityToGenerate (HERE) (HERE)->generatePredeclarations (generatedZone3) ;
    element.next () ;
  }
  generatedZone3 << "\n" ;
  element.rewind () ;
  while (element.hasCurrentObject ()) {
    element._mEntityToGenerate (HERE) (HERE)->generateHdeclarations (generatedZone3) ;
    element.next () ;
  }
  element.rewind () ;
  while (element.hasCurrentObject ()) {
    element._mEntityToGenerate (HERE) (HERE)->generateHdeclarations_2 (generatedZone3, inLexique) ;
    element.next () ;
  }

//--- Engendrer la declaration de la classe de l'analyseur
  bool engendrerClasseCpp = false ;
  element.rewind () ;
  while (element.hasCurrentObject () && ! engendrerClasseCpp) {
    engendrerClasseCpp = element._mEntityToGenerate (HERE) (HERE)->isCppClassNeeded () ;
    element.next () ;
  }
  if (engendrerClasseCpp) {
    engendrerDeclarationPrototypesReglesDeProduction (nomComposant, listeEntitesAengendrer, generatedZone3) ;
  }
  
//--- Engendrer la fin du fichier
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          nomComposant + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

bool cPtr_typeCplusPlusName::isCurrentObject (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeCurrentObjectName::isCurrentObject (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCurrentObjectName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "_currentObject->" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeDirectName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeAutomaticName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "var_cas_" << mName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeLocationAutomaticName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "automatic_var_" ;
  inFile.appendSigned (mVariableLocation.location ()) ;
  inFile << "_" ;
  inFile.appendUnsigned (mSequenceNumber.uintValue ()) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppStarThisName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mGalgasTypeName << " (this)" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppThisInCategoryName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "operand_"
         << cStringWithSigned (mVariableLocation.location ()) ;
}

//---------------------------------------------------------------------------*

void cPtr_typeCppInheritedName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  inFile << "(*this) /* super */" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeOperandName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  if (mIteratorNewStyle.boolValue ()) {
    inFile << "enumerator_" << cStringWithSigned (mVariableLocation.location ())
           << "._" << mName << " (HERE)" ;
  }else{
    inFile << "operand_" << cStringWithSigned (mVariableLocation.location ()) << "->"
           << (mFieldKind.boolValue () ? "mInfo." : "")
           << mName ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeKeyName::
generateCplusPlusName (AC_OutputStream & inFile) const {
  if (mIteratorNewStyle.boolValue ()) {
    inFile << "enumerator_" << cStringWithSigned (mVariableLocation.location ()) << "._key (HERE)" ;
  }else{
    inFile << "operand_" << cStringWithSigned (mVariableLocation.location ()) << "->mKey" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_typeNullName::
generateCplusPlusName (AC_OutputStream & /* inFile */) const {
  printf ("*** Internal fatal error at %s:%d\n", __FILE__, __LINE__) ;
  exit (1) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
generateFormalArgumentFromTypeName (const C_String & inTypeName,
                                    const GGS_formalArgumentPassingModeAST & inFormalArgumentPassingMode,
                                    AC_OutputStream & inFile) {
  switch (inFormalArgumentPassingMode.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::enum_argumentIn :
    inFile << "GGS_" << inTypeName ;
    break ;
  case GGS_formalArgumentPassingModeAST::enum_argumentOut :
    inFile << "GGS_" << inTypeName << " &" ;
    break ;
  case GGS_formalArgumentPassingModeAST::enum_argumentInOut :
    inFile << "GGS_" << inTypeName << " &" ;
    break ;
  case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
    inFile << "const GGS_" << inTypeName ;
    break ;
  case GGS_formalArgumentPassingModeAST::kNotBuilt :
    break ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
generateFormalArgumentFromType (const cPtr_AC_galgasType * inTypePtr,
                                const GGS_formalArgumentPassingModeAST & inFormalArgumentPassingMode,
                                AC_OutputStream & inFile) {
  macroValidPointer (inTypePtr) ;
  switch (inFormalArgumentPassingMode.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::enum_argumentIn :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " " ;
    break ;
  case GGS_formalArgumentPassingModeAST::enum_argumentOut :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_formalArgumentPassingModeAST::enum_argumentInOut :
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " &" ;
    break ;
  case GGS_formalArgumentPassingModeAST::enum_argumentConstantIn :
    inFile << "const " ;
    inTypePtr->generateCppClassName (inFile) ;
    inFile << " " ;
    break ;
  case GGS_formalArgumentPassingModeAST::kNotBuilt :
    break ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateFormalParameter (AC_OutputStream & inFile,
                           const bool engendrerReference) {
  generateCppClassName (inFile) ;
  if (engendrerReference) {
    inFile << "&" ;
  }
  inFile << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generatePublicDeclaration (AC_OutputStream & inHfile,
                           const GGS_lstring & nomAttribut) {
  inHfile << "  public : " ;
  generateCppClassName (inHfile) ;
  inHfile << " " << nomAttribut << " ;\n" ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgasDomainType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mDomainTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_object::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_object" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_data::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_data" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_type::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_type" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_function::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_function" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_enum::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mEnumTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListmapType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListmapTypeName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_jokerInParameterList::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "??" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasExternType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_bool::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_bool" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_binaryset::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_binaryset" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_string::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_string" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_double::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_double" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_uint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_uint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_uint64 " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_sint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_sint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_sint64 " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_char::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_char" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedExternType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mGalgasClassName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lbool::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lbool " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lchar::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lchar " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_luint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_luint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_luint64 " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lsint " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lsint64::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lsint64 " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_ldouble::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_ldouble " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_lstring::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_lstring " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_stringset::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_stringset " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_location::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_location " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasSortedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedSortedListType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mListTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mMapTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mMapTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasClassType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_"  << mClassTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedClassType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mClassTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasUndefinedMapindexType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_" << mMapindexTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgasMapindexType::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_"  << mMapindexTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_filewrapper::
generateCppClassName (AC_OutputStream & inFile) const {
  inFile << "GGS_filewrapper " ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                     Engendrer le fichier C++                              *
//                                                                           *
//---------------------------------------------------------------------------*

static void
generate_cpp_file (C_Compiler & inLexique,
                   GGS_lstring & nomComposant,
                   GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                   GGS_stringset & tableFichiersEnTetePourFichierCPP) {
//--- Write file header
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include <typeinfo>\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"files/C_TextFileWrite.h\"\n"
                    "#include \"galgas/C_galgas_CLI_Options.h\"\n"
                    "#include \"" << nomComposant << ".h\"\n\n";

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--- Engendrer les fichiers d'inclusion correspondant aux methodes externes
  GGS_stringset::cEnumerator includeEnumerator (tableFichiersEnTetePourFichierCPP, true) ;
  if (includeEnumerator.hasCurrentObject ()) {
    generatedZone2.appendCppTitleComment ("Include directives generated by grammar includes") ;
  }
  while (includeEnumerator.hasCurrentObject ()) {
    generatedZone2 << "#include \"" << includeEnumerator._key (HERE) << "\"\n" ;
    includeEnumerator.next () ;
  }
  generatedZone2 << "\n" ;

//--- Generate debug ?
  const bool generateDebug = false ;
  if (generateDebug) {
    generatedZone2 << "//#define DEBUG_TRACE_ENABLED\n\n" ;
  }
                 
//--- Engendrer les implementations
  C_String generatedZone3 ; generatedZone3.setCapacity (2000000) ;
  GGS_typeEntitiesToGenerateList::cEnumerator element (listeEntitesAengendrer, true) ;
  PMSInt32 select_repeat_production_index = 0 ;
  while (element.hasCurrentObject ()) {
    element._mEntityToGenerate (HERE) (HERE)->generateCppClassImplementation (inLexique,
                                         generatedZone3,
                                         nomComposant,
                                         select_repeat_production_index,
                                         generateDebug) ;
    element.next () ;
  }
  
//--- Generate prologue et epilogue action
  C_String prologueActions ;
  C_String epilogueActions ;
  element.rewind () ;
  while (element.hasCurrentObject ()) {
    element._mEntityToGenerate (HERE) (HERE)->enterPrologueEpilogueAction (prologueActions, epilogueActions) ;
    element.next () ;
  }
  if ((prologueActions.length () > 0) || (epilogueActions.length () > 0)) {
    generatedZone3.appendCppTitleComment ("Prologue and epilogue actions") ;
    if (prologueActions.length () > 0) {
      generatedZone3 << "static void prologueRoutineFor_" << nomComposant << " (void) {\n"
                     << prologueActions
                     << "}\n\n" ;
      generatedZone3.appendCppHyphenLineComment () ;
    }
    if (epilogueActions.length () > 0) {
      generatedZone3 << "static void epilogueRoutineFor_" << nomComposant << " (void) {\n"
                     << epilogueActions
                     << "}\n\n" ;
      generatedZone3.appendCppHyphenLineComment () ;
    }
    generatedZone3 << "C_PrologueEpilogue prologueEpilogueObjectFor_" << nomComposant << " (" ;
    if (prologueActions.length () > 0) {
      generatedZone3 << "prologueRoutineFor_" << nomComposant ;
    }else{
      generatedZone3 << "NULL" ;
    }
    generatedZone3 << ", " ;
    if (epilogueActions.length () > 0) {
      generatedZone3 << "epilogueRoutineFor_" << nomComposant ;
    }else{
      generatedZone3 << "NULL" ;
    }
    generatedZone3 << ") ;\n\n" ;
  }

//--- Engendrer la fin du fichier
  generatedZone3.appendCppHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile ("//",
                          nomComposant + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                          Routine principale                               *
//                                                                           *
//---------------------------------------------------------------------------*

void
routine_generateSemanticsComponent (C_Compiler & inLexique,
                                    GGS_lstring & nomComposant,
                                    GGS_stringset & includesForHeaderFile,
                                    GGS_string & defLexique,
                                    GGS_typeEntitiesToGenerateList & listeEntitesAengendrer,
                                    GGS_stringset & tableFichiersEnTetePourFichierCPP
                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.currentFileErrorCount () == 0) {
    generate_header_file (inLexique,
                          nomComposant,
                          includesForHeaderFile,
                          defLexique,
                          listeEntitesAengendrer) ;
    generate_cpp_file (inLexique,
                       nomComposant,
                       listeEntitesAengendrer,
                       tableFichiersEnTetePourFichierCPP) ;
  }
}

//---------------------------------------------------------------------------*
