//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @terminalInstructionForGrammarAnalysis class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_terminalInstructionForGrammarAnalysis : public cPtr_abstractSyntaxInstructionForGrammarAnalysis {

//--- Extension getter isLinear
  public: virtual class GALGAS_bool getter_isLinear (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method tikzNodeForSyntaxInstruction
  public: virtual void method_tikzNodeForSyntaxInstruction (class GALGAS_rowList & ioRowList,
           const class GALGAS_uint inRow,
           class GALGAS_uint & ioColumn,
           class GALGAS_string & ioCurrentNode,
           class GALGAS_string & ioArrowShape,
           class GALGAS_string & ioArrows,
           class GALGAS_uint & ioMaxUsedRowIndex,
           const class GALGAS_bool inDebug,
           C_Compiler * COMMA_LOCATION_ARGS) const override ;

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
  public: GALGAS_lstring mProperty_mTerminalSymbolName ;
  public: GALGAS_uint mProperty_mTerminalSymbolIndex ;

//--- Constructor
  public: cPtr_terminalInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                      const GALGAS_lstring & in_mTerminalSymbolName,
                                                      const GALGAS_uint & in_mTerminalSymbolIndex
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

