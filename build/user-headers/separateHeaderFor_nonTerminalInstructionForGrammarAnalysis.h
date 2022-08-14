//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nonTerminalInstructionForGrammarAnalysis class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_nonTerminalInstructionForGrammarAnalysis : public cPtr_abstractSyntaxInstructionForGrammarAnalysis {

//----------------------------------------------------------------------------------------------------------------------

//--- Extension getter isLinear
  public: virtual class GALGAS_bool getter_isLinear (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- START OF USER ZONE 2

  public: virtual void printInstructionForGrammar (C_HTMLString & inHTMLfile) override ;


  public: virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                                                  const C_String & inSyntaxComponentName,
                                                  int32_t & ioCount) override ;

  public: virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                              const int32_t inOriginalGrammarSymbolCount,
                                              TC_UniqueArray <int16_t> & ioInstructionsList) override ;

  public: virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                         const int32_t inOriginalGrammarSymbolCount,
                                                         const C_String & inSyntaxComponentName,
                                                         cPureBNFproductionsList & ioProductions) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

