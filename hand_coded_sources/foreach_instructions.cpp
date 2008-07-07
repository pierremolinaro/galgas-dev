//---------------------------------------------------------------------------*
//                                                                           *
//  Generate 'foreach' instructions                                          *
//                                                                           *
//  Copyright (C) 1999, ..., 2008 Pierre Molinaro.                           *
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

#include "semantics_instructions.h"
#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark loop ... while instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_C_while_instruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
  //--- 'condition' variable
    C_String conditionVariable ;
    conditionVariable << "_condition_" << mLocation.location () ;
  //--- 'variant' variable
    C_String variantVariable ;
    variantVariable << "_variant_" << mLocation.location () ;
  //--- Loop header : compute variant initial value
    ioCppFile << "GGS_uint " << variantVariable << " = " ;
    mVariantExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n"
                 "GGS_bool " << conditionVariable << " (" << variantVariable
              << "._isBuilt (), true) ;\n"
                 "while (" << conditionVariable << ".isBuiltAndTrue ()) {\n" ;
  //--- First instruction list
    generateInstructionListForList (mInstructionList1, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
  //--- Condition
    ioCppFile << "  " << conditionVariable << " = " ;
    mWhileExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << " ;\n" ;
  //--- Evaluate variant and condition
    ioCppFile << "  if (" << conditionVariable << ".isBuiltAndTrue ()) {\n"
                 "    if (" << variantVariable << ".uintValue () == 0) {\n"
                 "      _inLexique.onTheFlyRunTimeError (\"loop variant error\" COMMA_SOURCE_FILE_AT_LINE ("
              << mLocation.lineNumber ()
              << ")) ;\n"
                 "      " << conditionVariable << " = GGS_bool (true, false) ;\n"
                 "    }else{\n" 
                 "      " << variantVariable << "._decrement_operation (_inLexique COMMA_HERE) ;\n" ;
  //--- Second instruction list
    ioCppFile.incIndentation (+4) ;
    generateInstructionListForList (mInstructionList2, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
    ioCppFile.incIndentation (-4) ;
    ioCppFile << "    }\n"
                 "  }\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_C_while_instruction::
isLexiqueFormalArgumentUsed (const bool /* inGenerateSemanticInstructions */) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_while_instruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  return formalArgumentIsUsedForList (mInstructionList1, inArgumentCppName, inGenerateSemanticInstructions)
    || mVariantExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || mWhileExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName)
    || formalArgumentIsUsedForList (mInstructionList2, inArgumentCppName, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_C_while_instruction::
formalCurrentObjectArgumentIsUsed (void) const {
  return formalCurrentObjectArgumentIsUsedForList (mInstructionList1)
    || mVariantExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || mWhileExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest ()
    || formalCurrentObjectArgumentIsUsedForList (mInstructionList2) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark foreach instruction
#endif

//---------------------------------------------------------------------------*

void cPtr_typeForeachInstruction::
generateSimpleInstruction (AC_OutputStream & ioCppFile,
                           const C_String & inTargetFileName,
													 sint32 & ioPrototypeIndex,
													 const bool inGenerateDebug) const {
  ioCppFile << "{\n" ;
  ioCppFile.incIndentation (+2) ;
//--- Generate index variable declaration, and initialization to zero
  if (dynamic_cast <cPtr_typeNullName *> (mIndexVariable (HERE)) == NULL) {
    ioCppFile << "  GGS_uint " ;
    mIndexVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " (true, 0) ;\n" ;
  }
  GGS_foreachEnumerationList::cEnumerator enumeratedVariable (mForeachEnumerationList, true) ;
  while (enumeratedVariable.hc ()) {
    ioCppFile << "GGS_" << enumeratedVariable._mCppTypeName (HERE)
              << "::cEnumerator enumerator_" << enumeratedVariable._mLocationOffset (HERE).location ()
              << " (" ;
    enumeratedVariable._mSourceExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ", " << (enumeratedVariable._mAscending (HERE).boolValue () ? "true" : "false")
              << ") ;\n" ;
    if (! enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile << "const GGS_" << enumeratedVariable._mCppTypeName (HERE)
                << "::cElement * operand_" << enumeratedVariable._mLocationOffset (HERE).location ()
                << " = NULL ;\n" ;
    }
    enumeratedVariable.next () ;
  }
  enumeratedVariable.rewind () ;
  if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
    ioCppFile <<  "while (enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".hc ()" ;
  }else{
    ioCppFile << "while (((operand_" <<enumeratedVariable._mLocationOffset (HERE).location ()
              << " = enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".nextObject ()))" ;
  }
  enumeratedVariable.next () ;
  while (enumeratedVariable.hc ()) {
    if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile <<  "\n    && enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".hc ()" ;
    }else{
      ioCppFile <<  "\n    && ((operand_" <<enumeratedVariable._mLocationOffset (HERE).location ()
                << " = enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".nextObject ()))" ;
    }
    enumeratedVariable.next () ;
   }
