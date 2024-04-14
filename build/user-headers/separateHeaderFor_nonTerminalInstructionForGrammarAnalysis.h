//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nonTerminalInstructionForGrammarAnalysis class
//
//--------------------------------------------------------------------------------------------------

class cPtr_nonTerminalInstructionForGrammarAnalysis : public cPtr_abstractSyntaxInstructionForGrammarAnalysis {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_uint & inOperand2,
                                                                          Compiler * inCompiler) ;


//--- Extension getter isLinear
  public: virtual class GALGAS_bool getter_isLinear (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method tikzNodeForSyntaxInstruction
  public: virtual void method_tikzNodeForSyntaxInstruction (class GALGAS_rowList & arg_ioRowList,
           const class GALGAS_uint arg_inRow,
           class GALGAS_uint & arg_ioColumn,
           class GALGAS_string & arg_ioCurrentNode,
           class GALGAS_string & arg_ioArrowShape,
           class GALGAS_string & arg_ioArrows,
           class GALGAS_uint & arg_ioMaxUsedRowIndex,
           const class GALGAS_bool arg_inDebug,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- START OF USER ZONE 2

  public: virtual void printInstructionForGrammar (HTMLString & inHTMLfile) const override ;


  public: virtual void fixNewNonterminalSymbols (GrammarVocabulary & ioVocabulary,
                                                 const String & inSyntaxComponentName,
                                                 int32_t & ioCount) const override ;

  public: virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                             const int32_t inOriginalGrammarSymbolCount,
                                             TC_UniqueArray <int32_t> & ioInstructionsList) const override ;

  public: virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                        const int32_t inOriginalGrammarSymbolCount,
                                                        const String & inSyntaxComponentName,
                                                        cPureBNFproductionsList & ioProductions) const override ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_lstring mProperty_mNonterminalSymbolName ;
  public: GALGAS_uint mProperty_mNonterminalSymbolIndex ;


//--- Default constructor
  public: cPtr_nonTerminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nonTerminalInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                         const GALGAS_lstring & in_mNonterminalSymbolName,
                                                         const GALGAS_uint & in_mNonterminalSymbolIndex
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

