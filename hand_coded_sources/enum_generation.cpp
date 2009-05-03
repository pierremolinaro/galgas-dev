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
  
  inHfile.appendCppTitleComment (C_String ("Class for '") + mEnumTypeName + "' Enumeration") ;
  
  inHfile << "class GGS_" << mEnumTypeName << " {\n"
             "//--- Enumeration\n"
             "  public : enum enumeration {kNotBuilt" ;
  GGS_enumConstantMap::cEnumerator constant (mConstantMap, true) ;
  while (constant.hc ()) {
    inHfile << ", enum_" << constant._key (HERE) ;
    constant.next () ;
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
  constant.rewind () ;
  while (constant.hc ()) {
    if (constant._mHasConstructor (HERE).boolValue ()) {
      inHfile << "  public : static inline GGS_" << mEnumTypeName
              << "  constructor_" << constant._key (HERE) << " (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "    return GGS_" << mEnumTypeName << " (enum_" << constant._key (HERE) << ") ;\n"
                 "  }\n" ;
    }
    constant.next () ;
  }
  inHfile << "\n" ;

//--- Messages
  inHfile << "//--- Readers\n" ;
  GGS_typeEnumMessageMap::cEnumerator m (mEnumMessageMap) ;
  while (m.hc ()) {
    inHfile << "  public : GGS_string reader_" << m._key (HERE) << " (C_Compiler & _inLexique COMMA_LOCATION_ARGS) const ;\n" ;
    m.next () ;
  }
  inHfile << "\n" ;

//--- Modifiers
  inHfile << "//--- Modifiers\n" ;
  GGS_enumModifierMap::cEnumerator modifier (mEnumActionMap) ;
  while (modifier.hc ()) {
    inHfile << "  public : void modifier_" << modifier._key (HERE) << " (C_Compiler & _inLexique" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (modifier._mArgumentTypeAndNameList (HERE), true) ;
    while (currentArgument.hc ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      currentArgument.next () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) ;\n" ;
    modifier.next () ;
  }
  inHfile << "\n" ;

//--- Methods
  inHfile << "//--- Methods\n" ;
  GGS_enumMethodMap::cEnumerator method (mMethodMap) ;
  while (method.hc ()) {
    inHfile << "  public : void method_" << method._key (HERE) << " (C_Compiler & _inLexique" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (method._mArgumentTypeAndNameList (HERE), true) ;
    while (currentArgument.hc ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE)(HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      currentArgument.next () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) const ;\n" ;
    method.next () ;
  }
  inHfile << "\n" ;


//--- Operators
  inHfile << "//--- Operators\n" ;
  GGS_enumOperatorMap::cEnumerator currentOperator (mOperatorMap) ;
  while (currentOperator.hc ()) {
    inHfile << "  public : GGS_" << mEnumTypeName << " operator_" << currentOperator._key (HERE)
            << " (C_Compiler & _inLexique,\n"
               "           const GGS_" << mEnumTypeName << " & inOperand" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (currentOperator._mArgumentTypeAndNameList (HERE), true) ;
    while (currentArgument.hc ()) {
      inHfile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inHfile) ;
      currentArgument.next () ;
    }
    inHfile << "\n                                "
               "COMMA_LOCATION_ARGS) const ;\n" ;
    currentOperator.next () ;
  }
  inHfile << "\n" ;