//--- While expression
  if ((dynamic_cast <cPtr_typeTrueBool *> (mWhileExpression (HERE))) == NULL) {
    ioCppFile <<  "\n    && (" ;
    mWhileExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".isBuiltAndTrue ())" ;    
  }
  ioCppFile << ") {\n" ;
  enumeratedVariable.rewind () ;
  while (enumeratedVariable.hc ()) {
    if (! enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile << "  macroValidPointer (operand_" << enumeratedVariable._mLocationOffset (HERE).location () << ") ;\n" ;
    }
    enumeratedVariable.next () ;
  }
  generateInstructionListForList (mDoInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
//--- Generate index variable declaration, and initialization to zero
  if (dynamic_cast <cPtr_typeNullName *> (mIndexVariable (HERE)) == NULL) {
    ioCppFile << "  " ;
    mIndexVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".mValue ++ ;\n" ;
  }
  enumeratedVariable.rewind () ;
  while (enumeratedVariable.hc ()) {
    if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile << "  enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".next () ;\n" ;
    }
    enumeratedVariable.next () ;
  }
  ioCppFile << "}\n" ;
  ioCppFile.incIndentation (-2) ;
  ioCppFile << "}\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeForeachInstruction::
generateInstructionWithOptions (AC_OutputStream & ioCppFile,
                                const C_String & inTargetFileName,
													      sint32 & ioPrototypeIndex,
													      const bool inGenerateDebug) const {
  ioCppFile << "{\n" ;
  ioCppFile.incIndentation (+2) ;
//--- Declare enumerators
  GGS_foreachEnumerationList::cEnumerator enumeratedVariable (mForeachEnumerationList, true) ;
  while (enumeratedVariable.hc ()) {
    ioCppFile << "GGS_" << enumeratedVariable._mCppTypeName (HERE)
              << "::cEnumerator enumerator_" << enumeratedVariable._mLocationOffset (HERE).location ()
              << " (" ;
    enumeratedVariable._mSourceExpression (HERE) (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ", " << (enumeratedVariable._mAscending (HERE).boolValue () ? "true" : "false")
              << ") ;\n" ;
    enumeratedVariable.next () ;
  }
//--- Declare pointers on current elements, and goto first elements
  enumeratedVariable.rewind () ;
  while (enumeratedVariable.hc ()) {
    if (! enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile << "const GGS_" << enumeratedVariable._mCppTypeName (HERE)
                << "::cElement * operand_" << enumeratedVariable._mLocationOffset (HERE).location ()
                << " = enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".nextObject () ;\n" ;
    }
    enumeratedVariable.next () ;
  }
//--- Test if enumerated objects have element, and if while expression is initially true
	enumeratedVariable.rewind () ;
	const sint32 locationForLoopVar = enumeratedVariable._mLocationOffset (HERE).location () ;
  if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
    ioCppFile << "if (enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << " .hc ()" ;
  }else{
    ioCppFile << "if ((operand_" << enumeratedVariable._mLocationOffset (HERE).location () << " != NULL)" ;
  }
  enumeratedVariable.next () ;
  while (enumeratedVariable.hc ()) {
    if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile << " && enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << " .hc ()" ;
    }else{
      ioCppFile << " && (operand_" << enumeratedVariable._mLocationOffset (HERE).location () << " != NULL)" ;
    }
    enumeratedVariable.next () ;
  }
  if ((dynamic_cast <cPtr_typeTrueBool *> (mWhileExpression (HERE))) == NULL) {
    ioCppFile <<  "\n    && (" ;
    mWhileExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".isBuiltAndTrue ())" ;    
  }
  ioCppFile << ") {\n" ;
//--- Generate index variable declaration, and initialization to zero
  if (dynamic_cast <cPtr_typeNullName *> (mIndexVariable (HERE)) == NULL) {
    ioCppFile << "  GGS_uint " ;
    mIndexVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << " (true, 0) ;\n" ;
  }
//--- Generate before instructions
  generateInstructionListForList (mBeforeInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
  ioCppFile << "  bool _foreach_loop_" << locationForLoopVar << " ;\n"
	             "  do{\n" ;
  ioCppFile.incIndentation (+2) ;
//--- Check pointers
  enumeratedVariable.rewind () ;
  while (enumeratedVariable.hc ()) {
    if (! enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile << "  macroValidPointer (operand_" << enumeratedVariable._mLocationOffset (HERE).location () << ") ;\n" ;
    }
    enumeratedVariable.next () ;
  }
//--- Do instructions
  generateInstructionListForList (mDoInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
//--- Generate index variable declaration, and initialization to zero
  if (dynamic_cast <cPtr_typeNullName *> (mIndexVariable (HERE)) == NULL) {
    ioCppFile << "  " ;
    mIndexVariable (HERE)->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".mValue ++ ;\n" ;
  }
//--- Goto next elements
  enumeratedVariable.rewind () ;
  while (enumeratedVariable.hc ()) {
    if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile <<  "  enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".next () ;\n" ;
    }else{
      ioCppFile <<  "  operand_" <<enumeratedVariable._mLocationOffset (HERE).location ()
                << " = enumerator_" << enumeratedVariable._mLocationOffset (HERE).location () << ".nextObject () ;\n" ;
    }
    enumeratedVariable.next () ;
   }
//--- Evaluate loop condition
  enumeratedVariable.rewind () ;
  if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
    ioCppFile <<  "  _foreach_loop_" << locationForLoopVar << " = (enumerator_" <<enumeratedVariable._mLocationOffset (HERE).location () << " .hc ()" ;
  }else{
    ioCppFile <<  "  _foreach_loop_" << locationForLoopVar << " = ((operand_" <<enumeratedVariable._mLocationOffset (HERE).location () << " != NULL)" ;
  }
  enumeratedVariable.next () ;
  while (enumeratedVariable.hc ()) {
    if (enumeratedVariable._mNewStyle (HERE).boolValue ()) {
      ioCppFile <<  "\n    && enumerator_" <<enumeratedVariable._mLocationOffset (HERE).location () << " .hc ()" ;
    }else{
      ioCppFile <<  "\n    && (operand_" <<enumeratedVariable._mLocationOffset (HERE).location () << " != NULL)" ;
    }
    enumeratedVariable.next () ;
	}
  if ((dynamic_cast <cPtr_typeTrueBool *> (mWhileExpression (HERE))) == NULL) {
    ioCppFile <<  "\n    && (" ;
    mWhileExpression (HERE)->generateExpression (ioCppFile) ;
    ioCppFile << ".isBuiltAndTrue ())" ;    
  }
	ioCppFile << ") ;\n" ;
