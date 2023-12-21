//--------------------------------------------------------------------------------------------------
//
//  'C_Lexique' : an abstract lexique class ;
//  Galgas generated scanner classes inherit from this class.
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"
#include "all-predefined-types.h"
#include "utilities/MF_MemoryControl.h"
#include "strings/unicode_character_cpp.h"
#include "strings/unicode_string_routines.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/cIndexingDictionary.h"
#include "files/C_FileManager.h"
#include "galgas2/F_verbose_output.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define LINE_AND_SOURCE_FILE_FOR_LEXIQUE , sourceText ().sourceFilePath ().cString (HERE), lineNumber ()
#else
  #define LINE_AND_SOURCE_FILE_FOR_LEXIQUE
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Top-down parsing
#endif

//--------------------------------------------------------------------------------------------------

static bool TRACE_LL1_PARSING (void) { return false ; }

//--------------------------------------------------------------------------------------------------
//
//   Test if a terminal symbol can be accepted in current context
//
//--------------------------------------------------------------------------------------------------

bool C_Lexique::acceptTerminalForErrorSignaling (const int32_t inTerminal,
                                                 const int32_t inProductions [],
                                                 const int32_t inProductionIndexes [],
                                                 const int32_t inFirstProductionIndex [],
                                                 const int32_t inDecisionTable [],
                                                 const int32_t inDecisionTableIndexes [],
                                                 const TC_Array <int32_t> & inErrorStack,
                                                 const int32_t inErrorProgramCounter) {
  if (TRACE_LL1_PARSING ()) {
    String m = getMessageForTerminal (inTerminal) ;
    gCout.addString ("------ Enter 'acceptTerminalForErrorSignaling' with '") ;
    gCout.addString (m) ;
    gCout.addString ("' (") ;
    gCout.addSigned (inTerminal) ;
    gCout.addString (") terminal and program counter ") ;
    gCout.addSigned (inErrorProgramCounter) ;
    gCout.flush () ;
  }
  bool accept = false ;
  int32_t programCounter = inErrorProgramCounter ;
  TC_Array <int32_t> stack = inErrorStack ;
  bool loop = true ;
  while (loop) {
    const int32_t instruction = inProductions [programCounter] ;
    programCounter ++ ;
    if (instruction > 0) { // We reach a terminal
      const int32_t reachedTerminal = (int32_t) (instruction - 1) ;
      accept = reachedTerminal == inTerminal ;
      if (TRACE_LL1_PARSING ()) {
        const String m = getMessageForTerminal (reachedTerminal) ;
        gCout.addString ("reached '") ;
        gCout.addString (m) ;
        gCout.addString ("' terminal") ;
        gCout.addString (accept ? " (accepted)" : "") ;
        gCout.addNL () ; ;
        gCout.flush () ;
      }
      loop = false ;
    }else if (instruction < 0) { // We reach a nonterminal
      const int32_t reachedNonterminal = (int32_t) (- instruction - 1) ;
      if (TRACE_LL1_PARSING ()) {
        gCout.addString ("reached non-terminal ") ;
        gCout.addSigned (reachedNonterminal) ;
        gCout.addNL () ; ;
        gCout.flush () ;
      }
      int32_t nonTerminalEntry = inDecisionTableIndexes [reachedNonterminal] ;
      if (inDecisionTable [nonTerminalEntry] < 0) { // Only one rule : call it
        stack.appendObject (programCounter) ;
        programCounter = inProductionIndexes [inFirstProductionIndex [reachedNonterminal]] ;
        if (TRACE_LL1_PARSING ()) {
          gCout.addString ("One rule: goto ") ;
          gCout.addSigned (programCounter) ;
          gCout.addNL () ; ;
          gCout.flush () ;
        }
      }else{ // More than one rule : test if terminal is accepted, and call rule
        loop = false ;
        int32_t choice = 0 ;
        bool found = false ;
        while ((inDecisionTable [nonTerminalEntry] >= 0) && ! found) {
          while ((inDecisionTable [nonTerminalEntry] >= 0) && ! found) {
            found = inDecisionTable [nonTerminalEntry] == inTerminal ;
            if (TRACE_LL1_PARSING ()) {
              const String m = getMessageForTerminal (inDecisionTable [nonTerminalEntry]) ;
              gCout.addString ("try '") ;
              gCout.addString (m) ;
              gCout.addString ("' non terminal") ;
              gCout.addString (found ? " (accepted)": "") ;
              gCout.addNL () ; ;
              gCout.flush () ;
            }
            if (found) {
              int32_t newProgramCounter = programCounter ;
              TC_Array <int32_t> newStack = stack ;
              newStack.appendObject (newProgramCounter) ;
              newProgramCounter = inProductionIndexes [inFirstProductionIndex [reachedNonterminal] + choice] ;
              accept = acceptTerminalForErrorSignaling (inTerminal,
                                                        inProductions,
                                                        inProductionIndexes,
                                                        inFirstProductionIndex,
                                                        inDecisionTable,
                                                        inDecisionTableIndexes,
                                                        newStack,
                                                        newProgramCounter) ;
            }
            nonTerminalEntry ++ ;
          }
          nonTerminalEntry ++ ;
          choice ++ ;
        }
      }
    }else if (stack.count () > 0) { // We reach a END OF PRODUCTION
      programCounter = stack.lastObject (HERE) ;
      stack.removeLastObject (HERE) ;
    }else{ // We reach the end of production rules
      accept = inTerminal == 0 ; // 0 is always "end_of_text" terminal symbol
      loop = false ;
    }
  }
  if (TRACE_LL1_PARSING ()) {
    gCout.addString ("------ Exit 'acceptTerminalForErrorSignaling' with accept == ") ;
    gCout.addString (accept ? "true" : "false") ;
    gCout.addNL () ; ;
  }
  return accept ;
}

