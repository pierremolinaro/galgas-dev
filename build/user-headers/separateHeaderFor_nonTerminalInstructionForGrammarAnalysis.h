//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nonTerminalInstructionForGrammarAnalysis class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_nonTerminalInstructionForGrammarAnalysis : public cPtr_abstractSyntaxInstructionForGrammarAnalysis {
//--- START OF USER ZONE 2

  public: virtual void printInstructionForGrammar (C_HTMLString & inHTMLfile) ;


  public: virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                                                  const C_String & inSyntaxComponentName,
                                                  int32_t & ioCount) ;

  public: virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                              const int32_t inOriginalGrammarSymbolCount,
                                              TC_UniqueArray <int16_t> & ioInstructionsList) ;

  public: virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                         const int32_t inOriginalGrammarSymbolCount,
                                                         const C_String & inSyntaxComponentName,
                                                         cPureBNFproductionsList & ioProductions) ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_lstring mProperty_mNonterminalSymbolName ;
  public: GALGAS_uint mProperty_mNonterminalSymbolIndex ;

//--- Constructor
  public: cPtr_nonTerminalInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                         const GALGAS_lstring & in_mNonterminalSymbolName,
                                                         const GALGAS_uint & in_mNonterminalSymbolIndex
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

