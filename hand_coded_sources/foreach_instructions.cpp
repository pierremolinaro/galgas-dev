//---------------------------------------------------------------------------*
//                                                                           *
//  Generate 'foreach' instructions                                          *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
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

//---------------------------------------------------------------------------*

void cPtr_typeInstructionItererTable
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & /* inLexiqueClassName */,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_" << aNomTypeTable 
              << "::element_type * operand_" << mLocationOffset.currentLocation () << " = " ;
    aNomCppTable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".firstObject () ;\n"
                 "while (operand_" << mLocationOffset.currentLocation () << " != NULL) {\n"
                 "  macroValidPointer (operand_" << mLocationOffset.currentLocation () << ") ;\n" ;
    C_String inutilise ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inutilise, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
    ioCppFile << "  operand_" << mLocationOffset.currentLocation () << " = operand_"
              << mLocationOffset.currentLocation () << "->nextObject () ;\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionItererTable
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return isLexiqueFormalArgumentUsedForList (mInstructionsList, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionItererTable
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return aNomCppTable.isEqualTo (inArgumentCppName)
      || formalArgumentIsUsedForList (mInstructionsList, inArgumentCppName, true) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionItererListeSimple
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_" << aNomTypeListe << "::element_type * operand_" << mLocationOffset.currentLocation () << " = " ;
    aNomCppListe ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".firstObject () ;\n"
                 "while (operand_" << mLocationOffset.currentLocation () << " != NULL) {\n"
                 "  macroValidPointer (operand_" << mLocationOffset.currentLocation () << ") ;\n" ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ; 
    ioCppFile << "  operand_" << mLocationOffset.currentLocation () << " = operand_"
              << mLocationOffset.currentLocation () << "->nextObject () ;\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionItererListeSimple
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return isLexiqueFormalArgumentUsedForList (mInstructionsList, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionItererListeSimple
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool /* inGenerateSemanticInstructions */) const {
  return aNomCppListe.isEqualTo (inArgumentCppName)
     || formalArgumentIsUsedForList (mInstructionsList, inArgumentCppName, true) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_typeInstructionItererListeDouble
::generateInstruction (AC_OutputStream & ioCppFile,
                       const C_String & inLexiqueClassName,
                       const C_String & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_"<< aNomTypeListe1 << "::element_type * operand_" << aIndicatif1.currentLocation () << " = " ;
    aNomCppListe1 ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".firstObject () ;\n"
                 "GGS_" << aNomTypeListe2 << "::element_type * operand_" << aIndicatif2.currentLocation () << " = " ;
    aNomCppListe2 ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".firstObject () ;\n"
              << "while ((operand_" << aIndicatif1.currentLocation () << " != NULL)"
                 " && (operand_" << aIndicatif2.currentLocation () << " != NULL)) {\n"
                 "  macroValidPointer (operand_" << aIndicatif1.currentLocation () << ") ;\n"
                 "  macroValidPointer (operand_" << aIndicatif2.currentLocation () << ") ;\n" ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ; 
    ioCppFile << "  operand_" << aIndicatif1.currentLocation () << " = operand_"
              << aIndicatif1.currentLocation () << "->nextObject () ;\n"
              << "  operand_" << aIndicatif2.currentLocation () << " = operand_"
              << aIndicatif2.currentLocation () << "->nextObject () ;\n"
                 "}\n" ;
  }
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionItererListeDouble
::isLexiqueFormalArgumentUsed (const bool inGenerateSemanticInstructions) const {
  return isLexiqueFormalArgumentUsedForList (mInstructionsList, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*

bool cPtr_typeInstructionItererListeDouble
::formalArgumentIsUsed (const GGS_typeCplusPlusName & inArgumentCppName,
                        const bool inGenerateSemanticInstructions) const {
  return aNomCppListe1.isEqualTo (inArgumentCppName)
      || aNomCppListe2.isEqualTo (inArgumentCppName)
      || formalArgumentIsUsedForList (mInstructionsList, inArgumentCppName, inGenerateSemanticInstructions) ;
}

//---------------------------------------------------------------------------*