//--- 
  inHfile << "//--- 'description' reader\n"
             "  public : GGS_string reader_description (C_Compiler & _inLexique\n"
             "                                          COMMA_LOCATION_ARGS,\n"
             "                                          const sint32 inIndentation = 0) const ;\n\n"
             "//--- Drop operation\n"
             "  public : inline void _drop (void) { mValue = kNotBuilt ; }\n\n"
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
enterPrologueEpilogueAction (AC_OutputStream & /* inPrologueActions */,
                             AC_OutputStream & /* inEpilogueActions */) const {
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
  inCppFile.appendCppTitleComment (C_String ("Class for '") + mEnumTypeName + "' Enumeration") ;
  
  inCppFile << "bool GGS_" << mEnumTypeName
            << "::\n"
               "_isBuilt (void) const {\n"
               "  return mValue > kNotBuilt ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_isEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue == inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_isNotEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue != inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_infOrEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue <= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_supOrEqual (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue >= inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_strictInf (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue < inOperand.mValue) ;\n"
               "}\n\n" ;

  inCppFile.appendCppHyphenLineComment () ;

  inCppFile << "GGS_bool GGS_" << mEnumTypeName
            << "::\n"
               "_operator_strictSup (const GGS_" << mEnumTypeName << " inOperand) const {\n"
               "  return GGS_bool (_isBuilt () && inOperand._isBuilt (),\n"
               "                   mValue > inOperand.mValue) ;\n"
               "}\n\n" ;

//--- Readers
  GGS_typeEnumMessageMap::cEnumerator m (mEnumMessageMap) ;
  while (m .hc ()) {
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "GGS_string GGS_" << mEnumTypeName << "::\n"
                 "reader_" << m._key (HERE) << " (C_Compiler & /* _inLexique */\n"
                 "                       COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  const char * kMessages [" << (m._mMessageStringList (HERE).count () + 1) << "] = {\"\"" ;
    GGS_lstringlist::cEnumerator e (m._mMessageStringList (HERE), true) ;
    while (e.hc ()) {
      inCppFile << ",\n    " ;
      inCppFile.appendCLiteralStringConstant (e._mValue (HERE)) ;
      e.next () ;
    } 
    inCppFile << "\n  } ;\n"
                 "  return GGS_string (mValue > 0, kMessages [mValue]) ;\n"
                 "}\n\n" ;
    m.next () ;
  }

//--- Modifiers
  GGS_enumModifierMap::cEnumerator modifier (mEnumActionMap) ;
  while (modifier.hc ()) {
    GGS_enumModifierDefinitionList::cEnumerator definition (modifier._mActionDefinitionList (HERE), true)  ;
    bool lexiqueIsUsed = false ;
    while (definition.hc () && ! lexiqueIsUsed) {
      lexiqueIsUsed = isLexiqueFormalArgumentUsedForList (definition._mInstructionList (HERE), true) ;
      definition.next () ;
    }
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mEnumTypeName << "::\n"
                 "modifier_" << modifier._key (HERE) << " (C_Compiler &" ;
    if (lexiqueIsUsed) {
      inCppFile << " _inLexique" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (modifier._mArgumentTypeAndNameList (HERE), true) ;
    while (currentArgument.hc ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      bool variableIsUsed = false ;
      definition.rewind ()  ;
      while (definition.hc () && ! variableIsUsed) {
        variableIsUsed = formalArgumentIsUsedForList (definition._mInstructionList (HERE), currentArgument._mCppName (HERE), true) ;
        definition.next () ;
      }
      inCppFile << " " ;
      if (! variableIsUsed) {
        inCppFile << "/* " ;
      }
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableIsUsed) {
        inCppFile << " */" ;
      }
      currentArgument.next () ;
    }
    inCppFile << "\n                                " ;
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS) {\n"
                 "  #ifdef DEBUG_TRACE_ENABLED\n"
                 "    printf (\"ENTER GGS_" << mEnumTypeName << "::modifier_" << modifier._key (HERE) << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
                 "  #endif\n"
                 "  switch (mValue) {\n" ;
    definition.rewind () ;
    while (definition.hc ()) {
      inCppFile << "  case enum_" << definition._mSourceState (HERE) << ":\n"
                   "    mValue = enum_" << definition._mTargetState (HERE) << " ;\n" ;
      inCppFile.incIndentation (2) ;
      generateInstructionListForList (definition._mInstructionList (HERE),
                                      inCppFile,
                                      inTargetFileName,
                                      ioPrototypeIndex,
                                      inGenerateDebug,
                                      true) ;
      inCppFile.incIndentation (-2) ;
      inCppFile << "    break ;\n" ;
      definition.next () ;
    }
    inCppFile << "  default : break ;\n"
                 "  }\n"
                 "}\n\n" ;
    modifier.next () ;
  }

//--- Methods
  GGS_enumMethodMap::cEnumerator method (mMethodMap) ;
  while (method.hc ()) {
    GGS_enumMethodDefinitionList::cEnumerator definition (method._mActionDefinitionList (HERE), true)  ;
    bool lexiqueIsUsed = false ;
    while (definition.hc () && ! lexiqueIsUsed) {
      lexiqueIsUsed = isLexiqueFormalArgumentUsedForList (definition._mInstructionList (HERE), true) ;
      definition.next () ;
    }
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "void GGS_" << mEnumTypeName << "::\n"
                 "method_" << method._key (HERE) << " (C_Compiler &" ;
    if (lexiqueIsUsed) {
      inCppFile << " _inLexique" ;
    }
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (method._mArgumentTypeAndNameList (HERE), true) ;
    while (currentArgument.hc ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      bool variableIsUsed = false ;
      definition.rewind ()  ;
      while (definition.hc () && ! variableIsUsed) {
        variableIsUsed = formalArgumentIsUsedForList (definition._mInstructionList (HERE), currentArgument._mCppName (HERE), true) ;
        definition.next () ;
      }
      inCppFile << " " ;
      if (! variableIsUsed) {
        inCppFile << "/* " ;
      }
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableIsUsed) {
        inCppFile << " */" ;
      }
      currentArgument.next () ;
    }
    inCppFile << "\n                                " ;
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  #ifdef DEBUG_TRACE_ENABLED\n"
                 "    printf (\"ENTER GGS_" << mEnumTypeName << "::modifier_" << method._key (HERE) << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
                 "  #endif\n"
                 "  switch (mValue) {\n" ;
    definition.rewind () ;
    while (definition.hc ()) {
      inCppFile << "  case enum_" << definition._mSourceState (HERE) << ":\n" ;
      inCppFile.incIndentation (2) ;
      generateInstructionListForList (definition._mInstructionList (HERE),
                                      inCppFile,
                                      inTargetFileName,
                                      ioPrototypeIndex,
                                      inGenerateDebug,
                                      true) ;
      inCppFile.incIndentation (-2) ;
      inCppFile << "    break ;\n" ;
      definition.next () ;
    }
    inCppFile << "  default : break ;\n"
                 "  }\n"
                 "}\n\n" ;
    method.next () ;
  }


