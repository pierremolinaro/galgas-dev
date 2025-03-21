//--- START OF USER ZONE 1

class HTMLString ;
class cPureBNFproductionsList ;
class GrammarVocabulary ;

//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractSyntaxInstructionForGrammarAnalysis : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractSyntaxInstructionForGrammarAnalysis_init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isLinear
  public: virtual class GGS_bool getter_isLinear (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method tikzNodeForSyntaxInstruction
  public: virtual void method_tikzNodeForSyntaxInstruction (class GGS_rowList & arg_ioRowList,
           const class GGS_uint arg_inRow,
           class GGS_uint & arg_ioColumn,
           class GGS_string & arg_ioCurrentNode,
           class GGS_string & arg_ioArrowShape,
           class GGS_string & arg_ioArrows,
           class GGS_uint & arg_ioMaxUsedRowIndex,
           const class GGS_bool arg_inDebug,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- START OF USER ZONE 2

  public: virtual void printInstructionForGrammar (HTMLString & inHTMLfile) const = 0 ;

  public: virtual void fixNewNonterminalSymbols (GrammarVocabulary & ioVocabulary,
                                                 const String & inSyntaxComponentName,
                                                 int32_t & ioCount) const = 0 ;

  public: virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                             const int32_t inOriginalGrammarSymbolCount,
                                             TC_UniqueArray <int32_t> & ioInstructionsList) const = 0 ;

  public: virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                        const int32_t inOriginalGrammarSymbolCount,
                                                        const String & inSyntaxComponentName,
                                                        cPureBNFproductionsList & ioProductions) const = 0 ;

//--- END OF USER ZONE 2
//--- Properties
  public: GGS_location mProperty_mStartLocation ;


//--- Default constructor
  public: cPtr_abstractSyntaxInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

