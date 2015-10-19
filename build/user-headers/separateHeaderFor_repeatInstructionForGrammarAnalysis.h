//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @repeatInstructionForGrammarAnalysis class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_repeatInstructionForGrammarAnalysis : public cPtr_abstractSyntaxInstructionForGrammarAnalysis {
//--- START OF USER ZONE 2

  public : virtual void printInstructionForGrammar (C_HTMLString & inHTMLfile) ;


  public : virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                                                  const C_String & inSyntaxComponentName,
                                                  int32_t & ioCount) ;

  public : virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                              const int32_t inOriginalGrammarSymbolCount,
                                              TC_UniqueArray <int16_t> & ioInstructionsList) ;

  public : virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                         const int32_t inOriginalGrammarSymbolCount,
                                                         const C_String & inSyntaxComponentName,
                                                         cPureBNFproductionsList & ioProductions) ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_branchListForGrammarAnalysis mAttribute_mRepeatBranchList ;
  public : GALGAS_uint mAttribute_mAddedNonTerminalSymbolIndex ;

//--- Constructor
  public : cPtr_repeatInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                     const GALGAS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                     const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_branchListForGrammarAnalysis getter_mRepeatBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mAddedNonTerminalSymbolIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