//--- Between instructions
  ioCppFile << "  if (_foreach_loop_" << locationForLoopVar << ") {\n" ;
  ioCppFile.incIndentation (+2) ;
  generateInstructionListForList (mBetweenInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
  ioCppFile.incIndentation (-2) ;
  ioCppFile << "  }\n" ;
//--- End if loop
  ioCppFile.incIndentation (-2) ;
	ioCppFile << "  }while (_foreach_loop_" << locationForLoopVar << ") ;\n" ;
//--- After instructions
  generateInstructionListForList (mAfterInstructionList, ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
  ioCppFile << "}\n" ;
  ioCppFile.incIndentation (-2) ;
  ioCppFile << "}\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeForeachInstruction::
generateInstruction (AC_OutputStream & ioCppFile,
                     const C_String & inTargetFileName,
                     sint32 & ioPrototypeIndex,
                     const bool inGenerateDebug,
                     const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
	  if ((mBeforeInstructionList.count () + mBetweenInstructionList.count () + mAfterInstructionList.count ()) > 0) {
		  generateInstructionWithOptions (ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug) ;
		}else{
		  generateSimpleInstruction (ioCppFile, inTargetFileName, ioPrototypeIndex, inGenerateDebug) ;
		}
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction::
isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  bool used = isLexiqueFormalArgumentUsedForList (mBeforeInstructionList, inGenerateSemanticInstructions)
    || isLexiqueFormalArgumentUsedForList (mDoInstructionList, inGenerateSemanticInstructions)
    || isLexiqueFormalArgumentUsedForList (mBetweenInstructionList, inGenerateSemanticInstructions)
    || isLexiqueFormalArgumentUsedForList (mAfterInstructionList, inGenerateSemanticInstructions)
    || mWhileExpression (HERE)->isLexiqueFormalArgumentUsedForTest () ;
  GGS_foreachEnumerationList::cEnumerator enumeratedVariable (mForeachEnumerationList, true) ;
  while (enumeratedVariable.hc () && ! used) {
    used = enumeratedVariable._mSourceExpression (HERE) (HERE)->isLexiqueFormalArgumentUsedForTest () ;
    enumeratedVariable.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction::
formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                      const bool inGenerateSemanticInstructions) const {
  bool used = formalArgumentIsUsedForList (mBeforeInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
    || formalArgumentIsUsedForList (mDoInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
    || formalArgumentIsUsedForList (mBetweenInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
    || formalArgumentIsUsedForList (mAfterInstructionList, inArgumentCppName, inGenerateSemanticInstructions)
    || mWhileExpression (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
  GGS_foreachEnumerationList::cEnumerator enumeratedVariable (mForeachEnumerationList, true) ;
  while (enumeratedVariable.hc () && ! used) {
    used = enumeratedVariable._mSourceExpression (HERE) (HERE)->formalArgumentIsUsedForTest (inArgumentCppName) ;
    enumeratedVariable.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeForeachInstruction::
formalCurrentObjectArgumentIsUsed (void) const {
  bool used = formalCurrentObjectArgumentIsUsedForList (mBeforeInstructionList)
    || formalCurrentObjectArgumentIsUsedForList (mDoInstructionList)
    || formalCurrentObjectArgumentIsUsedForList (mBetweenInstructionList)
    || formalCurrentObjectArgumentIsUsedForList (mAfterInstructionList)
    || mWhileExpression (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
  GGS_foreachEnumerationList::cEnumerator enumeratedVariable (mForeachEnumerationList, true) ;
  while (enumeratedVariable.hc () && ! used) {
    used = enumeratedVariable._mSourceExpression (HERE) (HERE)->formalCurrentObjectArgumentIsUsedForTest () ;
    enumeratedVariable.next () ;
  }
  return used ;
}

//---------------------------------------------------------------------------*