//--- Operators
  const sint32 constantCount = mConstantMap.count () ;
  const sint32 squareConstantCount = constantCount * constantCount ;
  TC_UniqueArray <C_String> constantNameArray (constantCount COMMA_HERE) ;
  GGS_enumConstantMap::cEnumerator constant (mConstantMap, true) ;
  while (constant.hc ()) {
    constantNameArray.addObject (C_String ("enum_") + constant._key (HERE)) ;
    constant.next () ;
  }
  GGS_enumOperatorMap::cEnumerator currentOperator (mOperatorMap) ;
  while (currentOperator.hc ()) {
    TC_UniqueArray <C_String> resultArray (constantCount * constantCount COMMA_HERE) ;
    TC_UniqueArray <sint32> errorArray (constantCount * constantCount COMMA_HERE) ;
    const C_String defaultResult = C_String ("kNotBuilt") ;
    for (sint32 i=0 ; i<squareConstantCount ; i++) {
      resultArray.addObject (defaultResult) ;
      errorArray.addObject (-1) ; // 'Internal error: combination not handled
    }
    GGS_enumOperatorDefinitionList::cEnumerator definition (currentOperator._mActionDefinitionList (HERE), true)  ;
    sint32 errorMessageIndex = 1 ;
    while (definition.hc ()) {
      const sint32 kIndex = ((sint32) definition._mLeftSourceStateIndex (HERE).uintValue ()) * constantCount
                          + (sint32) definition._mRightSourceStateIndex (HERE).uintValue () ;
      resultArray (kIndex COMMA_HERE) = C_String ("enum_") + definition._mTargetState (HERE).string () ;
      if (errorArray (kIndex COMMA_HERE) != -1) { // Currently undefined
        definition._mLeftSourceStateIndex (HERE).signalSemanticError (inCompiler, "This combination is already defined" COMMA_HERE) ;
      }
      if (definition._mInstructionList (HERE).count () == 0) {
        errorArray (kIndex COMMA_HERE) = 0 ; // No Error
      }else{
        errorArray (kIndex COMMA_HERE) = errorMessageIndex ;
        errorMessageIndex ++ ;
      }
      definition.next () ;
    }
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "static const GGS_" << mEnumTypeName << "::enumeration kResultFor" << mEnumTypeName
              << "_" << currentOperator._key (HERE)
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
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "static const sint32 kErrorFor" << mEnumTypeName
              << "_" << currentOperator._key (HERE)
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
    inCppFile.appendCppHyphenLineComment () ;
    inCppFile << "GGS_" << mEnumTypeName << " GGS_" << mEnumTypeName << "::\n"
                 "operator_" << currentOperator._key (HERE)
              << " (C_Compiler & _inLexique,\n"
                 "                                const GGS_" << mEnumTypeName << " & inOperand" ;
    GGS_typeListeTypesEtNomsArgMethode::cEnumerator currentArgument (currentOperator._mArgumentTypeAndNameList (HERE), true) ;
    while (currentArgument.hc ()) {
      inCppFile << ",\n                                " ;
      generateFormalArgumentFromType (currentArgument._mType (HERE) (HERE), currentArgument._mFormalArgumentPassingMode (HERE), inCppFile) ;
      bool variableIsUsed = false ;
      definition.rewind ()  ;
      while (definition.hc () && ! variableIsUsed) {
        variableIsUsed = formalArgumentIsUsedForList (definition._mInstructionList (HERE), currentArgument._mCppName (HERE), true) ;
        definition.next () ;
      }
      inCppFile << " " ;
      if (! variableIsUsed) {
        inCppFile << "/* " ;
      }
      currentArgument._mCppName (HERE) (HERE)->generateCplusPlusName (inCppFile) ;
      if (! variableIsUsed) {
        inCppFile << " */" ;
      }
      currentArgument.next () ;
    }
    inCppFile << "\n                                " ;
    inCppFile << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
                 "  #ifdef DEBUG_TRACE_ENABLED\n"
                 "    printf (\"ENTER GGS_" << mEnumTypeName << "::operator_" << currentOperator._key (HERE) << " at %s:%d\\n\", __FILE__, __LINE__) ;\n"
                 "  #endif\n"
                 "  enumeration result = kNotBuilt ;\n"
                 "  if ((mValue > 0) && (inOperand.mValue > 0)) {\n"
                 "    const sint32 kIndex = (mValue - 1) * " << mConstantMap.count () << " + inOperand.mValue - 1 ;\n"
                 "    result = kResultFor" << mEnumTypeName
              << "_" << currentOperator._key (HERE) << " [kIndex] ;\n"
                 "    const sint32 error = kErrorFor" << mEnumTypeName
              << "_" << currentOperator._key (HERE) << " [kIndex] ;\n"
                 "    if (error != 0) {\n"
                 "      switch (error) {\n" ;
    definition.rewind ()  ;
    errorMessageIndex = 1 ;
    while (definition. hc ()) {
      if (definition._mInstructionList (HERE).count () > 0) {
        inCppFile << "      case " << errorMessageIndex << ":\n" ;
        errorMessageIndex ++ ;
        inCppFile.incIndentation (6) ;
        generateInstructionListForList (definition._mInstructionList (HERE),
                                        inCppFile,
                                        inTargetFileName,
                                        ioPrototypeIndex,
                                        inGenerateDebug,
                                        true) ;
        inCppFile.incIndentation (-6) ;
        inCppFile << "      break ;\n" ;
      }
      definition.next () ;
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
    currentOperator.next () ;
  }

//---
  inCppFile.appendCppHyphenLineComment () ;
  inCppFile << "GGS_string GGS_" << mEnumTypeName
            << "::\n"
               "reader_description (C_Compiler & /* _inLexique */\n"
               "                    COMMA_UNUSED_LOCATION_ARGS,\n"
               "                    const sint32 /* inIndentation */) const {\n"
               "  C_String s ;\n"
               "  s << \"<enum @" << mEnumTypeName << "\" ;\n"
               "  switch (mValue) {\n" ;
  constant.rewind () ;
  while (constant.hc ()) {
    inCppFile << "  case enum_" << constant._key (HERE) << ":\n"
                 "    s << \" "  << constant._key (HERE) << ">\" ;\n"
                 "    break ;\n" ;
    constant.next () ;
  } 
  inCppFile << "  case kNotBuilt:\n"
               "    s << \" (not built)>\" ;\n"
               "    break ;\n"
               "  }\n"
               "  return GGS_string (true, s) ;\n"
               "}\n\n" ;

}

//---------------------------------------------------------------------------*
