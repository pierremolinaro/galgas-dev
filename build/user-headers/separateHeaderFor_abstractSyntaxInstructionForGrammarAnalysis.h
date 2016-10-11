//--- START OF USER ZONE 1

class C_HTMLString ;
class cPureBNFproductionsList ;
class cVocabulary ;

//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractSyntaxInstructionForGrammarAnalysis : public acPtr_class {
//--- START OF USER ZONE 2

  public : virtual void printInstructionForGrammar (C_HTMLString & inHTMLfile) = 0 ;

  public : virtual void fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                                                  const C_String & inSyntaxComponentName,
                                                  int32_t & ioCount) = 0 ;

  public : virtual void buildRightDerivation (const int32_t inTerminalSymbolsCount,
                                              const int32_t inOriginalGrammarSymbolCount,
                                              TC_UniqueArray <int16_t> & ioInstructionsList) = 0 ;

  public : virtual void buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                                         const int32_t inOriginalGrammarSymbolCount,
                                                         const C_String & inSyntaxComponentName,
                                                         cPureBNFproductionsList & ioProductions) = 0 ;

//--- END OF USER ZONE 2
//--- Attributes
  public : GALGAS_location mProperty_mStartLocation ;

//--- Constructor
  public : cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mStartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

