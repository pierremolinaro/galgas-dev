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
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & /* inLexiqueClassName */,
                       const C_string & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_" << aNomTypeTable 
              << "::element_type * operand_" << mLocationOffset.getCurrentLocation () << " = " ;
    aNomCppTable ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getFirstItem () ;\n"
                 "while (operand_" << mLocationOffset.getCurrentLocation () << " != NULL) {\n"
                 "  macroValidPointer (operand_" << mLocationOffset.getCurrentLocation () << ") ;\n" ;
    C_string inutilise ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inutilise, inTargetFileName, ioPrototypeIndex, inGenerateDebug, true) ; 
    ioCppFile << "  operand_" << mLocationOffset.getCurrentLocation () << " = operand_"
              << mLocationOffset.getCurrentLocation () << "->getNextItem () ;\n"
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
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & inLexiqueClassName,
                       const C_string & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_" << aNomTypeListe << "::element_type * operand_" << mLocationOffset.getCurrentLocation () << " = " ;
    aNomCppListe ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getFirstItem () ;\n"
                 "while (operand_" << mLocationOffset.getCurrentLocation () << " != NULL) {\n"
                 "  macroValidPointer (operand_" << mLocationOffset.getCurrentLocation () << ") ;\n" ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ; 
    ioCppFile << "  operand_" << mLocationOffset.getCurrentLocation () << " = operand_"
              << mLocationOffset.getCurrentLocation () << "->getNextItem () ;\n"
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
::generateInstruction (AC_output_stream & ioCppFile,
                       const C_string & inLexiqueClassName,
                       const C_string & inTargetFileName,
                       sint32 & ioPrototypeIndex,
                       const bool inGenerateDebug,
                       const bool inGenerateSemanticInstructions) const {
  if (inGenerateSemanticInstructions) {
    ioCppFile << "GGS_"<< aNomTypeListe1 << "::element_type * operand_" << aIndicatif1.getCurrentLocation () << " = " ;
    aNomCppListe1 ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getFirstItem () ;\n"
                 "GGS_" << aNomTypeListe2 << "::element_type * operand_" << aIndicatif2.getCurrentLocation () << " = " ;
    aNomCppListe2 ()->generateCplusPlusName (ioCppFile) ;
    ioCppFile << ".getFirstItem () ;\n"
              << "while ((operand_" << aIndicatif1.getCurrentLocation () << " != NULL)"
                 " && (operand_" << aIndicatif2.getCurrentLocation () << " != NULL)) {\n"
                 "  macroValidPointer (operand_" << aIndicatif1.getCurrentLocation () << ") ;\n"
                 "  macroValidPointer (operand_" << aIndicatif2.getCurrentLocation () << ") ;\n" ;
    generateInstructionListForList (mInstructionsList, ioCppFile, inLexiqueClassName, inTargetFileName, ioPrototypeIndex,
                                    inGenerateDebug, true) ; 
    ioCppFile << "  operand_" << aIndicatif1.getCurrentLocation () << " = operand_"
              << aIndicatif1.getCurrentLocation () << "->getNextItem () ;\n"
              << "  operand_" << aIndicatif2.getCurrentLocation () << " = operand_"
              << aIndicatif2.getCurrentLocation () << "->getNextItem () ;\n"
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
