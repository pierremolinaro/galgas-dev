//---------------------------------------------------------------------------*
//                                                                           *
//                     File 'grammar_galgas_SLR_prgm.h'                      *
//                     january 29th, 2007, at 20h11'2"                       *
//                                                                           *
//---------------------------------------------------------------------------*


class grammar_galgas_SLR_prgm : public C_defaultUserSemanticActions {
  protected : galgas_scanner * _mScannerPtr ;
//--- Command line options
  protected : bool mOption_galgas_cli_options_warningsAsError ;
  protected : bool mOption_galgas_cli_options_warnsShadows ;
  protected : bool mOption_galgas_cli_options_doNotGenerateFiles ;
  protected : bool mOption_galgas_cli_options_outputHTMLgrammarFile ;
  protected : bool mOption_galgas_cli_options_generate_debug ;

//--- Constructor
  public : grammar_galgas_SLR_prgm (C_galgas_io * inParametersPtr
                                  COMMA_LOCATION_ARGS) ;

  public : void doCompilation (const C_String & inSourceFileName_,
                               const bool inVerboseOptionOn,
                               sint16 & returnCode) ;
  protected : GGS_M_lexiqueComponents mLexiqueMapForUse ; // start symbol attribute #1
  protected : GGS_M_semanticsComponents mSemanticsComponentsMap ; // start symbol attribute #2
  protected : GGS_M_syntaxComponents mSyntaxComponentsMap ; // start symbol attribute #3
  protected : GGS_M_grammarComponents mGrammarsComponentsMap ; // start symbol attribute #4
  protected : GGS_M_optionComponents mOptionComponentsMap ; // start symbol attribute #5
  protected : GGS_M_metamodelsComponents mMetamodelComponentMap ; // start symbol attribute #6
//--- START OF USER ZONE 2

//--- Prologue and epilogue
  public : inline void _prologue (void) {
    _mScannerPtr->mPerformGeneration = ! _mScannerPtr->boolOptionValueFromKeys ("galgas_cli_options", "doNotGenerateFiles" COMMA_HERE) ;
  }

  public : inline void _epilogue (void) {}

  public : void _beforeParsing (void) ;

  public : void _afterParsing (const bool inVerboseOptionOn) ;

//--- END OF USER ZONE 2

//--- Destructor
  public : virtual ~grammar_galgas_SLR_prgm (void) ;
} ;

//---------------------------------------------------------------------------*

