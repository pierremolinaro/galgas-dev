//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @repeatInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

class cPtr_repeatInstructionForGrammarAnalysis : public cPtr_abstractSyntaxInstructionForGrammarAnalysis {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void repeatInstructionForGrammarAnalysis_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_branchListForGrammarAnalysis & inOperand1,
                                                                     const class GGS_uint & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isLinear
  public: virtual class GGS_bool getter_isLinear (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method tikzNodeForSyntaxInstruction
  public: virtual void method_tikzNodeForSyntaxInstruction (class GGS_rowList & arg_ioRowList,
           const class GGS_uint arg_inRow,
           class GGS_uint & arg_ioColumn,
           class GGS_string & arg_ioCurrentNode,
           class GGS_string & arg_ioArrowShape,
           class GGS_string & arg_ioArrows,
           class GGS_uint & arg_ioMaxUsedRowIndex,
           const class GGS_bool arg_inDebug,
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
  public: GGS_branchListForGrammarAnalysis mProperty_mRepeatBranchList ;
  public: GGS_uint mProperty_mAddedNonTerminalSymbolIndex ;


//--- Default constructor
  public: cPtr_repeatInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_repeatInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                    const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

