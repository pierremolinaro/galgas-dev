//--- START OF USER ZONE 1

class C_HTMLString ;
class cPureBNFproductionsList ;
class cVocabulary ;

//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractSyntaxInstructionForGrammarAnalysis : public acStrongPtr_class {

//--- Extension getter isLinear
  public: virtual class GALGAS_bool getter_isLinear (C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method tikzNodeForSyntaxInstruction
  public: virtual void method_tikzNodeForSyntaxInstruction (class GALGAS_rowList & ioRowList,
           const class GALGAS_uint inRow,
           class GALGAS_uint & ioColumn,
           class GALGAS_string & ioCurrentNode,
           class GALGAS_string & ioArrowShape,
           class GALGAS_string & ioArrows,
           class GALGAS_uint & ioMaxUsedRowIndex,
           const class GALGAS_bool inDebug,
           C_Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- START OF USER ZONE 2

  public: virtual void printInstructionForGrammar (C_HTMLString & inHTMLfile) = 0 ;

  public: virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                                                  const C_String & inSyntaxComponentName,
                                                  int32_t & ioCount) = 0 ;

  public: virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                              const int32_t inOriginalGrammarSymbolCount,
                                              TC_UniqueArray <int16_t> & ioInstructionsList) = 0 ;

  public: virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                         const int32_t inOriginalGrammarSymbolCount,
                                                         const C_String & inSyntaxComponentName,
                                                         cPureBNFproductionsList & ioProductions) = 0 ;

//--- END OF USER ZONE 2
//--- Properties
  public: GALGAS_location mProperty_mStartLocation ;

//--- Constructor
  public: cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