//--------------------------------------------------------------------------------------------------
//
//   Build expected terminals array on syntax error with LL (1) parser
//
//--------------------------------------------------------------------------------------------------

void C_Lexique::buildExpectedTerminalsArrayOnSyntaxError (const int32_t inErrorProgramCounter,
                                                          const int32_t inErrorStackCount,
                                                          const TC_Array <int32_t> & inStack,
                                                          const TC_Array <int32_t> & inErrorStack,
                                                          const int32_t inProductions [],
                                                          const int32_t inProductionIndexes [],
                                                          const int32_t inFirstProductionIndex [],
                                                          const int32_t inDecisionTable [],
                                                          const int32_t inDecisionTableIndexes [],
                                                          TC_UniqueArray <int32_t> & outExpectedTerminalsArray) {
//--- First, go to the next non terminal, terminal or end of productions rules
  int32_t programCounter = inErrorProgramCounter ;
  const int32_t countToCopy = inErrorStackCount - inErrorStack.count () ;
  TC_Array <int32_t> errorStack (inErrorStackCount COMMA_HERE) ;
  for (int32_t i=0 ; i<countToCopy ; i++) {
    errorStack.appendObject (inStack (i COMMA_HERE)) ;
  }
  for (int32_t i=inErrorStack.count () - 1 ; i>=0 ; i--) {
    errorStack.appendObject (inErrorStack (i COMMA_HERE)) ;
  }
  if (TRACE_LL1_PARSING ()) {
    gCout.addString ("------ Enter 'buildExpectedTerminalsArrayOnSyntaxError'\n") ;
    gCout.addString ("programCounter: ") ;
    gCout.addSigned (programCounter) ;
    gCout.addString (", errorStack: ") ;
    gCout.addSigned (errorStack.count ()) ;
    gCout.addString (" value(s):") ;
    for (int32_t i=0 ; i<errorStack.count() ; i++) {
      gCout.addString (" ") ;
      gCout.addSigned (errorStack (i COMMA_HERE)) ;
    }
    gCout.addNL () ; ;
    gCout.flush () ;
  }
  bool loop = true ;
  while (loop) {
    if (inProductions [programCounter] > 0) { // We reach a terminal (when >0)
      loop = false ;
      if (TRACE_LL1_PARSING ()) {
        String m = getMessageForTerminal (inProductions [programCounter]) ;
        gCout.addString ("Terminal '") ;
        gCout.addString (m) ;
        gCout.addString ("' (") ;
        gCout.addSigned (inProductions [programCounter]) ;
        gCout.addString (") reached\n") ;
        gCout.flush () ;
      }
    }else if (inProductions [programCounter] < 0) { // We reach a non terminal (<0)
      const int32_t nonTerminal = (int32_t) (- inProductions [programCounter] - 1) ;
      if (TRACE_LL1_PARSING ()) {
        gCout.addString ("Non-Terminal ") ;
        gCout.addSigned (nonTerminal) ;
        gCout.addString (" reached\n") ;
        gCout.flush () ;
      }
    //--- We look if we get a non terminal that has only one production rule
      const int32_t nonTerminalEntry = inDecisionTableIndexes [nonTerminal] ;
      const bool onlyOneRule = inDecisionTable [nonTerminalEntry] < 0 ;
      if (onlyOneRule) { // Go to this rule
        errorStack.appendObject ((int32_t) (programCounter + 1)) ;
        programCounter = inProductionIndexes [inFirstProductionIndex [nonTerminal]] ;
        if (TRACE_LL1_PARSING ()) {
          gCout.addString ("Only one rule: goto ") ;
          gCout.addSigned (programCounter) ;
          gCout.addNL () ; ;
          gCout.flush () ;
        }
      }else{
        loop = false ; // Stop searching
      }
    }else if (errorStack.count () > 0) { // Execute a 'return' instruction
      programCounter = errorStack.lastObject (HERE) ;
      errorStack.removeLastObject (HERE) ;
      if (TRACE_LL1_PARSING ()) {
        gCout.addString ("return instruction (goes to ") ;
        gCout.addSigned (programCounter) ;
        gCout.addString (")\n") ;
        gCout.flush () ;
      }
    }else{ // End of source reached
      if (TRACE_LL1_PARSING ()) {
        gCout.addString ("end of source reached\n") ;
        gCout.flush () ;
      }
      loop = false ;
    }
  }
//--- Decision for build expected terminals array
  if (errorStack.count () == 0) { // We reach end of productions rules
    outExpectedTerminalsArray.appendObject (0) ; // 0 is always "end_of_text" terminal symbol
    if (TRACE_LL1_PARSING ()) {
      gCout.addString ("add 'end of source' to outExpectedTerminalsArray\n") ;
      gCout.flush () ;
    }
  }else if (inProductions [programCounter] > 0) { // We reach a terminal symbol
    const int32_t terminalSymbol = (int32_t) (inProductions [programCounter] - 1) ;
    outExpectedTerminalsArray.appendObject (terminalSymbol) ;
    if (TRACE_LL1_PARSING ()) {
      String m = getMessageForTerminal (inProductions [programCounter]) ;
      gCout.addString ("add '") ;
      gCout.addString (m) ;
      gCout.addString ("' (") ;
      gCout.addSigned (inProductions [programCounter]) ;
      gCout.addString (") to outExpectedTerminalsArray\n") ;
      gCout.flush () ;
    }
  }else{  // We reach a non terminal symbol
    const int32_t nonTerminal = (int32_t) (- inProductions [programCounter] - 1) ;
    int32_t nonTerminalEntry = inDecisionTableIndexes [nonTerminal] ;
    while (inDecisionTable [nonTerminalEntry] >= 0) {
      while (inDecisionTable [nonTerminalEntry] >= 0) {
        const bool ok = acceptTerminalForErrorSignaling (inDecisionTable [nonTerminalEntry],
                                                        inProductions,
                                                        inProductionIndexes,
                                                        inFirstProductionIndex,
                                                        inDecisionTable,
                                                        inDecisionTableIndexes,
                                                        errorStack,
                                                        programCounter) ;
        if (ok) {
          if (TRACE_LL1_PARSING ()) {
            String m = getMessageForTerminal (inDecisionTable [nonTerminalEntry]) ;
            gCout.addString ("add '") ;
            gCout.addString (m) ;
            gCout.addString ("' (") ;
            gCout.addSigned (inDecisionTable [nonTerminalEntry]) ;
            gCout.addString (") to outExpectedTerminalsArray\n") ;
            gCout.flush () ;
          }
          outExpectedTerminalsArray.appendObject (inDecisionTable [nonTerminalEntry]) ;
        }
        nonTerminalEntry ++ ;
      }
      nonTerminalEntry ++ ;
    }
  }
  if (TRACE_LL1_PARSING ()) {
    gCout.addString ("------ Exit 'buildExpectedTerminalsArrayOnSyntaxError'\n") ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//   Perform top down parsing (called by LL (1) parser)
//
//--------------------------------------------------------------------------------------------------

static void indentForParseOnly (const int32_t inIndentation) {
  for (int32_t i=1 ; i<inIndentation ; i++) {
    gCout.addString ("|  ") ;
  }
  if (inIndentation > 0) {
    gCout.addString ("|- ") ;
  }
}

//--------------------------------------------------------------------------------------------------

bool C_Lexique::performTopDownParsing (const int32_t inProductions [],
                                       const cProductionNameDescriptor inProductionNames [],
                                       const int32_t inProductionIndexes [],
                                       const int32_t inFirstProductionIndex [],
                                       const int32_t inDecisionTable [],
                                       const int32_t inDecisionTableIndexes [],
                                       const int32_t inProgramCounterInitialValue) {
  bool result = false ;
//--- Lexical analysis
  performLexicalAnalysis () ;
  if (! executionModeIsLexicalAnalysisOnly ()) {
  //--- Variables for generating syntax tree in a form suitable for graphviz
    const bool produceSyntaxTree = gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.mValue
       && (sourceFilePath ().stringByDeletingPathExtension () != "") ;
    String syntaxTreeDescriptionString ;
    TC_Array <uint32_t> productionUniqueNameStack ;
    uint32_t uniqueProductionNameIndex = 0 ;
    uint32_t uniqueTerminalIndex = 0 ;
    uint32_t currentProductionName = 0 ;
    if (produceSyntaxTree) {
      syntaxTreeDescriptionString.addString ("digraph G {\n"
                                     "  size =\"4,4\";\n") ;
    }
  //---
    int32_t indentationForParseOnly = 0 ;
    cToken * previousTokenPtr = nullptr ;
    cToken * tokenPtr = mFirstToken ;
    if (executionModeIsSyntaxAnalysisOnly ()) {
      gCout.addString ("*** PERFORM TOP-DOWN PARSING ONLY (--mode=syntax-only option) ***\n") ;
    }
    TC_UniqueArray <int32_t> listForSecondPassParsing ;
    TC_Array <int32_t> stack (10000 COMMA_HERE) ;
    TC_Array <int32_t> errorStack ;
    int32_t errorStackCount = 0 ;
    bool loop = tokenPtr != nullptr ;
    result = true ;
    int32_t programCounter = inProgramCounterInitialValue ;
    int32_t errorProgramCounter = inProgramCounterInitialValue ;
    int32_t currentToken = (tokenPtr != nullptr) ? tokenPtr->mTokenCode : int32_t (-1) ;
    if (tokenPtr == nullptr) {
      mCurrentLocation.resetLocation () ;
    }else{
      mCurrentLocation = tokenPtr->mEndLocation ;
    }
    while (loop) {
    //--- If no current token, get one
      if (currentToken < 0) {
        if (tokenPtr == nullptr) {
          currentToken = 0 ; // 0 means end of source file
        }else{
          previousTokenPtr = tokenPtr ;
          tokenPtr = tokenPtr->mNextToken ;
          currentToken = (tokenPtr != nullptr) ? tokenPtr->mTokenCode : ((int32_t) 0) ;
          if (tokenPtr != nullptr) {
            mCurrentLocation = tokenPtr->mEndLocation ;
          }
        }
      }
      if (TRACE_LL1_PARSING ()) {
        gCout.addString ("---------------------------\n") ;
        gCout.addString ("Current token is ") ;
        gCout.addString (getCurrentTokenString (tokenPtr)) ;
        gCout.addString (" (#") ;
        gCout.addSigned (currentToken) ;
        gCout.addString (")\n") ;
        gCout.flush () ;
      }
    //--- Get instruction to do
      const int32_t instruction = inProductions [programCounter] ;
      programCounter ++ ;
    //--- Instruction is non terminal call ?
      if (instruction < 0) {
      //--- Get entry of nonterminal symbol to parse
        const int32_t nonTerminalToParse = (int32_t) (- instruction - 1) ;
        if (TRACE_LL1_PARSING ()) {
          gCout.addString ("Parse non terminal ") ;
          gCout.addSigned (nonTerminalToParse) ;
          gCout.addString (": ") ;
          gCout.flush () ;
        }
        int32_t nonTerminalEntry = inDecisionTableIndexes [nonTerminalToParse] ;
        if (inDecisionTable [nonTerminalEntry] < 0) { // Means only one production : don't make any choice
          if (TRACE_LL1_PARSING ()) {
            gCout.addString (" ok (only one production)\n") ;
            gCout.flush () ;
          }
          stack.appendObject (programCounter) ;
          programCounter = inProductionIndexes [inFirstProductionIndex [nonTerminalToParse]] ;
          if (produceSyntaxTree) {
            uniqueProductionNameIndex ++ ;
            syntaxTreeDescriptionString.addString ("  NT") ;
            syntaxTreeDescriptionString.addUnsigned (uniqueProductionNameIndex) ;
            syntaxTreeDescriptionString.addString (" [label=\"") ;
            syntaxTreeDescriptionString.addString (inProductionNames [inFirstProductionIndex [nonTerminalToParse]].mName) ;
            syntaxTreeDescriptionString.addString ("\", shape=box];\n") ;
            if (currentProductionName > 0) {
              syntaxTreeDescriptionString.addString ("  NT") ;
              syntaxTreeDescriptionString.addUnsigned (currentProductionName) ;
              syntaxTreeDescriptionString.addString (" -> NT") ;
              syntaxTreeDescriptionString.addUnsigned (uniqueProductionNameIndex) ;
              syntaxTreeDescriptionString.addString (";\n") ;
            }
            productionUniqueNameStack.appendObject (currentProductionName) ;
            currentProductionName = uniqueProductionNameIndex ;
          }
          if (executionModeIsSyntaxAnalysisOnly ()) {
            indentForParseOnly (indentationForParseOnly) ;
            gCout.addString (inProductionNames [inFirstProductionIndex [nonTerminalToParse]].mName) ;
            gCout.addString (", file '") ;
            gCout.addString (inProductionNames [inFirstProductionIndex [nonTerminalToParse]].mFileName) ;
            gCout.addString ("', line ") ;
            gCout.addUnsigned (inProductionNames [inFirstProductionIndex [nonTerminalToParse]].mLineNumber) ;
            gCout.addNL () ; ;
            indentationForParseOnly ++ ;
          }
        }else{ //--- There are several choices : find the one to do
          if (TRACE_LL1_PARSING ()) {
            gCout.addString (" try tokens\n") ; gCout.flush () ;
          }
          int32_t choice = -1 ;
          bool found = false ;
          while ((inDecisionTable [nonTerminalEntry] >= 0) && ! found) {
            while ((inDecisionTable [nonTerminalEntry] >= 0) && ! found) {
              found = currentToken == inDecisionTable [nonTerminalEntry] ;
              if (TRACE_LL1_PARSING ()) {
                String m = getMessageForTerminal (inDecisionTable [nonTerminalEntry]) ;
                gCout.addString (" try ") ;
                gCout.addString (m) ;
                gCout.addString (" (") ;
                gCout.addSigned (inDecisionTable [nonTerminalEntry]) ;
                gCout.addString (")") ;
                gCout.addString (found ? " (accepted)" : "") ;
                gCout.addNL () ; ;
                gCout.flush () ;
              }
              nonTerminalEntry ++ ;
            }
            choice ++ ;
            nonTerminalEntry ++ ;
          }
        //--- Found : call production rule
          if (found) {
            stack.appendObject (programCounter) ;
            programCounter = inProductionIndexes [inFirstProductionIndex [nonTerminalToParse] + choice] ;
            if (produceSyntaxTree) {
              uniqueProductionNameIndex ++ ;
              syntaxTreeDescriptionString.addString ("  NT") ;
              syntaxTreeDescriptionString.addUnsigned (uniqueProductionNameIndex) ;
              syntaxTreeDescriptionString.addString (" [label=\"") ;
              syntaxTreeDescriptionString.addString (inProductionNames [inFirstProductionIndex [nonTerminalToParse] + choice].mName) ;
              syntaxTreeDescriptionString.addString ("\", shape=box];\n") ;
              if (currentProductionName > 0) {
                syntaxTreeDescriptionString.addString ("  NT") ;
                syntaxTreeDescriptionString.addUnsigned (currentProductionName) ;
                syntaxTreeDescriptionString.addString (" -> NT") ;
                syntaxTreeDescriptionString.addUnsigned (uniqueProductionNameIndex) ;
                syntaxTreeDescriptionString.addString (";\n") ;
              }
              productionUniqueNameStack.appendObject (currentProductionName) ;
              currentProductionName = uniqueProductionNameIndex ;
            }
            if (executionModeIsSyntaxAnalysisOnly ()) {
              indentForParseOnly (indentationForParseOnly) ;
              gCout.addString (inProductionNames [inFirstProductionIndex [nonTerminalToParse + choice]].mName) ;
              gCout.addString (", file '") ;
              gCout.addString (inProductionNames [inFirstProductionIndex [nonTerminalToParse + choice]].mFileName) ;
              gCout.addString ("', line ") ;
              gCout.addUnsigned (inProductionNames [inFirstProductionIndex [nonTerminalToParse + choice]].mLineNumber) ;
              gCout.addNL () ; ;
              indentationForParseOnly ++ ;
            }
            listForSecondPassParsing.appendObject (choice + 1) ;
          }else{ // Syntax error
            TC_UniqueArray <int32_t> expectedTerminalsArray (100 COMMA_HERE) ;
            buildExpectedTerminalsArrayOnSyntaxError (errorProgramCounter,
                                                      errorStackCount,
                                                      stack,
                                                      errorStack,
                                                      inProductions,
                                                      inProductionIndexes,
                                                      inFirstProductionIndex,
                                                      inDecisionTable,
                                                      inDecisionTableIndexes,
                                                      expectedTerminalsArray) ;
            if (TRACE_LL1_PARSING ()) {
              gCout.addSigned (expectedTerminalsArray.count ()) ;
              gCout.addString (" Token(s) in syntax error message\n") ;
              gCout.flush () ;
            }
            parsingError (expectedTerminalsArray, previousTokenPtr, tokenPtr, currentToken LINE_AND_SOURCE_FILE_FOR_LEXIQUE) ;
            result = loop = false ;
            listForSecondPassParsing.removeAllKeepingCapacity () ;
          }
        }
    //--- It is a terminal symbol
      }else if (instruction > 0) {
        const int32_t terminalSymbol = int32_t (instruction - 1) ;
        if (currentToken == terminalSymbol) {
          if (executionModeIsSyntaxAnalysisOnly ()) {
            indentForParseOnly (indentationForParseOnly) ;
            gCout.addString (getCurrentTokenString (tokenPtr)) ;
            gCout.addNL () ; ;
          }
          currentToken = -1 ; // Ok, current terminal symbol is no longer available
          if (produceSyntaxTree) {
            syntaxTreeDescriptionString.addString ("  T") ;
            syntaxTreeDescriptionString.addUnsigned (uniqueTerminalIndex) ;
            syntaxTreeDescriptionString.addString (" [shape=ellipse, label=") ;
            syntaxTreeDescriptionString.addStringAsCLiteralStringConstant (getCurrentTokenString (tokenPtr)) ;
            syntaxTreeDescriptionString.addString ("];\n") ;
            syntaxTreeDescriptionString.addString ("  NT") ;
            syntaxTreeDescriptionString.addUnsigned (currentProductionName) ;
            syntaxTreeDescriptionString.addString (" -> T") ;
            syntaxTreeDescriptionString.addUnsigned (uniqueTerminalIndex) ;
            syntaxTreeDescriptionString.addString (";\n") ;
            uniqueTerminalIndex ++ ;
          }
          errorStackCount = stack.count () ;
          errorStack.removeAllKeepingCapacity () ;
          errorProgramCounter = programCounter ;
        }else{ // Error !
          if (TRACE_LL1_PARSING ()) {
            gCout.addString ("ERROR: TOKEN NOT EXPECTED\n") ; gCout.flush () ;
          }
          TC_UniqueArray <int32_t> expectedTerminalsArray (100 COMMA_HERE) ;
          buildExpectedTerminalsArrayOnSyntaxError (errorProgramCounter,
                                                    errorStackCount,
                                                    stack,
                                                    errorStack,
                                                    inProductions,
                                                    inProductionIndexes,
                                                    inFirstProductionIndex,
                                                    inDecisionTable,
                                                    inDecisionTableIndexes,
                                                    expectedTerminalsArray) ;
          parsingError (expectedTerminalsArray, previousTokenPtr, tokenPtr, currentToken LINE_AND_SOURCE_FILE_FOR_LEXIQUE) ;
          result = loop = false ;
          listForSecondPassParsing.removeAllKeepingCapacity () ;
        }
    //--- It is the end of a production
      }else if (stack.count () > 0) {
        if (TRACE_LL1_PARSING ()) {
          gCout.addString ("END OF PRODUCTION REACHED\n") ; gCout.flush () ;
        }
        programCounter = stack.lastObject (HERE) ;
        if (errorStackCount >= stack.count ()) {
          errorStack.appendObject (programCounter) ;
        }
        stack.removeLastObject (HERE) ;
        if (produceSyntaxTree) {
          currentProductionName = productionUniqueNameStack.lastObject (HERE) ;
          productionUniqueNameStack.removeLastObject (HERE) ;
        }
        if (executionModeIsSyntaxAnalysisOnly ()) {
          indentationForParseOnly -- ;
        }
    //--- End of start symbol analysis
      }else if (currentToken == 0) { // We got the "end of text" non terminal : ok
        loop = false ;
      }else{ // We reach the end of text, but current terminal is not "end of text"
      //--- This is a syntax error
        TC_UniqueArray <int32_t> expectedTerminalsArray (100 COMMA_HERE) ;
        buildExpectedTerminalsArrayOnSyntaxError (errorProgramCounter,
                                                  errorStackCount,
                                                  stack,
                                                  errorStack,
                                                  inProductions,
                                                  inProductionIndexes,
                                                  inFirstProductionIndex,
                                                  inDecisionTable,
                                                  inDecisionTableIndexes,
                                                  expectedTerminalsArray) ;
        parsingError (expectedTerminalsArray, previousTokenPtr, tokenPtr, currentToken LINE_AND_SOURCE_FILE_FOR_LEXIQUE) ;
        result = loop = false ;
        listForSecondPassParsing.removeAllKeepingCapacity () ;
      }
    }
  //--- Output graphviz file
    if (produceSyntaxTree) {
      syntaxTreeDescriptionString.addString ("}\n") ;
      const String dotFilePath = sourceFilePath ().stringByDeletingPathExtension () + ".dot" ;
      GALGAS_bool fileWritten ;
      GALGAS_string (syntaxTreeDescriptionString).method_writeToFileWhenDifferentContents (GALGAS_string (dotFilePath), fileWritten, this COMMA_HERE) ;
    }
  //--- Set current read location to 0
    listForSecondPassParsing.copyTo (mArrayForSecondPassParsing) ;
    resetForSecondPass () ;
    if (executionModeIsSyntaxAnalysisOnly ()) {
      gCout.addString ("*** END OF PARSING (success: ") ;
      gCout.addString (result ? "yes" : "no") ;
      gCout.addString (") ***\n") ;
    }
  }
//---
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Bottom up parsing
#endif

//--------------------------------------------------------------------------------------------------
//
//   Test if a given terminal symbol can be accepted for signaling an error (for bottom-up parsing)                    *
//
//--------------------------------------------------------------------------------------------------

static bool acceptExpectedTerminalForBottomUpParsingError (const int32_t inExpectedTerminal,
                                                           const int32_t inExpectedAction,
                                                           const TC_Array <int32_t> & inSLRstack,
                                                           const int32_t inActionTable [],
                                                           const uint32_t inActionTableIndex [],
                                                           const int32_t * inSuccessorTable [],
                                                           const int32_t inProductionsTable []) {
  bool accept = inExpectedAction > 1 ; // accept if it is a shift action
  if (! accept) {
    int32_t actionCode = inExpectedAction ;
    TC_Array <int32_t> stack (inSLRstack) ; // Duplicate stack
    bool loop = true ;
    while (loop) {
    //--- Perform reduce action
      const int32_t reduceAction = (int32_t) (- actionCode - 1) ;
      macroAssert (reduceAction >= 0, "reduceAction (%lld) < 0", reduceAction, 0) ;
      const int32_t nonTerminal = inProductionsTable [2 * reduceAction] ;
      const int32_t reduceSize = inProductionsTable [2 * reduceAction + 1] ;
      stack.removeLastObjects (2 * reduceSize  COMMA_HERE) ;
   //--- Get Successor state
      const int32_t tempCurrentState = stack.lastObject (HERE) ;
      macroAssert (tempCurrentState >= 0, "tempCurrentState (%lld) < 0", tempCurrentState, 0) ;
      const int32_t * successorTable = inSuccessorTable [tempCurrentState] ;
      int32_t newCurrentState = -1 ;
      while (((* successorTable) >= 0) && (newCurrentState < 0)) {
        if ((* successorTable) == nonTerminal) {
          successorTable ++ ;
          newCurrentState = (* successorTable) ;
        }
        successorTable ++ ;
        successorTable ++ ;
      }
      macroAssert (newCurrentState >= 0, "newCurrentState (%lld) < 0", newCurrentState, 0) ;
      stack.appendObject (-1) ; // Enter any value
      stack.appendObject (newCurrentState) ; // Enter next current state
    //--- In the state, find action corresponding to expected terminal
      const int32_t currentState = stack (stack.count () - 1 COMMA_HERE) ;
      macroAssert (currentState >= 0, "currentState (%lld) < 0", currentState, 0) ;
      const int32_t * actionTable = & (inActionTable [inActionTableIndex [currentState]]) ;
      actionCode = 0 ;
      while (((* actionTable) >= 0) && (actionCode == 0)) {
        if ((* actionTable) == inExpectedTerminal) {
          actionTable ++ ;
          actionCode = (* actionTable) ;
        }
        actionTable ++ ;
        actionTable ++ ;
      }
    //--- action == 0 means the terminal is not expected : exit from loop, and return false
    //--- actionCode > 0 means a shift action is done : so the terminal is accepted : exit and return true
    //--- actionCode < 0 means a reduce action is done, don't exit, and perform the reduce action
      loop = actionCode < 0 ;
      accept = actionCode > 0 ;
    }
  }
  return accept ;
}

//--------------------------------------------------------------------------------------------------
//
//   Perform bottom up parsing (called by SLR and LR (1) parsers)
//
//--------------------------------------------------------------------------------------------------

bool C_Lexique::performBottomUpParsing (const int32_t inActionTable [],
                                        const char * inNonTerminalSymbolNames [],
                                        const uint32_t inActionTableIndex [],
                                        const int32_t * inSuccessorTable [],
                                        const int32_t inProductionsTable []) {
  bool result = false ;
  performLexicalAnalysis () ;
  if (! executionModeIsLexicalAnalysisOnly ()) {
    if (executionModeIsSyntaxAnalysisOnly ()) {
      gCout.addString ("*** PERFORM BOTTOM-UP PARSING ONLY (--mode=syntax-only option) ***\n"
                          "  Initial State: S0\n") ;
    }
  //--- Variables for generating syntax tree in a form suitable for graphviz
    const bool produceSyntaxTree = gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.mValue
       && (sourceFilePath ().stringByDeletingPathExtension () != "") ;
    String syntaxTreeDescriptionString ;
    TC_Array <String> shiftedElementStack ;
    shiftedElementStack.appendObject ("TOP") ;
    uint32_t uniqueTerminalIndex = 0 ;
    uint32_t currentProductionName = 0 ;
    if (produceSyntaxTree) {
      syntaxTreeDescriptionString.addString ("digraph G {\n"
                                     "  size =\"4,4\";\n") ;
    }
  //--- Perform first pass
    TC_UniqueArray <TC_UniqueArray <int32_t> > executionList (100 COMMA_HERE) ;
    executionList.appendDefaultObjectUsingSwap () ;

    TC_Array <int32_t> stack (10000 COMMA_HERE) ;
    stack.appendObject (0) ; // Enter initial state
    int32_t errorSignalingUselessEntryOnTopOfStack = 0 ;
    TC_Array <int32_t> poppedErrors (1000 COMMA_HERE)  ;
    cToken * previousTokenPtr = nullptr ;
    cToken * tokenPtr = mFirstToken ;

    int32_t currentToken = int32_t (-1) ;
    if (tokenPtr == nullptr) {
      mCurrentLocation.resetLocation () ;
    }else{
      currentToken = tokenPtr->mTokenCode ;
      mCurrentLocation = tokenPtr->mEndLocation ;
    }
    bool loop = true ;
    result = true ;
    while (loop) {
      if (currentToken < 0) {
        if (tokenPtr == nullptr) {
          currentToken = 0 ; // 0 means end of source file
        }else{
          previousTokenPtr = tokenPtr ;
          tokenPtr = tokenPtr->mNextToken ;
          currentToken = 0 ;
          if (tokenPtr != nullptr) {
            mCurrentLocation = tokenPtr->mEndLocation ;
            currentToken = tokenPtr->mTokenCode ;
          }
        }
      }
    //--- Get Action code -----------------------------------
      const int32_t currentState = stack.lastObject (HERE) ;
      macroAssert (currentState >= 0, "currentState (%lld) < 0", currentState, 0) ;
      const int32_t * actionTable = & (inActionTable [inActionTableIndex [currentState]]) ;
      int32_t actionCode = 0 ;
      while (((* actionTable) >= 0) && (actionCode == 0)) {
        if ((* actionTable) == currentToken) {
          actionTable += 1 ;
          actionCode = (* actionTable) ;
        }
        actionTable += 2 ;
      }
    //--- Decision from action code value
      if (actionCode > 1) {
      //--- Token has been used
        currentToken = -1 ;
      //--- Shift action ------------------------------------
        actionCode = int32_t (actionCode - 2) ;
        stack.appendObject (-1) ; // Enter any value
        stack.appendObject (actionCode) ; // Enter next current state
        poppedErrors.removeAllKeepingCapacity () ;
        errorSignalingUselessEntryOnTopOfStack = 0 ;
        executionList.appendDefaultObjectUsingSwap () ;
      //---
        if (produceSyntaxTree) {
          String terminalUniqueName ;
          terminalUniqueName.addString ("T") ;
          terminalUniqueName.addUnsigned (uniqueTerminalIndex) ;
          syntaxTreeDescriptionString.addString ("  ") ;
          syntaxTreeDescriptionString.addString (terminalUniqueName) ;
          syntaxTreeDescriptionString.addString (" [shape=ellipse, label=") ;
          syntaxTreeDescriptionString.addStringAsCLiteralStringConstant (getCurrentTokenString (tokenPtr)) ;
          syntaxTreeDescriptionString.addString ("];\n") ;
          shiftedElementStack.appendObject (terminalUniqueName) ;
          uniqueTerminalIndex ++ ;
        }
      //--- Parse Only : print terminal symbol
        if (executionModeIsSyntaxAnalysisOnly ()) {
          gCout.addString ("  [S") ;
          gCout.addSigned (currentState) ;
          gCout.addString (", ") ;
          gCout.addString (getCurrentTokenString (tokenPtr)) ;
          gCout.addString ("] |- Shift -> S") ;
          gCout.addSigned (actionCode) ;
          gCout.addNL () ; ;
        }
      }else if (actionCode < 0) {
      //--- Reduce action ------------------------------------
        actionCode = int32_t (- actionCode - 1) ;
        macroAssert (actionCode >= 0, "actionCode (%lld) < 0", actionCode, 0) ;
        const int32_t nonTerminal = inProductionsTable [2 * actionCode] ;
        const int32_t reduceSize = inProductionsTable [2 * actionCode + 1] ;
        const int32_t executionListLength = executionList.count () ;
        for (int32_t i=executionListLength - reduceSize ; i<executionListLength ; i++) {
          executionList (executionListLength -  reduceSize - 1 COMMA_HERE).appendObjectsFromArray (executionList (i COMMA_HERE)) ;
          executionList (i COMMA_HERE).removeAllKeepingCapacity () ;
        }
        executionList (executionListLength - reduceSize - 1 COMMA_HERE).prependObject (actionCode) ;
        executionList.removeLastObjects (reduceSize COMMA_HERE) ;
        executionList.appendDefaultObjectUsingSwap () ;
        const int32_t stackReduceSize = 2 * reduceSize ;
        for (int32_t i=0 ; i<stackReduceSize ; i++) {
          if (errorSignalingUselessEntryOnTopOfStack > 0) {
            errorSignalingUselessEntryOnTopOfStack -- ;
          }else{
            poppedErrors.appendObject (stack.lastObject (HERE)) ;
          }
          stack.removeLastObject (HERE) ;
        }
        if (produceSyntaxTree) {
          for (int32_t i=0 ; i<reduceSize ; i++) {
            syntaxTreeDescriptionString.addString ("  NT") ;
            syntaxTreeDescriptionString.addUnsigned (currentProductionName) ;
            syntaxTreeDescriptionString.addString (" -> ") ;
            syntaxTreeDescriptionString.addString (shiftedElementStack.lastObject (HERE)) ;
            syntaxTreeDescriptionString.addString (";\n") ;
            shiftedElementStack.removeLastObject (HERE) ;
          }
        }
     //--- Get Successor state
        const int32_t tempCurrentState = stack.lastObject (HERE) ;
        macroAssert (tempCurrentState >= 0, "tempCurrentState (%lld) < 0", tempCurrentState, 0) ;
        const int32_t * successorTable = inSuccessorTable [tempCurrentState] ;
        int32_t newCurrentState = -1 ;
        while (((* successorTable) >= 0) && (newCurrentState < 0)) {
          if ((* successorTable) == nonTerminal) {
            successorTable ++ ;
            newCurrentState = (* successorTable) ;
          }
          successorTable ++ ;
          successorTable ++ ;
        }
        macroAssert (newCurrentState >= 0, "newCurrentState (%lld) < 0", newCurrentState, 0) ;
        stack.appendObject (-1) ; // Enter any value
        stack.appendObject (newCurrentState) ; // Enter next current state
        errorSignalingUselessEntryOnTopOfStack += 2 ;
        if (produceSyntaxTree) {
          String uniqueProductionName ;
          uniqueProductionName.addString ("NT") ;
          uniqueProductionName.addUnsigned (currentProductionName) ;
          syntaxTreeDescriptionString.addString ("  ") ;
          syntaxTreeDescriptionString.addString (uniqueProductionName) ;
          syntaxTreeDescriptionString.addString (" [label=\"") ;
          syntaxTreeDescriptionString.addString (inNonTerminalSymbolNames [nonTerminal]) ;
          syntaxTreeDescriptionString.addString ("\", shape=box];\n") ;
          shiftedElementStack.appendObject (uniqueProductionName) ;
          currentProductionName ++ ;
        }
        if (executionModeIsSyntaxAnalysisOnly ()) {
          gCout.addString ("  [S") ;
          gCout.addSigned (currentState) ;
          gCout.addString (", ") ;
          gCout.addString (getCurrentTokenString (tokenPtr)) ;
          gCout.addString ("] |- Reduce ") ;
          gCout.addString (inNonTerminalSymbolNames [nonTerminal]) ;
          gCout.addString (" -> S") ;
          gCout.addSigned (newCurrentState) ;
          gCout.addNL () ; ;
        }
      }else if (actionCode == 1) {
      //--- Accept action -----------------------------------
        loop = false ;
        executionList (0 COMMA_HERE).appendObjectsFromArray (executionList (1 COMMA_HERE)) ;
        executionList (1 COMMA_HERE).removeAllKeepingCapacity () ;
        if (executionModeIsSyntaxAnalysisOnly ()) {
          gCout.addString ("  [S") ;
          gCout.addSigned (currentState) ;
          gCout.addString (", ") ;
          gCout.addString (getCurrentTokenString (tokenPtr)) ;
          gCout.addString ("] : Accept\n") ;
        }
      }else{
      //--- Parsing error -----------------------------------
        result = false ;
        loop = false ;
      //--- Build error stack
        TC_Array <int32_t> actualErrorStack (stack.count () + poppedErrors.count () COMMA_HERE) ;
        for (int32_t i=0 ; i<(stack.count () - errorSignalingUselessEntryOnTopOfStack) ; i++) {
          actualErrorStack.appendObject (stack (i COMMA_HERE)) ;
        }
        for (int32_t i=poppedErrors.count () - 1 ; i>=0 ; i--) {
          actualErrorStack.appendObject (poppedErrors (i COMMA_HERE)) ;
        }
      //---
        TC_UniqueArray <int32_t> expectedTerminalsArray (100 COMMA_HERE) ;
        const int32_t currentErrorState = actualErrorStack.lastObject (HERE) ;
        actionTable = & (inActionTable [inActionTableIndex [currentErrorState]]) ;
        while ((* actionTable) >= 0) {
          const int32_t expectedTerminal = * actionTable ;
          actionTable += 1 ;
          const int32_t expectedAction = * actionTable ;
          actionTable += 1 ;
          const bool terminalAccepted = acceptExpectedTerminalForBottomUpParsingError (
            expectedTerminal,
            expectedAction,
            actualErrorStack,
            inActionTable,
            inActionTableIndex,
            inSuccessorTable,
            inProductionsTable
          ) ;
          if (terminalAccepted) {
            expectedTerminalsArray.appendObject (expectedTerminal) ;
          }
        }
        parsingError (expectedTerminalsArray, previousTokenPtr, tokenPtr, currentToken LINE_AND_SOURCE_FILE_FOR_LEXIQUE) ;
      }
    }
    if (result) {
      executionList (0 COMMA_HERE).copyTo (mArrayForSecondPassParsing) ;
    }
  //--- Output graphviz file
    if (produceSyntaxTree) {
      syntaxTreeDescriptionString.addString ("}\n") ;
      const String dotFilePath = sourceFilePath ().stringByDeletingPathExtension () + ".dot" ;
      GALGAS_bool fileWritten ;
      GALGAS_string (syntaxTreeDescriptionString).method_writeToFileWhenDifferentContents (GALGAS_string (dotFilePath), fileWritten, this COMMA_HERE) ;
    }
    if (executionModeIsSyntaxAnalysisOnly ()) {
      gCout.addString ("*** END OF PARSING (success: ") ;
      gCout.addString (result ? "yes" : "no") ;
      gCout.addString (") ***\n") ;
    }
  //--- Set current read location to 0
    resetForSecondPass () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
