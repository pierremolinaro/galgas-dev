//---------------------------------------------------------------------------*
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

class cVocabulary ;
class cPureBNFproductionsList ;
class C_HTML_FileWrite ;

//---------------------------------------------------------------------------*
 
#define macro_AC_instruction_ForGrammar \
  public : virtual bool isSameSyntaxInstructionThan (C_Lexique & lexique_var_, \
                          cPtr_AC_instruction_ForGrammar * inInstruction, \
                          const GGS_location & inEndOfInstructionListLocation) const = 0 ; \
  public : virtual void printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) = 0 ; \
  public : virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary, \
                                                  const C_String & inSyntaxComponentName, \
                                                  sint32 & ioCount) = 0 ; \
  public : virtual void buildRightDerivation (const sint32 inTerminalSymbolsCount, \
                                      TC_UniqueArray <sint16> & ioInstructionsList) = 0 ; \
  public : virtual void buildSelectAndRepeatProductions (const sint32 inTerminalSymbolsCount, \
                                           const C_String & inSyntaxComponentName, \
                                           cPureBNFproductionsList & ioProductions) = 0 ; \
  public : virtual void fixInfos (class cInfo & inInfo, \
                                  C_Lexique & inLexique) = 0 ;

//---------------------------------------------------------------------------*
 
#define macroInheritFrom_AC_instruction_ForGrammar \
  public : virtual bool isSameSyntaxInstructionThan (C_Lexique & lexique_var_, \
                            cPtr_AC_instruction_ForGrammar * inInstruction, \
                            const GGS_location & inEndOfInstructionListLocation) const ; \
  public : virtual void printInstructionForGrammar (C_HTML_FileWrite & inHTMLfile) ; \
  public : virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary, \
                                                  const C_String & inSyntaxComponentName, \
                                                  sint32 & ioCount) ; \
  public : virtual void buildRightDerivation (const sint32 inTerminalSymbolsCount, \
                                      TC_UniqueArray <sint16> & ioInstructionsList) ; \
  public : virtual void buildSelectAndRepeatProductions (const sint32 inTerminalSymbolsCount, \
                                           const C_String & inSyntaxComponentName, \
                                           cPureBNFproductionsList & ioProductions) ; \
  public : virtual void fixInfos (cInfo & inInfo, \
                                  C_Lexique & inLexique) ;

//---------------------------------------------------------------------------*
