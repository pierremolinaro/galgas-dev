//---------------------------------------------------------------------------*
//                                                                           *
//  Generate enum class                                                      *
//                                                                           *
//  Copyright (C) 2004, ..., 2008 Pierre Molinaro.                           *
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

#include "semantics_semantics.h"
#include "semantics_instructions.h"

//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateHdeclarations_2 (AC_OutputStream & /* inHfile */,
                         C_Compiler & /* inLexique */) const {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generatePredeclarations (AC_OutputStream & inHfile) const {
  inHfile << "class GGS_" << mEnumTypeName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateHdeclarations (AC_OutputStream & inHfile) const {
//--- Compute bit count for BDDs (set operations)
  uint16 bitCount = 0 ;
  sint32 n = mConstantMap.count () ;
  while (n > 0) {
    bitCount ++ ;
    n >>= 1 ;
  }
  
  inHfile.writeCppTitleComment (C_String ("Class for '") + mEnumTypeName + "' Enumeration") ;
  
  inHfile << "class GGS_" << mEnumTypeName << " {\n"
             "//--- Enumeration\n"
             "  public : enum enumeration {kNotBuilt" ;
  GGS_enumConstantMap::cElement * constant = mConstantMap.firstObject () ;
  while (constant != NULL) {
    macroValidPointer (constant) ;
    inHfile << ", enum_" << constant->mKey ;
    constant = constant->nextObject () ;
  }
  inHfile << "} ;\n\n"
             "//--- Private attribute\n"
             "  private : enumeration mValue ;\n\n"
             "//--- Get value\n"
             "  public : inline enumeration enumValue (void) const { return mValue ; }\n\n"
             "//--- Default constructor\n"
             "  public : inline GGS_" << mEnumTypeName << " (void) : mValue (kNotBuilt) {}\n\n"
             "//--- Internal constructor\n"
             "  private : inline GGS_" << mEnumTypeName << " (const enumeration inValue) : mValue (inValue) {}\n\n"
             "//--- Bit count for bdd\n"
             "  public : static inline uint16 bitCount (void) { return " << bitCount << " ; }\n\n"
             "//--- Is built ?\n"
             "  public : bool _isBuilt (void) const ;\n\n"
             "//--- Construction from GALGAS constructor\n" ;
  constant = mConstantMap.firstObject () ;
  while (constant != NULL) {
    macroValidPointer (constant) ;
    if (constant->mInfo.mHasConstructor.boolValue ()) {
      inHfile << "  public : static inline GGS_" << mEnumTypeName
              << "  constructor_" << constant->mKey << " (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "    return GGS_" << mEnumTypeName << " (enum_" << constant->mKey << ") ;\n"
                 "  }\n" ;
    }
    constant = constant->nextObject () ;
  }
  inHfile << "\n" ;

//--- Messages
  inHfile << "//--- Readers\n" ;
  GGS_typeEnumMessageMap::cElement * m = mEnumMessageMap.firstObject () ;
  while (m != NULL) {
    macroValidPointer (m) ;
    inHfile << "  public : GGS_string reader_" << m->mKey << " (C_Compiler & _inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    m = m->nextObject () ;
  }
  inHfile << '\n' ;

//--- Modifiers
  inHfile << "//--- Modifiers\n" ;
  GGS_enumModifierMap::cElement * modifier = mEnumActionMap.firstObject () ;
  while (modifier != NULL) {
    macroValidPointer (modifier) ;
    inHfile << "  public : void modifier_" << modifier->mKey << " (C_Compiler & _inLexique" ;
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = modifier->mInfo.mArgumentTypeAndNameList.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n" ;
    modifier = modifier->nextObject () ;
  }
  inHfile << '\n' ;

//--- Methods
  inHfile << "//--- Methods\n" ;
  GGS_enumMethodMap::cElement * method = mMethodMap.firstObject () ;
  while (method != NULL) {
    macroValidPointer (method) ;
    inHfile << "  public : void method_" << method->mKey << " (C_Compiler & _inLexique" ;
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = method->mInfo.mArgumentTypeAndNameList.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) const ;\n" ;
    method = method->nextObject () ;
  }
  inHfile << '\n' ;


//--- Operators
  inHfile << "//--- Operators\n" ;
  GGS_enumOperatorMap::cElement * currentOperator = mOperatorMap.firstObject () ;
  while (currentOperator != NULL) {
    macroValidPointer (currentOperator) ;
    inHfile << "  public : GGS_" << mEnumTypeName << " operator_" << currentOperator->mKey
            << " (C_Compiler & _inLexique,\n"
               "           const GGS_" << mEnumTypeName << " & inOperand" ;
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = currentOperator->mInfo.mArgumentTypeAndNameList.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inHfile) ;
      currentArgument = currentArgument->nextObject () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) const ;\n" ;
    currentOperator = currentOperator->nextObject () ;
  }
  inHfile << '\n' ;

//--- 
  inHfile << "//--- 'description' reader\n"
             "  public : GGS_string reader_description (C_Compiler & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n\n"
             "//--- Drop operation\n"
             "  public : inline void _drop_operation (void) { mValue = kNotBuilt ; }\n\n"
             "//--- Comparison operators\n"           
             "  public : GGS_bool _operator_isEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool _operator_isNotEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool _operator_infOrEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool _operator_supOrEqual (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool _operator_strictInf (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "  public : GGS_bool _operator_strictSup (const GGS_" << mEnumTypeName << " inOperand) const ;\n"
             "} ;\n\n" ;
} 

//---------------------------------------------------------------------------*

bool cPtr_enumGalgasType::isCppClassNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateCppClassDeclaration (AC_OutputStream & /*inHfile */,
                               const C_String & /* inTargetFileName*/,
                               sint32 & /* ioPrototypeIndex */) const {
}

//---------------------------------------------------------------------------*

void cPtr_enumGalgasType::
generateCppClassImplementation (C_Compiler & inCompiler,
                                AC_OutputStream & inCppFile,
                                const C_String & inTargetFileName,
                                sint32 & ioPrototypeIndex,
                                const bool inGenerateDebug) const {
  inCppFile.writeCppTitleComment (C_String ("Class for '") + mEnumTypeName + "' Enumeration") ;
  
  inCppFile << "bool GGS_" << mEnumTypeName
            << "::\n"
               "_isBuilt (void) const {\n"
               "  return mValue > kNotBuilt ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_isEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue == inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_isNotEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue != inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_infOrEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue <= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_supOrEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue >= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_strictInf (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue < inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.writeCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_strictSup (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue > inOperand.mValue) ;\n"
               "}\n\n" ;

//--- Readers
  GGS_typeEnumMessageMap::cElement * m = mEnumMessageMap.firstObject () ;
  while (m != NULL) {
    macroValidPointer (m) ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << mEnumTypeName << "::\n"
                 "reader_" << m->mKey << " (C_Compiler & /* _inLexique */\n"
                 "                       COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  const char * kMessages [" << (m->mInfo.mMessageStringList.count () + 1) << "] = {\"\"" ;
    GGS_lstringlist::cElement * e = m->mInfo.mMessageStringList.firstObject () ;
    while (e != NULL) {
      macroValidPointer (e) ;
      inCppFile << ",\n    " ;
      inCppFile.writeCstringConstant (e->mValue) ;
      e = e->nextObject () ;
    } 
    inCppFile << "\n  } ;\n"
                 "  return GGS_string (mValue > 0, kMessages [mValue]) ;\n"
                 "}\n\n" ;
    m = m->nextObject () ;
  }

//--- Modifiers
  GGS_enumModifierMap::cElement * modifier = mEnumActionMap.firstObject () ;
  while (modifier != NULL) {
    macroValidPointer (modifier) ;
    GGS_enumModifierDefinitionList::cElement * definition = modifier->mInfo.mActionDefinitionList.firstObject ()  ;
    bool lexiqueIsUsed = false ;
    while ((definition != NULL) && ! lexiqueIsUsed) {
      macroValidPointer (definition) ;
      lexiqueIsUsed = isLexiqueFormalArgumentUsedForList (definition->mInstructionList, true) ;
      definition = definition->nextObject () ;
    }
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mEnumTypeName << "::\n"
                 "modifier_" << modifier->mKey << " (C_Compiler &" ;
    if (lexiqueIsUsed) {
      inCppFile << " _inLexique" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = modifier->mInfo.mArgumentTypeAndNameList.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
      bool variableIsUsed = false ;
      definition = modifier->mInfo.mActionDefinitionList.firstObject ()  ;
      while ((definition != NULL) && ! variableIsUsed) {
        macroValidPointer (definition) ;
        variableIsUsed = formalArgumentIsUsedForList (definition->mInstructionList, currentArgument->mCppName, true) ;
        definition = definition->nextObject () ;
      }
      inCppFile << ' ' ;
      if (! variableIsUsed) {
        inCppFile << "/* " ;
      }
      currentArgument->mCppName (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableIsUsed) {
        inCppFile << " */" ;
      }
      currentArgument = currentArgument->nextObject () ;
    }
    inCppFile << "\n                                " ;
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  #ifdef DEBUG_TRACE_ENABLED\n"
                 "    printf (\"ENTER GGS_" << mEnumTypeName << "::modifier_" << modifier->mKey << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
                 "  #endif\n"
                 "  switch (mValue) {\n" ;
    definition = modifier->mInfo.mActionDefinitionList.firstObject () ;
    while (definition != NULL) {
      macroValidPointer (definition) ;
      inCppFile << "  case enum_" << definition->mSourceState << ":\n"
                   "    mValue = enum_" << definition->mTargetState << " ;\n" ;
      inCppFile.incIndentation (2) ;
      generateInstructionListForList (definition->mInstructionList,
                                      inCppFile,
                                      inTargetFileName,
                                      ioPrototypeIndex,
                                      inGenerateDebug,
                                      true) ;
      inCppFile.incIndentation (-2) ;
      inCppFile << "    break ;\n" ;
      definition = definition->nextObject () ;
    }
    inCppFile << "  default : break ;\n"
                 "  }\n"
                 "}\n\n" ;
    modifier = modifier->nextObject () ;
  }

//--- Methods
  GGS_enumMethodMap::cElement * method = mMethodMap.firstObject () ;
  while (method != NULL) {
    macroValidPointer (method) ;
    GGS_enumMethodDefinitionList::cElement * definition = method->mInfo.mActionDefinitionList.firstObject ()  ;
    bool lexiqueIsUsed = false ;
    while ((definition != NULL) && ! lexiqueIsUsed) {
      macroValidPointer (definition) ;
      lexiqueIsUsed = isLexiqueFormalArgumentUsedForList (definition->mInstructionList, true) ;
      definition = definition->nextObject () ;
    }
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mEnumTypeName << "::\n"
                 "method_" << method->mKey << " (C_Compiler &" ;
    if (lexiqueIsUsed) {
      inCppFile << " _inLexique" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = method->mInfo.mArgumentTypeAndNameList.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
      bool variableIsUsed = false ;
      definition = method->mInfo.mActionDefinitionList.firstObject ()  ;
      while ((definition != NULL) && ! variableIsUsed) {
        macroValidPointer (definition) ;
        variableIsUsed = formalArgumentIsUsedForList (definition->mInstructionList, currentArgument->mCppName, true) ;
        definition = definition->nextObject () ;
      }
      inCppFile << ' ' ;
      if (! variableIsUsed) {
        inCppFile << "/* " ;
      }
      currentArgument->mCppName (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableIsUsed) {
        inCppFile << " */" ;
      }
      currentArgument = currentArgument->nextObject () ;
    }
    inCppFile << "\n                                " ;
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  #ifdef DEBUG_TRACE_ENABLED\n"
                 "    printf (\"ENTER GGS_" << mEnumTypeName << "::modifier_" << method->mKey << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
                 "  #endif\n"
                 "  switch (mValue) {\n" ;
    definition = method->mInfo.mActionDefinitionList.firstObject () ;
    while (definition != NULL) {
      macroValidPointer (definition) ;
      inCppFile << "  case enum_" << definition->mSourceState << ":\n" ;
      inCppFile.incIndentation (2) ;
      generateInstructionListForList (definition->mInstructionList,
                                      inCppFile,
                                      inTargetFileName,
                                      ioPrototypeIndex,
                                      inGenerateDebug,
                                      true) ;
      inCppFile.incIndentation (-2) ;
      inCppFile << "    break ;\n" ;
      definition = definition->nextObject () ;
    }
    inCppFile << "  default : break ;\n"
                 "  }\n"
                 "}\n\n" ;
    method = method->nextObject () ;
  }


//--- Operators
  const sint32 constantCount = mConstantMap.count () ;
  const sint32 squareConstantCount = constantCount * constantCount ;
  TC_UniqueArray <C_String> constantNameArray (constantCount COMMA_HERE) ;
  GGS_enumConstantMap::cElement * constant = mConstantMap.firstObject () ;
  while (constant != NULL) {
    macroValidPointer (constant) ;
    constantNameArray.addObject (C_String ("enum_") + constant->mKey) ;
    constant = constant->nextObject () ;
  }
  GGS_enumOperatorMap::cElement * currentOperator = mOperatorMap.firstObject () ;
  while (currentOperator != NULL) {
    macroValidPointer (currentOperator) ;
    TC_UniqueArray <C_String> resultArray (constantCount * constantCount COMMA_HERE) ;
    TC_UniqueArray <sint32> errorArray (constantCount * constantCount COMMA_HERE) ;
    const C_String defaultResult = C_String ("kNotBuilt") ;
    for (sint32 i=0 ; i<squareConstantCount ; i++) {
      resultArray (i COMMA_HERE) = defaultResult ;
      errorArray (i COMMA_HERE) = -1 ; // 'Internal error: combination not handled
    }
    GGS_enumOperatorDefinitionList::cElement * definition = currentOperator->mInfo.mActionDefinitionList.firstObject ()  ;
    sint32 errorMessageIndex = 1 ;
    while (definition != NULL) {
      macroValidPointer (definition) ;
      const sint32 kIndex = ((sint32) definition->mLeftSourceStateIndex.uintValue ()) * constantCount + (sint32) definition->mRightSourceStateIndex.uintValue () ;
      resultArray (kIndex COMMA_HERE) = C_String ("enum_") + definition->mTargetState.string () ;
      if (errorArray (kIndex COMMA_HERE) != -1) { // Currently undefined
        definition->mLeftSourceStateIndex.signalSemanticError (inCompiler, "This combination is already defined" COMMA_HERE) ;
      }
      if (definition->mInstructionList.count () == 0) {
        errorArray (kIndex COMMA_HERE) = 0 ; // No Error
      }else{
        errorArray (kIndex COMMA_HERE) = errorMessageIndex ;
        errorMessageIndex ++ ;
      }
      definition = definition->nextObject () ;
    }
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "static const GGS_" << mEnumTypeName << "::enumeration kResultFor" << mEnumTypeName
              << "_" << currentOperator->mKey
              << " [" << squareConstantCount << "] = {" ;
    for (sint32 leftOp=0 ; leftOp<constantCount ; leftOp++) {
      for (sint32 rightOp=0 ; rightOp<constantCount ; rightOp++) {
        const sint32 kIndex = leftOp * constantCount + rightOp ;
        inCppFile << "\n  "
                     "GGS_" << mEnumTypeName << "::" << resultArray (kIndex COMMA_HERE) ;
        if (kIndex < (squareConstantCount-1)) {
          inCppFile << "," ;
        }
        inCppFile << " /* " << constantNameArray (leftOp COMMA_HERE) << ", " << constantNameArray (rightOp COMMA_HERE) << " */" ;
      }
    }
    inCppFile << "\n} ;\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "static const sint32 kErrorFor" << mEnumTypeName
              << "_" << currentOperator->mKey
              << " [" << squareConstantCount << "] = {" ;
    for (sint32 leftOp=0 ; leftOp<constantCount ; leftOp++) {
      for (sint32 rightOp=0 ; rightOp<constantCount ; rightOp++) {
        const sint32 kIndex = leftOp * constantCount + rightOp ;
        inCppFile << "\n  " << errorArray (kIndex COMMA_HERE) ;
        if (kIndex < (squareConstantCount-1)) {
          inCppFile << "," ;
        }
        inCppFile << " /* " << constantNameArray (leftOp COMMA_HERE) << ", " << constantNameArray (rightOp COMMA_HERE) << " */" ;
      }
    }
    inCppFile << "\n} ;\n\n" ;
    inCppFile.writeCppHyphenLineComment () ;
    inCppFile << "GGS_" << mEnumTypeName << " GGS_" << mEnumTypeName << "::\n"
                 "operator_" << currentOperator->mKey
              << " (C_Compiler & _inLexique,\n"
                 "                                const GGS_" << mEnumTypeName << " & inOperand" ;
    GGS_typeListeTypesEtNomsArgMethode::cElement * currentArgument = currentOperator->mInfo.mArgumentTypeAndNameList.firstObject () ;
    while (currentArgument != NULL) {
      macroValidPointer (currentArgument) ;
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument->mType (HERE), currentArgument->mFormalArgumentPassingMode, inCppFile) ;
      bool variableIsUsed = false ;
      definition = currentOperator->mInfo.mActionDefinitionList.firstObject ()  ;
      while ((definition != NULL) && ! variableIsUsed) {
        macroValidPointer (definition) ;
        variableIsUsed = formalArgumentIsUsedForList (definition->mInstructionList, currentArgument->mCppName, true) ;
        definition = definition->nextObject () ;
      }
      inCppFile << ' ' ;
      if (! variableIsUsed) {
        inCppFile << "/* " ;
      }
      currentArgument->mCppName (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableIsUsed) {
        inCppFile << " */" ;
      }
      currentArgument = currentArgument->nextObject () ;
    }
    inCppFile << "\n                                " ;
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  #ifdef DEBUG_TRACE_ENABLED\n"
                 "    printf (\"ENTER GGS_" << mEnumTypeName << "::operator_" << currentOperator->mKey << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
                 "  #endif\n"
                 "  enumeration result = kNotBuilt ;\n"
                 "  if ((mValue > 0) && (inOperand.mValue > 0)) {\n"
                 "    const sint32 kIndex = (mValue - 1) * " << mConstantMap.count () << " + inOperand.mValue - 1 ;\n"
                 "    result = kResultFor" << mEnumTypeName
              << "_" << currentOperator->mKey << " [kIndex] ;\n"
                 "    const sint32 error = kErrorFor" << mEnumTypeName
              << "_" << currentOperator->mKey << " [kIndex] ;\n"
                 "    if (error != 0) {\n"
                 "      switch (error) {\n" ;
    definition = currentOperator->mInfo.mActionDefinitionList.firstObject ()  ;
    errorMessageIndex = 1 ;
    while (definition != NULL) {
      macroValidPointer (definition) ;
      if (definition->mInstructionList.count () > 0) {
        inCppFile << "      case " << errorMessageIndex << ":\n" ;
        errorMessageIndex ++ ;
        inCppFile.incIndentation (6) ;
        generateInstructionListForList (definition->mInstructionList,
                                        inCppFile,
                                        inTargetFileName,
                                        ioPrototypeIndex,
                                        inGenerateDebug,
                                        true) ;
        inCppFile.incIndentation (-6) ;
        inCppFile << "      break ;\n" ;
      }
      definition = definition->nextObject () ;
    }
    inCppFile << "      default: // error == -1\n"
                 "        { C_String errorMessage ;\n"
                 "          errorMessage << \"Unhandled configuration in enum operator\" ;\n"
                 "          _inLexique.onTheFlySemanticError (errorMessage COMMA_HERE) ;\n"
                 "        }\n"
                 "      break ;\n"
                 "      }\n"
                 "    }\n"
                 "  }\n"
                 "  return GGS_" << mEnumTypeName << " (result) ;\n"
                 "}\n\n" ;
    currentOperator = currentOperator->nextObject () ;
  }

//---
  inCppFile.writeCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mEnumTypeName
            << "::\n"
               "reader_description (C_Compiler & /* _inLexique */\n"
               "                    COMMA_UNUSED_LOCATION_ARGS,\n"
               "                    const sint32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<enum @" << mEnumTypeName << "\" ;\n"
               "  switch (mValue) {\n" ;
  constant = mConstantMap.firstObject () ;
  while (constant != NULL) {
    macroValidPointer (constant) ;
    inCppFile << "  case enum_" << constant->mKey << ":\n"
                 "    s << \" "  << constant->mKey << ">\" ;\n"
                 "    break ;\n" ;
    constant = constant->nextObject () ;
  } 
  inCppFile << "  case kNotBuilt:\n"
               "    s << \" (not built)>\" ;\n"
               "    break ;\n"
               "  }\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

}

//---------------------------------------------------------------------------*
