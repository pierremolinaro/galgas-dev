//--------------------------------------------------------------------------------------------------

static const uint32_t kUnicodeNotAssigned =  0 ;
static const uint32_t kUnicodeCategory_Lu =  1 ; // Letter, Uppercase
static const uint32_t kUnicodeCategory_Ll =  2 ; // Letter, Lowercase
static const uint32_t kUnicodeCategory_Lt =  3 ; // Letter, Title Case
static const uint32_t kUnicodeCategory_Lm =  4 ; // Letter, Modifier
static const uint32_t kUnicodeCategory_Lo =  5 ; // Letter, Other
static const uint32_t kUnicodeCategory_Mn =  6 ; // Mark, Nonspacing
static const uint32_t kUnicodeCategory_Mc =  7 ; // Mark, Space Combining
static const uint32_t kUnicodeCategory_Me =  8 ; // Mark, Enclosing
static const uint32_t kUnicodeCategory_Nd =  9 ; // Number, Decimal Digit
static const uint32_t kUnicodeCategory_Nl = 10 ; // Number, Letter
static const uint32_t kUnicodeCategory_No = 11 ; // Number, Other
static const uint32_t kUnicodeCategory_Pc = 12 ; // Punctuation, Connector
static const uint32_t kUnicodeCategory_Pd = 13 ; // Punctuation, Dash
static const uint32_t kUnicodeCategory_Ps = 14 ; // Punctuation, Open
static const uint32_t kUnicodeCategory_Pe = 15 ; // Punctuation, Close
static const uint32_t kUnicodeCategory_Pi = 16 ; // Punctuation, initial quote
static const uint32_t kUnicodeCategory_Pf = 17 ; // Punctuation, Final quote
static const uint32_t kUnicodeCategory_Po = 18 ; // Punctuation, Other
static const uint32_t kUnicodeCategory_Sm = 19 ; // Symbol, Math
static const uint32_t kUnicodeCategory_Sc = 20 ; // Symbol, Currency
static const uint32_t kUnicodeCategory_Sk = 21 ; // Symbol, Modifier
static const uint32_t kUnicodeCategory_So = 22 ; // Symbol, Other
static const uint32_t kUnicodeCategory_Zs = 23 ; // Separator, Space
static const uint32_t kUnicodeCategory_Zl = 24 ; // Separator, Line
static const uint32_t kUnicodeCategory_Zp = 25 ; // Separator, Paragraph
static const uint32_t kUnicodeCategory_Cc = 26 ; // Other, Control
static const uint32_t kUnicodeCategory_Cf = 27 ; // Other, Format
static const uint32_t kUnicodeCategory_Cs = 28 ; // Other, Surrogate
static const uint32_t kUnicodeCategory_Co = 29 ; // Other, Private Use

static const uint32_t gNamePageSize = 256 ;

//--- Entry definition:
//  Bits 31...27: Category
//  Bits 20...17: Decimal value (if any)
//  Bits 16...0: Index of part name construction array

static const uint32_t kNameMask = 0x0001FFFF ;

static const uint32_t gNamePage0 [256] = {
  1 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x0
  3 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1
  5 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x2
  7 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x3
  9 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x4
  11 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x5
  13 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x6
  15 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x7
  17 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8
  19 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9
  21 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0xA
  23 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0xB
  25 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0xC
  27 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0xD
  29 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0xE
  31 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0xF
  33 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x10
  35 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x11
  37 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x12
  39 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x13
  41 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x14
  43 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x15
  45 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x16
  47 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x17
  49 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x18
  51 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x19
  53 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1A
  55 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1B
  57 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1C
  59 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1D
  61 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1E
  63 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x1F
  65 | (kUnicodeCategory_Zs << 27), // "SPACE", unicode 0x20
  67 | (kUnicodeCategory_Po << 27), // "EXCLAMATION MARK", unicode 0x21
  70 | (kUnicodeCategory_Po << 27), // "QUOTATION MARK", unicode 0x22
  73 | (kUnicodeCategory_Po << 27), // "NUMBER SIGN", unicode 0x23
  76 | (kUnicodeCategory_Sc << 27), // "DOLLAR SIGN", unicode 0x24
  79 | (kUnicodeCategory_Po << 27), // "PERCENT SIGN", unicode 0x25
  82 | (kUnicodeCategory_Po << 27), // "AMPERSAND", unicode 0x26
  84 | (kUnicodeCategory_Po << 27), // "APOSTROPHE", unicode 0x27
  86 | (kUnicodeCategory_Ps << 27), // "LEFT PARENTHESIS", unicode 0x28
  89 | (kUnicodeCategory_Pe << 27), // "RIGHT PARENTHESIS", unicode 0x29
  92 | (kUnicodeCategory_Po << 27), // "ASTERISK", unicode 0x2A
  94 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN", unicode 0x2B
  97 | (kUnicodeCategory_Po << 27), // "COMMA", unicode 0x2C
  99 | (kUnicodeCategory_Pd << 27), // "HYPHEN-MINUS", unicode 0x2D
  103 | (kUnicodeCategory_Po << 27), // "FULL STOP", unicode 0x2E
  107 | (kUnicodeCategory_Po << 27), // "SOLIDUS", unicode 0x2F
  109 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT ZERO", unicode 0x30
  112 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT ONE", unicode 0x31
  115 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT TWO", unicode 0x32
  118 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT THREE", unicode 0x33
  121 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT FOUR", unicode 0x34
  124 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT FIVE", unicode 0x35
  127 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT SIX", unicode 0x36
  130 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT SEVEN", unicode 0x37
  133 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT EIGHT", unicode 0x38
  136 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "DIGIT NINE", unicode 0x39
  139 | (kUnicodeCategory_Po << 27), // "COLON", unicode 0x3A
  141 | (kUnicodeCategory_Po << 27), // "SEMICOLON", unicode 0x3B
  143 | (kUnicodeCategory_Sm << 27), // "LESS-THAN SIGN", unicode 0x3C
  148 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN", unicode 0x3D
  151 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN SIGN", unicode 0x3E
  156 | (kUnicodeCategory_Po << 27), // "QUESTION MARK", unicode 0x3F
  159 | (kUnicodeCategory_Po << 27), // "COMMERCIAL AT", unicode 0x40
  163 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A", unicode 0x41
  167 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B", unicode 0x42
  171 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C", unicode 0x43
  176 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D", unicode 0x44
  181 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E", unicode 0x45
  185 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER F", unicode 0x46
  190 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G", unicode 0x47
  195 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H", unicode 0x48
  200 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I", unicode 0x49
  205 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER J", unicode 0x4A
  210 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K", unicode 0x4B
  215 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L", unicode 0x4C
  220 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER M", unicode 0x4D
  225 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N", unicode 0x4E
  230 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O", unicode 0x4F
  234 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER P", unicode 0x50
  239 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Q", unicode 0x51
  244 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R", unicode 0x52
  249 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S", unicode 0x53
  254 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T", unicode 0x54
  259 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U", unicode 0x55
  263 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER V", unicode 0x56
  268 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W", unicode 0x57
  273 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER X", unicode 0x58
  278 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y", unicode 0x59
  283 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z", unicode 0x5A
  288 | (kUnicodeCategory_Ps << 27), // "LEFT SQUARE BRACKET", unicode 0x5B
  292 | (kUnicodeCategory_Po << 27), // "REVERSE SOLIDUS", unicode 0x5C
  296 | (kUnicodeCategory_Pe << 27), // "RIGHT SQUARE BRACKET", unicode 0x5D
  300 | (kUnicodeCategory_Sk << 27), // "CIRCUMFLEX ACCENT", unicode 0x5E
  304 | (kUnicodeCategory_Pc << 27), // "LOW LINE", unicode 0x5F
  308 | (kUnicodeCategory_Sk << 27), // "GRAVE ACCENT", unicode 0x60
  312 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A", unicode 0x61
  316 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B", unicode 0x62
  320 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C", unicode 0x63
  325 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D", unicode 0x64
  330 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E", unicode 0x65
  334 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER F", unicode 0x66
  339 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G", unicode 0x67
  344 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H", unicode 0x68
  349 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I", unicode 0x69
  354 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER J", unicode 0x6A
  359 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K", unicode 0x6B
  364 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L", unicode 0x6C
  369 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M", unicode 0x6D
  374 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N", unicode 0x6E
  379 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O", unicode 0x6F
  383 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P", unicode 0x70
  388 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Q", unicode 0x71
  393 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R", unicode 0x72
  398 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S", unicode 0x73
  403 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T", unicode 0x74
  408 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U", unicode 0x75
  412 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V", unicode 0x76
  417 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W", unicode 0x77
  422 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER X", unicode 0x78
  427 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y", unicode 0x79
  432 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z", unicode 0x7A
  437 | (kUnicodeCategory_Ps << 27), // "LEFT CURLY BRACKET", unicode 0x7B
  442 | (kUnicodeCategory_Sm << 27), // "VERTICAL LINE", unicode 0x7C
  445 | (kUnicodeCategory_Pe << 27), // "RIGHT CURLY BRACKET", unicode 0x7D
  450 | (kUnicodeCategory_Sm << 27), // "TILDE", unicode 0x7E
  452 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x7F
  454 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x80
  456 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x81
  458 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x82
  460 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x83
  462 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x84
  464 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x85
  466 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x86
  468 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x87
  470 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x88
  472 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x89
  474 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8A
  476 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8B
  478 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8C
  480 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8D
  482 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8E
  484 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x8F
  486 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x90
  488 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x91
  490 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x92
  492 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x93
  494 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x94
  496 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x95
  498 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x96
  500 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x97
  502 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x98
  504 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x99
  506 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9A
  508 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9B
  510 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9C
  512 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9D
  514 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9E
  516 | (kUnicodeCategory_Cc << 27), // "<control>", unicode 0x9F
  518 | (kUnicodeCategory_Zs << 27), // "NO-BREAK SPACE", unicode 0xA0
  524 | (kUnicodeCategory_Po << 27), // "INVERTED EXCLAMATION MARK", unicode 0xA1
  529 | (kUnicodeCategory_Sc << 27), // "CENT SIGN", unicode 0xA2
  532 | (kUnicodeCategory_Sc << 27), // "POUND SIGN", unicode 0xA3
  535 | (kUnicodeCategory_Sc << 27), // "CURRENCY SIGN", unicode 0xA4
  538 | (kUnicodeCategory_Sc << 27), // "YEN SIGN", unicode 0xA5
  541 | (kUnicodeCategory_So << 27), // "BROKEN BAR", unicode 0xA6
  545 | (kUnicodeCategory_So << 27), // "SECTION SIGN", unicode 0xA7
  548 | (kUnicodeCategory_Sk << 27), // "DIAERESIS", unicode 0xA8
  550 | (kUnicodeCategory_So << 27), // "COPYRIGHT SIGN", unicode 0xA9
  553 | (kUnicodeCategory_Ll << 27), // "FEMININE ORDINAL INDICATOR", unicode 0xAA
  559 | (kUnicodeCategory_Pi << 27), // "LEFT-POINTING DOUBLE ANGLE QUOTATION MARK", unicode 0xAB
  568 | (kUnicodeCategory_Sm << 27), // "NOT SIGN", unicode 0xAC
  571 | (kUnicodeCategory_Cf << 27), // "SOFT HYPHEN", unicode 0xAD
  575 | (kUnicodeCategory_So << 27), // "REGISTERED SIGN", unicode 0xAE
  579 | (kUnicodeCategory_Sk << 27), // "MACRON", unicode 0xAF
  581 | (kUnicodeCategory_So << 27), // "DEGREE SIGN", unicode 0xB0
  584 | (kUnicodeCategory_Sm << 27), // "PLUS-MINUS SIGN", unicode 0xB1
  589 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT TWO", unicode 0xB2
  593 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT THREE", unicode 0xB3
  597 | (kUnicodeCategory_Sk << 27), // "ACUTE ACCENT", unicode 0xB4
  601 | (kUnicodeCategory_Ll << 27), // "MICRO SIGN", unicode 0xB5
  604 | (kUnicodeCategory_So << 27), // "PILCROW SIGN", unicode 0xB6
  607 | (kUnicodeCategory_Po << 27), // "MIDDLE DOT", unicode 0xB7
  610 | (kUnicodeCategory_Sk << 27), // "CEDILLA", unicode 0xB8
  612 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT ONE", unicode 0xB9
  616 | (kUnicodeCategory_Ll << 27), // "MASCULINE ORDINAL INDICATOR", unicode 0xBA
  622 | (kUnicodeCategory_Pf << 27), // "RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK", unicode 0xBB
  631 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION ONE QUARTER", unicode 0xBC
  639 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION ONE HALF", unicode 0xBD
  647 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION THREE QUARTERS", unicode 0xBE
  655 | (kUnicodeCategory_Po << 27), // "INVERTED QUESTION MARK", unicode 0xBF
  660 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH GRAVE", unicode 0xC0
  667 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH ACUTE", unicode 0xC1
  674 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CIRCUMFLEX", unicode 0xC2
  681 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH TILDE", unicode 0xC3
  688 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH DIAERESIS", unicode 0xC4
  695 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH RING ABOVE", unicode 0xC5
  703 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER AE", unicode 0xC6
  708 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH CEDILLA", unicode 0xC7
  716 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH GRAVE", unicode 0xC8
  723 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH ACUTE", unicode 0xC9
  730 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX", unicode 0xCA
  737 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH DIAERESIS", unicode 0xCB
  744 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH GRAVE", unicode 0xCC
  752 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH ACUTE", unicode 0xCD
  760 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH CIRCUMFLEX", unicode 0xCE
  768 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH DIAERESIS", unicode 0xCF
  776 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER ETH", unicode 0xD0
  781 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH TILDE", unicode 0xD1
  789 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH GRAVE", unicode 0xD2
  796 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH ACUTE", unicode 0xD3
  803 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CIRCUMFLEX", unicode 0xD4
  810 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH TILDE", unicode 0xD5
  817 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DIAERESIS", unicode 0xD6
  824 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN", unicode 0xD7
  827 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH STROKE", unicode 0xD8
  834 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH GRAVE", unicode 0xD9
  841 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH ACUTE", unicode 0xDA
  848 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH CIRCUMFLEX", unicode 0xDB
  855 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DIAERESIS", unicode 0xDC
  862 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH ACUTE", unicode 0xDD
  870 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER THORN", unicode 0xDE
  875 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SHARP S", unicode 0xDF
  882 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH GRAVE", unicode 0xE0
  889 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH ACUTE", unicode 0xE1
  896 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CIRCUMFLEX", unicode 0xE2
  903 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH TILDE", unicode 0xE3
  910 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH DIAERESIS", unicode 0xE4
  917 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH RING ABOVE", unicode 0xE5
  925 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER AE", unicode 0xE6
  930 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH CEDILLA", unicode 0xE7
  938 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH GRAVE", unicode 0xE8
  945 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH ACUTE", unicode 0xE9
  952 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX", unicode 0xEA
  959 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH DIAERESIS", unicode 0xEB
  966 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH GRAVE", unicode 0xEC
  974 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH ACUTE", unicode 0xED
  982 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH CIRCUMFLEX", unicode 0xEE
  990 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH DIAERESIS", unicode 0xEF
  998 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ETH", unicode 0xF0
  1003 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH TILDE", unicode 0xF1
  1011 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH GRAVE", unicode 0xF2
  1018 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH ACUTE", unicode 0xF3
  1025 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CIRCUMFLEX", unicode 0xF4
  1032 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH TILDE", unicode 0xF5
  1039 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DIAERESIS", unicode 0xF6
  1046 | (kUnicodeCategory_Sm << 27), // "DIVISION SIGN", unicode 0xF7
  1049 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH STROKE", unicode 0xF8
  1056 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH GRAVE", unicode 0xF9
  1063 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH ACUTE", unicode 0xFA
  1070 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH CIRCUMFLEX", unicode 0xFB
  1077 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DIAERESIS", unicode 0xFC
  1084 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH ACUTE", unicode 0xFD
  1092 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER THORN", unicode 0xFE
  1097 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH DIAERESIS", unicode 0xFF
} ;

static const uint32_t gNamePage1 [256] = {
  1105 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH MACRON", unicode 0x100
  1112 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH MACRON", unicode 0x101
  1119 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH BREVE", unicode 0x102
  1126 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH BREVE", unicode 0x103
  1133 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH OGONEK", unicode 0x104
  1140 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH OGONEK", unicode 0x105
  1147 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH ACUTE", unicode 0x106
  1155 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH ACUTE", unicode 0x107
  1163 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH CIRCUMFLEX", unicode 0x108
  1171 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH CIRCUMFLEX", unicode 0x109
  1179 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH DOT ABOVE", unicode 0x10A
  1187 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH DOT ABOVE", unicode 0x10B
  1195 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH CARON", unicode 0x10C
  1203 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH CARON", unicode 0x10D
  1211 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH CARON", unicode 0x10E
  1219 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH CARON", unicode 0x10F
  1227 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH STROKE", unicode 0x110
  1235 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH STROKE", unicode 0x111
  1243 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH MACRON", unicode 0x112
  1250 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH MACRON", unicode 0x113
  1257 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH BREVE", unicode 0x114
  1264 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH BREVE", unicode 0x115
  1271 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH DOT ABOVE", unicode 0x116
  1278 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH DOT ABOVE", unicode 0x117
  1285 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH OGONEK", unicode 0x118
  1292 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH OGONEK", unicode 0x119
  1299 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CARON", unicode 0x11A
  1306 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CARON", unicode 0x11B
  1313 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH CIRCUMFLEX", unicode 0x11C
  1321 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH CIRCUMFLEX", unicode 0x11D
  1329 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH BREVE", unicode 0x11E
  1337 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH BREVE", unicode 0x11F
  1345 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH DOT ABOVE", unicode 0x120
  1353 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH DOT ABOVE", unicode 0x121
  1361 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH CEDILLA", unicode 0x122
  1369 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH CEDILLA", unicode 0x123
  1377 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH CIRCUMFLEX", unicode 0x124
  1385 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH CIRCUMFLEX", unicode 0x125
  1393 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH STROKE", unicode 0x126
  1401 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH STROKE", unicode 0x127
  1409 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH TILDE", unicode 0x128
  1417 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH TILDE", unicode 0x129
  1425 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH MACRON", unicode 0x12A
  1433 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH MACRON", unicode 0x12B
  1441 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH BREVE", unicode 0x12C
  1449 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH BREVE", unicode 0x12D
  1457 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH OGONEK", unicode 0x12E
  1465 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH OGONEK", unicode 0x12F
  1473 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH DOT ABOVE", unicode 0x130
  1481 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DOTLESS I", unicode 0x131
  1488 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LIGATURE IJ", unicode 0x132
  1493 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LIGATURE IJ", unicode 0x133
  1498 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER J WITH CIRCUMFLEX", unicode 0x134
  1506 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER J WITH CIRCUMFLEX", unicode 0x135
  1514 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH CEDILLA", unicode 0x136
  1522 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH CEDILLA", unicode 0x137
  1530 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER KRA", unicode 0x138
  1536 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH ACUTE", unicode 0x139
  1544 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH ACUTE", unicode 0x13A
  1552 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH CEDILLA", unicode 0x13B
  1560 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH CEDILLA", unicode 0x13C
  1568 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH CARON", unicode 0x13D
  1576 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH CARON", unicode 0x13E
  1584 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH MIDDLE DOT", unicode 0x13F
  1593 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH MIDDLE DOT", unicode 0x140
  1602 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH STROKE", unicode 0x141
  1610 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH STROKE", unicode 0x142
  1618 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH ACUTE", unicode 0x143
  1626 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH ACUTE", unicode 0x144
  1634 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH CEDILLA", unicode 0x145
  1642 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH CEDILLA", unicode 0x146
  1650 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH CARON", unicode 0x147
  1658 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH CARON", unicode 0x148
  1666 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N PRECEDED BY APOSTROPHE", unicode 0x149
  1678 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER ENG", unicode 0x14A
  1683 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ENG", unicode 0x14B
  1688 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH MACRON", unicode 0x14C
  1695 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH MACRON", unicode 0x14D
  1702 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH BREVE", unicode 0x14E
  1709 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH BREVE", unicode 0x14F
  1716 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DOUBLE ACUTE", unicode 0x150
  1724 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DOUBLE ACUTE", unicode 0x151
  1732 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LIGATURE OE", unicode 0x152
  1737 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LIGATURE OE", unicode 0x153
  1742 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH ACUTE", unicode 0x154
  1750 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH ACUTE", unicode 0x155
  1758 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH CEDILLA", unicode 0x156
  1766 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH CEDILLA", unicode 0x157
  1774 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH CARON", unicode 0x158
  1782 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH CARON", unicode 0x159
  1790 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH ACUTE", unicode 0x15A
  1798 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH ACUTE", unicode 0x15B
  1806 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH CIRCUMFLEX", unicode 0x15C
  1814 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH CIRCUMFLEX", unicode 0x15D
  1822 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH CEDILLA", unicode 0x15E
  1830 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH CEDILLA", unicode 0x15F
  1838 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH CARON", unicode 0x160
  1846 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH CARON", unicode 0x161
  1854 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH CEDILLA", unicode 0x162
  1862 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH CEDILLA", unicode 0x163
  1870 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH CARON", unicode 0x164
  1878 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH CARON", unicode 0x165
  1886 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH STROKE", unicode 0x166
  1894 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH STROKE", unicode 0x167
  1902 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH TILDE", unicode 0x168
  1909 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH TILDE", unicode 0x169
  1916 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH MACRON", unicode 0x16A
  1923 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH MACRON", unicode 0x16B
  1930 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH BREVE", unicode 0x16C
  1937 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH BREVE", unicode 0x16D
  1944 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH RING ABOVE", unicode 0x16E
  1952 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH RING ABOVE", unicode 0x16F
  1960 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DOUBLE ACUTE", unicode 0x170
  1968 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DOUBLE ACUTE", unicode 0x171
  1976 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH OGONEK", unicode 0x172
  1983 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH OGONEK", unicode 0x173
  1990 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH CIRCUMFLEX", unicode 0x174
  1998 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH CIRCUMFLEX", unicode 0x175
  2006 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH CIRCUMFLEX", unicode 0x176
  2014 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH CIRCUMFLEX", unicode 0x177
  2022 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH DIAERESIS", unicode 0x178
  2030 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH ACUTE", unicode 0x179
  2038 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH ACUTE", unicode 0x17A
  2046 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH DOT ABOVE", unicode 0x17B
  2054 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH DOT ABOVE", unicode 0x17C
  2062 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH CARON", unicode 0x17D
  2070 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH CARON", unicode 0x17E
  2078 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LONG S", unicode 0x17F
  2085 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH STROKE", unicode 0x180
  2092 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B WITH HOOK", unicode 0x181
  2099 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B WITH TOPBAR", unicode 0x182
  2106 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH TOPBAR", unicode 0x183
  2113 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER TONE SIX", unicode 0x184
  2120 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TONE SIX", unicode 0x185
  2127 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER OPEN O", unicode 0x186
  2133 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH HOOK", unicode 0x187
  2141 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH HOOK", unicode 0x188
  2149 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER AFRICAN D", unicode 0x189
  2156 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH HOOK", unicode 0x18A
  2164 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH TOPBAR", unicode 0x18B
  2172 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH TOPBAR", unicode 0x18C
  2180 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED DELTA", unicode 0x18D
  2187 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER REVERSED E", unicode 0x18E
  2193 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER SCHWA", unicode 0x18F
  2198 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER OPEN E", unicode 0x190
  2204 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER F WITH HOOK", unicode 0x191
  2212 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER F WITH HOOK", unicode 0x192
  2220 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH HOOK", unicode 0x193
  2228 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER GAMMA", unicode 0x194
  2233 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER HV", unicode 0x195
  2238 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER IOTA", unicode 0x196
  2243 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH STROKE", unicode 0x197
  2251 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH HOOK", unicode 0x198
  2259 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH HOOK", unicode 0x199
  2267 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH BAR", unicode 0x19A
  2275 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LAMBDA WITH STROKE", unicode 0x19B
  2284 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER TURNED M", unicode 0x19C
  2291 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH LEFT HOOK", unicode 0x19D
  2300 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH LONG RIGHT LEG", unicode 0x19E
  2311 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH MIDDLE TILDE", unicode 0x19F
  2320 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HORN", unicode 0x1A0
  2327 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HORN", unicode 0x1A1
  2334 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER OI", unicode 0x1A2
  2339 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER OI", unicode 0x1A3
  2344 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER P WITH HOOK", unicode 0x1A4
  2352 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P WITH HOOK", unicode 0x1A5
  2360 | (kUnicodeCategory_Lu << 27), // "LATIN LETTER YR", unicode 0x1A6
  2364 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER TONE TWO", unicode 0x1A7
  2371 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TONE TWO", unicode 0x1A8
  2378 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER ESH", unicode 0x1A9
  2383 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER REVERSED ESH LOOP", unicode 0x1AA
  2391 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH PALATAL HOOK", unicode 0x1AB
  2401 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH HOOK", unicode 0x1AC
  2409 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH HOOK", unicode 0x1AD
  2417 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH RETROFLEX HOOK", unicode 0x1AE
  2427 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HORN", unicode 0x1AF
  2434 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HORN", unicode 0x1B0
  2441 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER UPSILON", unicode 0x1B1
  2446 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER V WITH HOOK", unicode 0x1B2
  2454 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH HOOK", unicode 0x1B3
  2462 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH HOOK", unicode 0x1B4
  2470 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH STROKE", unicode 0x1B5
  2478 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH STROKE", unicode 0x1B6
  2486 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER EZH", unicode 0x1B7
  2491 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER EZH REVERSED", unicode 0x1B8
  2498 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER EZH REVERSED", unicode 0x1B9
  2505 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER EZH WITH TAIL", unicode 0x1BA
  2513 | (kUnicodeCategory_Lo << 27), // "LATIN LETTER TWO WITH STROKE", unicode 0x1BB
  2520 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER TONE FIVE", unicode 0x1BC
  2527 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TONE FIVE", unicode 0x1BD
  2534 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER INVERTED GLOTTAL STOP WITH STROKE", unicode 0x1BE
  2545 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER WYNN", unicode 0x1BF
  2549 | (kUnicodeCategory_Lo << 27), // "LATIN LETTER DENTAL CLICK", unicode 0x1C0
  2556 | (kUnicodeCategory_Lo << 27), // "LATIN LETTER LATERAL CLICK", unicode 0x1C1
  2562 | (kUnicodeCategory_Lo << 27), // "LATIN LETTER ALVEOLAR CLICK", unicode 0x1C2
  2569 | (kUnicodeCategory_Lo << 27), // "LATIN LETTER RETROFLEX CLICK", unicode 0x1C3
  2575 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER DZ WITH CARON", unicode 0x1C4
  2583 | (kUnicodeCategory_Lt << 27), // "LATIN CAPITAL LETTER D WITH SMALL LETTER Z WITH CARON", unicode 0x1C5
  2596 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DZ WITH CARON", unicode 0x1C6
  2604 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER LJ", unicode 0x1C7
  2609 | (kUnicodeCategory_Lt << 27), // "LATIN CAPITAL LETTER L WITH SMALL LETTER J", unicode 0x1C8
  2619 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LJ", unicode 0x1C9
  2624 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER NJ", unicode 0x1CA
  2629 | (kUnicodeCategory_Lt << 27), // "LATIN CAPITAL LETTER N WITH SMALL LETTER J", unicode 0x1CB
  2639 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER NJ", unicode 0x1CC
  2644 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CARON", unicode 0x1CD
  2651 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CARON", unicode 0x1CE
  2658 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH CARON", unicode 0x1CF
  2666 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH CARON", unicode 0x1D0
  2674 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CARON", unicode 0x1D1
  2681 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CARON", unicode 0x1D2
  2688 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH CARON", unicode 0x1D3
  2695 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH CARON", unicode 0x1D4
  2702 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DIAERESIS AND MACRON", unicode 0x1D5
  2712 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DIAERESIS AND MACRON", unicode 0x1D6
  2722 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DIAERESIS AND ACUTE", unicode 0x1D7
  2732 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DIAERESIS AND ACUTE", unicode 0x1D8
  2742 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DIAERESIS AND CARON", unicode 0x1D9
  2752 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DIAERESIS AND CARON", unicode 0x1DA
  2762 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DIAERESIS AND GRAVE", unicode 0x1DB
  2772 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DIAERESIS AND GRAVE", unicode 0x1DC
  2782 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED E", unicode 0x1DD
  2788 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH DIAERESIS AND MACRON", unicode 0x1DE
  2798 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH DIAERESIS AND MACRON", unicode 0x1DF
  2808 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH DOT ABOVE AND MACRON", unicode 0x1E0
  2818 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH DOT ABOVE AND MACRON", unicode 0x1E1
  2828 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER AE WITH MACRON", unicode 0x1E2
  2836 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER AE WITH MACRON", unicode 0x1E3
  2844 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH STROKE", unicode 0x1E4
  2852 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH STROKE", unicode 0x1E5
  2860 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH CARON", unicode 0x1E6
  2868 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH CARON", unicode 0x1E7
  2876 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH CARON", unicode 0x1E8
  2884 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH CARON", unicode 0x1E9
  2892 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH OGONEK", unicode 0x1EA
  2899 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH OGONEK", unicode 0x1EB
  2906 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH OGONEK AND MACRON", unicode 0x1EC
  2916 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH OGONEK AND MACRON", unicode 0x1ED
  2926 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER EZH WITH CARON", unicode 0x1EE
  2934 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER EZH WITH CARON", unicode 0x1EF
  2942 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER J WITH CARON", unicode 0x1F0
  2950 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER DZ", unicode 0x1F1
  2955 | (kUnicodeCategory_Lt << 27), // "LATIN CAPITAL LETTER D WITH SMALL LETTER Z", unicode 0x1F2
  2965 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DZ", unicode 0x1F3
  2970 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH ACUTE", unicode 0x1F4
  2978 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH ACUTE", unicode 0x1F5
  2986 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER HWAIR", unicode 0x1F6
  2991 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER WYNN", unicode 0x1F7
  2996 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH GRAVE", unicode 0x1F8
  3004 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH GRAVE", unicode 0x1F9
  3012 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH RING ABOVE AND ACUTE", unicode 0x1FA
  3023 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH RING ABOVE AND ACUTE", unicode 0x1FB
  3034 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER AE WITH ACUTE", unicode 0x1FC
  3042 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER AE WITH ACUTE", unicode 0x1FD
  3050 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH STROKE AND ACUTE", unicode 0x1FE
  3060 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH STROKE AND ACUTE", unicode 0x1FF
} ;

static const uint32_t gNamePage2 [256] = {
  3070 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH DOUBLE GRAVE", unicode 0x200
  3078 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH DOUBLE GRAVE", unicode 0x201
  3086 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH INVERTED BREVE", unicode 0x202
  3095 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH INVERTED BREVE", unicode 0x203
  3104 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH DOUBLE GRAVE", unicode 0x204
  3112 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH DOUBLE GRAVE", unicode 0x205
  3120 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH INVERTED BREVE", unicode 0x206
  3129 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH INVERTED BREVE", unicode 0x207
  3138 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH DOUBLE GRAVE", unicode 0x208
  3147 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH DOUBLE GRAVE", unicode 0x209
  3156 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH INVERTED BREVE", unicode 0x20A
  3166 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH INVERTED BREVE", unicode 0x20B
  3176 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DOUBLE GRAVE", unicode 0x20C
  3184 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DOUBLE GRAVE", unicode 0x20D
  3192 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH INVERTED BREVE", unicode 0x20E
  3201 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH INVERTED BREVE", unicode 0x20F
  3210 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH DOUBLE GRAVE", unicode 0x210
  3219 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH DOUBLE GRAVE", unicode 0x211
  3228 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH INVERTED BREVE", unicode 0x212
  3238 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH INVERTED BREVE", unicode 0x213
  3248 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DOUBLE GRAVE", unicode 0x214
  3256 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DOUBLE GRAVE", unicode 0x215
  3264 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH INVERTED BREVE", unicode 0x216
  3273 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH INVERTED BREVE", unicode 0x217
  3282 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH COMMA BELOW", unicode 0x218
  3291 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH COMMA BELOW", unicode 0x219
  3300 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH COMMA BELOW", unicode 0x21A
  3309 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH COMMA BELOW", unicode 0x21B
  3318 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER YOGH", unicode 0x21C
  3323 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER YOGH", unicode 0x21D
  3328 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH CARON", unicode 0x21E
  3336 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH CARON", unicode 0x21F
  3344 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH LONG RIGHT LEG", unicode 0x220
  3355 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH CURL", unicode 0x221
  3363 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER OU", unicode 0x222
  3368 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER OU", unicode 0x223
  3373 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH HOOK", unicode 0x224
  3381 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH HOOK", unicode 0x225
  3389 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH DOT ABOVE", unicode 0x226
  3396 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH DOT ABOVE", unicode 0x227
  3403 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CEDILLA", unicode 0x228
  3410 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CEDILLA", unicode 0x229
  3417 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DIAERESIS AND MACRON", unicode 0x22A
  3427 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DIAERESIS AND MACRON", unicode 0x22B
  3437 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH TILDE AND MACRON", unicode 0x22C
  3447 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH TILDE AND MACRON", unicode 0x22D
  3457 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DOT ABOVE", unicode 0x22E
  3464 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DOT ABOVE", unicode 0x22F
  3471 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DOT ABOVE AND MACRON", unicode 0x230
  3481 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DOT ABOVE AND MACRON", unicode 0x231
  3491 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH MACRON", unicode 0x232
  3499 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH MACRON", unicode 0x233
  3507 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH CURL", unicode 0x234
  3515 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH CURL", unicode 0x235
  3523 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH CURL", unicode 0x236
  3531 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DOTLESS J", unicode 0x237
  3538 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DB DIGRAPH", unicode 0x238
  3545 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER QP DIGRAPH", unicode 0x239
  3553 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH STROKE", unicode 0x23A
  3560 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH STROKE", unicode 0x23B
  3568 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH STROKE", unicode 0x23C
  3576 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH BAR", unicode 0x23D
  3584 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH DIAGONAL STROKE", unicode 0x23E
  3594 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH SWASH TAIL", unicode 0x23F
  3604 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH SWASH TAIL", unicode 0x240
  3614 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER GLOTTAL STOP", unicode 0x241
  3621 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER GLOTTAL STOP", unicode 0x242
  3628 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B WITH STROKE", unicode 0x243
  3635 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U BAR", unicode 0x244
  3641 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER TURNED V", unicode 0x245
  3648 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH STROKE", unicode 0x246
  3655 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH STROKE", unicode 0x247
  3662 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER J WITH STROKE", unicode 0x248
  3670 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER J WITH STROKE", unicode 0x249
  3678 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER SMALL Q WITH HOOK TAIL", unicode 0x24A
  3689 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Q WITH HOOK TAIL", unicode 0x24B
  3699 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH STROKE", unicode 0x24C
  3707 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH STROKE", unicode 0x24D
  3715 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH STROKE", unicode 0x24E
  3723 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH STROKE", unicode 0x24F
  3731 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED A", unicode 0x250
  3737 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ALPHA", unicode 0x251
  3742 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED ALPHA", unicode 0x252
  3749 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH HOOK", unicode 0x253
  3756 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER OPEN O", unicode 0x254
  3762 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH CURL", unicode 0x255
  3770 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH TAIL", unicode 0x256
  3778 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH HOOK", unicode 0x257
  3786 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER REVERSED E", unicode 0x258
  3792 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SCHWA", unicode 0x259
  3797 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SCHWA WITH HOOK", unicode 0x25A
  3805 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER OPEN E", unicode 0x25B
  3811 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER REVERSED OPEN E", unicode 0x25C
  3819 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER REVERSED OPEN E WITH HOOK", unicode 0x25D
  3830 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER CLOSED REVERSED OPEN E", unicode 0x25E
  3840 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DOTLESS J WITH STROKE", unicode 0x25F
  3850 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH HOOK", unicode 0x260
  3858 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SCRIPT G", unicode 0x261
  3865 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL G", unicode 0x262
  3871 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER GAMMA", unicode 0x263
  3876 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER RAMS HORN", unicode 0x264
  3884 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED H", unicode 0x265
  3891 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH HOOK", unicode 0x266
  3899 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER HENG WITH HOOK", unicode 0x267
  3907 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH STROKE", unicode 0x268
  3915 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER IOTA", unicode 0x269
  3920 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL I", unicode 0x26A
  3926 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH MIDDLE TILDE", unicode 0x26B
  3936 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH BELT", unicode 0x26C
  3944 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH RETROFLEX HOOK", unicode 0x26D
  3954 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LEZH", unicode 0x26E
  3960 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED M", unicode 0x26F
  3967 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED M WITH LONG LEG", unicode 0x270
  3979 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M WITH HOOK", unicode 0x271
  3987 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH LEFT HOOK", unicode 0x272
  3996 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH RETROFLEX HOOK", unicode 0x273
  4006 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL N", unicode 0x274
  4012 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER BARRED O", unicode 0x275
  4018 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL OE", unicode 0x276
  4024 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER CLOSED OMEGA", unicode 0x277
  4031 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER PHI", unicode 0x278
  4036 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED R", unicode 0x279
  4043 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED R WITH LONG LEG", unicode 0x27A
  4055 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED R WITH HOOK", unicode 0x27B
  4065 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH LONG LEG", unicode 0x27C
  4075 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH TAIL", unicode 0x27D
  4083 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH FISHHOOK", unicode 0x27E
  4091 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER REVERSED R WITH FISHHOOK", unicode 0x27F
  4101 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL R", unicode 0x280
  4107 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL INVERTED R", unicode 0x281
  4115 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH HOOK", unicode 0x282
  4123 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ESH", unicode 0x283
  4128 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DOTLESS J WITH STROKE AND HOOK", unicode 0x284
  4141 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SQUAT REVERSED ESH", unicode 0x285
  4150 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ESH WITH CURL", unicode 0x286
  4158 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED T", unicode 0x287
  4165 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH RETROFLEX HOOK", unicode 0x288
  4175 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U BAR", unicode 0x289
  4181 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER UPSILON", unicode 0x28A
  4186 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V WITH HOOK", unicode 0x28B
  4194 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED V", unicode 0x28C
  4201 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED W", unicode 0x28D
  4208 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED Y", unicode 0x28E
  4215 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL Y", unicode 0x28F
  4221 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH RETROFLEX HOOK", unicode 0x290
  4231 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH CURL", unicode 0x291
  4239 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER EZH", unicode 0x292
  4244 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER EZH WITH CURL", unicode 0x293
  4252 | (kUnicodeCategory_Lo << 27), // "LATIN LETTER GLOTTAL STOP", unicode 0x294
  4258 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER PHARYNGEAL VOICED FRICATIVE", unicode 0x295
  4267 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER INVERTED GLOTTAL STOP", unicode 0x296
  4275 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER STRETCHED C", unicode 0x297
  4282 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER BILABIAL CLICK", unicode 0x298
  4288 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL B", unicode 0x299
  4293 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER CLOSED OPEN E", unicode 0x29A
  4301 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL G WITH HOOK", unicode 0x29B
  4310 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL H", unicode 0x29C
  4316 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER J WITH CROSSED-TAIL", unicode 0x29D
  4326 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED K", unicode 0x29E
  4333 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL L", unicode 0x29F
  4339 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Q WITH HOOK", unicode 0x2A0
  4347 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER GLOTTAL STOP WITH STROKE", unicode 0x2A1
  4356 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER REVERSED GLOTTAL STOP WITH STROKE", unicode 0x2A2
  4367 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DZ DIGRAPH", unicode 0x2A3
  4374 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DEZH DIGRAPH", unicode 0x2A4
  4382 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DZ DIGRAPH WITH CURL", unicode 0x2A5
  4392 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TS DIGRAPH", unicode 0x2A6
  4400 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TESH DIGRAPH", unicode 0x2A7
  4408 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TC DIGRAPH WITH CURL", unicode 0x2A8
  4418 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER FENG DIGRAPH", unicode 0x2A9
  4426 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LS DIGRAPH", unicode 0x2AA
  4434 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LZ DIGRAPH", unicode 0x2AB
  4442 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER BILABIAL PERCUSSIVE", unicode 0x2AC
  4448 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER BIDENTAL PERCUSSIVE", unicode 0x2AD
  4454 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED H WITH FISHHOOK", unicode 0x2AE
  4464 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED H WITH FISHHOOK AND TAIL", unicode 0x2AF
  4477 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL H", unicode 0x2B0
  4482 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL H WITH HOOK", unicode 0x2B1
  4490 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL J", unicode 0x2B2
  4495 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL R", unicode 0x2B3
  4500 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED R", unicode 0x2B4
  4507 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED R WITH HOOK", unicode 0x2B5
  4517 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CAPITAL INVERTED R", unicode 0x2B6
  4525 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL W", unicode 0x2B7
  4530 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL Y", unicode 0x2B8
  4535 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER PRIME", unicode 0x2B9
  4539 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER DOUBLE PRIME", unicode 0x2BA
  4544 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER TURNED COMMA", unicode 0x2BB
  4550 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER APOSTROPHE", unicode 0x2BC
  4554 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER REVERSED COMMA", unicode 0x2BD
  4560 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER RIGHT HALF RING", unicode 0x2BE
  4567 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER LEFT HALF RING", unicode 0x2BF
  4574 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER GLOTTAL STOP", unicode 0x2C0
  4580 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER REVERSED GLOTTAL STOP", unicode 0x2C1
  4588 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LEFT ARROWHEAD", unicode 0x2C2
  4593 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER RIGHT ARROWHEAD", unicode 0x2C3
  4598 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER UP ARROWHEAD", unicode 0x2C4
  4604 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER DOWN ARROWHEAD", unicode 0x2C5
  4610 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CIRCUMFLEX ACCENT", unicode 0x2C6
  4616 | (kUnicodeCategory_Lm << 27), // "CARON", unicode 0x2C7
  4618 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER VERTICAL LINE", unicode 0x2C8
  4623 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER MACRON", unicode 0x2C9
  4627 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER ACUTE ACCENT", unicode 0x2CA
  4633 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER GRAVE ACCENT", unicode 0x2CB
  4639 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER LOW VERTICAL LINE", unicode 0x2CC
  4646 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER LOW MACRON", unicode 0x2CD
  4652 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER LOW GRAVE ACCENT", unicode 0x2CE
  4660 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER LOW ACUTE ACCENT", unicode 0x2CF
  4668 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER TRIANGULAR COLON", unicode 0x2D0
  4674 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER HALF TRIANGULAR COLON", unicode 0x2D1
  4682 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER CENTRED RIGHT HALF RING", unicode 0x2D2
  4691 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER CENTRED LEFT HALF RING", unicode 0x2D3
  4700 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER UP TACK", unicode 0x2D4
  4706 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER DOWN TACK", unicode 0x2D5
  4712 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER PLUS SIGN", unicode 0x2D6
  4717 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER MINUS SIGN", unicode 0x2D7
  4722 | (kUnicodeCategory_Sk << 27), // "BREVE", unicode 0x2D8
  4724 | (kUnicodeCategory_Sk << 27), // "DOT ABOVE", unicode 0x2D9
  4726 | (kUnicodeCategory_Sk << 27), // "RING ABOVE", unicode 0x2DA
  4729 | (kUnicodeCategory_Sk << 27), // "OGONEK", unicode 0x2DB
  4731 | (kUnicodeCategory_Sk << 27), // "SMALL TILDE", unicode 0x2DC
  4734 | (kUnicodeCategory_Sk << 27), // "DOUBLE ACUTE ACCENT", unicode 0x2DD
  4739 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER RHOTIC HOOK", unicode 0x2DE
  4745 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER CROSS ACCENT", unicode 0x2DF
  4751 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL GAMMA", unicode 0x2E0
  4756 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL L", unicode 0x2E1
  4761 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL S", unicode 0x2E2
  4766 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL X", unicode 0x2E3
  4771 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL REVERSED GLOTTAL STOP", unicode 0x2E4
  4780 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER EXTRA-HIGH TONE BAR", unicode 0x2E5
  4790 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER HIGH TONE BAR", unicode 0x2E6
  4798 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER MID TONE BAR", unicode 0x2E7
  4806 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW TONE BAR", unicode 0x2E8
  4814 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER EXTRA-LOW TONE BAR", unicode 0x2E9
  4824 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER YIN DEPARTING TONE MARK", unicode 0x2EA
  4833 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER YANG DEPARTING TONE MARK", unicode 0x2EB
  4842 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER VOICING", unicode 0x2EC
  4847 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER UNASPIRATED", unicode 0x2ED
  4851 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER DOUBLE APOSTROPHE", unicode 0x2EE
  4856 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW DOWN ARROWHEAD", unicode 0x2EF
  4864 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW UP ARROWHEAD", unicode 0x2F0
  4872 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW LEFT ARROWHEAD", unicode 0x2F1
  4879 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW RIGHT ARROWHEAD", unicode 0x2F2
  4886 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW RING", unicode 0x2F3
  4892 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER MIDDLE GRAVE ACCENT", unicode 0x2F4
  4900 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER MIDDLE DOUBLE GRAVE ACCENT", unicode 0x2F5
  4909 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER MIDDLE DOUBLE ACUTE ACCENT", unicode 0x2F6
  4918 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW TILDE", unicode 0x2F7
  4924 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER RAISED COLON", unicode 0x2F8
  4930 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER BEGIN HIGH TONE", unicode 0x2F9
  4938 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER END HIGH TONE", unicode 0x2FA
  4946 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER BEGIN LOW TONE", unicode 0x2FB
  4954 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER END LOW TONE", unicode 0x2FC
  4962 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER SHELF", unicode 0x2FD
  4966 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER OPEN SHELF", unicode 0x2FE
  4972 | (kUnicodeCategory_Sk << 27), // "MODIFIER LETTER LOW LEFT ARROW", unicode 0x2FF
} ;

static const uint32_t gNamePage3 [256] = {
  4978 | (kUnicodeCategory_Mn << 27), // "COMBINING GRAVE ACCENT", unicode 0x300
  4983 | (kUnicodeCategory_Mn << 27), // "COMBINING ACUTE ACCENT", unicode 0x301
  4988 | (kUnicodeCategory_Mn << 27), // "COMBINING CIRCUMFLEX ACCENT", unicode 0x302
  4993 | (kUnicodeCategory_Mn << 27), // "COMBINING TILDE", unicode 0x303
  4996 | (kUnicodeCategory_Mn << 27), // "COMBINING MACRON", unicode 0x304
  4999 | (kUnicodeCategory_Mn << 27), // "COMBINING OVERLINE", unicode 0x305
  5002 | (kUnicodeCategory_Mn << 27), // "COMBINING BREVE", unicode 0x306
  5005 | (kUnicodeCategory_Mn << 27), // "COMBINING DOT ABOVE", unicode 0x307
  5008 | (kUnicodeCategory_Mn << 27), // "COMBINING DIAERESIS", unicode 0x308
  5011 | (kUnicodeCategory_Mn << 27), // "COMBINING HOOK ABOVE", unicode 0x309
  5015 | (kUnicodeCategory_Mn << 27), // "COMBINING RING ABOVE", unicode 0x30A
  5019 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE ACUTE ACCENT", unicode 0x30B
  5025 | (kUnicodeCategory_Mn << 27), // "COMBINING CARON", unicode 0x30C
  5028 | (kUnicodeCategory_Mn << 27), // "COMBINING VERTICAL LINE ABOVE", unicode 0x30D
  5033 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE VERTICAL LINE ABOVE", unicode 0x30E
  5039 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE GRAVE ACCENT", unicode 0x30F
  5045 | (kUnicodeCategory_Mn << 27), // "COMBINING CANDRABINDU", unicode 0x310
  5048 | (kUnicodeCategory_Mn << 27), // "COMBINING INVERTED BREVE", unicode 0x311
  5053 | (kUnicodeCategory_Mn << 27), // "COMBINING TURNED COMMA ABOVE", unicode 0x312
  5059 | (kUnicodeCategory_Mn << 27), // "COMBINING COMMA ABOVE", unicode 0x313
  5063 | (kUnicodeCategory_Mn << 27), // "COMBINING REVERSED COMMA ABOVE", unicode 0x314
  5069 | (kUnicodeCategory_Mn << 27), // "COMBINING COMMA ABOVE RIGHT", unicode 0x315
  5074 | (kUnicodeCategory_Mn << 27), // "COMBINING GRAVE ACCENT BELOW", unicode 0x316
  5080 | (kUnicodeCategory_Mn << 27), // "COMBINING ACUTE ACCENT BELOW", unicode 0x317
  5086 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT TACK BELOW", unicode 0x318
  5091 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT TACK BELOW", unicode 0x319
  5096 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT ANGLE ABOVE", unicode 0x31A
  5101 | (kUnicodeCategory_Mn << 27), // "COMBINING HORN", unicode 0x31B
  5104 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT HALF RING BELOW", unicode 0x31C
  5111 | (kUnicodeCategory_Mn << 27), // "COMBINING UP TACK BELOW", unicode 0x31D
  5117 | (kUnicodeCategory_Mn << 27), // "COMBINING DOWN TACK BELOW", unicode 0x31E
  5123 | (kUnicodeCategory_Mn << 27), // "COMBINING PLUS SIGN BELOW", unicode 0x31F
  5128 | (kUnicodeCategory_Mn << 27), // "COMBINING MINUS SIGN BELOW", unicode 0x320
  5133 | (kUnicodeCategory_Mn << 27), // "COMBINING PALATALIZED HOOK BELOW", unicode 0x321
  5140 | (kUnicodeCategory_Mn << 27), // "COMBINING RETROFLEX HOOK BELOW", unicode 0x322
  5146 | (kUnicodeCategory_Mn << 27), // "COMBINING DOT BELOW", unicode 0x323
  5149 | (kUnicodeCategory_Mn << 27), // "COMBINING DIAERESIS BELOW", unicode 0x324
  5153 | (kUnicodeCategory_Mn << 27), // "COMBINING RING BELOW", unicode 0x325
  5157 | (kUnicodeCategory_Mn << 27), // "COMBINING COMMA BELOW", unicode 0x326
  5161 | (kUnicodeCategory_Mn << 27), // "COMBINING CEDILLA", unicode 0x327
  5164 | (kUnicodeCategory_Mn << 27), // "COMBINING OGONEK", unicode 0x328
  5167 | (kUnicodeCategory_Mn << 27), // "COMBINING VERTICAL LINE BELOW", unicode 0x329
  5172 | (kUnicodeCategory_Mn << 27), // "COMBINING BRIDGE BELOW", unicode 0x32A
  5176 | (kUnicodeCategory_Mn << 27), // "COMBINING INVERTED DOUBLE ARCH BELOW", unicode 0x32B
  5184 | (kUnicodeCategory_Mn << 27), // "COMBINING CARON BELOW", unicode 0x32C
  5188 | (kUnicodeCategory_Mn << 27), // "COMBINING CIRCUMFLEX ACCENT BELOW", unicode 0x32D
  5194 | (kUnicodeCategory_Mn << 27), // "COMBINING BREVE BELOW", unicode 0x32E
  5198 | (kUnicodeCategory_Mn << 27), // "COMBINING INVERTED BREVE BELOW", unicode 0x32F
  5204 | (kUnicodeCategory_Mn << 27), // "COMBINING TILDE BELOW", unicode 0x330
  5208 | (kUnicodeCategory_Mn << 27), // "COMBINING MACRON BELOW", unicode 0x331
  5212 | (kUnicodeCategory_Mn << 27), // "COMBINING LOW LINE", unicode 0x332
  5217 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE LOW LINE", unicode 0x333
  5223 | (kUnicodeCategory_Mn << 27), // "COMBINING TILDE OVERLAY", unicode 0x334
  5228 | (kUnicodeCategory_Mn << 27), // "COMBINING SHORT STROKE OVERLAY", unicode 0x335
  5235 | (kUnicodeCategory_Mn << 27), // "COMBINING LONG STROKE OVERLAY", unicode 0x336
  5242 | (kUnicodeCategory_Mn << 27), // "COMBINING SHORT SOLIDUS OVERLAY", unicode 0x337
  5249 | (kUnicodeCategory_Mn << 27), // "COMBINING LONG SOLIDUS OVERLAY", unicode 0x338
  5256 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT HALF RING BELOW", unicode 0x339
  5263 | (kUnicodeCategory_Mn << 27), // "COMBINING INVERTED BRIDGE BELOW", unicode 0x33A
  5269 | (kUnicodeCategory_Mn << 27), // "COMBINING SQUARE BELOW", unicode 0x33B
  5272 | (kUnicodeCategory_Mn << 27), // "COMBINING SEAGULL BELOW", unicode 0x33C
  5277 | (kUnicodeCategory_Mn << 27), // "COMBINING X ABOVE", unicode 0x33D
  5281 | (kUnicodeCategory_Mn << 27), // "COMBINING VERTICAL TILDE", unicode 0x33E
  5285 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE OVERLINE", unicode 0x33F
  5289 | (kUnicodeCategory_Mn << 27), // "COMBINING GRAVE TONE MARK", unicode 0x340
  5295 | (kUnicodeCategory_Mn << 27), // "COMBINING ACUTE TONE MARK", unicode 0x341
  5301 | (kUnicodeCategory_Mn << 27), // "COMBINING GREEK PERISPOMENI", unicode 0x342
  5305 | (kUnicodeCategory_Mn << 27), // "COMBINING GREEK KORONIS", unicode 0x343
  5309 | (kUnicodeCategory_Mn << 27), // "COMBINING GREEK DIALYTIKA TONOS", unicode 0x344
  5315 | (kUnicodeCategory_Mn << 27), // "COMBINING GREEK YPOGEGRAMMENI", unicode 0x345
  5319 | (kUnicodeCategory_Mn << 27), // "COMBINING BRIDGE ABOVE", unicode 0x346
  5323 | (kUnicodeCategory_Mn << 27), // "COMBINING EQUALS SIGN BELOW", unicode 0x347
  5328 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE VERTICAL LINE BELOW", unicode 0x348
  5334 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT ANGLE BELOW", unicode 0x349
  5339 | (kUnicodeCategory_Mn << 27), // "COMBINING NOT TILDE ABOVE", unicode 0x34A
  5345 | (kUnicodeCategory_Mn << 27), // "COMBINING HOMOTHETIC ABOVE", unicode 0x34B
  5349 | (kUnicodeCategory_Mn << 27), // "COMBINING ALMOST EQUAL TO ABOVE", unicode 0x34C
  5357 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT RIGHT ARROW BELOW", unicode 0x34D
  5362 | (kUnicodeCategory_Mn << 27), // "COMBINING UPWARDS ARROW BELOW", unicode 0x34E
  5367 | (kUnicodeCategory_Mn << 27), // "COMBINING GRAPHEME JOINER", unicode 0x34F
  5373 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT ARROWHEAD ABOVE", unicode 0x350
  5378 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT HALF RING ABOVE", unicode 0x351
  5385 | (kUnicodeCategory_Mn << 27), // "COMBINING FERMATA", unicode 0x352
  5388 | (kUnicodeCategory_Mn << 27), // "COMBINING X BELOW", unicode 0x353
  5392 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT ARROWHEAD BELOW", unicode 0x354
  5397 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT ARROWHEAD BELOW", unicode 0x355
  5402 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT ARROWHEAD AND UP ARROWHEAD BELOW", unicode 0x356
  5412 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT HALF RING ABOVE", unicode 0x357
  5419 | (kUnicodeCategory_Mn << 27), // "COMBINING DOT ABOVE RIGHT", unicode 0x358
  5423 | (kUnicodeCategory_Mn << 27), // "COMBINING ASTERISK BELOW", unicode 0x359
  5427 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE RING BELOW", unicode 0x35A
  5432 | (kUnicodeCategory_Mn << 27), // "COMBINING ZIGZAG ABOVE", unicode 0x35B
  5436 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE BREVE BELOW", unicode 0x35C
  5441 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE BREVE", unicode 0x35D
  5445 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE MACRON", unicode 0x35E
  5449 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE MACRON BELOW", unicode 0x35F
  5454 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE TILDE", unicode 0x360
  5458 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE INVERTED BREVE", unicode 0x361
  5464 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE RIGHTWARDS ARROW BELOW", unicode 0x362
  5470 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER A", unicode 0x363
  5475 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER E", unicode 0x364
  5480 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER I", unicode 0x365
  5486 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER O", unicode 0x366
  5491 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER U", unicode 0x367
  5496 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER C", unicode 0x368
  5502 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER D", unicode 0x369
  5508 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER H", unicode 0x36A
  5514 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER M", unicode 0x36B
  5520 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER R", unicode 0x36C
  5526 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER T", unicode 0x36D
  5532 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER V", unicode 0x36E
  5538 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER X", unicode 0x36F
  5544 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER HETA", unicode 0x370
  5549 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER HETA", unicode 0x371
  5554 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ARCHAIC SAMPI", unicode 0x372
  5561 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ARCHAIC SAMPI", unicode 0x373
  5568 | (kUnicodeCategory_Lm << 27), // "GREEK NUMERAL SIGN", unicode 0x374
  5572 | (kUnicodeCategory_Sk << 27), // "GREEK LOWER NUMERAL SIGN", unicode 0x375
  5578 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER PAMPHYLIAN DIGAMMA", unicode 0x376
  5585 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER PAMPHYLIAN DIGAMMA", unicode 0x377
  0, // undefined code 0x378
  0, // undefined code 0x379
  5592 | (kUnicodeCategory_Lm << 27), // "GREEK YPOGEGRAMMENI", unicode 0x37A
  5595 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL REVERSED LUNATE SIGMA SYMBOL", unicode 0x37B
  5604 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL DOTTED LUNATE SIGMA SYMBOL", unicode 0x37C
  5613 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL REVERSED DOTTED LUNATE SIGMA SYMBOL", unicode 0x37D
  5624 | (kUnicodeCategory_Po << 27), // "GREEK QUESTION MARK", unicode 0x37E
  0, // undefined code 0x37F
  0, // undefined code 0x380
  0, // undefined code 0x381
  0, // undefined code 0x382
  0, // undefined code 0x383
  5628 | (kUnicodeCategory_Sk << 27), // "GREEK TONOS", unicode 0x384
  5631 | (kUnicodeCategory_Sk << 27), // "GREEK DIALYTIKA TONOS", unicode 0x385
  5636 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH TONOS", unicode 0x386
  5644 | (kUnicodeCategory_Po << 27), // "GREEK ANO TELEIA", unicode 0x387
  5649 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH TONOS", unicode 0x388
  5657 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH TONOS", unicode 0x389
  5665 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH TONOS", unicode 0x38A
  0, // undefined code 0x38B
  5673 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH TONOS", unicode 0x38C
  0, // undefined code 0x38D
  5681 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH TONOS", unicode 0x38E
  5689 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH TONOS", unicode 0x38F
  5697 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS", unicode 0x390
  5708 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA", unicode 0x391
  5713 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER BETA", unicode 0x392
  5718 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER GAMMA", unicode 0x393
  5723 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER DELTA", unicode 0x394
  5728 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON", unicode 0x395
  5733 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ZETA", unicode 0x396
  5738 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA", unicode 0x397
  5743 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER THETA", unicode 0x398
  5748 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA", unicode 0x399
  5753 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER KAPPA", unicode 0x39A
  5758 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER LAMDA", unicode 0x39B
  5763 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER MU", unicode 0x39C
  5768 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER NU", unicode 0x39D
  5773 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER XI", unicode 0x39E
  5778 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON", unicode 0x39F
  5783 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER PI", unicode 0x3A0
  5788 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER RHO", unicode 0x3A1
  0, // undefined code 0x3A2
  5793 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER SIGMA", unicode 0x3A3
  5798 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER TAU", unicode 0x3A4
  5803 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON", unicode 0x3A5
  5808 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER PHI", unicode 0x3A6
  5813 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER CHI", unicode 0x3A7
  5818 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER PSI", unicode 0x3A8
  5823 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA", unicode 0x3A9
  5828 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH DIALYTIKA", unicode 0x3AA
  5836 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA", unicode 0x3AB
  5844 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH TONOS", unicode 0x3AC
  5852 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH TONOS", unicode 0x3AD
  5860 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH TONOS", unicode 0x3AE
  5868 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH TONOS", unicode 0x3AF
  5876 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS", unicode 0x3B0
  5887 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA", unicode 0x3B1
  5892 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER BETA", unicode 0x3B2
  5897 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER GAMMA", unicode 0x3B3
  5902 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER DELTA", unicode 0x3B4
  5907 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON", unicode 0x3B5
  5912 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ZETA", unicode 0x3B6
  5917 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA", unicode 0x3B7
  5922 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER THETA", unicode 0x3B8
  5927 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA", unicode 0x3B9
  5932 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER KAPPA", unicode 0x3BA
  5937 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER LAMDA", unicode 0x3BB
  5942 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER MU", unicode 0x3BC
  5947 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER NU", unicode 0x3BD
  5952 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER XI", unicode 0x3BE
  5957 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON", unicode 0x3BF
  5962 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER PI", unicode 0x3C0
  5967 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER RHO", unicode 0x3C1
  5972 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER FINAL SIGMA", unicode 0x3C2
  5978 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER SIGMA", unicode 0x3C3
  5983 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER TAU", unicode 0x3C4
  5988 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON", unicode 0x3C5
  5993 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER PHI", unicode 0x3C6
  5998 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER CHI", unicode 0x3C7
  6003 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER PSI", unicode 0x3C8
  6008 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA", unicode 0x3C9
  6013 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DIALYTIKA", unicode 0x3CA
  6021 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DIALYTIKA", unicode 0x3CB
  6029 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH TONOS", unicode 0x3CC
  6037 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH TONOS", unicode 0x3CD
  6045 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH TONOS", unicode 0x3CE
  6053 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL KAI SYMBOL", unicode 0x3CF
  6058 | (kUnicodeCategory_Ll << 27), // "GREEK BETA SYMBOL", unicode 0x3D0
  6062 | (kUnicodeCategory_Ll << 27), // "GREEK THETA SYMBOL", unicode 0x3D1
  6066 | (kUnicodeCategory_Lu << 27), // "GREEK UPSILON WITH HOOK SYMBOL", unicode 0x3D2
  6073 | (kUnicodeCategory_Lu << 27), // "GREEK UPSILON WITH ACUTE AND HOOK SYMBOL", unicode 0x3D3
  6083 | (kUnicodeCategory_Lu << 27), // "GREEK UPSILON WITH DIAERESIS AND HOOK SYMBOL", unicode 0x3D4
  6093 | (kUnicodeCategory_Ll << 27), // "GREEK PHI SYMBOL", unicode 0x3D5
  6097 | (kUnicodeCategory_Ll << 27), // "GREEK PI SYMBOL", unicode 0x3D6
  6101 | (kUnicodeCategory_Ll << 27), // "GREEK KAI SYMBOL", unicode 0x3D7
  6105 | (kUnicodeCategory_Lu << 27), // "GREEK LETTER ARCHAIC KOPPA", unicode 0x3D8
  6111 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ARCHAIC KOPPA", unicode 0x3D9
  6118 | (kUnicodeCategory_Lu << 27), // "GREEK LETTER STIGMA", unicode 0x3DA
  6122 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER STIGMA", unicode 0x3DB
  6127 | (kUnicodeCategory_Lu << 27), // "GREEK LETTER DIGAMMA", unicode 0x3DC
  6131 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER DIGAMMA", unicode 0x3DD
  6136 | (kUnicodeCategory_Lu << 27), // "GREEK LETTER KOPPA", unicode 0x3DE
  6140 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER KOPPA", unicode 0x3DF
  6145 | (kUnicodeCategory_Lu << 27), // "GREEK LETTER SAMPI", unicode 0x3E0
  6149 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER SAMPI", unicode 0x3E1
  6154 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER SHEI", unicode 0x3E2
  6160 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER SHEI", unicode 0x3E3
  6166 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER FEI", unicode 0x3E4
  6172 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER FEI", unicode 0x3E5
  6178 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER KHEI", unicode 0x3E6
  6184 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER KHEI", unicode 0x3E7
  6190 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER HORI", unicode 0x3E8
  6196 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER HORI", unicode 0x3E9
  6202 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER GANGIA", unicode 0x3EA
  6208 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER GANGIA", unicode 0x3EB
  6214 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER SHIMA", unicode 0x3EC
  6220 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER SHIMA", unicode 0x3ED
  6226 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER DEI", unicode 0x3EE
  6232 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER DEI", unicode 0x3EF
  6238 | (kUnicodeCategory_Ll << 27), // "GREEK KAPPA SYMBOL", unicode 0x3F0
  6242 | (kUnicodeCategory_Ll << 27), // "GREEK RHO SYMBOL", unicode 0x3F1
  6246 | (kUnicodeCategory_Ll << 27), // "GREEK LUNATE SIGMA SYMBOL", unicode 0x3F2
  6252 | (kUnicodeCategory_Ll << 27), // "GREEK LETTER YOT", unicode 0x3F3
  6256 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL THETA SYMBOL", unicode 0x3F4
  6261 | (kUnicodeCategory_Ll << 27), // "GREEK LUNATE EPSILON SYMBOL", unicode 0x3F5
  6267 | (kUnicodeCategory_Sm << 27), // "GREEK REVERSED LUNATE EPSILON SYMBOL", unicode 0x3F6
  6275 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER SHO", unicode 0x3F7
  6280 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER SHO", unicode 0x3F8
  6285 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LUNATE SIGMA SYMBOL", unicode 0x3F9
  6292 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER SAN", unicode 0x3FA
  6297 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER SAN", unicode 0x3FB
  6302 | (kUnicodeCategory_Ll << 27), // "GREEK RHO WITH STROKE SYMBOL", unicode 0x3FC
  6309 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL REVERSED LUNATE SIGMA SYMBOL", unicode 0x3FD
  6318 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL DOTTED LUNATE SIGMA SYMBOL", unicode 0x3FE
  6327 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL REVERSED DOTTED LUNATE SIGMA SYMBOL", unicode 0x3FF
} ;

static const uint32_t gNamePage4 [256] = {
  6338 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IE WITH GRAVE", unicode 0x400
  6346 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IO", unicode 0x401
  6351 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER DJE", unicode 0x402
  6356 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GJE", unicode 0x403
  6361 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER UKRAINIAN IE", unicode 0x404
  6368 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER DZE", unicode 0x405
  6373 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I", unicode 0x406
  6382 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YI", unicode 0x407
  6386 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER JE", unicode 0x408
  6391 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER LJE", unicode 0x409
  6396 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER NJE", unicode 0x40A
  6401 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER TSHE", unicode 0x40B
  6406 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KJE", unicode 0x40C
  6411 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER I WITH GRAVE", unicode 0x40D
  6419 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SHORT U", unicode 0x40E
  6425 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER DZHE", unicode 0x40F
  6430 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER A", unicode 0x410
  6434 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER BE", unicode 0x411
  6439 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER VE", unicode 0x412
  6444 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GHE", unicode 0x413
  6449 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER DE", unicode 0x414
  6454 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IE", unicode 0x415
  6459 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZHE", unicode 0x416
  6464 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZE", unicode 0x417
  6469 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER I", unicode 0x418
  6474 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SHORT I", unicode 0x419
  6481 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KA", unicode 0x41A
  6486 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EL", unicode 0x41B
  6491 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EM", unicode 0x41C
  6496 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EN", unicode 0x41D
  6501 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER O", unicode 0x41E
  6505 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER PE", unicode 0x41F
  6510 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ER", unicode 0x420
  6515 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ES", unicode 0x421
  6520 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER TE", unicode 0x422
  6525 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER U", unicode 0x423
  6529 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EF", unicode 0x424
  6534 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER HA", unicode 0x425
  6539 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER TSE", unicode 0x426
  6544 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER CHE", unicode 0x427
  6549 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SHA", unicode 0x428
  6554 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SHCHA", unicode 0x429
  6559 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER HARD SIGN", unicode 0x42A
  6565 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YERU", unicode 0x42B
  6570 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SOFT SIGN", unicode 0x42C
  6576 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER E", unicode 0x42D
  6580 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YU", unicode 0x42E
  6585 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YA", unicode 0x42F
  6590 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER A", unicode 0x430
  6594 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER BE", unicode 0x431
  6599 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER VE", unicode 0x432
  6604 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GHE", unicode 0x433
  6609 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER DE", unicode 0x434
  6614 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IE", unicode 0x435
  6619 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZHE", unicode 0x436
  6624 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZE", unicode 0x437
  6629 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER I", unicode 0x438
  6634 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SHORT I", unicode 0x439
  6641 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KA", unicode 0x43A
  6646 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EL", unicode 0x43B
  6651 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EM", unicode 0x43C
  6656 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EN", unicode 0x43D
  6661 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER O", unicode 0x43E
  6665 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER PE", unicode 0x43F
  6670 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ER", unicode 0x440
  6675 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ES", unicode 0x441
  6680 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER TE", unicode 0x442
  6685 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER U", unicode 0x443
  6689 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EF", unicode 0x444
  6694 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER HA", unicode 0x445
  6699 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER TSE", unicode 0x446
  6704 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER CHE", unicode 0x447
  6709 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SHA", unicode 0x448
  6714 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SHCHA", unicode 0x449
  6719 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER HARD SIGN", unicode 0x44A
  6725 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YERU", unicode 0x44B
  6730 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SOFT SIGN", unicode 0x44C
  6736 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER E", unicode 0x44D
  6740 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YU", unicode 0x44E
  6745 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YA", unicode 0x44F
  6750 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IE WITH GRAVE", unicode 0x450
  6758 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IO", unicode 0x451
  6763 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER DJE", unicode 0x452
  6768 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GJE", unicode 0x453
  6773 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER UKRAINIAN IE", unicode 0x454
  6780 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER DZE", unicode 0x455
  6785 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I", unicode 0x456
  6794 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YI", unicode 0x457
  6798 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER JE", unicode 0x458
  6803 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER LJE", unicode 0x459
  6808 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER NJE", unicode 0x45A
  6813 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER TSHE", unicode 0x45B
  6818 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KJE", unicode 0x45C
  6823 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER I WITH GRAVE", unicode 0x45D
  6831 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SHORT U", unicode 0x45E
  6837 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER DZHE", unicode 0x45F
  6842 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER OMEGA", unicode 0x460
  6847 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER OMEGA", unicode 0x461
  6852 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YAT", unicode 0x462
  6857 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YAT", unicode 0x463
  6862 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IOTIFIED E", unicode 0x464
  6868 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IOTIFIED E", unicode 0x465
  6874 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER LITTLE YUS", unicode 0x466
  6881 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER LITTLE YUS", unicode 0x467
  6888 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IOTIFIED LITTLE YUS", unicode 0x468
  6897 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IOTIFIED LITTLE YUS", unicode 0x469
  6906 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER BIG YUS", unicode 0x46A
  6913 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER BIG YUS", unicode 0x46B
  6920 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IOTIFIED BIG YUS", unicode 0x46C
  6929 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IOTIFIED BIG YUS", unicode 0x46D
  6938 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KSI", unicode 0x46E
  6943 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KSI", unicode 0x46F
  6948 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER PSI", unicode 0x470
  6953 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER PSI", unicode 0x471
  6958 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER FITA", unicode 0x472
  6963 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER FITA", unicode 0x473
  6968 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IZHITSA", unicode 0x474
  6973 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IZHITSA", unicode 0x475
  6978 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IZHITSA WITH DOUBLE GRAVE ACCENT", unicode 0x476
  6989 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IZHITSA WITH DOUBLE GRAVE ACCENT", unicode 0x477
  7000 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER UK", unicode 0x478
  7005 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER UK", unicode 0x479
  7010 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ROUND OMEGA", unicode 0x47A
  7017 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ROUND OMEGA", unicode 0x47B
  7024 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER OMEGA WITH TITLO", unicode 0x47C
  7032 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER OMEGA WITH TITLO", unicode 0x47D
  7040 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER OT", unicode 0x47E
  7045 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER OT", unicode 0x47F
  7050 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOPPA", unicode 0x480
  7055 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOPPA", unicode 0x481
  7060 | (kUnicodeCategory_So << 27), // "CYRILLIC THOUSANDS SIGN", unicode 0x482
  7064 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC TITLO", unicode 0x483
  7068 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC PALATALIZATION", unicode 0x484
  7073 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC DASIA PNEUMATA", unicode 0x485
  7079 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC PSILI PNEUMATA", unicode 0x486
  7085 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC POKRYTIE", unicode 0x487
  7090 | (kUnicodeCategory_Me << 27), // "COMBINING CYRILLIC HUNDRED THOUSANDS SIGN", unicode 0x488
  7097 | (kUnicodeCategory_Me << 27), // "COMBINING CYRILLIC MILLIONS SIGN", unicode 0x489
  7102 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SHORT I WITH TAIL", unicode 0x48A
  7112 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SHORT I WITH TAIL", unicode 0x48B
  7122 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SEMISOFT SIGN", unicode 0x48C
  7128 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SEMISOFT SIGN", unicode 0x48D
  7134 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ER WITH TICK", unicode 0x48E
  7142 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ER WITH TICK", unicode 0x48F
  7150 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GHE WITH UPTURN", unicode 0x490
  7158 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GHE WITH UPTURN", unicode 0x491
  7166 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GHE WITH STROKE", unicode 0x492
  7174 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GHE WITH STROKE", unicode 0x493
  7182 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GHE WITH MIDDLE HOOK", unicode 0x494
  7192 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GHE WITH MIDDLE HOOK", unicode 0x495
  7202 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER", unicode 0x496
  7210 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZHE WITH DESCENDER", unicode 0x497
  7218 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZE WITH DESCENDER", unicode 0x498
  7226 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZE WITH DESCENDER", unicode 0x499
  7234 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KA WITH DESCENDER", unicode 0x49A
  7242 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KA WITH DESCENDER", unicode 0x49B
  7250 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE", unicode 0x49C
  7259 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE", unicode 0x49D
  7268 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KA WITH STROKE", unicode 0x49E
  7276 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KA WITH STROKE", unicode 0x49F
  7284 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER BASHKIR KA", unicode 0x4A0
  7291 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER BASHKIR KA", unicode 0x4A1
  7298 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EN WITH DESCENDER", unicode 0x4A2
  7306 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EN WITH DESCENDER", unicode 0x4A3
  7314 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LIGATURE EN GHE", unicode 0x4A4
  7321 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LIGATURE EN GHE", unicode 0x4A5
  7328 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER PE WITH MIDDLE HOOK", unicode 0x4A6
  7338 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER PE WITH MIDDLE HOOK", unicode 0x4A7
  7348 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ABKHASIAN HA", unicode 0x4A8
  7355 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ABKHASIAN HA", unicode 0x4A9
  7362 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ES WITH DESCENDER", unicode 0x4AA
  7370 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ES WITH DESCENDER", unicode 0x4AB
  7378 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER TE WITH DESCENDER", unicode 0x4AC
  7386 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER TE WITH DESCENDER", unicode 0x4AD
  7394 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER STRAIGHT U", unicode 0x4AE
  7400 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER STRAIGHT U", unicode 0x4AF
  7406 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE", unicode 0x4B0
  7415 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE", unicode 0x4B1
  7424 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER HA WITH DESCENDER", unicode 0x4B2
  7432 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER HA WITH DESCENDER", unicode 0x4B3
  7440 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LIGATURE TE TSE", unicode 0x4B4
  7447 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LIGATURE TE TSE", unicode 0x4B5
  7454 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER CHE WITH DESCENDER", unicode 0x4B6
  7462 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER CHE WITH DESCENDER", unicode 0x4B7
  7470 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE", unicode 0x4B8
  7479 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE", unicode 0x4B9
  7488 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SHHA", unicode 0x4BA
  7493 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SHHA", unicode 0x4BB
  7498 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ABKHASIAN CHE", unicode 0x4BC
  7505 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ABKHASIAN CHE", unicode 0x4BD
  7512 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ABKHASIAN CHE WITH DESCENDER", unicode 0x4BE
  7522 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ABKHASIAN CHE WITH DESCENDER", unicode 0x4BF
  7532 | (kUnicodeCategory_Lu << 27), // "CYRILLIC LETTER PALOCHKA", unicode 0x4C0
  7536 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZHE WITH BREVE", unicode 0x4C1
  7544 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZHE WITH BREVE", unicode 0x4C2
  7552 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KA WITH HOOK", unicode 0x4C3
  7560 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KA WITH HOOK", unicode 0x4C4
  7568 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EL WITH TAIL", unicode 0x4C5
  7576 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EL WITH TAIL", unicode 0x4C6
  7584 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EN WITH HOOK", unicode 0x4C7
  7592 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EN WITH HOOK", unicode 0x4C8
  7600 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EN WITH TAIL", unicode 0x4C9
  7608 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EN WITH TAIL", unicode 0x4CA
  7616 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KHAKASSIAN CHE", unicode 0x4CB
  7623 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KHAKASSIAN CHE", unicode 0x4CC
  7630 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EM WITH TAIL", unicode 0x4CD
  7638 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EM WITH TAIL", unicode 0x4CE
  7646 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER PALOCHKA", unicode 0x4CF
  7651 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER A WITH BREVE", unicode 0x4D0
  7658 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER A WITH BREVE", unicode 0x4D1
  7665 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER A WITH DIAERESIS", unicode 0x4D2
  7672 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER A WITH DIAERESIS", unicode 0x4D3
  7679 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LIGATURE A IE", unicode 0x4D4
  7685 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LIGATURE A IE", unicode 0x4D5
  7691 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER IE WITH BREVE", unicode 0x4D6
  7699 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER IE WITH BREVE", unicode 0x4D7
  7707 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SCHWA", unicode 0x4D8
  7712 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SCHWA", unicode 0x4D9
  7717 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER SCHWA WITH DIAERESIS", unicode 0x4DA
  7725 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER SCHWA WITH DIAERESIS", unicode 0x4DB
  7733 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZHE WITH DIAERESIS", unicode 0x4DC
  7741 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZHE WITH DIAERESIS", unicode 0x4DD
  7749 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ZE WITH DIAERESIS", unicode 0x4DE
  7757 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ZE WITH DIAERESIS", unicode 0x4DF
  7765 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ABKHASIAN DZE", unicode 0x4E0
  7772 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ABKHASIAN DZE", unicode 0x4E1
  7779 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER I WITH MACRON", unicode 0x4E2
  7787 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER I WITH MACRON", unicode 0x4E3
  7795 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER I WITH DIAERESIS", unicode 0x4E4
  7803 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER I WITH DIAERESIS", unicode 0x4E5
  7811 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER O WITH DIAERESIS", unicode 0x4E6
  7818 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER O WITH DIAERESIS", unicode 0x4E7
  7825 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER BARRED O", unicode 0x4E8
  7831 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER BARRED O", unicode 0x4E9
  7837 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER BARRED O WITH DIAERESIS", unicode 0x4EA
  7846 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER BARRED O WITH DIAERESIS", unicode 0x4EB
  7855 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER E WITH DIAERESIS", unicode 0x4EC
  7862 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER E WITH DIAERESIS", unicode 0x4ED
  7869 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER U WITH MACRON", unicode 0x4EE
  7876 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER U WITH MACRON", unicode 0x4EF
  7883 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER U WITH DIAERESIS", unicode 0x4F0
  7890 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER U WITH DIAERESIS", unicode 0x4F1
  7897 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER U WITH DOUBLE ACUTE", unicode 0x4F2
  7905 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER U WITH DOUBLE ACUTE", unicode 0x4F3
  7913 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER CHE WITH DIAERESIS", unicode 0x4F4
  7921 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER CHE WITH DIAERESIS", unicode 0x4F5
  7929 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GHE WITH DESCENDER", unicode 0x4F6
  7937 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GHE WITH DESCENDER", unicode 0x4F7
  7945 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YERU WITH DIAERESIS", unicode 0x4F8
  7953 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YERU WITH DIAERESIS", unicode 0x4F9
  7961 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER GHE WITH STROKE AND HOOK", unicode 0x4FA
  7972 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER GHE WITH STROKE AND HOOK", unicode 0x4FB
  7983 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER HA WITH HOOK", unicode 0x4FC
  7991 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER HA WITH HOOK", unicode 0x4FD
  7999 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER HA WITH STROKE", unicode 0x4FE
  8007 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER HA WITH STROKE", unicode 0x4FF
} ;

static const uint32_t gNamePage5 [256] = {
  8015 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI DE", unicode 0x500
  8022 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI DE", unicode 0x501
  8029 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI DJE", unicode 0x502
  8036 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI DJE", unicode 0x503
  8043 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI ZJE", unicode 0x504
  8050 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI ZJE", unicode 0x505
  8057 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI DZJE", unicode 0x506
  8064 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI DZJE", unicode 0x507
  8071 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI LJE", unicode 0x508
  8078 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI LJE", unicode 0x509
  8085 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI NJE", unicode 0x50A
  8092 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI NJE", unicode 0x50B
  8099 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI SJE", unicode 0x50C
  8106 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI SJE", unicode 0x50D
  8113 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER KOMI TJE", unicode 0x50E
  8120 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER KOMI TJE", unicode 0x50F
  8127 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER REVERSED ZE", unicode 0x510
  8134 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER REVERSED ZE", unicode 0x511
  8141 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EL WITH HOOK", unicode 0x512
  8149 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EL WITH HOOK", unicode 0x513
  8157 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER LHA", unicode 0x514
  8162 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER LHA", unicode 0x515
  8167 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER RHA", unicode 0x516
  8172 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER RHA", unicode 0x517
  8177 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER YAE", unicode 0x518
  8182 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER YAE", unicode 0x519
  8187 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER QA", unicode 0x51A
  8192 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER QA", unicode 0x51B
  8197 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER WE", unicode 0x51C
  8202 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER WE", unicode 0x51D
  8207 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER ALEUT KA", unicode 0x51E
  8214 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER ALEUT KA", unicode 0x51F
  8221 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EL WITH MIDDLE HOOK", unicode 0x520
  8231 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EL WITH MIDDLE HOOK", unicode 0x521
  8241 | (kUnicodeCategory_Lu << 27), // "CYRILLIC CAPITAL LETTER EN WITH MIDDLE HOOK", unicode 0x522
  8251 | (kUnicodeCategory_Ll << 27), // "CYRILLIC SMALL LETTER EN WITH MIDDLE HOOK", unicode 0x523
  0, // undefined code 0x524
  0, // undefined code 0x525
  0, // undefined code 0x526
  0, // undefined code 0x527
  0, // undefined code 0x528
  0, // undefined code 0x529
  0, // undefined code 0x52A
  0, // undefined code 0x52B
  0, // undefined code 0x52C
  0, // undefined code 0x52D
  0, // undefined code 0x52E
  0, // undefined code 0x52F
  0, // undefined code 0x530
  8261 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER AYB", unicode 0x531
  8267 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER BEN", unicode 0x532
  8273 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER GIM", unicode 0x533
  8279 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER DA", unicode 0x534
  8285 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER ECH", unicode 0x535
  8291 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER ZA", unicode 0x536
  8297 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER EH", unicode 0x537
  8303 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER ET", unicode 0x538
  8309 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER TO", unicode 0x539
  8315 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER ZHE", unicode 0x53A
  8321 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER INI", unicode 0x53B
  8327 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER LIWN", unicode 0x53C
  8333 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER XEH", unicode 0x53D
  8339 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER CA", unicode 0x53E
  8345 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER KEN", unicode 0x53F
  8351 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER HO", unicode 0x540
  8357 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER JA", unicode 0x541
  8363 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER GHAD", unicode 0x542
  8369 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER CHEH", unicode 0x543
  8375 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER MEN", unicode 0x544
  8381 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER YI", unicode 0x545
  8386 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER NOW", unicode 0x546
  8392 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER SHA", unicode 0x547
  8398 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER VO", unicode 0x548
  8404 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER CHA", unicode 0x549
  8410 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER PEH", unicode 0x54A
  8416 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER JHEH", unicode 0x54B
  8422 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER RA", unicode 0x54C
  8428 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER SEH", unicode 0x54D
  8434 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER VEW", unicode 0x54E
  8440 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER TIWN", unicode 0x54F
  8446 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER REH", unicode 0x550
  8452 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER CO", unicode 0x551
  8458 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER YIWN", unicode 0x552
  8464 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER PIWR", unicode 0x553
  8470 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER KEH", unicode 0x554
  8476 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER OH", unicode 0x555
  8482 | (kUnicodeCategory_Lu << 27), // "ARMENIAN CAPITAL LETTER FEH", unicode 0x556
  0, // undefined code 0x557
  0, // undefined code 0x558
  8488 | (kUnicodeCategory_Lm << 27), // "ARMENIAN MODIFIER LETTER LEFT HALF RING", unicode 0x559
  8497 | (kUnicodeCategory_Po << 27), // "ARMENIAN APOSTROPHE", unicode 0x55A
  8501 | (kUnicodeCategory_Po << 27), // "ARMENIAN EMPHASIS MARK", unicode 0x55B
  8506 | (kUnicodeCategory_Po << 27), // "ARMENIAN EXCLAMATION MARK", unicode 0x55C
  8511 | (kUnicodeCategory_Po << 27), // "ARMENIAN COMMA", unicode 0x55D
  8515 | (kUnicodeCategory_Po << 27), // "ARMENIAN QUESTION MARK", unicode 0x55E
  8520 | (kUnicodeCategory_Po << 27), // "ARMENIAN ABBREVIATION MARK", unicode 0x55F
  0, // undefined code 0x560
  8525 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER AYB", unicode 0x561
  8531 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER BEN", unicode 0x562
  8537 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER GIM", unicode 0x563
  8543 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER DA", unicode 0x564
  8549 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER ECH", unicode 0x565
  8555 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER ZA", unicode 0x566
  8561 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER EH", unicode 0x567
  8567 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER ET", unicode 0x568
  8573 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER TO", unicode 0x569
  8579 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER ZHE", unicode 0x56A
  8585 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER INI", unicode 0x56B
  8591 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER LIWN", unicode 0x56C
  8597 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER XEH", unicode 0x56D
  8603 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER CA", unicode 0x56E
  8609 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER KEN", unicode 0x56F
  8615 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER HO", unicode 0x570
  8621 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER JA", unicode 0x571
  8627 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER GHAD", unicode 0x572
  8633 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER CHEH", unicode 0x573
  8639 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER MEN", unicode 0x574
  8645 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER YI", unicode 0x575
  8650 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER NOW", unicode 0x576
  8656 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER SHA", unicode 0x577
  8662 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER VO", unicode 0x578
  8668 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER CHA", unicode 0x579
  8674 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER PEH", unicode 0x57A
  8680 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER JHEH", unicode 0x57B
  8686 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER RA", unicode 0x57C
  8692 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER SEH", unicode 0x57D
  8698 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER VEW", unicode 0x57E
  8704 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER TIWN", unicode 0x57F
  8710 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER REH", unicode 0x580
  8716 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER CO", unicode 0x581
  8722 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER YIWN", unicode 0x582
  8728 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER PIWR", unicode 0x583
  8734 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER KEH", unicode 0x584
  8740 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER OH", unicode 0x585
  8746 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LETTER FEH", unicode 0x586
  8752 | (kUnicodeCategory_Ll << 27), // "ARMENIAN SMALL LIGATURE ECH YIWN", unicode 0x587
  0, // undefined code 0x588
  8760 | (kUnicodeCategory_Po << 27), // "ARMENIAN FULL STOP", unicode 0x589
  8766 | (kUnicodeCategory_Pd << 27), // "ARMENIAN HYPHEN", unicode 0x58A
  0, // undefined code 0x58B
  0, // undefined code 0x58C
  0, // undefined code 0x58D
  0, // undefined code 0x58E
  0, // undefined code 0x58F
  0, // undefined code 0x590
  8770 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ETNAHTA", unicode 0x591
  8776 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT SEGOL", unicode 0x592
  8782 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT SHALSHELET", unicode 0x593
  8789 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ZAQEF QATAN", unicode 0x594
  8797 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ZAQEF GADOL", unicode 0x595
  8806 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT TIPEHA", unicode 0x596
  8813 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT REVIA", unicode 0x597
  8820 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ZARQA", unicode 0x598
  8826 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT PASHTA", unicode 0x599
  8832 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT YETIV", unicode 0x59A
  8838 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT TEVIR", unicode 0x59B
  8845 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT GERESH", unicode 0x59C
  8851 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT GERESH MUQDAM", unicode 0x59D
  8860 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT GERSHAYIM", unicode 0x59E
  8866 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT QARNEY PARA", unicode 0x59F
  8876 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT TELISHA GEDOLA", unicode 0x5A0
  8884 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT PAZER", unicode 0x5A1
  8891 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ATNAH HAFUKH", unicode 0x5A2
  8900 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT MUNAH", unicode 0x5A3
  8906 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT MAHAPAKH", unicode 0x5A4
  8912 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT MERKHA", unicode 0x5A5
  8918 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT MERKHA KEFULA", unicode 0x5A6
  8927 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT DARGA", unicode 0x5A7
  8934 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT QADMA", unicode 0x5A8
  8941 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT TELISHA QETANA", unicode 0x5A9
  8950 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT YERAH BEN YOMO", unicode 0x5AA
  8961 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT OLE", unicode 0x5AB
  8968 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ILUY", unicode 0x5AC
  8975 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT DEHI", unicode 0x5AD
  8982 | (kUnicodeCategory_Mn << 27), // "HEBREW ACCENT ZINOR", unicode 0x5AE
  8989 | (kUnicodeCategory_Mn << 27), // "HEBREW MARK MASORA CIRCLE", unicode 0x5AF
  8996 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT SHEVA", unicode 0x5B0
  9003 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT HATAF SEGOL", unicode 0x5B1
  9011 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT HATAF PATAH", unicode 0x5B2
  9019 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT HATAF QAMATS", unicode 0x5B3
  9027 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT HIRIQ", unicode 0x5B4
  9033 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT TSERE", unicode 0x5B5
  9040 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT SEGOL", unicode 0x5B6
  9046 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT PATAH", unicode 0x5B7
  9052 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT QAMATS", unicode 0x5B8
  9058 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT HOLAM", unicode 0x5B9
  9064 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT HOLAM HASER FOR VAV", unicode 0x5BA
  9075 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT QUBUTS", unicode 0x5BB
  9082 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT DAGESH OR MAPIQ", unicode 0x5BC
  9092 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT METEG", unicode 0x5BD
  9099 | (kUnicodeCategory_Pd << 27), // "HEBREW PUNCTUATION MAQAF", unicode 0x5BE
  9106 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT RAFE", unicode 0x5BF
  9112 | (kUnicodeCategory_Po << 27), // "HEBREW PUNCTUATION PASEQ", unicode 0x5C0
  9119 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT SHIN DOT", unicode 0x5C1
  9126 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT SIN DOT", unicode 0x5C2
  9133 | (kUnicodeCategory_Po << 27), // "HEBREW PUNCTUATION SOF PASUQ", unicode 0x5C3
  9143 | (kUnicodeCategory_Mn << 27), // "HEBREW MARK UPPER DOT", unicode 0x5C4
  9149 | (kUnicodeCategory_Mn << 27), // "HEBREW MARK LOWER DOT", unicode 0x5C5
  9155 | (kUnicodeCategory_Po << 27), // "HEBREW PUNCTUATION NUN HAFUKHA", unicode 0x5C6
  9164 | (kUnicodeCategory_Mn << 27), // "HEBREW POINT QAMATS QATAN", unicode 0x5C7
  0, // undefined code 0x5C8
  0, // undefined code 0x5C9
  0, // undefined code 0x5CA
  0, // undefined code 0x5CB
  0, // undefined code 0x5CC
  0, // undefined code 0x5CD
  0, // undefined code 0x5CE
  0, // undefined code 0x5CF
  9172 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER ALEF", unicode 0x5D0
  9177 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER BET", unicode 0x5D1
  9182 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER GIMEL", unicode 0x5D2
  9187 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER DALET", unicode 0x5D3
  9192 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER HE", unicode 0x5D4
  9197 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER VAV", unicode 0x5D5
  9202 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER ZAYIN", unicode 0x5D6
  9207 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER HET", unicode 0x5D7
  9212 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER TET", unicode 0x5D8
  9217 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER YOD", unicode 0x5D9
  9222 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER FINAL KAF", unicode 0x5DA
  9228 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER KAF", unicode 0x5DB
  9233 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER LAMED", unicode 0x5DC
  9238 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER FINAL MEM", unicode 0x5DD
  9244 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER MEM", unicode 0x5DE
  9249 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER FINAL NUN", unicode 0x5DF
  9255 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER NUN", unicode 0x5E0
  9260 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER SAMEKH", unicode 0x5E1
  9265 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER AYIN", unicode 0x5E2
  9270 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER FINAL PE", unicode 0x5E3
  9276 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER PE", unicode 0x5E4
  9281 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER FINAL TSADI", unicode 0x5E5
  9287 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER TSADI", unicode 0x5E6
  9292 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER QOF", unicode 0x5E7
  9297 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER RESH", unicode 0x5E8
  9302 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER SHIN", unicode 0x5E9
  9307 | (kUnicodeCategory_Lo << 27), // "HEBREW LETTER TAV", unicode 0x5EA
  0, // undefined code 0x5EB
  0, // undefined code 0x5EC
  0, // undefined code 0x5ED
  0, // undefined code 0x5EE
  0, // undefined code 0x5EF
  9312 | (kUnicodeCategory_Lo << 27), // "HEBREW LIGATURE YIDDISH DOUBLE VAV", unicode 0x5F0
  9320 | (kUnicodeCategory_Lo << 27), // "HEBREW LIGATURE YIDDISH VAV YOD", unicode 0x5F1
  9329 | (kUnicodeCategory_Lo << 27), // "HEBREW LIGATURE YIDDISH DOUBLE YOD", unicode 0x5F2
  9337 | (kUnicodeCategory_Po << 27), // "HEBREW PUNCTUATION GERESH", unicode 0x5F3
  9343 | (kUnicodeCategory_Po << 27), // "HEBREW PUNCTUATION GERSHAYIM", unicode 0x5F4
  0, // undefined code 0x5F5
  0, // undefined code 0x5F6
  0, // undefined code 0x5F7
  0, // undefined code 0x5F8
  0, // undefined code 0x5F9
  0, // undefined code 0x5FA
  0, // undefined code 0x5FB
  0, // undefined code 0x5FC
  0, // undefined code 0x5FD
  0, // undefined code 0x5FE
  0, // undefined code 0x5FF
} ;

static const uint32_t gNamePage6 [256] = {
  9349 | (kUnicodeCategory_Cf << 27), // "ARABIC NUMBER SIGN", unicode 0x600
  9353 | (kUnicodeCategory_Cf << 27), // "ARABIC SIGN SANAH", unicode 0x601
  9357 | (kUnicodeCategory_Cf << 27), // "ARABIC FOOTNOTE MARKER", unicode 0x602
  9363 | (kUnicodeCategory_Cf << 27), // "ARABIC SIGN SAFHA", unicode 0x603
  0, // undefined code 0x604
  0, // undefined code 0x605
  9367 | (kUnicodeCategory_Sm << 27), // "ARABIC-INDIC CUBE ROOT", unicode 0x606
  9374 | (kUnicodeCategory_Sm << 27), // "ARABIC-INDIC FOURTH ROOT", unicode 0x607
  9381 | (kUnicodeCategory_Sm << 27), // "ARABIC RAY", unicode 0x608
  9385 | (kUnicodeCategory_Po << 27), // "ARABIC-INDIC PER MILLE SIGN", unicode 0x609
  9393 | (kUnicodeCategory_Po << 27), // "ARABIC-INDIC PER TEN THOUSAND SIGN", unicode 0x60A
  9403 | (kUnicodeCategory_Sc << 27), // "AFGHANI SIGN", unicode 0x60B
  9407 | (kUnicodeCategory_Po << 27), // "ARABIC COMMA", unicode 0x60C
  9410 | (kUnicodeCategory_Po << 27), // "ARABIC DATE SEPARATOR", unicode 0x60D
  9415 | (kUnicodeCategory_So << 27), // "ARABIC POETIC VERSE SIGN", unicode 0x60E
  9422 | (kUnicodeCategory_So << 27), // "ARABIC SIGN MISRA", unicode 0x60F
  9427 | (kUnicodeCategory_Mn << 27), // "ARABIC SIGN SALLALLAHOU ALAYHE WASSALLAM", unicode 0x610
  9436 | (kUnicodeCategory_Mn << 27), // "ARABIC SIGN ALAYHE ASSALLAM", unicode 0x611
  9443 | (kUnicodeCategory_Mn << 27), // "ARABIC SIGN RAHMATULLAH ALAYHE", unicode 0x612
  9449 | (kUnicodeCategory_Mn << 27), // "ARABIC SIGN RADI ALLAHOU ANHU", unicode 0x613
  9459 | (kUnicodeCategory_Mn << 27), // "ARABIC SIGN TAKHALLUS", unicode 0x614
  9464 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH TAH", unicode 0x615
  9470 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH LIGATURE ALEF WITH LAM WITH YEH", unicode 0x616
  9483 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH ZAIN", unicode 0x617
  9489 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL FATHA", unicode 0x618
  9493 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL DAMMA", unicode 0x619
  9497 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL KASRA", unicode 0x61A
  9501 | (kUnicodeCategory_Po << 27), // "ARABIC SEMICOLON", unicode 0x61B
  0, // undefined code 0x61C
  0, // undefined code 0x61D
  9504 | (kUnicodeCategory_Po << 27), // "ARABIC TRIPLE DOT PUNCTUATION MARK", unicode 0x61E
  9511 | (kUnicodeCategory_Po << 27), // "ARABIC QUESTION MARK", unicode 0x61F
  0, // undefined code 0x620
  9515 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAMZA", unicode 0x621
  9519 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH MADDA ABOVE", unicode 0x622
  9527 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH HAMZA ABOVE", unicode 0x623
  9535 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW WITH HAMZA ABOVE", unicode 0x624
  9543 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH HAMZA BELOW", unicode 0x625
  9551 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH WITH HAMZA ABOVE", unicode 0x626
  9559 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF", unicode 0x627
  9563 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH", unicode 0x628
  9567 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TEH MARBUTA", unicode 0x629
  9573 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TEH", unicode 0x62A
  9577 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER THEH", unicode 0x62B
  9581 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER JEEM", unicode 0x62C
  9585 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH", unicode 0x62D
  9589 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KHAH", unicode 0x62E
  9593 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL", unicode 0x62F
  9597 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER THAL", unicode 0x630
  9601 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH", unicode 0x631
  9605 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ZAIN", unicode 0x632
  9609 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN", unicode 0x633
  9613 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SHEEN", unicode 0x634
  9617 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SAD", unicode 0x635
  9621 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAD", unicode 0x636
  9625 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TAH", unicode 0x637
  9629 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ZAH", unicode 0x638
  9633 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER AIN", unicode 0x639
  9637 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GHAIN", unicode 0x63A
  9641 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KEHEH WITH TWO DOTS ABOVE", unicode 0x63B
  9650 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KEHEH WITH THREE DOTS BELOW", unicode 0x63C
  9659 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH WITH INVERTED V", unicode 0x63D
  9670 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH WITH TWO DOTS ABOVE", unicode 0x63E
  9681 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH WITH THREE DOTS ABOVE", unicode 0x63F
  9692 | (kUnicodeCategory_Lm << 27), // "ARABIC TATWEEL", unicode 0x640
  9695 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FEH", unicode 0x641
  9699 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER QAF", unicode 0x642
  9703 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KAF", unicode 0x643
  9707 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER LAM", unicode 0x644
  9711 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER MEEM", unicode 0x645
  9715 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON", unicode 0x646
  9719 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HEH", unicode 0x647
  9723 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW", unicode 0x648
  9727 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF MAKSURA", unicode 0x649
  9733 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH", unicode 0x64A
  9737 | (kUnicodeCategory_Mn << 27), // "ARABIC FATHATAN", unicode 0x64B
  9740 | (kUnicodeCategory_Mn << 27), // "ARABIC DAMMATAN", unicode 0x64C
  9743 | (kUnicodeCategory_Mn << 27), // "ARABIC KASRATAN", unicode 0x64D
  9746 | (kUnicodeCategory_Mn << 27), // "ARABIC FATHA", unicode 0x64E
  9749 | (kUnicodeCategory_Mn << 27), // "ARABIC DAMMA", unicode 0x64F
  9752 | (kUnicodeCategory_Mn << 27), // "ARABIC KASRA", unicode 0x650
  9755 | (kUnicodeCategory_Mn << 27), // "ARABIC SHADDA", unicode 0x651
  9758 | (kUnicodeCategory_Mn << 27), // "ARABIC SUKUN", unicode 0x652
  9761 | (kUnicodeCategory_Mn << 27), // "ARABIC MADDAH ABOVE", unicode 0x653
  9765 | (kUnicodeCategory_Mn << 27), // "ARABIC HAMZA ABOVE", unicode 0x654
  9769 | (kUnicodeCategory_Mn << 27), // "ARABIC HAMZA BELOW", unicode 0x655
  9773 | (kUnicodeCategory_Mn << 27), // "ARABIC SUBSCRIPT ALEF", unicode 0x656
  9778 | (kUnicodeCategory_Mn << 27), // "ARABIC INVERTED DAMMA", unicode 0x657
  9783 | (kUnicodeCategory_Mn << 27), // "ARABIC MARK NOON GHUNNA", unicode 0x658
  9789 | (kUnicodeCategory_Mn << 27), // "ARABIC ZWARAKAY", unicode 0x659
  9792 | (kUnicodeCategory_Mn << 27), // "ARABIC VOWEL SIGN SMALL V ABOVE", unicode 0x65A
  9799 | (kUnicodeCategory_Mn << 27), // "ARABIC VOWEL SIGN INVERTED SMALL V ABOVE", unicode 0x65B
  9808 | (kUnicodeCategory_Mn << 27), // "ARABIC VOWEL SIGN DOT BELOW", unicode 0x65C
  9813 | (kUnicodeCategory_Mn << 27), // "ARABIC REVERSED DAMMA", unicode 0x65D
  9818 | (kUnicodeCategory_Mn << 27), // "ARABIC FATHA WITH TWO DOTS", unicode 0x65E
  0, // undefined code 0x65F
  9825 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT ZERO", unicode 0x660
  9831 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT ONE", unicode 0x661
  9837 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT TWO", unicode 0x662
  9843 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT THREE", unicode 0x663
  9849 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT FOUR", unicode 0x664
  9855 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT FIVE", unicode 0x665
  9861 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT SIX", unicode 0x666
  9867 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT SEVEN", unicode 0x667
  9873 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT EIGHT", unicode 0x668
  9879 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "ARABIC-INDIC DIGIT NINE", unicode 0x669
  9885 | (kUnicodeCategory_Po << 27), // "ARABIC PERCENT SIGN", unicode 0x66A
  9889 | (kUnicodeCategory_Po << 27), // "ARABIC DECIMAL SEPARATOR", unicode 0x66B
  9894 | (kUnicodeCategory_Po << 27), // "ARABIC THOUSANDS SEPARATOR", unicode 0x66C
  9899 | (kUnicodeCategory_Po << 27), // "ARABIC FIVE POINTED STAR", unicode 0x66D
  9906 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DOTLESS BEH", unicode 0x66E
  9912 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DOTLESS QAF", unicode 0x66F
  9918 | (kUnicodeCategory_Mn << 27), // "ARABIC LETTER SUPERSCRIPT ALEF", unicode 0x670
  9924 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WASLA", unicode 0x671
  9930 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH WAVY HAMZA ABOVE", unicode 0x672
  9940 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH WAVY HAMZA BELOW", unicode 0x673
  9950 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HIGH HAMZA", unicode 0x674
  9956 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HIGH HAMZA ALEF", unicode 0x675
  9964 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HIGH HAMZA WAW", unicode 0x676
  9972 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER U WITH HAMZA ABOVE", unicode 0x677
  9979 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HIGH HAMZA YEH", unicode 0x678
  9987 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TTEH", unicode 0x679
  9991 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TTEHEH", unicode 0x67A
  9995 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEEH", unicode 0x67B
  9999 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TEH WITH RING", unicode 0x67C
  10006 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TEH WITH THREE DOTS ABOVE DOWNWARDS", unicode 0x67D
  10017 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER PEH", unicode 0x67E
  10021 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TEHEH", unicode 0x67F
  10025 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEHEH", unicode 0x680
  10029 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH HAMZA ABOVE", unicode 0x681
  10037 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH TWO DOTS VERTICAL ABOVE", unicode 0x682
  10047 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NYEH", unicode 0x683
  10051 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DYEH", unicode 0x684
  10055 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH THREE DOTS ABOVE", unicode 0x685
  10064 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TCHEH", unicode 0x686
  10068 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TCHEHEH", unicode 0x687
  10072 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DDAL", unicode 0x688
  10076 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH RING", unicode 0x689
  10083 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH DOT BELOW", unicode 0x68A
  10090 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH DOT BELOW AND SMALL TAH", unicode 0x68B
  10101 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAHAL", unicode 0x68C
  10105 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DDAHAL", unicode 0x68D
  10109 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DUL", unicode 0x68E
  10113 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH THREE DOTS ABOVE DOWNWARDS", unicode 0x68F
  10124 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH FOUR DOTS ABOVE", unicode 0x690
  10133 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER RREH", unicode 0x691
  10137 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH SMALL V", unicode 0x692
  10145 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH RING", unicode 0x693
  10152 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH DOT BELOW", unicode 0x694
  10159 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH SMALL V BELOW", unicode 0x695
  10168 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH DOT BELOW AND DOT ABOVE", unicode 0x696
  10178 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH TWO DOTS ABOVE", unicode 0x697
  10187 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER JEH", unicode 0x698
  10191 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH FOUR DOTS ABOVE", unicode 0x699
  10200 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH DOT BELOW AND DOT ABOVE", unicode 0x69A
  10210 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH THREE DOTS BELOW", unicode 0x69B
  10219 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH THREE DOTS BELOW AND THREE DOTS ABOVE", unicode 0x69C
  10233 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SAD WITH TWO DOTS BELOW", unicode 0x69D
  10242 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SAD WITH THREE DOTS ABOVE", unicode 0x69E
  10251 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TAH WITH THREE DOTS ABOVE", unicode 0x69F
  10260 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER AIN WITH THREE DOTS ABOVE", unicode 0x6A0
  10269 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DOTLESS FEH", unicode 0x6A1
  10275 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FEH WITH DOT MOVED BELOW", unicode 0x6A2
  10285 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FEH WITH DOT BELOW", unicode 0x6A3
  10292 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER VEH", unicode 0x6A4
  10296 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FEH WITH THREE DOTS BELOW", unicode 0x6A5
  10305 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER PEHEH", unicode 0x6A6
  10309 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER QAF WITH DOT ABOVE", unicode 0x6A7
  10316 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER QAF WITH THREE DOTS ABOVE", unicode 0x6A8
  10325 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KEHEH", unicode 0x6A9
  10329 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SWASH KAF", unicode 0x6AA
  10335 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KAF WITH RING", unicode 0x6AB
  10342 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KAF WITH DOT ABOVE", unicode 0x6AC
  10349 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NG", unicode 0x6AD
  10353 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KAF WITH THREE DOTS BELOW", unicode 0x6AE
  10362 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GAF", unicode 0x6AF
  10366 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GAF WITH RING", unicode 0x6B0
  10373 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NGOEH", unicode 0x6B1
  10377 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GAF WITH TWO DOTS BELOW", unicode 0x6B2
  10386 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GUEH", unicode 0x6B3
  10390 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GAF WITH THREE DOTS ABOVE", unicode 0x6B4
  10399 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER LAM WITH SMALL V", unicode 0x6B5
  10407 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER LAM WITH DOT ABOVE", unicode 0x6B6
  10414 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER LAM WITH THREE DOTS ABOVE", unicode 0x6B7
  10423 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER LAM WITH THREE DOTS BELOW", unicode 0x6B8
  10432 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON WITH DOT BELOW", unicode 0x6B9
  10439 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON GHUNNA", unicode 0x6BA
  10445 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER RNOON", unicode 0x6BB
  10449 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON WITH RING", unicode 0x6BC
  10456 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON WITH THREE DOTS ABOVE", unicode 0x6BD
  10465 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HEH DOACHASHMEE", unicode 0x6BE
  10471 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TCHEH WITH DOT ABOVE", unicode 0x6BF
  10478 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HEH WITH YEH ABOVE", unicode 0x6C0
  10486 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HEH GOAL", unicode 0x6C1
  10492 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HEH GOAL WITH HAMZA ABOVE", unicode 0x6C2
  10502 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER TEH MARBUTA GOAL", unicode 0x6C3
  10510 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW WITH RING", unicode 0x6C4
  10517 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KIRGHIZ OE", unicode 0x6C5
  10523 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER OE", unicode 0x6C6
  10527 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER U", unicode 0x6C7
  10530 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YU", unicode 0x6C8
  10534 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KIRGHIZ YU", unicode 0x6C9
  10540 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW WITH TWO DOTS ABOVE", unicode 0x6CA
  10549 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER VE", unicode 0x6CB
  10553 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH", unicode 0x6CC
  10559 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH WITH TAIL", unicode 0x6CD
  10566 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH WITH SMALL V", unicode 0x6CE
  10574 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW WITH DOT ABOVE", unicode 0x6CF
  10581 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER E", unicode 0x6D0
  10584 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH WITH THREE DOTS BELOW", unicode 0x6D1
  10593 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH BARREE", unicode 0x6D2
  10599 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH BARREE WITH HAMZA ABOVE", unicode 0x6D3
  10609 | (kUnicodeCategory_Po << 27), // "ARABIC FULL STOP", unicode 0x6D4
  10614 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER AE", unicode 0x6D5
  10618 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH LIGATURE SAD WITH LAM WITH ALEF MAKSURA", unicode 0x6D6
  10633 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH LIGATURE QAF WITH LAM WITH ALEF MAKSURA", unicode 0x6D7
  10648 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH MEEM INITIAL FORM", unicode 0x6D8
  10657 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH LAM ALEF", unicode 0x6D9
  10665 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH JEEM", unicode 0x6DA
  10671 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH THREE DOTS", unicode 0x6DB
  10678 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH SEEN", unicode 0x6DC
  10684 | (kUnicodeCategory_Cf << 27), // "ARABIC END OF AYAH", unicode 0x6DD
  10691 | (kUnicodeCategory_Me << 27), // "ARABIC START OF RUB EL HIZB", unicode 0x6DE
  10704 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH ROUNDED ZERO", unicode 0x6DF
  10712 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH UPRIGHT RECTANGULAR ZERO", unicode 0x6E0
  10723 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH DOTLESS HEAD OF KHAH", unicode 0x6E1
  10735 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH MEEM ISOLATED FORM", unicode 0x6E2
  10743 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL LOW SEEN", unicode 0x6E3
  10749 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH MADDA", unicode 0x6E4
  10755 | (kUnicodeCategory_Lm << 27), // "ARABIC SMALL WAW", unicode 0x6E5
  10759 | (kUnicodeCategory_Lm << 27), // "ARABIC SMALL YEH", unicode 0x6E6
  10763 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH YEH", unicode 0x6E7
  10769 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL HIGH NOON", unicode 0x6E8
  10775 | (kUnicodeCategory_So << 27), // "ARABIC PLACE OF SAJDAH", unicode 0x6E9
  10782 | (kUnicodeCategory_Mn << 27), // "ARABIC EMPTY CENTRE LOW STOP", unicode 0x6EA
  10791 | (kUnicodeCategory_Mn << 27), // "ARABIC EMPTY CENTRE HIGH STOP", unicode 0x6EB
  10800 | (kUnicodeCategory_Mn << 27), // "ARABIC ROUNDED HIGH STOP WITH FILLED CENTRE", unicode 0x6EC
  10813 | (kUnicodeCategory_Mn << 27), // "ARABIC SMALL LOW MEEM", unicode 0x6ED
  10819 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH INVERTED V", unicode 0x6EE
  10828 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH INVERTED V", unicode 0x6EF
  10837 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT ZERO", unicode 0x6F0
  10845 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT ONE", unicode 0x6F1
  10853 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT TWO", unicode 0x6F2
  10861 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT THREE", unicode 0x6F3
  10869 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT FOUR", unicode 0x6F4
  10877 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT FIVE", unicode 0x6F5
  10885 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT SIX", unicode 0x6F6
  10893 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT SEVEN", unicode 0x6F7
  10901 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT EIGHT", unicode 0x6F8
  10909 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "EXTENDED ARABIC-INDIC DIGIT NINE", unicode 0x6F9
  10917 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SHEEN WITH DOT BELOW", unicode 0x6FA
  10924 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAD WITH DOT BELOW", unicode 0x6FB
  10931 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER GHAIN WITH DOT BELOW", unicode 0x6FC
  10938 | (kUnicodeCategory_So << 27), // "ARABIC SIGN SINDHI AMPERSAND", unicode 0x6FD
  10944 | (kUnicodeCategory_So << 27), // "ARABIC SIGN SINDHI POSTPOSITION MEN", unicode 0x6FE
  10953 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HEH WITH INVERTED V", unicode 0x6FF
} ;

static const uint32_t gNamePage7 [256] = {
  10962 | (kUnicodeCategory_Po << 27), // "SYRIAC END OF PARAGRAPH", unicode 0x700
  10970 | (kUnicodeCategory_Po << 27), // "SYRIAC SUPRALINEAR FULL STOP", unicode 0x701
  10978 | (kUnicodeCategory_Po << 27), // "SYRIAC SUBLINEAR FULL STOP", unicode 0x702
  10986 | (kUnicodeCategory_Po << 27), // "SYRIAC SUPRALINEAR COLON", unicode 0x703
  10992 | (kUnicodeCategory_Po << 27), // "SYRIAC SUBLINEAR COLON", unicode 0x704
  10998 | (kUnicodeCategory_Po << 27), // "SYRIAC HORIZONTAL COLON", unicode 0x705
  11004 | (kUnicodeCategory_Po << 27), // "SYRIAC COLON SKEWED LEFT", unicode 0x706
  11011 | (kUnicodeCategory_Po << 27), // "SYRIAC COLON SKEWED RIGHT", unicode 0x707
  11018 | (kUnicodeCategory_Po << 27), // "SYRIAC SUPRALINEAR COLON SKEWED LEFT", unicode 0x708
  11027 | (kUnicodeCategory_Po << 27), // "SYRIAC SUBLINEAR COLON SKEWED RIGHT", unicode 0x709
  11036 | (kUnicodeCategory_Po << 27), // "SYRIAC CONTRACTION", unicode 0x70A
  11041 | (kUnicodeCategory_Po << 27), // "SYRIAC HARKLEAN OBELUS", unicode 0x70B
  11048 | (kUnicodeCategory_Po << 27), // "SYRIAC HARKLEAN METOBELUS", unicode 0x70C
  11055 | (kUnicodeCategory_Po << 27), // "SYRIAC HARKLEAN ASTERISCUS", unicode 0x70D
  0, // undefined code 0x70E
  11061 | (kUnicodeCategory_Cf << 27), // "SYRIAC ABBREVIATION MARK", unicode 0x70F
  11066 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER ALAPH", unicode 0x710
  11071 | (kUnicodeCategory_Mn << 27), // "SYRIAC LETTER SUPERSCRIPT ALAPH", unicode 0x711
  11078 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER BETH", unicode 0x712
  11084 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER GAMAL", unicode 0x713
  11089 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER GAMAL GARSHUNI", unicode 0x714
  11096 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER DALATH", unicode 0x715
  11101 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER DOTLESS DALATH RISH", unicode 0x716
  11110 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER HE", unicode 0x717
  11115 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER WAW", unicode 0x718
  11120 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER ZAIN", unicode 0x719
  11125 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER HETH", unicode 0x71A
  11131 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER TETH", unicode 0x71B
  11136 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER TETH GARSHUNI", unicode 0x71C
  11143 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER YUDH", unicode 0x71D
  11148 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER YUDH HE", unicode 0x71E
  11155 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER KAPH", unicode 0x71F
  11161 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER LAMADH", unicode 0x720
  11167 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER MIM", unicode 0x721
  11172 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER NUN", unicode 0x722
  11177 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER SEMKATH", unicode 0x723
  11182 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER FINAL SEMKATH", unicode 0x724
  11188 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER E", unicode 0x725
  11192 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER PE", unicode 0x726
  11197 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER REVERSED PE", unicode 0x727
  11204 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER SADHE", unicode 0x728
  11209 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER QAPH", unicode 0x729
  11215 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER RISH", unicode 0x72A
  11220 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER SHIN", unicode 0x72B
  11225 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER TAW", unicode 0x72C
  11231 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER PERSIAN BHETH", unicode 0x72D
  11239 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER PERSIAN GHAMAL", unicode 0x72E
  11247 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER PERSIAN DHALATH", unicode 0x72F
  11254 | (kUnicodeCategory_Mn << 27), // "SYRIAC PTHAHA ABOVE", unicode 0x730
  11259 | (kUnicodeCategory_Mn << 27), // "SYRIAC PTHAHA BELOW", unicode 0x731
  11264 | (kUnicodeCategory_Mn << 27), // "SYRIAC PTHAHA DOTTED", unicode 0x732
  11270 | (kUnicodeCategory_Mn << 27), // "SYRIAC ZQAPHA ABOVE", unicode 0x733
  11275 | (kUnicodeCategory_Mn << 27), // "SYRIAC ZQAPHA BELOW", unicode 0x734
  11280 | (kUnicodeCategory_Mn << 27), // "SYRIAC ZQAPHA DOTTED", unicode 0x735
  11286 | (kUnicodeCategory_Mn << 27), // "SYRIAC RBASA ABOVE", unicode 0x736
  11291 | (kUnicodeCategory_Mn << 27), // "SYRIAC RBASA BELOW", unicode 0x737
  11296 | (kUnicodeCategory_Mn << 27), // "SYRIAC DOTTED ZLAMA HORIZONTAL", unicode 0x738
  11304 | (kUnicodeCategory_Mn << 27), // "SYRIAC DOTTED ZLAMA ANGULAR", unicode 0x739
  11313 | (kUnicodeCategory_Mn << 27), // "SYRIAC HBASA ABOVE", unicode 0x73A
  11318 | (kUnicodeCategory_Mn << 27), // "SYRIAC HBASA BELOW", unicode 0x73B
  11323 | (kUnicodeCategory_Mn << 27), // "SYRIAC HBASA-ESASA DOTTED", unicode 0x73C
  11331 | (kUnicodeCategory_Mn << 27), // "SYRIAC ESASA ABOVE", unicode 0x73D
  11336 | (kUnicodeCategory_Mn << 27), // "SYRIAC ESASA BELOW", unicode 0x73E
  11341 | (kUnicodeCategory_Mn << 27), // "SYRIAC RWAHA", unicode 0x73F
  11345 | (kUnicodeCategory_Mn << 27), // "SYRIAC FEMININE DOT", unicode 0x740
  11350 | (kUnicodeCategory_Mn << 27), // "SYRIAC QUSHSHAYA", unicode 0x741
  11355 | (kUnicodeCategory_Mn << 27), // "SYRIAC RUKKAKHA", unicode 0x742
  11360 | (kUnicodeCategory_Mn << 27), // "SYRIAC TWO VERTICAL DOTS ABOVE", unicode 0x743
  11367 | (kUnicodeCategory_Mn << 27), // "SYRIAC TWO VERTICAL DOTS BELOW", unicode 0x744
  11374 | (kUnicodeCategory_Mn << 27), // "SYRIAC THREE DOTS ABOVE", unicode 0x745
  11380 | (kUnicodeCategory_Mn << 27), // "SYRIAC THREE DOTS BELOW", unicode 0x746
  11386 | (kUnicodeCategory_Mn << 27), // "SYRIAC OBLIQUE LINE ABOVE", unicode 0x747
  11393 | (kUnicodeCategory_Mn << 27), // "SYRIAC OBLIQUE LINE BELOW", unicode 0x748
  11400 | (kUnicodeCategory_Mn << 27), // "SYRIAC MUSIC", unicode 0x749
  11404 | (kUnicodeCategory_Mn << 27), // "SYRIAC BARREKH", unicode 0x74A
  0, // undefined code 0x74B
  0, // undefined code 0x74C
  11409 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER SOGDIAN ZHAIN", unicode 0x74D
  11416 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER SOGDIAN KHAPH", unicode 0x74E
  11424 | (kUnicodeCategory_Lo << 27), // "SYRIAC LETTER SOGDIAN FE", unicode 0x74F
  11431 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH THREE DOTS HORIZONTALLY BELOW", unicode 0x750
  11442 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH DOT BELOW AND THREE DOTS ABOVE", unicode 0x751
  11454 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH THREE DOTS POINTING UPWARDS BELOW", unicode 0x752
  11467 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH THREE DOTS POINTING UPWARDS BELOW AND TWO DOTS ABOVE", unicode 0x753
  11485 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH TWO DOTS BELOW AND DOT ABOVE", unicode 0x754
  11497 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH INVERTED SMALL V BELOW", unicode 0x755
  11508 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER BEH WITH SMALL V", unicode 0x756
  11516 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH TWO DOTS ABOVE", unicode 0x757
  11525 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH THREE DOTS POINTING UPWARDS BELOW", unicode 0x758
  11538 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH TWO DOTS VERTICALLY BELOW AND SMALL TAH", unicode 0x759
  11553 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER DAL WITH INVERTED SMALL V BELOW", unicode 0x75A
  11564 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH STROKE", unicode 0x75B
  11571 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH FOUR DOTS ABOVE", unicode 0x75C
  11580 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER AIN WITH TWO DOTS ABOVE", unicode 0x75D
  11589 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER AIN WITH THREE DOTS POINTING DOWNWARDS ABOVE", unicode 0x75E
  11602 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER AIN WITH TWO DOTS VERTICALLY ABOVE", unicode 0x75F
  11613 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FEH WITH TWO DOTS BELOW", unicode 0x760
  11622 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FEH WITH THREE DOTS POINTING UPWARDS BELOW", unicode 0x761
  11635 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KEHEH WITH DOT ABOVE", unicode 0x762
  11642 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KEHEH WITH THREE DOTS ABOVE", unicode 0x763
  11651 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KEHEH WITH THREE DOTS POINTING UPWARDS BELOW", unicode 0x764
  11664 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER MEEM WITH DOT ABOVE", unicode 0x765
  11671 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER MEEM WITH DOT BELOW", unicode 0x766
  11678 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON WITH TWO DOTS BELOW", unicode 0x767
  11687 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON WITH SMALL TAH", unicode 0x768
  11695 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER NOON WITH SMALL V", unicode 0x769
  11703 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER LAM WITH BAR", unicode 0x76A
  11710 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH TWO DOTS VERTICALLY ABOVE", unicode 0x76B
  11721 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH HAMZA ABOVE", unicode 0x76C
  11729 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH TWO DOTS VERTICALLY ABOVE", unicode 0x76D
  11740 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH SMALL ARABIC LETTER TAH BELOW", unicode 0x76E
  11751 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH SMALL ARABIC LETTER TAH AND TWO DOTS", unicode 0x76F
  11765 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH SMALL ARABIC LETTER TAH AND TWO DOTS", unicode 0x770
  11779 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER REH WITH SMALL ARABIC LETTER TAH AND TWO DOTS", unicode 0x771
  11793 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH SMALL ARABIC LETTER TAH ABOVE", unicode 0x772
  11804 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE", unicode 0x773
  11818 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER ALEF WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE", unicode 0x774
  11832 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE", unicode 0x775
  11848 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE", unicode 0x776
  11864 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER FARSI YEH WITH EXTENDED ARABIC-INDIC DIGIT FOUR BELOW", unicode 0x777
  11880 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE", unicode 0x778
  11894 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER WAW WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE", unicode 0x779
  11908 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH BARREE WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE", unicode 0x77A
  11924 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER YEH BARREE WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE", unicode 0x77B
  11940 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER HAH WITH EXTENDED ARABIC-INDIC DIGIT FOUR BELOW", unicode 0x77C
  11954 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH EXTENDED ARABIC-INDIC DIGIT FOUR ABOVE", unicode 0x77D
  11968 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER SEEN WITH INVERTED V", unicode 0x77E
  11977 | (kUnicodeCategory_Lo << 27), // "ARABIC LETTER KAF WITH TWO DOTS ABOVE", unicode 0x77F
  11986 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER HAA", unicode 0x780
  11991 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER SHAVIYANI", unicode 0x781
  11996 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER NOONU", unicode 0x782
  12002 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER RAA", unicode 0x783
  12007 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER BAA", unicode 0x784
  12012 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER LHAVIYANI", unicode 0x785
  12018 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER KAAFU", unicode 0x786
  12023 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER ALIFU", unicode 0x787
  12029 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER VAAVU", unicode 0x788
  12034 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER MEEMU", unicode 0x789
  12039 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER FAAFU", unicode 0x78A
  12045 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER DHAALU", unicode 0x78B
  12051 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER THAA", unicode 0x78C
  12056 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER LAAMU", unicode 0x78D
  12062 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER GAAFU", unicode 0x78E
  12068 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER GNAVIYANI", unicode 0x78F
  12074 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER SEENU", unicode 0x790
  12080 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER DAVIYANI", unicode 0x791
  12086 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER ZAVIYANI", unicode 0x792
  12092 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER TAVIYANI", unicode 0x793
  12098 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER YAA", unicode 0x794
  12103 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER PAVIYANI", unicode 0x795
  12109 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER JAVIYANI", unicode 0x796
  12115 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER CHAVIYANI", unicode 0x797
  12120 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER TTAA", unicode 0x798
  12126 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER HHAA", unicode 0x799
  12131 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER KHAA", unicode 0x79A
  12136 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER THAALU", unicode 0x79B
  12142 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER ZAA", unicode 0x79C
  12147 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER SHEENU", unicode 0x79D
  12153 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER SAADHU", unicode 0x79E
  12159 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER DAADHU", unicode 0x79F
  12165 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER TO", unicode 0x7A0
  12170 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER ZO", unicode 0x7A1
  12175 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER AINU", unicode 0x7A2
  12181 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER GHAINU", unicode 0x7A3
  12187 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER QAAFU", unicode 0x7A4
  12192 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER WAAVU", unicode 0x7A5
  12198 | (kUnicodeCategory_Mn << 27), // "THAANA ABAFILI", unicode 0x7A6
  12203 | (kUnicodeCategory_Mn << 27), // "THAANA AABAAFILI", unicode 0x7A7
  12207 | (kUnicodeCategory_Mn << 27), // "THAANA IBIFILI", unicode 0x7A8
  12212 | (kUnicodeCategory_Mn << 27), // "THAANA EEBEEFILI", unicode 0x7A9
  12217 | (kUnicodeCategory_Mn << 27), // "THAANA UBUFILI", unicode 0x7AA
  12222 | (kUnicodeCategory_Mn << 27), // "THAANA OOBOOFILI", unicode 0x7AB
  12227 | (kUnicodeCategory_Mn << 27), // "THAANA EBEFILI", unicode 0x7AC
  12232 | (kUnicodeCategory_Mn << 27), // "THAANA EYBEYFILI", unicode 0x7AD
  12237 | (kUnicodeCategory_Mn << 27), // "THAANA OBOFILI", unicode 0x7AE
  12242 | (kUnicodeCategory_Mn << 27), // "THAANA OABOAFILI", unicode 0x7AF
  12246 | (kUnicodeCategory_Mn << 27), // "THAANA SUKUN", unicode 0x7B0
  12250 | (kUnicodeCategory_Lo << 27), // "THAANA LETTER NAA", unicode 0x7B1
  0, // undefined code 0x7B2
  0, // undefined code 0x7B3
  0, // undefined code 0x7B4
  0, // undefined code 0x7B5
  0, // undefined code 0x7B6
  0, // undefined code 0x7B7
  0, // undefined code 0x7B8
  0, // undefined code 0x7B9
  0, // undefined code 0x7BA
  0, // undefined code 0x7BB
  0, // undefined code 0x7BC
  0, // undefined code 0x7BD
  0, // undefined code 0x7BE
  0, // undefined code 0x7BF
  12255 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT ZERO", unicode 0x7C0
  12260 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT ONE", unicode 0x7C1
  12265 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT TWO", unicode 0x7C2
  12270 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT THREE", unicode 0x7C3
  12275 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT FOUR", unicode 0x7C4
  12280 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT FIVE", unicode 0x7C5
  12285 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT SIX", unicode 0x7C6
  12290 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT SEVEN", unicode 0x7C7
  12295 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT EIGHT", unicode 0x7C8
  12300 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "NKO DIGIT NINE", unicode 0x7C9
  12305 | (kUnicodeCategory_Lo << 27), // "NKO LETTER A", unicode 0x7CA
  12309 | (kUnicodeCategory_Lo << 27), // "NKO LETTER EE", unicode 0x7CB
  12314 | (kUnicodeCategory_Lo << 27), // "NKO LETTER I", unicode 0x7CC
  12319 | (kUnicodeCategory_Lo << 27), // "NKO LETTER E", unicode 0x7CD
  12323 | (kUnicodeCategory_Lo << 27), // "NKO LETTER U", unicode 0x7CE
  12327 | (kUnicodeCategory_Lo << 27), // "NKO LETTER OO", unicode 0x7CF
  12332 | (kUnicodeCategory_Lo << 27), // "NKO LETTER O", unicode 0x7D0
  12336 | (kUnicodeCategory_Lo << 27), // "NKO LETTER DAGBASINNA", unicode 0x7D1
  12341 | (kUnicodeCategory_Lo << 27), // "NKO LETTER N", unicode 0x7D2
  12346 | (kUnicodeCategory_Lo << 27), // "NKO LETTER BA", unicode 0x7D3
  12351 | (kUnicodeCategory_Lo << 27), // "NKO LETTER PA", unicode 0x7D4
  12356 | (kUnicodeCategory_Lo << 27), // "NKO LETTER TA", unicode 0x7D5
  12361 | (kUnicodeCategory_Lo << 27), // "NKO LETTER JA", unicode 0x7D6
  12366 | (kUnicodeCategory_Lo << 27), // "NKO LETTER CHA", unicode 0x7D7
  12371 | (kUnicodeCategory_Lo << 27), // "NKO LETTER DA", unicode 0x7D8
  12376 | (kUnicodeCategory_Lo << 27), // "NKO LETTER RA", unicode 0x7D9
  12381 | (kUnicodeCategory_Lo << 27), // "NKO LETTER RRA", unicode 0x7DA
  12386 | (kUnicodeCategory_Lo << 27), // "NKO LETTER SA", unicode 0x7DB
  12391 | (kUnicodeCategory_Lo << 27), // "NKO LETTER GBA", unicode 0x7DC
  12396 | (kUnicodeCategory_Lo << 27), // "NKO LETTER FA", unicode 0x7DD
  12401 | (kUnicodeCategory_Lo << 27), // "NKO LETTER KA", unicode 0x7DE
  12406 | (kUnicodeCategory_Lo << 27), // "NKO LETTER LA", unicode 0x7DF
  12411 | (kUnicodeCategory_Lo << 27), // "NKO LETTER NA WOLOSO", unicode 0x7E0
  12418 | (kUnicodeCategory_Lo << 27), // "NKO LETTER MA", unicode 0x7E1
  12423 | (kUnicodeCategory_Lo << 27), // "NKO LETTER NYA", unicode 0x7E2
  12428 | (kUnicodeCategory_Lo << 27), // "NKO LETTER NA", unicode 0x7E3
  12433 | (kUnicodeCategory_Lo << 27), // "NKO LETTER HA", unicode 0x7E4
  12438 | (kUnicodeCategory_Lo << 27), // "NKO LETTER WA", unicode 0x7E5
  12443 | (kUnicodeCategory_Lo << 27), // "NKO LETTER YA", unicode 0x7E6
  12448 | (kUnicodeCategory_Lo << 27), // "NKO LETTER NYA WOLOSO", unicode 0x7E7
  12455 | (kUnicodeCategory_Lo << 27), // "NKO LETTER JONA JA", unicode 0x7E8
  12462 | (kUnicodeCategory_Lo << 27), // "NKO LETTER JONA CHA", unicode 0x7E9
  12469 | (kUnicodeCategory_Lo << 27), // "NKO LETTER JONA RA", unicode 0x7EA
  12476 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING SHORT HIGH TONE", unicode 0x7EB
  12485 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING SHORT LOW TONE", unicode 0x7EC
  12494 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING SHORT RISING TONE", unicode 0x7ED
  12503 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING LONG DESCENDING TONE", unicode 0x7EE
  12512 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING LONG HIGH TONE", unicode 0x7EF
  12521 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING LONG LOW TONE", unicode 0x7F0
  12530 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING LONG RISING TONE", unicode 0x7F1
  12539 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING NASALIZATION MARK", unicode 0x7F2
  12546 | (kUnicodeCategory_Mn << 27), // "NKO COMBINING DOUBLE DOT ABOVE", unicode 0x7F3
  12552 | (kUnicodeCategory_Lm << 27), // "NKO HIGH TONE APOSTROPHE", unicode 0x7F4
  12560 | (kUnicodeCategory_Lm << 27), // "NKO LOW TONE APOSTROPHE", unicode 0x7F5
  12568 | (kUnicodeCategory_So << 27), // "NKO SYMBOL OO DENNEN", unicode 0x7F6
  12576 | (kUnicodeCategory_Po << 27), // "NKO SYMBOL GBAKURUNEN", unicode 0x7F7
  12581 | (kUnicodeCategory_Po << 27), // "NKO COMMA", unicode 0x7F8
  12585 | (kUnicodeCategory_Po << 27), // "NKO EXCLAMATION MARK", unicode 0x7F9
  12590 | (kUnicodeCategory_Lm << 27), // "NKO LAJANYALAN", unicode 0x7FA
  0, // undefined code 0x7FB
  0, // undefined code 0x7FC
  0, // undefined code 0x7FD
  0, // undefined code 0x7FE
  0, // undefined code 0x7FF
} ;

static const uint32_t gNamePage9 [256] = {
  0, // undefined code 0x900
  12595 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI SIGN CANDRABINDU", unicode 0x901
  12600 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI SIGN ANUSVARA", unicode 0x902
  12605 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI SIGN VISARGA", unicode 0x903
  12610 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER SHORT A", unicode 0x904
  12616 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER A", unicode 0x905
  12620 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER AA", unicode 0x906
  12625 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER I", unicode 0x907
  12630 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER II", unicode 0x908
  12635 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER U", unicode 0x909
  12639 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER UU", unicode 0x90A
  12644 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER VOCALIC R", unicode 0x90B
  12651 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER VOCALIC L", unicode 0x90C
  12658 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER CANDRA E", unicode 0x90D
  12664 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER SHORT E", unicode 0x90E
  12670 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER E", unicode 0x90F
  12674 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER AI", unicode 0x910
  12679 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER CANDRA O", unicode 0x911
  12685 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER SHORT O", unicode 0x912
  12691 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER O", unicode 0x913
  12695 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER AU", unicode 0x914
  12700 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER KA", unicode 0x915
  12705 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER KHA", unicode 0x916
  12710 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER GA", unicode 0x917
  12715 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER GHA", unicode 0x918
  12720 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER NGA", unicode 0x919
  12725 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER CA", unicode 0x91A
  12730 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER CHA", unicode 0x91B
  12735 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER JA", unicode 0x91C
  12740 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER JHA", unicode 0x91D
  12745 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER NYA", unicode 0x91E
  12750 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER TTA", unicode 0x91F
  12755 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER TTHA", unicode 0x920
  12760 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER DDA", unicode 0x921
  12765 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER DDHA", unicode 0x922
  12770 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER NNA", unicode 0x923
  12775 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER TA", unicode 0x924
  12780 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER THA", unicode 0x925
  12785 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER DA", unicode 0x926
  12790 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER DHA", unicode 0x927
  12795 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER NA", unicode 0x928
  12800 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER NNNA", unicode 0x929
  12805 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER PA", unicode 0x92A
  12810 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER PHA", unicode 0x92B
  12815 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER BA", unicode 0x92C
  12820 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER BHA", unicode 0x92D
  12825 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER MA", unicode 0x92E
  12830 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER YA", unicode 0x92F
  12835 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER RA", unicode 0x930
  12840 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER RRA", unicode 0x931
  12845 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER LA", unicode 0x932
  12850 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER LLA", unicode 0x933
  12855 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER LLLA", unicode 0x934
  12860 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER VA", unicode 0x935
  12865 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER SHA", unicode 0x936
  12870 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER SSA", unicode 0x937
  12875 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER SA", unicode 0x938
  12880 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER HA", unicode 0x939
  0, // undefined code 0x93A
  0, // undefined code 0x93B
  12885 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI SIGN NUKTA", unicode 0x93C
  12890 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI SIGN AVAGRAHA", unicode 0x93D
  12895 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN AA", unicode 0x93E
  12901 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN I", unicode 0x93F
  12907 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN II", unicode 0x940
  12913 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN U", unicode 0x941
  12918 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN UU", unicode 0x942
  12924 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN VOCALIC R", unicode 0x943
  12932 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN VOCALIC RR", unicode 0x944
  12940 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN CANDRA E", unicode 0x945
  12947 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN SHORT E", unicode 0x946
  12954 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN E", unicode 0x947
  12959 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN AI", unicode 0x948
  12965 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN CANDRA O", unicode 0x949
  12972 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN SHORT O", unicode 0x94A
  12979 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN O", unicode 0x94B
  12984 | (kUnicodeCategory_Mc << 27), // "DEVANAGARI VOWEL SIGN AU", unicode 0x94C
  12990 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI SIGN VIRAMA", unicode 0x94D
  0, // undefined code 0x94E
  0, // undefined code 0x94F
  12995 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI OM", unicode 0x950
  12999 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI STRESS SIGN UDATTA", unicode 0x951
  13006 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI STRESS SIGN ANUDATTA", unicode 0x952
  13014 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI GRAVE ACCENT", unicode 0x953
  13020 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI ACUTE ACCENT", unicode 0x954
  0, // undefined code 0x955
  0, // undefined code 0x956
  0, // undefined code 0x957
  13026 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER QA", unicode 0x958
  13031 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER KHHA", unicode 0x959
  13036 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER GHHA", unicode 0x95A
  13041 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER ZA", unicode 0x95B
  13046 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER DDDHA", unicode 0x95C
  13052 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER RHA", unicode 0x95D
  13057 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER FA", unicode 0x95E
  13062 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER YYA", unicode 0x95F
  13067 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER VOCALIC RR", unicode 0x960
  13074 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER VOCALIC LL", unicode 0x961
  13081 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN VOCALIC L", unicode 0x962
  13089 | (kUnicodeCategory_Mn << 27), // "DEVANAGARI VOWEL SIGN VOCALIC LL", unicode 0x963
  13097 | (kUnicodeCategory_Po << 27), // "DEVANAGARI DANDA", unicode 0x964
  13101 | (kUnicodeCategory_Po << 27), // "DEVANAGARI DOUBLE DANDA", unicode 0x965
  13106 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT ZERO", unicode 0x966
  13111 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT ONE", unicode 0x967
  13116 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT TWO", unicode 0x968
  13121 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT THREE", unicode 0x969
  13126 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT FOUR", unicode 0x96A
  13131 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT FIVE", unicode 0x96B
  13136 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT SIX", unicode 0x96C
  13141 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT SEVEN", unicode 0x96D
  13146 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT EIGHT", unicode 0x96E
  13151 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "DEVANAGARI DIGIT NINE", unicode 0x96F
  13156 | (kUnicodeCategory_Po << 27), // "DEVANAGARI ABBREVIATION SIGN", unicode 0x970
  13161 | (kUnicodeCategory_Lm << 27), // "DEVANAGARI SIGN HIGH SPACING DOT", unicode 0x971
  13170 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER CANDRA A", unicode 0x972
  0, // undefined code 0x973
  0, // undefined code 0x974
  0, // undefined code 0x975
  0, // undefined code 0x976
  0, // undefined code 0x977
  0, // undefined code 0x978
  0, // undefined code 0x979
  0, // undefined code 0x97A
  13176 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER GGA", unicode 0x97B
  13181 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER JJA", unicode 0x97C
  13186 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER GLOTTAL STOP", unicode 0x97D
  13193 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER DDDA", unicode 0x97E
  13198 | (kUnicodeCategory_Lo << 27), // "DEVANAGARI LETTER BBA", unicode 0x97F
  0, // undefined code 0x980
  13203 | (kUnicodeCategory_Mn << 27), // "BENGALI SIGN CANDRABINDU", unicode 0x981
  13208 | (kUnicodeCategory_Mc << 27), // "BENGALI SIGN ANUSVARA", unicode 0x982
  13213 | (kUnicodeCategory_Mc << 27), // "BENGALI SIGN VISARGA", unicode 0x983
  0, // undefined code 0x984
  13218 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER A", unicode 0x985
  13222 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER AA", unicode 0x986
  13227 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER I", unicode 0x987
  13232 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER II", unicode 0x988
  13237 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER U", unicode 0x989
  13241 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER UU", unicode 0x98A
  13246 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER VOCALIC R", unicode 0x98B
  13253 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER VOCALIC L", unicode 0x98C
  0, // undefined code 0x98D
  0, // undefined code 0x98E
  13260 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER E", unicode 0x98F
  13264 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER AI", unicode 0x990
  0, // undefined code 0x991
  0, // undefined code 0x992
  13269 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER O", unicode 0x993
  13273 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER AU", unicode 0x994
  13278 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER KA", unicode 0x995
  13283 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER KHA", unicode 0x996
  13288 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER GA", unicode 0x997
  13293 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER GHA", unicode 0x998
  13298 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER NGA", unicode 0x999
  13303 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER CA", unicode 0x99A
  13308 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER CHA", unicode 0x99B
  13313 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER JA", unicode 0x99C
  13318 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER JHA", unicode 0x99D
  13323 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER NYA", unicode 0x99E
  13328 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER TTA", unicode 0x99F
  13333 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER TTHA", unicode 0x9A0
  13338 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER DDA", unicode 0x9A1
  13343 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER DDHA", unicode 0x9A2
  13348 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER NNA", unicode 0x9A3
  13353 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER TA", unicode 0x9A4
  13358 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER THA", unicode 0x9A5
  13363 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER DA", unicode 0x9A6
  13368 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER DHA", unicode 0x9A7
  13373 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER NA", unicode 0x9A8
  0, // undefined code 0x9A9
  13378 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER PA", unicode 0x9AA
  13383 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER PHA", unicode 0x9AB
  13388 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER BA", unicode 0x9AC
  13393 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER BHA", unicode 0x9AD
  13398 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER MA", unicode 0x9AE
  13403 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER YA", unicode 0x9AF
  13408 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER RA", unicode 0x9B0
  0, // undefined code 0x9B1
  13413 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER LA", unicode 0x9B2
  0, // undefined code 0x9B3
  0, // undefined code 0x9B4
  0, // undefined code 0x9B5
  13418 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER SHA", unicode 0x9B6
  13423 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER SSA", unicode 0x9B7
  13428 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER SA", unicode 0x9B8
  13433 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER HA", unicode 0x9B9
  0, // undefined code 0x9BA
  0, // undefined code 0x9BB
  13438 | (kUnicodeCategory_Mn << 27), // "BENGALI SIGN NUKTA", unicode 0x9BC
  13443 | (kUnicodeCategory_Lo << 27), // "BENGALI SIGN AVAGRAHA", unicode 0x9BD
  13448 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN AA", unicode 0x9BE
  13454 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN I", unicode 0x9BF
  13460 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN II", unicode 0x9C0
  13466 | (kUnicodeCategory_Mn << 27), // "BENGALI VOWEL SIGN U", unicode 0x9C1
  13471 | (kUnicodeCategory_Mn << 27), // "BENGALI VOWEL SIGN UU", unicode 0x9C2
  13477 | (kUnicodeCategory_Mn << 27), // "BENGALI VOWEL SIGN VOCALIC R", unicode 0x9C3
  13485 | (kUnicodeCategory_Mn << 27), // "BENGALI VOWEL SIGN VOCALIC RR", unicode 0x9C4
  0, // undefined code 0x9C5
  0, // undefined code 0x9C6
  13493 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN E", unicode 0x9C7
  13498 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN AI", unicode 0x9C8
  0, // undefined code 0x9C9
  0, // undefined code 0x9CA
  13504 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN O", unicode 0x9CB
  13509 | (kUnicodeCategory_Mc << 27), // "BENGALI VOWEL SIGN AU", unicode 0x9CC
  13515 | (kUnicodeCategory_Mn << 27), // "BENGALI SIGN VIRAMA", unicode 0x9CD
  13520 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER KHANDA TA", unicode 0x9CE
  0, // undefined code 0x9CF
  0, // undefined code 0x9D0
  0, // undefined code 0x9D1
  0, // undefined code 0x9D2
  0, // undefined code 0x9D3
  0, // undefined code 0x9D4
  0, // undefined code 0x9D5
  0, // undefined code 0x9D6
  13528 | (kUnicodeCategory_Mc << 27), // "BENGALI AU LENGTH MARK", unicode 0x9D7
  0, // undefined code 0x9D8
  0, // undefined code 0x9D9
  0, // undefined code 0x9DA
  0, // undefined code 0x9DB
  13535 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER RRA", unicode 0x9DC
  13540 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER RHA", unicode 0x9DD
  0, // undefined code 0x9DE
  13545 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER YYA", unicode 0x9DF
  13550 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER VOCALIC RR", unicode 0x9E0
  13557 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER VOCALIC LL", unicode 0x9E1
  13564 | (kUnicodeCategory_Mn << 27), // "BENGALI VOWEL SIGN VOCALIC L", unicode 0x9E2
  13572 | (kUnicodeCategory_Mn << 27), // "BENGALI VOWEL SIGN VOCALIC LL", unicode 0x9E3
  0, // undefined code 0x9E4
  0, // undefined code 0x9E5
  13580 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT ZERO", unicode 0x9E6
  13585 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT ONE", unicode 0x9E7
  13590 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT TWO", unicode 0x9E8
  13595 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT THREE", unicode 0x9E9
  13600 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT FOUR", unicode 0x9EA
  13605 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT FIVE", unicode 0x9EB
  13610 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT SIX", unicode 0x9EC
  13615 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT SEVEN", unicode 0x9ED
  13620 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT EIGHT", unicode 0x9EE
  13625 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "BENGALI DIGIT NINE", unicode 0x9EF
  13630 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER RA WITH MIDDLE DIAGONAL", unicode 0x9F0
  13640 | (kUnicodeCategory_Lo << 27), // "BENGALI LETTER RA WITH LOWER DIAGONAL", unicode 0x9F1
  13650 | (kUnicodeCategory_Sc << 27), // "BENGALI RUPEE MARK", unicode 0x9F2
  13655 | (kUnicodeCategory_Sc << 27), // "BENGALI RUPEE SIGN", unicode 0x9F3
  13660 | (kUnicodeCategory_No << 27), // "BENGALI CURRENCY NUMERATOR ONE", unicode 0x9F4
  13668 | (kUnicodeCategory_No << 27), // "BENGALI CURRENCY NUMERATOR TWO", unicode 0x9F5
  13676 | (kUnicodeCategory_No << 27), // "BENGALI CURRENCY NUMERATOR THREE", unicode 0x9F6
  13684 | (kUnicodeCategory_No << 27), // "BENGALI CURRENCY NUMERATOR FOUR", unicode 0x9F7
  13692 | (kUnicodeCategory_No << 27), // "BENGALI CURRENCY NUMERATOR ONE LESS THAN THE DENOMINATOR", unicode 0x9F8
  13708 | (kUnicodeCategory_No << 27), // "BENGALI CURRENCY DENOMINATOR SIXTEEN", unicode 0x9F9
  13716 | (kUnicodeCategory_So << 27), // "BENGALI ISSHAR", unicode 0x9FA
  0, // undefined code 0x9FB
  0, // undefined code 0x9FC
  0, // undefined code 0x9FD
  0, // undefined code 0x9FE
  0, // undefined code 0x9FF
} ;

static const uint32_t gNamePage10 [256] = {
  0, // undefined code 0xA00
  13720 | (kUnicodeCategory_Mn << 27), // "GURMUKHI SIGN ADAK BINDI", unicode 0xA01
  13728 | (kUnicodeCategory_Mn << 27), // "GURMUKHI SIGN BINDI", unicode 0xA02
  13733 | (kUnicodeCategory_Mc << 27), // "GURMUKHI SIGN VISARGA", unicode 0xA03
  0, // undefined code 0xA04
  13738 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER A", unicode 0xA05
  13742 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER AA", unicode 0xA06
  13747 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER I", unicode 0xA07
  13752 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER II", unicode 0xA08
  13757 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER U", unicode 0xA09
  13761 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER UU", unicode 0xA0A
  0, // undefined code 0xA0B
  0, // undefined code 0xA0C
  0, // undefined code 0xA0D
  0, // undefined code 0xA0E
  13766 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER EE", unicode 0xA0F
  13771 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER AI", unicode 0xA10
  0, // undefined code 0xA11
  0, // undefined code 0xA12
  13776 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER OO", unicode 0xA13
  13781 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER AU", unicode 0xA14
  13786 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER KA", unicode 0xA15
  13791 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER KHA", unicode 0xA16
  13796 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER GA", unicode 0xA17
  13801 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER GHA", unicode 0xA18
  13806 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER NGA", unicode 0xA19
  13811 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER CA", unicode 0xA1A
  13816 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER CHA", unicode 0xA1B
  13821 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER JA", unicode 0xA1C
  13826 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER JHA", unicode 0xA1D
  13831 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER NYA", unicode 0xA1E
  13836 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER TTA", unicode 0xA1F
  13841 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER TTHA", unicode 0xA20
  13846 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER DDA", unicode 0xA21
  13851 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER DDHA", unicode 0xA22
  13856 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER NNA", unicode 0xA23
  13861 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER TA", unicode 0xA24
  13866 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER THA", unicode 0xA25
  13871 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER DA", unicode 0xA26
  13876 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER DHA", unicode 0xA27
  13881 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER NA", unicode 0xA28
  0, // undefined code 0xA29
  13886 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER PA", unicode 0xA2A
  13891 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER PHA", unicode 0xA2B
  13896 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER BA", unicode 0xA2C
  13901 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER BHA", unicode 0xA2D
  13906 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER MA", unicode 0xA2E
  13911 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER YA", unicode 0xA2F
  13916 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER RA", unicode 0xA30
  0, // undefined code 0xA31
  13921 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER LA", unicode 0xA32
  13926 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER LLA", unicode 0xA33
  0, // undefined code 0xA34
  13931 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER VA", unicode 0xA35
  13936 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER SHA", unicode 0xA36
  0, // undefined code 0xA37
  13941 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER SA", unicode 0xA38
  13946 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER HA", unicode 0xA39
  0, // undefined code 0xA3A
  0, // undefined code 0xA3B
  13951 | (kUnicodeCategory_Mn << 27), // "GURMUKHI SIGN NUKTA", unicode 0xA3C
  0, // undefined code 0xA3D
  13956 | (kUnicodeCategory_Mc << 27), // "GURMUKHI VOWEL SIGN AA", unicode 0xA3E
  13962 | (kUnicodeCategory_Mc << 27), // "GURMUKHI VOWEL SIGN I", unicode 0xA3F
  13968 | (kUnicodeCategory_Mc << 27), // "GURMUKHI VOWEL SIGN II", unicode 0xA40
  13974 | (kUnicodeCategory_Mn << 27), // "GURMUKHI VOWEL SIGN U", unicode 0xA41
  13979 | (kUnicodeCategory_Mn << 27), // "GURMUKHI VOWEL SIGN UU", unicode 0xA42
  0, // undefined code 0xA43
  0, // undefined code 0xA44
  0, // undefined code 0xA45
  0, // undefined code 0xA46
  13985 | (kUnicodeCategory_Mn << 27), // "GURMUKHI VOWEL SIGN EE", unicode 0xA47
  13991 | (kUnicodeCategory_Mn << 27), // "GURMUKHI VOWEL SIGN AI", unicode 0xA48
  0, // undefined code 0xA49
  0, // undefined code 0xA4A
  13997 | (kUnicodeCategory_Mn << 27), // "GURMUKHI VOWEL SIGN OO", unicode 0xA4B
  14003 | (kUnicodeCategory_Mn << 27), // "GURMUKHI VOWEL SIGN AU", unicode 0xA4C
  14009 | (kUnicodeCategory_Mn << 27), // "GURMUKHI SIGN VIRAMA", unicode 0xA4D
  0, // undefined code 0xA4E
  0, // undefined code 0xA4F
  0, // undefined code 0xA50
  14014 | (kUnicodeCategory_Mn << 27), // "GURMUKHI SIGN UDAAT", unicode 0xA51
  0, // undefined code 0xA52
  0, // undefined code 0xA53
  0, // undefined code 0xA54
  0, // undefined code 0xA55
  0, // undefined code 0xA56
  0, // undefined code 0xA57
  0, // undefined code 0xA58
  14020 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER KHHA", unicode 0xA59
  14025 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER GHHA", unicode 0xA5A
  14030 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER ZA", unicode 0xA5B
  14035 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER RRA", unicode 0xA5C
  0, // undefined code 0xA5D
  14040 | (kUnicodeCategory_Lo << 27), // "GURMUKHI LETTER FA", unicode 0xA5E
  0, // undefined code 0xA5F
  0, // undefined code 0xA60
  0, // undefined code 0xA61
  0, // undefined code 0xA62
  0, // undefined code 0xA63
  0, // undefined code 0xA64
  0, // undefined code 0xA65
  14045 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT ZERO", unicode 0xA66
  14050 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT ONE", unicode 0xA67
  14055 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT TWO", unicode 0xA68
  14060 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT THREE", unicode 0xA69
  14065 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT FOUR", unicode 0xA6A
  14070 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT FIVE", unicode 0xA6B
  14075 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT SIX", unicode 0xA6C
  14080 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT SEVEN", unicode 0xA6D
  14085 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT EIGHT", unicode 0xA6E
  14090 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "GURMUKHI DIGIT NINE", unicode 0xA6F
  14095 | (kUnicodeCategory_Mn << 27), // "GURMUKHI TIPPI", unicode 0xA70
  14100 | (kUnicodeCategory_Mn << 27), // "GURMUKHI ADDAK", unicode 0xA71
  14105 | (kUnicodeCategory_Lo << 27), // "GURMUKHI IRI", unicode 0xA72
  14110 | (kUnicodeCategory_Lo << 27), // "GURMUKHI URA", unicode 0xA73
  14115 | (kUnicodeCategory_Lo << 27), // "GURMUKHI EK ONKAR", unicode 0xA74
  14122 | (kUnicodeCategory_Mn << 27), // "GURMUKHI SIGN YAKASH", unicode 0xA75
  0, // undefined code 0xA76
  0, // undefined code 0xA77
  0, // undefined code 0xA78
  0, // undefined code 0xA79
  0, // undefined code 0xA7A
  0, // undefined code 0xA7B
  0, // undefined code 0xA7C
  0, // undefined code 0xA7D
  0, // undefined code 0xA7E
  0, // undefined code 0xA7F
  0, // undefined code 0xA80
  14128 | (kUnicodeCategory_Mn << 27), // "GUJARATI SIGN CANDRABINDU", unicode 0xA81
  14133 | (kUnicodeCategory_Mn << 27), // "GUJARATI SIGN ANUSVARA", unicode 0xA82
  14138 | (kUnicodeCategory_Mc << 27), // "GUJARATI SIGN VISARGA", unicode 0xA83
  0, // undefined code 0xA84
  14143 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER A", unicode 0xA85
  14147 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER AA", unicode 0xA86
  14152 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER I", unicode 0xA87
  14157 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER II", unicode 0xA88
  14162 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER U", unicode 0xA89
  14166 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER UU", unicode 0xA8A
  14171 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER VOCALIC R", unicode 0xA8B
  14178 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER VOCALIC L", unicode 0xA8C
  14185 | (kUnicodeCategory_Lo << 27), // "GUJARATI VOWEL CANDRA E", unicode 0xA8D
  0, // undefined code 0xA8E
  14191 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER E", unicode 0xA8F
  14195 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER AI", unicode 0xA90
  14200 | (kUnicodeCategory_Lo << 27), // "GUJARATI VOWEL CANDRA O", unicode 0xA91
  0, // undefined code 0xA92
  14206 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER O", unicode 0xA93
  14210 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER AU", unicode 0xA94
  14215 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER KA", unicode 0xA95
  14220 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER KHA", unicode 0xA96
  14225 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER GA", unicode 0xA97
  14230 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER GHA", unicode 0xA98
  14235 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER NGA", unicode 0xA99
  14240 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER CA", unicode 0xA9A
  14245 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER CHA", unicode 0xA9B
  14250 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER JA", unicode 0xA9C
  14255 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER JHA", unicode 0xA9D
  14260 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER NYA", unicode 0xA9E
  14265 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER TTA", unicode 0xA9F
  14270 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER TTHA", unicode 0xAA0
  14275 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER DDA", unicode 0xAA1
  14280 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER DDHA", unicode 0xAA2
  14285 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER NNA", unicode 0xAA3
  14290 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER TA", unicode 0xAA4
  14295 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER THA", unicode 0xAA5
  14300 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER DA", unicode 0xAA6
  14305 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER DHA", unicode 0xAA7
  14310 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER NA", unicode 0xAA8
  0, // undefined code 0xAA9
  14315 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER PA", unicode 0xAAA
  14320 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER PHA", unicode 0xAAB
  14325 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER BA", unicode 0xAAC
  14330 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER BHA", unicode 0xAAD
  14335 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER MA", unicode 0xAAE
  14340 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER YA", unicode 0xAAF
  14345 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER RA", unicode 0xAB0
  0, // undefined code 0xAB1
  14350 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER LA", unicode 0xAB2
  14355 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER LLA", unicode 0xAB3
  0, // undefined code 0xAB4
  14360 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER VA", unicode 0xAB5
  14365 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER SHA", unicode 0xAB6
  14370 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER SSA", unicode 0xAB7
  14375 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER SA", unicode 0xAB8
  14380 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER HA", unicode 0xAB9
  0, // undefined code 0xABA
  0, // undefined code 0xABB
  14385 | (kUnicodeCategory_Mn << 27), // "GUJARATI SIGN NUKTA", unicode 0xABC
  14390 | (kUnicodeCategory_Lo << 27), // "GUJARATI SIGN AVAGRAHA", unicode 0xABD
  14395 | (kUnicodeCategory_Mc << 27), // "GUJARATI VOWEL SIGN AA", unicode 0xABE
  14401 | (kUnicodeCategory_Mc << 27), // "GUJARATI VOWEL SIGN I", unicode 0xABF
  14407 | (kUnicodeCategory_Mc << 27), // "GUJARATI VOWEL SIGN II", unicode 0xAC0
  14413 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN U", unicode 0xAC1
  14418 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN UU", unicode 0xAC2
  14424 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN VOCALIC R", unicode 0xAC3
  14432 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN VOCALIC RR", unicode 0xAC4
  14440 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN CANDRA E", unicode 0xAC5
  0, // undefined code 0xAC6
  14447 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN E", unicode 0xAC7
  14452 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN AI", unicode 0xAC8
  14458 | (kUnicodeCategory_Mc << 27), // "GUJARATI VOWEL SIGN CANDRA O", unicode 0xAC9
  0, // undefined code 0xACA
  14465 | (kUnicodeCategory_Mc << 27), // "GUJARATI VOWEL SIGN O", unicode 0xACB
  14470 | (kUnicodeCategory_Mc << 27), // "GUJARATI VOWEL SIGN AU", unicode 0xACC
  14476 | (kUnicodeCategory_Mn << 27), // "GUJARATI SIGN VIRAMA", unicode 0xACD
  0, // undefined code 0xACE
  0, // undefined code 0xACF
  14481 | (kUnicodeCategory_Lo << 27), // "GUJARATI OM", unicode 0xAD0
  0, // undefined code 0xAD1
  0, // undefined code 0xAD2
  0, // undefined code 0xAD3
  0, // undefined code 0xAD4
  0, // undefined code 0xAD5
  0, // undefined code 0xAD6
  0, // undefined code 0xAD7
  0, // undefined code 0xAD8
  0, // undefined code 0xAD9
  0, // undefined code 0xADA
  0, // undefined code 0xADB
  0, // undefined code 0xADC
  0, // undefined code 0xADD
  0, // undefined code 0xADE
  0, // undefined code 0xADF
  14485 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER VOCALIC RR", unicode 0xAE0
  14492 | (kUnicodeCategory_Lo << 27), // "GUJARATI LETTER VOCALIC LL", unicode 0xAE1
  14499 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN VOCALIC L", unicode 0xAE2
  14507 | (kUnicodeCategory_Mn << 27), // "GUJARATI VOWEL SIGN VOCALIC LL", unicode 0xAE3
  0, // undefined code 0xAE4
  0, // undefined code 0xAE5
  14515 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT ZERO", unicode 0xAE6
  14520 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT ONE", unicode 0xAE7
  14525 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT TWO", unicode 0xAE8
  14530 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT THREE", unicode 0xAE9
  14535 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT FOUR", unicode 0xAEA
  14540 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT FIVE", unicode 0xAEB
  14545 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT SIX", unicode 0xAEC
  14550 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT SEVEN", unicode 0xAED
  14555 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT EIGHT", unicode 0xAEE
  14560 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "GUJARATI DIGIT NINE", unicode 0xAEF
  0, // undefined code 0xAF0
  14565 | (kUnicodeCategory_Sc << 27), // "GUJARATI RUPEE SIGN", unicode 0xAF1
  0, // undefined code 0xAF2
  0, // undefined code 0xAF3
  0, // undefined code 0xAF4
  0, // undefined code 0xAF5
  0, // undefined code 0xAF6
  0, // undefined code 0xAF7
  0, // undefined code 0xAF8
  0, // undefined code 0xAF9
  0, // undefined code 0xAFA
  0, // undefined code 0xAFB
  0, // undefined code 0xAFC
  0, // undefined code 0xAFD
  0, // undefined code 0xAFE
  0, // undefined code 0xAFF
} ;

static const uint32_t gNamePage11 [256] = {
  0, // undefined code 0xB00
  14570 | (kUnicodeCategory_Mn << 27), // "ORIYA SIGN CANDRABINDU", unicode 0xB01
  14575 | (kUnicodeCategory_Mc << 27), // "ORIYA SIGN ANUSVARA", unicode 0xB02
  14580 | (kUnicodeCategory_Mc << 27), // "ORIYA SIGN VISARGA", unicode 0xB03
  0, // undefined code 0xB04
  14585 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER A", unicode 0xB05
  14589 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER AA", unicode 0xB06
  14594 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER I", unicode 0xB07
  14599 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER II", unicode 0xB08
  14604 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER U", unicode 0xB09
  14608 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER UU", unicode 0xB0A
  14613 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER VOCALIC R", unicode 0xB0B
  14620 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER VOCALIC L", unicode 0xB0C
  0, // undefined code 0xB0D
  0, // undefined code 0xB0E
  14627 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER E", unicode 0xB0F
  14631 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER AI", unicode 0xB10
  0, // undefined code 0xB11
  0, // undefined code 0xB12
  14636 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER O", unicode 0xB13
  14640 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER AU", unicode 0xB14
  14645 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER KA", unicode 0xB15
  14650 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER KHA", unicode 0xB16
  14655 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER GA", unicode 0xB17
  14660 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER GHA", unicode 0xB18
  14665 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER NGA", unicode 0xB19
  14670 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER CA", unicode 0xB1A
  14675 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER CHA", unicode 0xB1B
  14680 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER JA", unicode 0xB1C
  14685 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER JHA", unicode 0xB1D
  14690 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER NYA", unicode 0xB1E
  14695 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER TTA", unicode 0xB1F
  14700 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER TTHA", unicode 0xB20
  14705 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER DDA", unicode 0xB21
  14710 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER DDHA", unicode 0xB22
  14715 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER NNA", unicode 0xB23
  14720 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER TA", unicode 0xB24
  14725 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER THA", unicode 0xB25
  14730 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER DA", unicode 0xB26
  14735 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER DHA", unicode 0xB27
  14740 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER NA", unicode 0xB28
  0, // undefined code 0xB29
  14745 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER PA", unicode 0xB2A
  14750 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER PHA", unicode 0xB2B
  14755 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER BA", unicode 0xB2C
  14760 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER BHA", unicode 0xB2D
  14765 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER MA", unicode 0xB2E
  14770 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER YA", unicode 0xB2F
  14775 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER RA", unicode 0xB30
  0, // undefined code 0xB31
  14780 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER LA", unicode 0xB32
  14785 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER LLA", unicode 0xB33
  0, // undefined code 0xB34
  14790 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER VA", unicode 0xB35
  14795 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER SHA", unicode 0xB36
  14800 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER SSA", unicode 0xB37
  14805 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER SA", unicode 0xB38
  14810 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER HA", unicode 0xB39
  0, // undefined code 0xB3A
  0, // undefined code 0xB3B
  14815 | (kUnicodeCategory_Mn << 27), // "ORIYA SIGN NUKTA", unicode 0xB3C
  14820 | (kUnicodeCategory_Lo << 27), // "ORIYA SIGN AVAGRAHA", unicode 0xB3D
  14825 | (kUnicodeCategory_Mc << 27), // "ORIYA VOWEL SIGN AA", unicode 0xB3E
  14831 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN I", unicode 0xB3F
  14837 | (kUnicodeCategory_Mc << 27), // "ORIYA VOWEL SIGN II", unicode 0xB40
  14843 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN U", unicode 0xB41
  14848 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN UU", unicode 0xB42
  14854 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN VOCALIC R", unicode 0xB43
  14862 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN VOCALIC RR", unicode 0xB44
  0, // undefined code 0xB45
  0, // undefined code 0xB46
  14870 | (kUnicodeCategory_Mc << 27), // "ORIYA VOWEL SIGN E", unicode 0xB47
  14875 | (kUnicodeCategory_Mc << 27), // "ORIYA VOWEL SIGN AI", unicode 0xB48
  0, // undefined code 0xB49
  0, // undefined code 0xB4A
  14881 | (kUnicodeCategory_Mc << 27), // "ORIYA VOWEL SIGN O", unicode 0xB4B
  14886 | (kUnicodeCategory_Mc << 27), // "ORIYA VOWEL SIGN AU", unicode 0xB4C
  14892 | (kUnicodeCategory_Mn << 27), // "ORIYA SIGN VIRAMA", unicode 0xB4D
  0, // undefined code 0xB4E
  0, // undefined code 0xB4F
  0, // undefined code 0xB50
  0, // undefined code 0xB51
  0, // undefined code 0xB52
  0, // undefined code 0xB53
  0, // undefined code 0xB54
  0, // undefined code 0xB55
  14897 | (kUnicodeCategory_Mn << 27), // "ORIYA AI LENGTH MARK", unicode 0xB56
  14904 | (kUnicodeCategory_Mc << 27), // "ORIYA AU LENGTH MARK", unicode 0xB57
  0, // undefined code 0xB58
  0, // undefined code 0xB59
  0, // undefined code 0xB5A
  0, // undefined code 0xB5B
  14911 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER RRA", unicode 0xB5C
  14916 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER RHA", unicode 0xB5D
  0, // undefined code 0xB5E
  14921 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER YYA", unicode 0xB5F
  14926 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER VOCALIC RR", unicode 0xB60
  14933 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER VOCALIC LL", unicode 0xB61
  14940 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN VOCALIC L", unicode 0xB62
  14948 | (kUnicodeCategory_Mn << 27), // "ORIYA VOWEL SIGN VOCALIC LL", unicode 0xB63
  0, // undefined code 0xB64
  0, // undefined code 0xB65
  14956 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT ZERO", unicode 0xB66
  14961 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT ONE", unicode 0xB67
  14966 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT TWO", unicode 0xB68
  14971 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT THREE", unicode 0xB69
  14976 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT FOUR", unicode 0xB6A
  14981 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT FIVE", unicode 0xB6B
  14986 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT SIX", unicode 0xB6C
  14991 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT SEVEN", unicode 0xB6D
  14996 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT EIGHT", unicode 0xB6E
  15001 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "ORIYA DIGIT NINE", unicode 0xB6F
  15006 | (kUnicodeCategory_So << 27), // "ORIYA ISSHAR", unicode 0xB70
  15010 | (kUnicodeCategory_Lo << 27), // "ORIYA LETTER WA", unicode 0xB71
  0, // undefined code 0xB72
  0, // undefined code 0xB73
  0, // undefined code 0xB74
  0, // undefined code 0xB75
  0, // undefined code 0xB76
  0, // undefined code 0xB77
  0, // undefined code 0xB78
  0, // undefined code 0xB79
  0, // undefined code 0xB7A
  0, // undefined code 0xB7B
  0, // undefined code 0xB7C
  0, // undefined code 0xB7D
  0, // undefined code 0xB7E
  0, // undefined code 0xB7F
  0, // undefined code 0xB80
  0, // undefined code 0xB81
  15015 | (kUnicodeCategory_Mn << 27), // "TAMIL SIGN ANUSVARA", unicode 0xB82
  15020 | (kUnicodeCategory_Lo << 27), // "TAMIL SIGN VISARGA", unicode 0xB83
  0, // undefined code 0xB84
  15025 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER A", unicode 0xB85
  15029 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER AA", unicode 0xB86
  15034 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER I", unicode 0xB87
  15039 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER II", unicode 0xB88
  15044 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER U", unicode 0xB89
  15048 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER UU", unicode 0xB8A
  0, // undefined code 0xB8B
  0, // undefined code 0xB8C
  0, // undefined code 0xB8D
  15053 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER E", unicode 0xB8E
  15057 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER EE", unicode 0xB8F
  15062 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER AI", unicode 0xB90
  0, // undefined code 0xB91
  15067 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER O", unicode 0xB92
  15071 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER OO", unicode 0xB93
  15076 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER AU", unicode 0xB94
  15081 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER KA", unicode 0xB95
  0, // undefined code 0xB96
  0, // undefined code 0xB97
  0, // undefined code 0xB98
  15086 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER NGA", unicode 0xB99
  15091 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER CA", unicode 0xB9A
  0, // undefined code 0xB9B
  15096 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER JA", unicode 0xB9C
  0, // undefined code 0xB9D
  15101 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER NYA", unicode 0xB9E
  15106 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER TTA", unicode 0xB9F
  0, // undefined code 0xBA0
  0, // undefined code 0xBA1
  0, // undefined code 0xBA2
  15111 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER NNA", unicode 0xBA3
  15116 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER TA", unicode 0xBA4
  0, // undefined code 0xBA5
  0, // undefined code 0xBA6
  0, // undefined code 0xBA7
  15121 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER NA", unicode 0xBA8
  15126 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER NNNA", unicode 0xBA9
  15131 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER PA", unicode 0xBAA
  0, // undefined code 0xBAB
  0, // undefined code 0xBAC
  0, // undefined code 0xBAD
  15136 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER MA", unicode 0xBAE
  15141 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER YA", unicode 0xBAF
  15146 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER RA", unicode 0xBB0
  15151 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER RRA", unicode 0xBB1
  15156 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER LA", unicode 0xBB2
  15161 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER LLA", unicode 0xBB3
  15166 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER LLLA", unicode 0xBB4
  15171 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER VA", unicode 0xBB5
  15176 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER SHA", unicode 0xBB6
  15181 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER SSA", unicode 0xBB7
  15186 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER SA", unicode 0xBB8
  15191 | (kUnicodeCategory_Lo << 27), // "TAMIL LETTER HA", unicode 0xBB9
  0, // undefined code 0xBBA
  0, // undefined code 0xBBB
  0, // undefined code 0xBBC
  0, // undefined code 0xBBD
  15196 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN AA", unicode 0xBBE
  15202 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN I", unicode 0xBBF
  15208 | (kUnicodeCategory_Mn << 27), // "TAMIL VOWEL SIGN II", unicode 0xBC0
  15214 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN U", unicode 0xBC1
  15219 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN UU", unicode 0xBC2
  0, // undefined code 0xBC3
  0, // undefined code 0xBC4
  0, // undefined code 0xBC5
  15225 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN E", unicode 0xBC6
  15230 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN EE", unicode 0xBC7
  15236 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN AI", unicode 0xBC8
  0, // undefined code 0xBC9
  15242 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN O", unicode 0xBCA
  15247 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN OO", unicode 0xBCB
  15253 | (kUnicodeCategory_Mc << 27), // "TAMIL VOWEL SIGN AU", unicode 0xBCC
  15259 | (kUnicodeCategory_Mn << 27), // "TAMIL SIGN VIRAMA", unicode 0xBCD
  0, // undefined code 0xBCE
  0, // undefined code 0xBCF
  15264 | (kUnicodeCategory_Lo << 27), // "TAMIL OM", unicode 0xBD0
  0, // undefined code 0xBD1
  0, // undefined code 0xBD2
  0, // undefined code 0xBD3
  0, // undefined code 0xBD4
  0, // undefined code 0xBD5
  0, // undefined code 0xBD6
  15268 | (kUnicodeCategory_Mc << 27), // "TAMIL AU LENGTH MARK", unicode 0xBD7
  0, // undefined code 0xBD8
  0, // undefined code 0xBD9
  0, // undefined code 0xBDA
  0, // undefined code 0xBDB
  0, // undefined code 0xBDC
  0, // undefined code 0xBDD
  0, // undefined code 0xBDE
  0, // undefined code 0xBDF
  0, // undefined code 0xBE0
  0, // undefined code 0xBE1
  0, // undefined code 0xBE2
  0, // undefined code 0xBE3
  0, // undefined code 0xBE4
  0, // undefined code 0xBE5
  15275 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT ZERO", unicode 0xBE6
  15280 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT ONE", unicode 0xBE7
  15285 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT TWO", unicode 0xBE8
  15290 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT THREE", unicode 0xBE9
  15295 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT FOUR", unicode 0xBEA
  15300 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT FIVE", unicode 0xBEB
  15305 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT SIX", unicode 0xBEC
  15310 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT SEVEN", unicode 0xBED
  15315 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT EIGHT", unicode 0xBEE
  15320 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "TAMIL DIGIT NINE", unicode 0xBEF
  15325 | (kUnicodeCategory_No << 27), // "TAMIL NUMBER TEN", unicode 0xBF0
  15331 | (kUnicodeCategory_No << 27), // "TAMIL NUMBER ONE HUNDRED", unicode 0xBF1
  15339 | (kUnicodeCategory_No << 27), // "TAMIL NUMBER ONE THOUSAND", unicode 0xBF2
  15347 | (kUnicodeCategory_So << 27), // "TAMIL DAY SIGN", unicode 0xBF3
  15352 | (kUnicodeCategory_So << 27), // "TAMIL MONTH SIGN", unicode 0xBF4
  15357 | (kUnicodeCategory_So << 27), // "TAMIL YEAR SIGN", unicode 0xBF5
  15362 | (kUnicodeCategory_So << 27), // "TAMIL DEBIT SIGN", unicode 0xBF6
  15368 | (kUnicodeCategory_So << 27), // "TAMIL CREDIT SIGN", unicode 0xBF7
  15373 | (kUnicodeCategory_So << 27), // "TAMIL AS ABOVE SIGN", unicode 0xBF8
  15379 | (kUnicodeCategory_Sc << 27), // "TAMIL RUPEE SIGN", unicode 0xBF9
  15384 | (kUnicodeCategory_So << 27), // "TAMIL NUMBER SIGN", unicode 0xBFA
  0, // undefined code 0xBFB
  0, // undefined code 0xBFC
  0, // undefined code 0xBFD
  0, // undefined code 0xBFE
  0, // undefined code 0xBFF
} ;

static const uint32_t gNamePage12 [256] = {
  0, // undefined code 0xC00
  15389 | (kUnicodeCategory_Mc << 27), // "TELUGU SIGN CANDRABINDU", unicode 0xC01
  15394 | (kUnicodeCategory_Mc << 27), // "TELUGU SIGN ANUSVARA", unicode 0xC02
  15399 | (kUnicodeCategory_Mc << 27), // "TELUGU SIGN VISARGA", unicode 0xC03
  0, // undefined code 0xC04
  15404 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER A", unicode 0xC05
  15408 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER AA", unicode 0xC06
  15413 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER I", unicode 0xC07
  15418 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER II", unicode 0xC08
  15423 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER U", unicode 0xC09
  15427 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER UU", unicode 0xC0A
  15432 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER VOCALIC R", unicode 0xC0B
  15439 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER VOCALIC L", unicode 0xC0C
  0, // undefined code 0xC0D
  15446 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER E", unicode 0xC0E
  15450 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER EE", unicode 0xC0F
  15455 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER AI", unicode 0xC10
  0, // undefined code 0xC11
  15460 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER O", unicode 0xC12
  15464 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER OO", unicode 0xC13
  15469 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER AU", unicode 0xC14
  15474 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER KA", unicode 0xC15
  15479 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER KHA", unicode 0xC16
  15484 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER GA", unicode 0xC17
  15489 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER GHA", unicode 0xC18
  15494 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER NGA", unicode 0xC19
  15499 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER CA", unicode 0xC1A
  15504 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER CHA", unicode 0xC1B
  15509 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER JA", unicode 0xC1C
  15514 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER JHA", unicode 0xC1D
  15519 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER NYA", unicode 0xC1E
  15524 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER TTA", unicode 0xC1F
  15529 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER TTHA", unicode 0xC20
  15534 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER DDA", unicode 0xC21
  15539 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER DDHA", unicode 0xC22
  15544 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER NNA", unicode 0xC23
  15549 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER TA", unicode 0xC24
  15554 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER THA", unicode 0xC25
  15559 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER DA", unicode 0xC26
  15564 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER DHA", unicode 0xC27
  15569 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER NA", unicode 0xC28
  0, // undefined code 0xC29
  15574 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER PA", unicode 0xC2A
  15579 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER PHA", unicode 0xC2B
  15584 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER BA", unicode 0xC2C
  15589 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER BHA", unicode 0xC2D
  15594 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER MA", unicode 0xC2E
  15599 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER YA", unicode 0xC2F
  15604 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER RA", unicode 0xC30
  15609 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER RRA", unicode 0xC31
  15614 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER LA", unicode 0xC32
  15619 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER LLA", unicode 0xC33
  0, // undefined code 0xC34
  15624 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER VA", unicode 0xC35
  15629 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER SHA", unicode 0xC36
  15634 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER SSA", unicode 0xC37
  15639 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER SA", unicode 0xC38
  15644 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER HA", unicode 0xC39
  0, // undefined code 0xC3A
  0, // undefined code 0xC3B
  0, // undefined code 0xC3C
  15649 | (kUnicodeCategory_Lo << 27), // "TELUGU SIGN AVAGRAHA", unicode 0xC3D
  15654 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN AA", unicode 0xC3E
  15660 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN I", unicode 0xC3F
  15666 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN II", unicode 0xC40
  15672 | (kUnicodeCategory_Mc << 27), // "TELUGU VOWEL SIGN U", unicode 0xC41
  15677 | (kUnicodeCategory_Mc << 27), // "TELUGU VOWEL SIGN UU", unicode 0xC42
  15683 | (kUnicodeCategory_Mc << 27), // "TELUGU VOWEL SIGN VOCALIC R", unicode 0xC43
  15691 | (kUnicodeCategory_Mc << 27), // "TELUGU VOWEL SIGN VOCALIC RR", unicode 0xC44
  0, // undefined code 0xC45
  15699 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN E", unicode 0xC46
  15704 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN EE", unicode 0xC47
  15710 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN AI", unicode 0xC48
  0, // undefined code 0xC49
  15716 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN O", unicode 0xC4A
  15721 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN OO", unicode 0xC4B
  15727 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN AU", unicode 0xC4C
  15733 | (kUnicodeCategory_Mn << 27), // "TELUGU SIGN VIRAMA", unicode 0xC4D
  0, // undefined code 0xC4E
  0, // undefined code 0xC4F
  0, // undefined code 0xC50
  0, // undefined code 0xC51
  0, // undefined code 0xC52
  0, // undefined code 0xC53
  0, // undefined code 0xC54
  15738 | (kUnicodeCategory_Mn << 27), // "TELUGU LENGTH MARK", unicode 0xC55
  15743 | (kUnicodeCategory_Mn << 27), // "TELUGU AI LENGTH MARK", unicode 0xC56
  0, // undefined code 0xC57
  15750 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER TSA", unicode 0xC58
  15755 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER DZA", unicode 0xC59
  0, // undefined code 0xC5A
  0, // undefined code 0xC5B
  0, // undefined code 0xC5C
  0, // undefined code 0xC5D
  0, // undefined code 0xC5E
  0, // undefined code 0xC5F
  15760 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER VOCALIC RR", unicode 0xC60
  15767 | (kUnicodeCategory_Lo << 27), // "TELUGU LETTER VOCALIC LL", unicode 0xC61
  15774 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN VOCALIC L", unicode 0xC62
  15782 | (kUnicodeCategory_Mn << 27), // "TELUGU VOWEL SIGN VOCALIC LL", unicode 0xC63
  0, // undefined code 0xC64
  0, // undefined code 0xC65
  15790 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT ZERO", unicode 0xC66
  15795 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT ONE", unicode 0xC67
  15800 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT TWO", unicode 0xC68
  15805 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT THREE", unicode 0xC69
  15810 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT FOUR", unicode 0xC6A
  15815 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT FIVE", unicode 0xC6B
  15820 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT SIX", unicode 0xC6C
  15825 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT SEVEN", unicode 0xC6D
  15830 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT EIGHT", unicode 0xC6E
  15835 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "TELUGU DIGIT NINE", unicode 0xC6F
  0, // undefined code 0xC70
  0, // undefined code 0xC71
  0, // undefined code 0xC72
  0, // undefined code 0xC73
  0, // undefined code 0xC74
  0, // undefined code 0xC75
  0, // undefined code 0xC76
  0, // undefined code 0xC77
  15840 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT ZERO FOR ODD POWERS OF FOUR", unicode 0xC78
  15856 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT ONE FOR ODD POWERS OF FOUR", unicode 0xC79
  15872 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT TWO FOR ODD POWERS OF FOUR", unicode 0xC7A
  15888 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT THREE FOR ODD POWERS OF FOUR", unicode 0xC7B
  15904 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT ONE FOR EVEN POWERS OF FOUR", unicode 0xC7C
  15920 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT TWO FOR EVEN POWERS OF FOUR", unicode 0xC7D
  15936 | (kUnicodeCategory_No << 27), // "TELUGU FRACTION DIGIT THREE FOR EVEN POWERS OF FOUR", unicode 0xC7E
  15952 | (kUnicodeCategory_So << 27), // "TELUGU SIGN TUUMU", unicode 0xC7F
  0, // undefined code 0xC80
  0, // undefined code 0xC81
  15958 | (kUnicodeCategory_Mc << 27), // "KANNADA SIGN ANUSVARA", unicode 0xC82
  15963 | (kUnicodeCategory_Mc << 27), // "KANNADA SIGN VISARGA", unicode 0xC83
  0, // undefined code 0xC84
  15968 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER A", unicode 0xC85
  15972 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER AA", unicode 0xC86
  15977 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER I", unicode 0xC87
  15982 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER II", unicode 0xC88
  15987 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER U", unicode 0xC89
  15991 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER UU", unicode 0xC8A
  15996 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER VOCALIC R", unicode 0xC8B
  16003 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER VOCALIC L", unicode 0xC8C
  0, // undefined code 0xC8D
  16010 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER E", unicode 0xC8E
  16014 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER EE", unicode 0xC8F
  16019 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER AI", unicode 0xC90
  0, // undefined code 0xC91
  16024 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER O", unicode 0xC92
  16028 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER OO", unicode 0xC93
  16033 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER AU", unicode 0xC94
  16038 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER KA", unicode 0xC95
  16043 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER KHA", unicode 0xC96
  16048 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER GA", unicode 0xC97
  16053 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER GHA", unicode 0xC98
  16058 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER NGA", unicode 0xC99
  16063 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER CA", unicode 0xC9A
  16068 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER CHA", unicode 0xC9B
  16073 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER JA", unicode 0xC9C
  16078 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER JHA", unicode 0xC9D
  16083 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER NYA", unicode 0xC9E
  16088 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER TTA", unicode 0xC9F
  16093 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER TTHA", unicode 0xCA0
  16098 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER DDA", unicode 0xCA1
  16103 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER DDHA", unicode 0xCA2
  16108 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER NNA", unicode 0xCA3
  16113 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER TA", unicode 0xCA4
  16118 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER THA", unicode 0xCA5
  16123 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER DA", unicode 0xCA6
  16128 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER DHA", unicode 0xCA7
  16133 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER NA", unicode 0xCA8
  0, // undefined code 0xCA9
  16138 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER PA", unicode 0xCAA
  16143 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER PHA", unicode 0xCAB
  16148 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER BA", unicode 0xCAC
  16153 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER BHA", unicode 0xCAD
  16158 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER MA", unicode 0xCAE
  16163 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER YA", unicode 0xCAF
  16168 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER RA", unicode 0xCB0
  16173 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER RRA", unicode 0xCB1
  16178 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER LA", unicode 0xCB2
  16183 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER LLA", unicode 0xCB3
  0, // undefined code 0xCB4
  16188 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER VA", unicode 0xCB5
  16193 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER SHA", unicode 0xCB6
  16198 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER SSA", unicode 0xCB7
  16203 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER SA", unicode 0xCB8
  16208 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER HA", unicode 0xCB9
  0, // undefined code 0xCBA
  0, // undefined code 0xCBB
  16213 | (kUnicodeCategory_Mn << 27), // "KANNADA SIGN NUKTA", unicode 0xCBC
  16218 | (kUnicodeCategory_Lo << 27), // "KANNADA SIGN AVAGRAHA", unicode 0xCBD
  16223 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN AA", unicode 0xCBE
  16229 | (kUnicodeCategory_Mn << 27), // "KANNADA VOWEL SIGN I", unicode 0xCBF
  16235 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN II", unicode 0xCC0
  16241 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN U", unicode 0xCC1
  16246 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN UU", unicode 0xCC2
  16252 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN VOCALIC R", unicode 0xCC3
  16260 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN VOCALIC RR", unicode 0xCC4
  0, // undefined code 0xCC5
  16268 | (kUnicodeCategory_Mn << 27), // "KANNADA VOWEL SIGN E", unicode 0xCC6
  16273 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN EE", unicode 0xCC7
  16279 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN AI", unicode 0xCC8
  0, // undefined code 0xCC9
  16285 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN O", unicode 0xCCA
  16290 | (kUnicodeCategory_Mc << 27), // "KANNADA VOWEL SIGN OO", unicode 0xCCB
  16296 | (kUnicodeCategory_Mn << 27), // "KANNADA VOWEL SIGN AU", unicode 0xCCC
  16302 | (kUnicodeCategory_Mn << 27), // "KANNADA SIGN VIRAMA", unicode 0xCCD
  0, // undefined code 0xCCE
  0, // undefined code 0xCCF
  0, // undefined code 0xCD0
  0, // undefined code 0xCD1
  0, // undefined code 0xCD2
  0, // undefined code 0xCD3
  0, // undefined code 0xCD4
  16307 | (kUnicodeCategory_Mc << 27), // "KANNADA LENGTH MARK", unicode 0xCD5
  16312 | (kUnicodeCategory_Mc << 27), // "KANNADA AI LENGTH MARK", unicode 0xCD6
  0, // undefined code 0xCD7
  0, // undefined code 0xCD8
  0, // undefined code 0xCD9
  0, // undefined code 0xCDA
  0, // undefined code 0xCDB
  0, // undefined code 0xCDC
  0, // undefined code 0xCDD
  16319 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER FA", unicode 0xCDE
  0, // undefined code 0xCDF
  16324 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER VOCALIC RR", unicode 0xCE0
  16331 | (kUnicodeCategory_Lo << 27), // "KANNADA LETTER VOCALIC LL", unicode 0xCE1
  16338 | (kUnicodeCategory_Mn << 27), // "KANNADA VOWEL SIGN VOCALIC L", unicode 0xCE2
  16346 | (kUnicodeCategory_Mn << 27), // "KANNADA VOWEL SIGN VOCALIC LL", unicode 0xCE3
  0, // undefined code 0xCE4
  0, // undefined code 0xCE5
  16354 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT ZERO", unicode 0xCE6
  16359 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT ONE", unicode 0xCE7
  16364 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT TWO", unicode 0xCE8
  16369 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT THREE", unicode 0xCE9
  16374 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT FOUR", unicode 0xCEA
  16379 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT FIVE", unicode 0xCEB
  16384 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT SIX", unicode 0xCEC
  16389 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT SEVEN", unicode 0xCED
  16394 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT EIGHT", unicode 0xCEE
  16399 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "KANNADA DIGIT NINE", unicode 0xCEF
  0, // undefined code 0xCF0
  16404 | (kUnicodeCategory_So << 27), // "KANNADA SIGN JIHVAMULIYA", unicode 0xCF1
  16409 | (kUnicodeCategory_So << 27), // "KANNADA SIGN UPADHMANIYA", unicode 0xCF2
  0, // undefined code 0xCF3
  0, // undefined code 0xCF4
  0, // undefined code 0xCF5
  0, // undefined code 0xCF6
  0, // undefined code 0xCF7
  0, // undefined code 0xCF8
  0, // undefined code 0xCF9
  0, // undefined code 0xCFA
  0, // undefined code 0xCFB
  0, // undefined code 0xCFC
  0, // undefined code 0xCFD
  0, // undefined code 0xCFE
  0, // undefined code 0xCFF
} ;

static const uint32_t gNamePage13 [256] = {
  0, // undefined code 0xD00
  0, // undefined code 0xD01
  16414 | (kUnicodeCategory_Mc << 27), // "MALAYALAM SIGN ANUSVARA", unicode 0xD02
  16419 | (kUnicodeCategory_Mc << 27), // "MALAYALAM SIGN VISARGA", unicode 0xD03
  0, // undefined code 0xD04
  16424 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER A", unicode 0xD05
  16428 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER AA", unicode 0xD06
  16433 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER I", unicode 0xD07
  16438 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER II", unicode 0xD08
  16443 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER U", unicode 0xD09
  16447 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER UU", unicode 0xD0A
  16452 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER VOCALIC R", unicode 0xD0B
  16459 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER VOCALIC L", unicode 0xD0C
  0, // undefined code 0xD0D
  16466 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER E", unicode 0xD0E
  16470 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER EE", unicode 0xD0F
  16475 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER AI", unicode 0xD10
  0, // undefined code 0xD11
  16480 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER O", unicode 0xD12
  16484 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER OO", unicode 0xD13
  16489 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER AU", unicode 0xD14
  16494 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER KA", unicode 0xD15
  16499 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER KHA", unicode 0xD16
  16504 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER GA", unicode 0xD17
  16509 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER GHA", unicode 0xD18
  16514 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER NGA", unicode 0xD19
  16519 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CA", unicode 0xD1A
  16524 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHA", unicode 0xD1B
  16529 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER JA", unicode 0xD1C
  16534 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER JHA", unicode 0xD1D
  16539 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER NYA", unicode 0xD1E
  16544 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER TTA", unicode 0xD1F
  16549 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER TTHA", unicode 0xD20
  16554 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER DDA", unicode 0xD21
  16559 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER DDHA", unicode 0xD22
  16564 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER NNA", unicode 0xD23
  16569 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER TA", unicode 0xD24
  16574 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER THA", unicode 0xD25
  16579 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER DA", unicode 0xD26
  16584 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER DHA", unicode 0xD27
  16589 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER NA", unicode 0xD28
  0, // undefined code 0xD29
  16594 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER PA", unicode 0xD2A
  16599 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER PHA", unicode 0xD2B
  16604 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER BA", unicode 0xD2C
  16609 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER BHA", unicode 0xD2D
  16614 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER MA", unicode 0xD2E
  16619 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER YA", unicode 0xD2F
  16624 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER RA", unicode 0xD30
  16629 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER RRA", unicode 0xD31
  16634 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER LA", unicode 0xD32
  16639 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER LLA", unicode 0xD33
  16644 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER LLLA", unicode 0xD34
  16649 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER VA", unicode 0xD35
  16654 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER SHA", unicode 0xD36
  16659 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER SSA", unicode 0xD37
  16664 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER SA", unicode 0xD38
  16669 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER HA", unicode 0xD39
  0, // undefined code 0xD3A
  0, // undefined code 0xD3B
  0, // undefined code 0xD3C
  16674 | (kUnicodeCategory_Lo << 27), // "MALAYALAM SIGN AVAGRAHA", unicode 0xD3D
  16679 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN AA", unicode 0xD3E
  16685 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN I", unicode 0xD3F
  16691 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN II", unicode 0xD40
  16697 | (kUnicodeCategory_Mn << 27), // "MALAYALAM VOWEL SIGN U", unicode 0xD41
  16702 | (kUnicodeCategory_Mn << 27), // "MALAYALAM VOWEL SIGN UU", unicode 0xD42
  16708 | (kUnicodeCategory_Mn << 27), // "MALAYALAM VOWEL SIGN VOCALIC R", unicode 0xD43
  16716 | (kUnicodeCategory_Mn << 27), // "MALAYALAM VOWEL SIGN VOCALIC RR", unicode 0xD44
  0, // undefined code 0xD45
  16724 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN E", unicode 0xD46
  16729 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN EE", unicode 0xD47
  16735 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN AI", unicode 0xD48
  0, // undefined code 0xD49
  16741 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN O", unicode 0xD4A
  16746 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN OO", unicode 0xD4B
  16752 | (kUnicodeCategory_Mc << 27), // "MALAYALAM VOWEL SIGN AU", unicode 0xD4C
  16758 | (kUnicodeCategory_Mn << 27), // "MALAYALAM SIGN VIRAMA", unicode 0xD4D
  0, // undefined code 0xD4E
  0, // undefined code 0xD4F
  0, // undefined code 0xD50
  0, // undefined code 0xD51
  0, // undefined code 0xD52
  0, // undefined code 0xD53
  0, // undefined code 0xD54
  0, // undefined code 0xD55
  0, // undefined code 0xD56
  16763 | (kUnicodeCategory_Mc << 27), // "MALAYALAM AU LENGTH MARK", unicode 0xD57
  0, // undefined code 0xD58
  0, // undefined code 0xD59
  0, // undefined code 0xD5A
  0, // undefined code 0xD5B
  0, // undefined code 0xD5C
  0, // undefined code 0xD5D
  0, // undefined code 0xD5E
  0, // undefined code 0xD5F
  16770 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER VOCALIC RR", unicode 0xD60
  16777 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER VOCALIC LL", unicode 0xD61
  16784 | (kUnicodeCategory_Mn << 27), // "MALAYALAM VOWEL SIGN VOCALIC L", unicode 0xD62
  16792 | (kUnicodeCategory_Mn << 27), // "MALAYALAM VOWEL SIGN VOCALIC LL", unicode 0xD63
  0, // undefined code 0xD64
  0, // undefined code 0xD65
  16800 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT ZERO", unicode 0xD66
  16805 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT ONE", unicode 0xD67
  16810 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT TWO", unicode 0xD68
  16815 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT THREE", unicode 0xD69
  16820 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT FOUR", unicode 0xD6A
  16825 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT FIVE", unicode 0xD6B
  16830 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT SIX", unicode 0xD6C
  16835 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT SEVEN", unicode 0xD6D
  16840 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT EIGHT", unicode 0xD6E
  16845 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "MALAYALAM DIGIT NINE", unicode 0xD6F
  16850 | (kUnicodeCategory_No << 27), // "MALAYALAM NUMBER TEN", unicode 0xD70
  16856 | (kUnicodeCategory_No << 27), // "MALAYALAM NUMBER ONE HUNDRED", unicode 0xD71
  16864 | (kUnicodeCategory_No << 27), // "MALAYALAM NUMBER ONE THOUSAND", unicode 0xD72
  16872 | (kUnicodeCategory_No << 27), // "MALAYALAM FRACTION ONE QUARTER", unicode 0xD73
  16880 | (kUnicodeCategory_No << 27), // "MALAYALAM FRACTION ONE HALF", unicode 0xD74
  16888 | (kUnicodeCategory_No << 27), // "MALAYALAM FRACTION THREE QUARTERS", unicode 0xD75
  0, // undefined code 0xD76
  0, // undefined code 0xD77
  0, // undefined code 0xD78
  16896 | (kUnicodeCategory_So << 27), // "MALAYALAM DATE MARK", unicode 0xD79
  16901 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHILLU NN", unicode 0xD7A
  16908 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHILLU N", unicode 0xD7B
  16915 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHILLU RR", unicode 0xD7C
  16922 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHILLU L", unicode 0xD7D
  16929 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHILLU LL", unicode 0xD7E
  16936 | (kUnicodeCategory_Lo << 27), // "MALAYALAM LETTER CHILLU K", unicode 0xD7F
  0, // undefined code 0xD80
  0, // undefined code 0xD81
  16943 | (kUnicodeCategory_Mc << 27), // "SINHALA SIGN ANUSVARAYA", unicode 0xD82
  16948 | (kUnicodeCategory_Mc << 27), // "SINHALA SIGN VISARGAYA", unicode 0xD83
  0, // undefined code 0xD84
  16954 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AYANNA", unicode 0xD85
  16959 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AAYANNA", unicode 0xD86
  16964 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AEYANNA", unicode 0xD87
  16970 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AEEYANNA", unicode 0xD88
  16976 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER IYANNA", unicode 0xD89
  16982 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER IIYANNA", unicode 0xD8A
  16987 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER UYANNA", unicode 0xD8B
  16993 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER UUYANNA", unicode 0xD8C
  16999 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER IRUYANNA", unicode 0xD8D
  17005 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER IRUUYANNA", unicode 0xD8E
  17011 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ILUYANNA", unicode 0xD8F
  17016 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ILUUYANNA", unicode 0xD90
  17022 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER EYANNA", unicode 0xD91
  17028 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER EEYANNA", unicode 0xD92
  17033 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AIYANNA", unicode 0xD93
  17038 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER OYANNA", unicode 0xD94
  17044 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER OOYANNA", unicode 0xD95
  17050 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AUYANNA", unicode 0xD96
  0, // undefined code 0xD97
  0, // undefined code 0xD98
  0, // undefined code 0xD99
  17055 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA KAYANNA", unicode 0xD9A
  17062 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA KAYANNA", unicode 0xD9B
  17069 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA GAYANNA", unicode 0xD9C
  17076 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA GAYANNA", unicode 0xD9D
  17083 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER KANTAJA NAASIKYAYA", unicode 0xD9E
  17091 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER SANYAKA GAYANNA", unicode 0xD9F
  17098 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA CAYANNA", unicode 0xDA0
  17105 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA CAYANNA", unicode 0xDA1
  17112 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA JAYANNA", unicode 0xDA2
  17119 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA JAYANNA", unicode 0xDA3
  17126 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER TAALUJA NAASIKYAYA", unicode 0xDA4
  17133 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER TAALUJA SANYOOGA NAAKSIKYAYA", unicode 0xDA5
  17144 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER SANYAKA JAYANNA", unicode 0xDA6
  17151 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA TTAYANNA", unicode 0xDA7
  17158 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA TTAYANNA", unicode 0xDA8
  17165 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA DDAYANNA", unicode 0xDA9
  17172 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA DDAYANNA", unicode 0xDAA
  17179 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MUURDHAJA NAYANNA", unicode 0xDAB
  17186 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER SANYAKA DDAYANNA", unicode 0xDAC
  17193 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA TAYANNA", unicode 0xDAD
  17200 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA TAYANNA", unicode 0xDAE
  17207 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA DAYANNA", unicode 0xDAF
  17214 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA DAYANNA", unicode 0xDB0
  17221 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER DANTAJA NAYANNA", unicode 0xDB1
  0, // undefined code 0xDB2
  17228 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER SANYAKA DAYANNA", unicode 0xDB3
  17235 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA PAYANNA", unicode 0xDB4
  17242 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA PAYANNA", unicode 0xDB5
  17249 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER ALPAPRAANA BAYANNA", unicode 0xDB6
  17256 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAHAAPRAANA BAYANNA", unicode 0xDB7
  17263 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MAYANNA", unicode 0xDB8
  17269 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER AMBA BAYANNA", unicode 0xDB9
  17277 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER YAYANNA", unicode 0xDBA
  17282 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER RAYANNA", unicode 0xDBB
  0, // undefined code 0xDBC
  17288 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER DANTAJA LAYANNA", unicode 0xDBD
  0, // undefined code 0xDBE
  0, // undefined code 0xDBF
  17295 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER VAYANNA", unicode 0xDC0
  17301 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER TAALUJA SAYANNA", unicode 0xDC1
  17308 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MUURDHAJA SAYANNA", unicode 0xDC2
  17315 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER DANTAJA SAYANNA", unicode 0xDC3
  17322 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER HAYANNA", unicode 0xDC4
  17328 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER MUURDHAJA LAYANNA", unicode 0xDC5
  17335 | (kUnicodeCategory_Lo << 27), // "SINHALA LETTER FAYANNA", unicode 0xDC6
  0, // undefined code 0xDC7
  0, // undefined code 0xDC8
  0, // undefined code 0xDC9
  17340 | (kUnicodeCategory_Mn << 27), // "SINHALA SIGN AL-LAKUNA", unicode 0xDCA
  0, // undefined code 0xDCB
  0, // undefined code 0xDCC
  0, // undefined code 0xDCD
  0, // undefined code 0xDCE
  17347 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN AELA-PILLA", unicode 0xDCF
  17355 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN KETTI AEDA-PILLA", unicode 0xDD0
  17365 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN DIGA AEDA-PILLA", unicode 0xDD1
  17375 | (kUnicodeCategory_Mn << 27), // "SINHALA VOWEL SIGN KETTI IS-PILLA", unicode 0xDD2
  17385 | (kUnicodeCategory_Mn << 27), // "SINHALA VOWEL SIGN DIGA IS-PILLA", unicode 0xDD3
  17395 | (kUnicodeCategory_Mn << 27), // "SINHALA VOWEL SIGN KETTI PAA-PILLA", unicode 0xDD4
  0, // undefined code 0xDD5
  17405 | (kUnicodeCategory_Mn << 27), // "SINHALA VOWEL SIGN DIGA PAA-PILLA", unicode 0xDD6
  0, // undefined code 0xDD7
  17415 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN GAETTA-PILLA", unicode 0xDD8
  17423 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN KOMBUVA", unicode 0xDD9
  17429 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN DIGA KOMBUVA", unicode 0xDDA
  17437 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN KOMBU DEKA", unicode 0xDDB
  17446 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN KOMBUVA HAA AELA-PILLA", unicode 0xDDC
  17458 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN KOMBUVA HAA DIGA AELA-PILLA", unicode 0xDDD
  17472 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN KOMBUVA HAA GAYANUKITTA", unicode 0xDDE
  17482 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN GAYANUKITTA", unicode 0xDDF
  0, // undefined code 0xDE0
  0, // undefined code 0xDE1
  0, // undefined code 0xDE2
  0, // undefined code 0xDE3
  0, // undefined code 0xDE4
  0, // undefined code 0xDE5
  0, // undefined code 0xDE6
  0, // undefined code 0xDE7
  0, // undefined code 0xDE8
  0, // undefined code 0xDE9
  0, // undefined code 0xDEA
  0, // undefined code 0xDEB
  0, // undefined code 0xDEC
  0, // undefined code 0xDED
  0, // undefined code 0xDEE
  0, // undefined code 0xDEF
  0, // undefined code 0xDF0
  0, // undefined code 0xDF1
  17488 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN DIGA GAETTA-PILLA", unicode 0xDF2
  17498 | (kUnicodeCategory_Mc << 27), // "SINHALA VOWEL SIGN DIGA GAYANUKITTA", unicode 0xDF3
  17506 | (kUnicodeCategory_Po << 27), // "SINHALA PUNCTUATION KUNDDALIYA", unicode 0xDF4
  0, // undefined code 0xDF5
  0, // undefined code 0xDF6
  0, // undefined code 0xDF7
  0, // undefined code 0xDF8
  0, // undefined code 0xDF9
  0, // undefined code 0xDFA
  0, // undefined code 0xDFB
  0, // undefined code 0xDFC
  0, // undefined code 0xDFD
  0, // undefined code 0xDFE
  0, // undefined code 0xDFF
} ;

static const uint32_t gNamePage14 [256] = {
  0, // undefined code 0xE00
  17512 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER KO KAI", unicode 0xE01
  17520 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER KHO KHAI", unicode 0xE02
  17529 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER KHO KHUAT", unicode 0xE03
  17538 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER KHO KHWAI", unicode 0xE04
  17546 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER KHO KHON", unicode 0xE05
  17555 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER KHO RAKHANG", unicode 0xE06
  17564 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER NGO NGU", unicode 0xE07
  17572 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER CHO CHAN", unicode 0xE08
  17580 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER CHO CHING", unicode 0xE09
  17589 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER CHO CHANG", unicode 0xE0A
  17598 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SO SO", unicode 0xE0B
  17606 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER CHO CHOE", unicode 0xE0C
  17614 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER YO YING", unicode 0xE0D
  17622 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER DO CHADA", unicode 0xE0E
  17630 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER TO PATAK", unicode 0xE0F
  17639 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER THO THAN", unicode 0xE10
  17647 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER THO NANGMONTHO", unicode 0xE11
  17656 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER THO PHUTHAO", unicode 0xE12
  17664 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER NO NEN", unicode 0xE13
  17673 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER DO DEK", unicode 0xE14
  17682 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER TO TAO", unicode 0xE15
  17691 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER THO THUNG", unicode 0xE16
  17700 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER THO THAHAN", unicode 0xE17
  17709 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER THO THONG", unicode 0xE18
  17717 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER NO NU", unicode 0xE19
  17725 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER BO BAIMAI", unicode 0xE1A
  17733 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER PO PLA", unicode 0xE1B
  17741 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER PHO PHUNG", unicode 0xE1C
  17750 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER FO FA", unicode 0xE1D
  17758 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER PHO PHAN", unicode 0xE1E
  17767 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER FO FAN", unicode 0xE1F
  17776 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER PHO SAMPHAO", unicode 0xE20
  17785 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER MO MA", unicode 0xE21
  17793 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER YO YAK", unicode 0xE22
  17801 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER RO RUA", unicode 0xE23
  17810 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER RU", unicode 0xE24
  17816 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER LO LING", unicode 0xE25
  17824 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER LU", unicode 0xE26
  17830 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER WO WAEN", unicode 0xE27
  17839 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SO SALA", unicode 0xE28
  17848 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SO RUSI", unicode 0xE29
  17856 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SO SUA", unicode 0xE2A
  17865 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER HO HIP", unicode 0xE2B
  17873 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER LO CHULA", unicode 0xE2C
  17881 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER O ANG", unicode 0xE2D
  17888 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER HO NOKHUK", unicode 0xE2E
  17897 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER PAIYANNOI", unicode 0xE2F
  17903 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA A", unicode 0xE30
  17910 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER MAI HAN-AKAT", unicode 0xE31
  17921 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA AA", unicode 0xE32
  17929 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA AM", unicode 0xE33
  17937 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER SARA I", unicode 0xE34
  17945 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER SARA II", unicode 0xE35
  17953 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER SARA UE", unicode 0xE36
  17961 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER SARA UEE", unicode 0xE37
  17970 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER SARA U", unicode 0xE38
  17977 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER SARA UU", unicode 0xE39
  17985 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER PHINTHU", unicode 0xE3A
  0, // undefined code 0xE3B
  0, // undefined code 0xE3C
  0, // undefined code 0xE3D
  0, // undefined code 0xE3E
  17992 | (kUnicodeCategory_Sc << 27), // "THAI CURRENCY SYMBOL BAHT", unicode 0xE3F
  18000 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA E", unicode 0xE40
  18007 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA AE", unicode 0xE41
  18015 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA O", unicode 0xE42
  18022 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA AI MAIMUAN", unicode 0xE43
  18032 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER SARA AI MAIMALAI", unicode 0xE44
  18043 | (kUnicodeCategory_Lo << 27), // "THAI CHARACTER LAKKHANGYAO", unicode 0xE45
  18049 | (kUnicodeCategory_Lm << 27), // "THAI CHARACTER MAIYAMOK", unicode 0xE46
  18055 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER MAITAIKHU", unicode 0xE47
  18061 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER MAI EK", unicode 0xE48
  18069 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER MAI THO", unicode 0xE49
  18077 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER MAI TRI", unicode 0xE4A
  18086 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER MAI CHATTAWA", unicode 0xE4B
  18094 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER THANTHAKHAT", unicode 0xE4C
  18100 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER NIKHAHIT", unicode 0xE4D
  18106 | (kUnicodeCategory_Mn << 27), // "THAI CHARACTER YAMAKKAN", unicode 0xE4E
  18112 | (kUnicodeCategory_Po << 27), // "THAI CHARACTER FONGMAN", unicode 0xE4F
  18119 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT ZERO", unicode 0xE50
  18124 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT ONE", unicode 0xE51
  18129 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT TWO", unicode 0xE52
  18134 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT THREE", unicode 0xE53
  18139 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT FOUR", unicode 0xE54
  18144 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT FIVE", unicode 0xE55
  18149 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT SIX", unicode 0xE56
  18154 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT SEVEN", unicode 0xE57
  18159 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT EIGHT", unicode 0xE58
  18164 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "THAI DIGIT NINE", unicode 0xE59
  18169 | (kUnicodeCategory_Po << 27), // "THAI CHARACTER ANGKHANKHU", unicode 0xE5A
  18176 | (kUnicodeCategory_Po << 27), // "THAI CHARACTER KHOMUT", unicode 0xE5B
  0, // undefined code 0xE5C
  0, // undefined code 0xE5D
  0, // undefined code 0xE5E
  0, // undefined code 0xE5F
  0, // undefined code 0xE60
  0, // undefined code 0xE61
  0, // undefined code 0xE62
  0, // undefined code 0xE63
  0, // undefined code 0xE64
  0, // undefined code 0xE65
  0, // undefined code 0xE66
  0, // undefined code 0xE67
  0, // undefined code 0xE68
  0, // undefined code 0xE69
  0, // undefined code 0xE6A
  0, // undefined code 0xE6B
  0, // undefined code 0xE6C
  0, // undefined code 0xE6D
  0, // undefined code 0xE6E
  0, // undefined code 0xE6F
  0, // undefined code 0xE70
  0, // undefined code 0xE71
  0, // undefined code 0xE72
  0, // undefined code 0xE73
  0, // undefined code 0xE74
  0, // undefined code 0xE75
  0, // undefined code 0xE76
  0, // undefined code 0xE77
  0, // undefined code 0xE78
  0, // undefined code 0xE79
  0, // undefined code 0xE7A
  0, // undefined code 0xE7B
  0, // undefined code 0xE7C
  0, // undefined code 0xE7D
  0, // undefined code 0xE7E
  0, // undefined code 0xE7F
  0, // undefined code 0xE80
  18183 | (kUnicodeCategory_Lo << 27), // "LAO LETTER KO", unicode 0xE81
  18188 | (kUnicodeCategory_Lo << 27), // "LAO LETTER KHO SUNG", unicode 0xE82
  0, // undefined code 0xE83
  18195 | (kUnicodeCategory_Lo << 27), // "LAO LETTER KHO TAM", unicode 0xE84
  0, // undefined code 0xE85
  0, // undefined code 0xE86
  18202 | (kUnicodeCategory_Lo << 27), // "LAO LETTER NGO", unicode 0xE87
  18207 | (kUnicodeCategory_Lo << 27), // "LAO LETTER CO", unicode 0xE88
  0, // undefined code 0xE89
  18212 | (kUnicodeCategory_Lo << 27), // "LAO LETTER SO TAM", unicode 0xE8A
  0, // undefined code 0xE8B
  0, // undefined code 0xE8C
  18219 | (kUnicodeCategory_Lo << 27), // "LAO LETTER NYO", unicode 0xE8D
  0, // undefined code 0xE8E
  0, // undefined code 0xE8F
  0, // undefined code 0xE90
  0, // undefined code 0xE91
  0, // undefined code 0xE92
  0, // undefined code 0xE93
  18224 | (kUnicodeCategory_Lo << 27), // "LAO LETTER DO", unicode 0xE94
  18229 | (kUnicodeCategory_Lo << 27), // "LAO LETTER TO", unicode 0xE95
  18234 | (kUnicodeCategory_Lo << 27), // "LAO LETTER THO SUNG", unicode 0xE96
  18241 | (kUnicodeCategory_Lo << 27), // "LAO LETTER THO TAM", unicode 0xE97
  0, // undefined code 0xE98
  18248 | (kUnicodeCategory_Lo << 27), // "LAO LETTER NO", unicode 0xE99
  18253 | (kUnicodeCategory_Lo << 27), // "LAO LETTER BO", unicode 0xE9A
  18258 | (kUnicodeCategory_Lo << 27), // "LAO LETTER PO", unicode 0xE9B
  18263 | (kUnicodeCategory_Lo << 27), // "LAO LETTER PHO SUNG", unicode 0xE9C
  18270 | (kUnicodeCategory_Lo << 27), // "LAO LETTER FO TAM", unicode 0xE9D
  18277 | (kUnicodeCategory_Lo << 27), // "LAO LETTER PHO TAM", unicode 0xE9E
  18284 | (kUnicodeCategory_Lo << 27), // "LAO LETTER FO SUNG", unicode 0xE9F
  0, // undefined code 0xEA0
  18291 | (kUnicodeCategory_Lo << 27), // "LAO LETTER MO", unicode 0xEA1
  18296 | (kUnicodeCategory_Lo << 27), // "LAO LETTER YO", unicode 0xEA2
  18301 | (kUnicodeCategory_Lo << 27), // "LAO LETTER LO LING", unicode 0xEA3
  0, // undefined code 0xEA4
  18308 | (kUnicodeCategory_Lo << 27), // "LAO LETTER LO LOOT", unicode 0xEA5
  0, // undefined code 0xEA6
  18316 | (kUnicodeCategory_Lo << 27), // "LAO LETTER WO", unicode 0xEA7
  0, // undefined code 0xEA8
  0, // undefined code 0xEA9
  18321 | (kUnicodeCategory_Lo << 27), // "LAO LETTER SO SUNG", unicode 0xEAA
  18328 | (kUnicodeCategory_Lo << 27), // "LAO LETTER HO SUNG", unicode 0xEAB
  0, // undefined code 0xEAC
  18335 | (kUnicodeCategory_Lo << 27), // "LAO LETTER O", unicode 0xEAD
  18339 | (kUnicodeCategory_Lo << 27), // "LAO LETTER HO TAM", unicode 0xEAE
  18346 | (kUnicodeCategory_Lo << 27), // "LAO ELLIPSIS", unicode 0xEAF
  18350 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN A", unicode 0xEB0
  18355 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN MAI KAN", unicode 0xEB1
  18363 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN AA", unicode 0xEB2
  18369 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN AM", unicode 0xEB3
  18375 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN I", unicode 0xEB4
  18381 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN II", unicode 0xEB5
  18387 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN Y", unicode 0xEB6
  18393 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN YY", unicode 0xEB7
  18399 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN U", unicode 0xEB8
  18404 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN UU", unicode 0xEB9
  0, // undefined code 0xEBA
  18410 | (kUnicodeCategory_Mn << 27), // "LAO VOWEL SIGN MAI KON", unicode 0xEBB
  18419 | (kUnicodeCategory_Mn << 27), // "LAO SEMIVOWEL SIGN LO", unicode 0xEBC
  18426 | (kUnicodeCategory_Lo << 27), // "LAO SEMIVOWEL SIGN NYO", unicode 0xEBD
  0, // undefined code 0xEBE
  0, // undefined code 0xEBF
  18433 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN E", unicode 0xEC0
  18438 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN EI", unicode 0xEC1
  18444 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN O", unicode 0xEC2
  18449 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN AY", unicode 0xEC3
  18455 | (kUnicodeCategory_Lo << 27), // "LAO VOWEL SIGN AI", unicode 0xEC4
  0, // undefined code 0xEC5
  18461 | (kUnicodeCategory_Lm << 27), // "LAO KO LA", unicode 0xEC6
  0, // undefined code 0xEC7
  18467 | (kUnicodeCategory_Mn << 27), // "LAO TONE MAI EK", unicode 0xEC8
  18475 | (kUnicodeCategory_Mn << 27), // "LAO TONE MAI THO", unicode 0xEC9
  18483 | (kUnicodeCategory_Mn << 27), // "LAO TONE MAI TI", unicode 0xECA
  18491 | (kUnicodeCategory_Mn << 27), // "LAO TONE MAI CATAWA", unicode 0xECB
  18500 | (kUnicodeCategory_Mn << 27), // "LAO CANCELLATION MARK", unicode 0xECC
  18506 | (kUnicodeCategory_Mn << 27), // "LAO NIGGAHITA", unicode 0xECD
  0, // undefined code 0xECE
  0, // undefined code 0xECF
  18511 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT ZERO", unicode 0xED0
  18516 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT ONE", unicode 0xED1
  18521 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT TWO", unicode 0xED2
  18526 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT THREE", unicode 0xED3
  18531 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT FOUR", unicode 0xED4
  18536 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT FIVE", unicode 0xED5
  18541 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT SIX", unicode 0xED6
  18546 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT SEVEN", unicode 0xED7
  18551 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT EIGHT", unicode 0xED8
  18556 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "LAO DIGIT NINE", unicode 0xED9
  0, // undefined code 0xEDA
  0, // undefined code 0xEDB
  18561 | (kUnicodeCategory_Lo << 27), // "LAO HO NO", unicode 0xEDC
  18567 | (kUnicodeCategory_Lo << 27), // "LAO HO MO", unicode 0xEDD
  0, // undefined code 0xEDE
  0, // undefined code 0xEDF
  0, // undefined code 0xEE0
  0, // undefined code 0xEE1
  0, // undefined code 0xEE2
  0, // undefined code 0xEE3
  0, // undefined code 0xEE4
  0, // undefined code 0xEE5
  0, // undefined code 0xEE6
  0, // undefined code 0xEE7
  0, // undefined code 0xEE8
  0, // undefined code 0xEE9
  0, // undefined code 0xEEA
  0, // undefined code 0xEEB
  0, // undefined code 0xEEC
  0, // undefined code 0xEED
  0, // undefined code 0xEEE
  0, // undefined code 0xEEF
  0, // undefined code 0xEF0
  0, // undefined code 0xEF1
  0, // undefined code 0xEF2
  0, // undefined code 0xEF3
  0, // undefined code 0xEF4
  0, // undefined code 0xEF5
  0, // undefined code 0xEF6
  0, // undefined code 0xEF7
  0, // undefined code 0xEF8
  0, // undefined code 0xEF9
  0, // undefined code 0xEFA
  0, // undefined code 0xEFB
  0, // undefined code 0xEFC
  0, // undefined code 0xEFD
  0, // undefined code 0xEFE
  0, // undefined code 0xEFF
} ;

static const uint32_t gNamePage15 [256] = {
  18573 | (kUnicodeCategory_Lo << 27), // "TIBETAN SYLLABLE OM", unicode 0xF00
  18578 | (kUnicodeCategory_So << 27), // "TIBETAN MARK GTER YIG MGO TRUNCATED A", unicode 0xF01
  18591 | (kUnicodeCategory_So << 27), // "TIBETAN MARK GTER YIG MGO -UM RNAM BCAD MA", unicode 0xF02
  18610 | (kUnicodeCategory_So << 27), // "TIBETAN MARK GTER YIG MGO -UM GTER TSHEG MA", unicode 0xF03
  18629 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK INITIAL YIG MGO MDUN MA", unicode 0xF04
  18642 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK CLOSING YIG MGO SGAB MA", unicode 0xF05
  18655 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK CARET YIG MGO PHUR SHAD MA", unicode 0xF06
  18670 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK YIG MGO TSHEG SHAD MA", unicode 0xF07
  18683 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK SBRUL SHAD", unicode 0xF08
  18691 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK BSKUR YIG MGO", unicode 0xF09
  18701 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK BKA- SHOG YIG MGO", unicode 0xF0A
  18715 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK INTERSYLLABIC TSHEG", unicode 0xF0B
  18723 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK DELIMITER TSHEG BSTAR", unicode 0xF0C
  18733 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK SHAD", unicode 0xF0D
  18738 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK NYIS SHAD", unicode 0xF0E
  18745 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK TSHEG SHAD", unicode 0xF0F
  18752 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK NYIS TSHEG SHAD", unicode 0xF10
  18761 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK RIN CHEN SPUNGS SHAD", unicode 0xF11
  18773 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK RGYA GRAM SHAD", unicode 0xF12
  18782 | (kUnicodeCategory_So << 27), // "TIBETAN MARK CARET -DZUD RTAGS ME LONG CAN", unicode 0xF13
  18799 | (kUnicodeCategory_So << 27), // "TIBETAN MARK GTER TSHEG", unicode 0xF14
  18806 | (kUnicodeCategory_So << 27), // "TIBETAN LOGOTYPE SIGN CHAD RTAGS", unicode 0xF15
  18816 | (kUnicodeCategory_So << 27), // "TIBETAN LOGOTYPE SIGN LHAG RTAGS", unicode 0xF16
  18826 | (kUnicodeCategory_So << 27), // "TIBETAN ASTROLOGICAL SIGN SGRA GCAN -CHAR RTAGS", unicode 0xF17
  18842 | (kUnicodeCategory_Mn << 27), // "TIBETAN ASTROLOGICAL SIGN -KHYUD PA", unicode 0xF18
  18854 | (kUnicodeCategory_Mn << 27), // "TIBETAN ASTROLOGICAL SIGN SDONG TSHUGS", unicode 0xF19
  18865 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL DKAR GCIG", unicode 0xF1A
  18874 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL DKAR GNYIS", unicode 0xF1B
  18883 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL DKAR GSUM", unicode 0xF1C
  18892 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL NAG GCIG", unicode 0xF1D
  18901 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL NAG GNYIS", unicode 0xF1E
  18910 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL DKAR RDEL NAG", unicode 0xF1F
  18921 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT ZERO", unicode 0xF20
  18926 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT ONE", unicode 0xF21
  18931 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT TWO", unicode 0xF22
  18936 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT THREE", unicode 0xF23
  18941 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT FOUR", unicode 0xF24
  18946 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT FIVE", unicode 0xF25
  18951 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT SIX", unicode 0xF26
  18956 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT SEVEN", unicode 0xF27
  18961 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT EIGHT", unicode 0xF28
  18966 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "TIBETAN DIGIT NINE", unicode 0xF29
  18971 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF ONE", unicode 0xF2A
  18978 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF TWO", unicode 0xF2B
  18985 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF THREE", unicode 0xF2C
  18992 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF FOUR", unicode 0xF2D
  18999 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF FIVE", unicode 0xF2E
  19006 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF SIX", unicode 0xF2F
  19013 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF SEVEN", unicode 0xF30
  19020 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF EIGHT", unicode 0xF31
  19027 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF NINE", unicode 0xF32
  19034 | (kUnicodeCategory_No << 27), // "TIBETAN DIGIT HALF ZERO", unicode 0xF33
  19041 | (kUnicodeCategory_So << 27), // "TIBETAN MARK BSDUS RTAGS", unicode 0xF34
  19049 | (kUnicodeCategory_Mn << 27), // "TIBETAN MARK NGAS BZUNG NYI ZLA", unicode 0xF35
  19060 | (kUnicodeCategory_So << 27), // "TIBETAN MARK CARET -DZUD RTAGS BZHI MIG CAN", unicode 0xF36
  19077 | (kUnicodeCategory_Mn << 27), // "TIBETAN MARK NGAS BZUNG SGOR RTAGS", unicode 0xF37
  19088 | (kUnicodeCategory_So << 27), // "TIBETAN MARK CHE MGO", unicode 0xF38
  19095 | (kUnicodeCategory_Mn << 27), // "TIBETAN MARK TSA -PHRU", unicode 0xF39
  19105 | (kUnicodeCategory_Ps << 27), // "TIBETAN MARK GUG RTAGS GYON", unicode 0xF3A
  19114 | (kUnicodeCategory_Pe << 27), // "TIBETAN MARK GUG RTAGS GYAS", unicode 0xF3B
  19123 | (kUnicodeCategory_Ps << 27), // "TIBETAN MARK ANG KHANG GYON", unicode 0xF3C
  19132 | (kUnicodeCategory_Pe << 27), // "TIBETAN MARK ANG KHANG GYAS", unicode 0xF3D
  19141 | (kUnicodeCategory_Mc << 27), // "TIBETAN SIGN YAR TSHES", unicode 0xF3E
  19148 | (kUnicodeCategory_Mc << 27), // "TIBETAN SIGN MAR TSHES", unicode 0xF3F
  19155 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER KA", unicode 0xF40
  19160 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER KHA", unicode 0xF41
  19165 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER GA", unicode 0xF42
  19170 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER GHA", unicode 0xF43
  19175 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER NGA", unicode 0xF44
  19180 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER CA", unicode 0xF45
  19185 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER CHA", unicode 0xF46
  19190 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER JA", unicode 0xF47
  0, // undefined code 0xF48
  19195 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER NYA", unicode 0xF49
  19200 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER TTA", unicode 0xF4A
  19205 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER TTHA", unicode 0xF4B
  19210 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER DDA", unicode 0xF4C
  19215 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER DDHA", unicode 0xF4D
  19220 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER NNA", unicode 0xF4E
  19225 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER TA", unicode 0xF4F
  19230 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER THA", unicode 0xF50
  19235 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER DA", unicode 0xF51
  19240 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER DHA", unicode 0xF52
  19245 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER NA", unicode 0xF53
  19250 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER PA", unicode 0xF54
  19255 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER PHA", unicode 0xF55
  19260 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER BA", unicode 0xF56
  19265 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER BHA", unicode 0xF57
  19270 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER MA", unicode 0xF58
  19275 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER TSA", unicode 0xF59
  19280 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER TSHA", unicode 0xF5A
  19285 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER DZA", unicode 0xF5B
  19290 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER DZHA", unicode 0xF5C
  19295 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER WA", unicode 0xF5D
  19300 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER ZHA", unicode 0xF5E
  19305 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER ZA", unicode 0xF5F
  19310 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER -A", unicode 0xF60
  19316 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER YA", unicode 0xF61
  19321 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER RA", unicode 0xF62
  19326 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER LA", unicode 0xF63
  19331 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER SHA", unicode 0xF64
  19336 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER SSA", unicode 0xF65
  19341 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER SA", unicode 0xF66
  19346 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER HA", unicode 0xF67
  19351 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER A", unicode 0xF68
  19355 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER KSSA", unicode 0xF69
  19360 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER FIXED-FORM RA", unicode 0xF6A
  19368 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER KKA", unicode 0xF6B
  19373 | (kUnicodeCategory_Lo << 27), // "TIBETAN LETTER RRA", unicode 0xF6C
  0, // undefined code 0xF6D
  0, // undefined code 0xF6E
  0, // undefined code 0xF6F
  0, // undefined code 0xF70
  19378 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN AA", unicode 0xF71
  19384 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN I", unicode 0xF72
  19390 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN II", unicode 0xF73
  19396 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN U", unicode 0xF74
  19401 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN UU", unicode 0xF75
  19407 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN VOCALIC R", unicode 0xF76
  19415 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN VOCALIC RR", unicode 0xF77
  19423 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN VOCALIC L", unicode 0xF78
  19431 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN VOCALIC LL", unicode 0xF79
  19439 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN E", unicode 0xF7A
  19444 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN EE", unicode 0xF7B
  19450 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN O", unicode 0xF7C
  19455 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN OO", unicode 0xF7D
  19461 | (kUnicodeCategory_Mn << 27), // "TIBETAN SIGN RJES SU NGA RO", unicode 0xF7E
  19473 | (kUnicodeCategory_Mc << 27), // "TIBETAN SIGN RNAM BCAD", unicode 0xF7F
  19480 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN REVERSED I", unicode 0xF80
  19488 | (kUnicodeCategory_Mn << 27), // "TIBETAN VOWEL SIGN REVERSED II", unicode 0xF81
  19496 | (kUnicodeCategory_Mn << 27), // "TIBETAN SIGN NYI ZLA NAA DA", unicode 0xF82
  19507 | (kUnicodeCategory_Mn << 27), // "TIBETAN SIGN SNA LDAN", unicode 0xF83
  19515 | (kUnicodeCategory_Mn << 27), // "TIBETAN MARK HALANTA", unicode 0xF84
  19521 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK PALUTA", unicode 0xF85
  19527 | (kUnicodeCategory_Mn << 27), // "TIBETAN SIGN LCI RTAGS", unicode 0xF86
  19535 | (kUnicodeCategory_Mn << 27), // "TIBETAN SIGN YANG RTAGS", unicode 0xF87
  19542 | (kUnicodeCategory_Lo << 27), // "TIBETAN SIGN LCE TSA CAN", unicode 0xF88
  19551 | (kUnicodeCategory_Lo << 27), // "TIBETAN SIGN MCHU CAN", unicode 0xF89
  19559 | (kUnicodeCategory_Lo << 27), // "TIBETAN SIGN GRU CAN RGYINGS", unicode 0xF8A
  19568 | (kUnicodeCategory_Lo << 27), // "TIBETAN SIGN GRU MED RGYINGS", unicode 0xF8B
  0, // undefined code 0xF8C
  0, // undefined code 0xF8D
  0, // undefined code 0xF8E
  0, // undefined code 0xF8F
  19578 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER KA", unicode 0xF90
  19585 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER KHA", unicode 0xF91
  19592 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER GA", unicode 0xF92
  19599 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER GHA", unicode 0xF93
  19606 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER NGA", unicode 0xF94
  19613 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER CA", unicode 0xF95
  19620 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER CHA", unicode 0xF96
  19627 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER JA", unicode 0xF97
  0, // undefined code 0xF98
  19634 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER NYA", unicode 0xF99
  19641 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER TTA", unicode 0xF9A
  19648 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER TTHA", unicode 0xF9B
  19655 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER DDA", unicode 0xF9C
  19662 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER DDHA", unicode 0xF9D
  19669 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER NNA", unicode 0xF9E
  19676 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER TA", unicode 0xF9F
  19683 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER THA", unicode 0xFA0
  19690 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER DA", unicode 0xFA1
  19697 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER DHA", unicode 0xFA2
  19704 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER NA", unicode 0xFA3
  19711 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER PA", unicode 0xFA4
  19718 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER PHA", unicode 0xFA5
  19725 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER BA", unicode 0xFA6
  19732 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER BHA", unicode 0xFA7
  19739 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER MA", unicode 0xFA8
  19746 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER TSA", unicode 0xFA9
  19753 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER TSHA", unicode 0xFAA
  19760 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER DZA", unicode 0xFAB
  19767 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER DZHA", unicode 0xFAC
  19774 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER WA", unicode 0xFAD
  19781 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER ZHA", unicode 0xFAE
  19788 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER ZA", unicode 0xFAF
  19795 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER -A", unicode 0xFB0
  19803 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER YA", unicode 0xFB1
  19810 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER RA", unicode 0xFB2
  19817 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER LA", unicode 0xFB3
  19824 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER SHA", unicode 0xFB4
  19831 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER SSA", unicode 0xFB5
  19838 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER SA", unicode 0xFB6
  19845 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER HA", unicode 0xFB7
  19852 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER A", unicode 0xFB8
  19858 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER KSSA", unicode 0xFB9
  19865 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER FIXED-FORM WA", unicode 0xFBA
  19875 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER FIXED-FORM YA", unicode 0xFBB
  19885 | (kUnicodeCategory_Mn << 27), // "TIBETAN SUBJOINED LETTER FIXED-FORM RA", unicode 0xFBC
  0, // undefined code 0xFBD
  19895 | (kUnicodeCategory_So << 27), // "TIBETAN KU RU KHA", unicode 0xFBE
  19903 | (kUnicodeCategory_So << 27), // "TIBETAN KU RU KHA BZHI MIG CAN", unicode 0xFBF
  19917 | (kUnicodeCategory_So << 27), // "TIBETAN CANTILLATION SIGN HEAVY BEAT", unicode 0xFC0
  19926 | (kUnicodeCategory_So << 27), // "TIBETAN CANTILLATION SIGN LIGHT BEAT", unicode 0xFC1
  19935 | (kUnicodeCategory_So << 27), // "TIBETAN CANTILLATION SIGN CANG TE-U", unicode 0xFC2
  19945 | (kUnicodeCategory_So << 27), // "TIBETAN CANTILLATION SIGN SBUB -CHAL", unicode 0xFC3
  19958 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL DRIL BU", unicode 0xFC4
  19966 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL RDO RJE", unicode 0xFC5
  19973 | (kUnicodeCategory_Mn << 27), // "TIBETAN SYMBOL PADMA GDAN", unicode 0xFC6
  19982 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL RDO RJE RGYA GRAM", unicode 0xFC7
  19993 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL PHUR PA", unicode 0xFC8
  20000 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL NOR BU", unicode 0xFC9
  20007 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL NOR BU NYIS -KHYIL", unicode 0xFCA
  20020 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL NOR BU GSUM -KHYIL", unicode 0xFCB
  20033 | (kUnicodeCategory_So << 27), // "TIBETAN SYMBOL NOR BU BZHI -KHYIL", unicode 0xFCC
  0, // undefined code 0xFCD
  20046 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL NAG RDEL DKAR", unicode 0xFCE
  20057 | (kUnicodeCategory_So << 27), // "TIBETAN SIGN RDEL NAG GSUM", unicode 0xFCF
  20066 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK BSKA- SHOG GI MGO RGYAN", unicode 0xFD0
  20082 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK MNYAM YIG GI MGO RGYAN", unicode 0xFD1
  20096 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK NYIS TSHEG", unicode 0xFD2
  20103 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK INITIAL BRDA RNYING YIG MGO MDUN MA", unicode 0xFD3
  20120 | (kUnicodeCategory_Po << 27), // "TIBETAN MARK CLOSING BRDA RNYING YIG MGO SGAB MA", unicode 0xFD4
  0, // undefined code 0xFD5
  0, // undefined code 0xFD6
  0, // undefined code 0xFD7
  0, // undefined code 0xFD8
  0, // undefined code 0xFD9
  0, // undefined code 0xFDA
  0, // undefined code 0xFDB
  0, // undefined code 0xFDC
  0, // undefined code 0xFDD
  0, // undefined code 0xFDE
  0, // undefined code 0xFDF
  0, // undefined code 0xFE0
  0, // undefined code 0xFE1
  0, // undefined code 0xFE2
  0, // undefined code 0xFE3
  0, // undefined code 0xFE4
  0, // undefined code 0xFE5
  0, // undefined code 0xFE6
  0, // undefined code 0xFE7
  0, // undefined code 0xFE8
  0, // undefined code 0xFE9
  0, // undefined code 0xFEA
  0, // undefined code 0xFEB
  0, // undefined code 0xFEC
  0, // undefined code 0xFED
  0, // undefined code 0xFEE
  0, // undefined code 0xFEF
  0, // undefined code 0xFF0
  0, // undefined code 0xFF1
  0, // undefined code 0xFF2
  0, // undefined code 0xFF3
  0, // undefined code 0xFF4
  0, // undefined code 0xFF5
  0, // undefined code 0xFF6
  0, // undefined code 0xFF7
  0, // undefined code 0xFF8
  0, // undefined code 0xFF9
  0, // undefined code 0xFFA
  0, // undefined code 0xFFB
  0, // undefined code 0xFFC
  0, // undefined code 0xFFD
  0, // undefined code 0xFFE
  0, // undefined code 0xFFF
} ;

static const uint32_t gNamePage16 [256] = {
  20137 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER KA", unicode 0x1000
  20142 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER KHA", unicode 0x1001
  20147 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER GA", unicode 0x1002
  20152 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER GHA", unicode 0x1003
  20157 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER NGA", unicode 0x1004
  20162 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER CA", unicode 0x1005
  20167 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER CHA", unicode 0x1006
  20172 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER JA", unicode 0x1007
  20177 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER JHA", unicode 0x1008
  20182 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER NYA", unicode 0x1009
  20187 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER NNYA", unicode 0x100A
  20192 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER TTA", unicode 0x100B
  20197 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER TTHA", unicode 0x100C
  20202 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER DDA", unicode 0x100D
  20207 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER DDHA", unicode 0x100E
  20212 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER NNA", unicode 0x100F
  20217 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER TA", unicode 0x1010
  20222 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER THA", unicode 0x1011
  20227 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER DA", unicode 0x1012
  20232 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER DHA", unicode 0x1013
  20237 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER NA", unicode 0x1014
  20242 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER PA", unicode 0x1015
  20247 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER PHA", unicode 0x1016
  20252 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER BA", unicode 0x1017
  20257 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER BHA", unicode 0x1018
  20262 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER MA", unicode 0x1019
  20267 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER YA", unicode 0x101A
  20272 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER RA", unicode 0x101B
  20277 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER LA", unicode 0x101C
  20282 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER WA", unicode 0x101D
  20287 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SA", unicode 0x101E
  20292 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER HA", unicode 0x101F
  20297 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER LLA", unicode 0x1020
  20302 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER A", unicode 0x1021
  20306 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN A", unicode 0x1022
  20312 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER I", unicode 0x1023
  20317 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER II", unicode 0x1024
  20322 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER U", unicode 0x1025
  20326 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER UU", unicode 0x1026
  20331 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER E", unicode 0x1027
  20335 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER MON E", unicode 0x1028
  20341 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER O", unicode 0x1029
  20345 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER AU", unicode 0x102A
  20350 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN TALL AA", unicode 0x102B
  20358 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN AA", unicode 0x102C
  20364 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN I", unicode 0x102D
  20370 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN II", unicode 0x102E
  20376 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN U", unicode 0x102F
  20381 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN UU", unicode 0x1030
  20387 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN E", unicode 0x1031
  20392 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN AI", unicode 0x1032
  20398 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN MON II", unicode 0x1033
  20406 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN MON O", unicode 0x1034
  20413 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN E ABOVE", unicode 0x1035
  20419 | (kUnicodeCategory_Mn << 27), // "MYANMAR SIGN ANUSVARA", unicode 0x1036
  20424 | (kUnicodeCategory_Mn << 27), // "MYANMAR SIGN DOT BELOW", unicode 0x1037
  20429 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN VISARGA", unicode 0x1038
  20434 | (kUnicodeCategory_Mn << 27), // "MYANMAR SIGN VIRAMA", unicode 0x1039
  20439 | (kUnicodeCategory_Mn << 27), // "MYANMAR SIGN ASAT", unicode 0x103A
  20445 | (kUnicodeCategory_Mc << 27), // "MYANMAR CONSONANT SIGN MEDIAL YA", unicode 0x103B
  20454 | (kUnicodeCategory_Mc << 27), // "MYANMAR CONSONANT SIGN MEDIAL RA", unicode 0x103C
  20463 | (kUnicodeCategory_Mn << 27), // "MYANMAR CONSONANT SIGN MEDIAL WA", unicode 0x103D
  20472 | (kUnicodeCategory_Mn << 27), // "MYANMAR CONSONANT SIGN MEDIAL HA", unicode 0x103E
  20481 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER GREAT SA", unicode 0x103F
  20488 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT ZERO", unicode 0x1040
  20493 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT ONE", unicode 0x1041
  20498 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT TWO", unicode 0x1042
  20503 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT THREE", unicode 0x1043
  20508 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT FOUR", unicode 0x1044
  20513 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT FIVE", unicode 0x1045
  20518 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT SIX", unicode 0x1046
  20523 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT SEVEN", unicode 0x1047
  20528 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT EIGHT", unicode 0x1048
  20533 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR DIGIT NINE", unicode 0x1049
  20538 | (kUnicodeCategory_Po << 27), // "MYANMAR SIGN LITTLE SECTION", unicode 0x104A
  20545 | (kUnicodeCategory_Po << 27), // "MYANMAR SIGN SECTION", unicode 0x104B
  20550 | (kUnicodeCategory_Po << 27), // "MYANMAR SYMBOL LOCATIVE", unicode 0x104C
  20555 | (kUnicodeCategory_Po << 27), // "MYANMAR SYMBOL COMPLETED", unicode 0x104D
  20560 | (kUnicodeCategory_Po << 27), // "MYANMAR SYMBOL AFOREMENTIONED", unicode 0x104E
  20565 | (kUnicodeCategory_Po << 27), // "MYANMAR SYMBOL GENITIVE", unicode 0x104F
  20571 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHA", unicode 0x1050
  20576 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SSA", unicode 0x1051
  20581 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER VOCALIC R", unicode 0x1052
  20588 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER VOCALIC RR", unicode 0x1053
  20595 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER VOCALIC L", unicode 0x1054
  20602 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER VOCALIC LL", unicode 0x1055
  20609 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN VOCALIC R", unicode 0x1056
  20617 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN VOCALIC RR", unicode 0x1057
  20625 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN VOCALIC L", unicode 0x1058
  20633 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN VOCALIC LL", unicode 0x1059
  20641 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER MON NGA", unicode 0x105A
  20648 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER MON JHA", unicode 0x105B
  20655 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER MON BBA", unicode 0x105C
  20662 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER MON BBE", unicode 0x105D
  20669 | (kUnicodeCategory_Mn << 27), // "MYANMAR CONSONANT SIGN MON MEDIAL NA", unicode 0x105E
  20680 | (kUnicodeCategory_Mn << 27), // "MYANMAR CONSONANT SIGN MON MEDIAL MA", unicode 0x105F
  20691 | (kUnicodeCategory_Mn << 27), // "MYANMAR CONSONANT SIGN MON MEDIAL LA", unicode 0x1060
  20702 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SGAW KAREN SHA", unicode 0x1061
  20711 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN SGAW KAREN EU", unicode 0x1062
  20721 | (kUnicodeCategory_Mc << 27), // "MYANMAR TONE MARK SGAW KAREN HATHI", unicode 0x1063
  20733 | (kUnicodeCategory_Mc << 27), // "MYANMAR TONE MARK SGAW KAREN KE PHO", unicode 0x1064
  20746 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER WESTERN PWO KAREN THA", unicode 0x1065
  20757 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER WESTERN PWO KAREN PWA", unicode 0x1066
  20768 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN WESTERN PWO KAREN EU", unicode 0x1067
  20780 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN WESTERN PWO KAREN UE", unicode 0x1068
  20792 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN WESTERN PWO KAREN TONE-1", unicode 0x1069
  20805 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN WESTERN PWO KAREN TONE-2", unicode 0x106A
  20818 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN WESTERN PWO KAREN TONE-3", unicode 0x106B
  20831 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN WESTERN PWO KAREN TONE-4", unicode 0x106C
  20844 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN WESTERN PWO KAREN TONE-5", unicode 0x106D
  20857 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER EASTERN PWO KAREN NNA", unicode 0x106E
  20868 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER EASTERN PWO KAREN YWA", unicode 0x106F
  20879 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER EASTERN PWO KAREN GHWA", unicode 0x1070
  20891 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN GEBA KAREN I", unicode 0x1071
  20901 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN KAYAH OE", unicode 0x1072
  20909 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN KAYAH U", unicode 0x1073
  20916 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN KAYAH EE", unicode 0x1074
  20924 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN KA", unicode 0x1075
  20931 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN KHA", unicode 0x1076
  20938 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN GA", unicode 0x1077
  20945 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN CA", unicode 0x1078
  20952 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN ZA", unicode 0x1079
  20959 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN NYA", unicode 0x107A
  20966 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN DA", unicode 0x107B
  20973 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN NA", unicode 0x107C
  20980 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN PHA", unicode 0x107D
  20987 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN FA", unicode 0x107E
  20994 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN BA", unicode 0x107F
  21001 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN THA", unicode 0x1080
  21008 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER SHAN HA", unicode 0x1081
  21015 | (kUnicodeCategory_Mn << 27), // "MYANMAR CONSONANT SIGN SHAN MEDIAL WA", unicode 0x1082
  21026 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN SHAN AA", unicode 0x1083
  21034 | (kUnicodeCategory_Mc << 27), // "MYANMAR VOWEL SIGN SHAN E", unicode 0x1084
  21041 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN SHAN E ABOVE", unicode 0x1085
  21049 | (kUnicodeCategory_Mn << 27), // "MYANMAR VOWEL SIGN SHAN FINAL Y", unicode 0x1086
  21058 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN SHAN TONE-2", unicode 0x1087
  21067 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN SHAN TONE-3", unicode 0x1088
  21076 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN SHAN TONE-5", unicode 0x1089
  21085 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN SHAN TONE-6", unicode 0x108A
  21094 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN SHAN COUNCIL TONE-2", unicode 0x108B
  21105 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN SHAN COUNCIL TONE-3", unicode 0x108C
  21116 | (kUnicodeCategory_Mn << 27), // "MYANMAR SIGN SHAN COUNCIL EMPHATIC TONE", unicode 0x108D
  21128 | (kUnicodeCategory_Lo << 27), // "MYANMAR LETTER RUMAI PALAUNG FA", unicode 0x108E
  21137 | (kUnicodeCategory_Mc << 27), // "MYANMAR SIGN RUMAI PALAUNG TONE-5", unicode 0x108F
  21148 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT ZERO", unicode 0x1090
  21155 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT ONE", unicode 0x1091
  21162 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT TWO", unicode 0x1092
  21169 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT THREE", unicode 0x1093
  21176 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT FOUR", unicode 0x1094
  21183 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT FIVE", unicode 0x1095
  21190 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT SIX", unicode 0x1096
  21197 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT SEVEN", unicode 0x1097
  21204 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT EIGHT", unicode 0x1098
  21211 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "MYANMAR SHAN DIGIT NINE", unicode 0x1099
  0, // undefined code 0x109A
  0, // undefined code 0x109B
  0, // undefined code 0x109C
  0, // undefined code 0x109D
  21218 | (kUnicodeCategory_So << 27), // "MYANMAR SYMBOL SHAN ONE", unicode 0x109E
  21225 | (kUnicodeCategory_So << 27), // "MYANMAR SYMBOL SHAN EXCLAMATION", unicode 0x109F
  21232 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER AN", unicode 0x10A0
  21238 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER BAN", unicode 0x10A1
  21244 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER GAN", unicode 0x10A2
  21250 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER DON", unicode 0x10A3
  21256 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER EN", unicode 0x10A4
  21262 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER VIN", unicode 0x10A5
  21268 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER ZEN", unicode 0x10A6
  21274 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER TAN", unicode 0x10A7
  21280 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER IN", unicode 0x10A8
  21286 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER KAN", unicode 0x10A9
  21292 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER LAS", unicode 0x10AA
  21298 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER MAN", unicode 0x10AB
  21304 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER NAR", unicode 0x10AC
  21310 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER ON", unicode 0x10AD
  21316 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER PAR", unicode 0x10AE
  21322 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER ZHAR", unicode 0x10AF
  21328 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER RAE", unicode 0x10B0
  21334 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER SAN", unicode 0x10B1
  21340 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER TAR", unicode 0x10B2
  21346 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER UN", unicode 0x10B3
  21352 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER PHAR", unicode 0x10B4
  21358 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER KHAR", unicode 0x10B5
  21364 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER GHAN", unicode 0x10B6
  21370 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER QAR", unicode 0x10B7
  21376 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER SHIN", unicode 0x10B8
  21382 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER CHIN", unicode 0x10B9
  21388 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER CAN", unicode 0x10BA
  21394 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER JIL", unicode 0x10BB
  21400 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER CIL", unicode 0x10BC
  21406 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER CHAR", unicode 0x10BD
  21412 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER XAN", unicode 0x10BE
  21418 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER JHAN", unicode 0x10BF
  21424 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER HAE", unicode 0x10C0
  21430 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER HE", unicode 0x10C1
  21436 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER HIE", unicode 0x10C2
  21442 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER WE", unicode 0x10C3
  21448 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER HAR", unicode 0x10C4
  21454 | (kUnicodeCategory_Lu << 27), // "GEORGIAN CAPITAL LETTER HOE", unicode 0x10C5
  0, // undefined code 0x10C6
  0, // undefined code 0x10C7
  0, // undefined code 0x10C8
  0, // undefined code 0x10C9
  0, // undefined code 0x10CA
  0, // undefined code 0x10CB
  0, // undefined code 0x10CC
  0, // undefined code 0x10CD
  0, // undefined code 0x10CE
  0, // undefined code 0x10CF
  21460 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER AN", unicode 0x10D0
  21465 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER BAN", unicode 0x10D1
  21470 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER GAN", unicode 0x10D2
  21475 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER DON", unicode 0x10D3
  21480 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER EN", unicode 0x10D4
  21485 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER VIN", unicode 0x10D5
  21490 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER ZEN", unicode 0x10D6
  21495 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER TAN", unicode 0x10D7
  21500 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER IN", unicode 0x10D8
  21505 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER KAN", unicode 0x10D9
  21510 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER LAS", unicode 0x10DA
  21515 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER MAN", unicode 0x10DB
  21520 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER NAR", unicode 0x10DC
  21525 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER ON", unicode 0x10DD
  21530 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER PAR", unicode 0x10DE
  21535 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER ZHAR", unicode 0x10DF
  21540 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER RAE", unicode 0x10E0
  21545 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER SAN", unicode 0x10E1
  21550 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER TAR", unicode 0x10E2
  21555 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER UN", unicode 0x10E3
  21560 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER PHAR", unicode 0x10E4
  21565 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER KHAR", unicode 0x10E5
  21570 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER GHAN", unicode 0x10E6
  21575 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER QAR", unicode 0x10E7
  21580 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER SHIN", unicode 0x10E8
  21585 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER CHIN", unicode 0x10E9
  21590 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER CAN", unicode 0x10EA
  21595 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER JIL", unicode 0x10EB
  21600 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER CIL", unicode 0x10EC
  21605 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER CHAR", unicode 0x10ED
  21610 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER XAN", unicode 0x10EE
  21615 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER JHAN", unicode 0x10EF
  21620 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER HAE", unicode 0x10F0
  21625 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER HE", unicode 0x10F1
  21630 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER HIE", unicode 0x10F2
  21635 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER WE", unicode 0x10F3
  21640 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER HAR", unicode 0x10F4
  21645 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER HOE", unicode 0x10F5
  21650 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER FI", unicode 0x10F6
  21655 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER YN", unicode 0x10F7
  21660 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER ELIFI", unicode 0x10F8
  21666 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER TURNED GAN", unicode 0x10F9
  21673 | (kUnicodeCategory_Lo << 27), // "GEORGIAN LETTER AIN", unicode 0x10FA
  21678 | (kUnicodeCategory_Po << 27), // "GEORGIAN PARAGRAPH SEPARATOR", unicode 0x10FB
  21684 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER GEORGIAN NAR", unicode 0x10FC
  0, // undefined code 0x10FD
  0, // undefined code 0x10FE
  0, // undefined code 0x10FF
} ;

static const uint32_t gNamePage17 [256] = {
  21690 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KIYEOK", unicode 0x1100
  21695 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGKIYEOK", unicode 0x1101
  21700 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG NIEUN", unicode 0x1102
  21705 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG TIKEUT", unicode 0x1103
  21710 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGTIKEUT", unicode 0x1104
  21715 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG RIEUL", unicode 0x1105
  21720 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG MIEUM", unicode 0x1106
  21725 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP", unicode 0x1107
  21730 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGPIEUP", unicode 0x1108
  21735 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS", unicode 0x1109
  21740 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGSIOS", unicode 0x110A
  21745 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG", unicode 0x110B
  21750 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CIEUC", unicode 0x110C
  21755 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGCIEUC", unicode 0x110D
  21760 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHIEUCH", unicode 0x110E
  21765 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KHIEUKH", unicode 0x110F
  21770 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG THIEUTH", unicode 0x1110
  21775 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PHIEUPH", unicode 0x1111
  21780 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG HIEUH", unicode 0x1112
  21785 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG NIEUN-KIYEOK", unicode 0x1113
  21792 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGNIEUN", unicode 0x1114
  21797 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG NIEUN-TIKEUT", unicode 0x1115
  21804 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG NIEUN-PIEUP", unicode 0x1116
  21811 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG TIKEUT-KIYEOK", unicode 0x1117
  21818 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG RIEUL-NIEUN", unicode 0x1118
  21825 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGRIEUL", unicode 0x1119
  21830 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG RIEUL-HIEUH", unicode 0x111A
  21837 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KAPYEOUNRIEUL", unicode 0x111B
  21842 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG MIEUM-PIEUP", unicode 0x111C
  21849 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KAPYEOUNMIEUM", unicode 0x111D
  21854 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-KIYEOK", unicode 0x111E
  21861 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-NIEUN", unicode 0x111F
  21868 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-TIKEUT", unicode 0x1120
  21875 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-SIOS", unicode 0x1121
  21882 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-SIOS-KIYEOK", unicode 0x1122
  21891 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-SIOS-TIKEUT", unicode 0x1123
  21900 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-SIOS-PIEUP", unicode 0x1124
  21909 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-SSANGSIOS", unicode 0x1125
  21916 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-SIOS-CIEUC", unicode 0x1126
  21925 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-CIEUC", unicode 0x1127
  21932 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-CHIEUCH", unicode 0x1128
  21939 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-THIEUTH", unicode 0x1129
  21946 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PIEUP-PHIEUPH", unicode 0x112A
  21953 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KAPYEOUNPIEUP", unicode 0x112B
  21958 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KAPYEOUNSSANGPIEUP", unicode 0x112C
  21963 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-KIYEOK", unicode 0x112D
  21970 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-NIEUN", unicode 0x112E
  21977 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-TIKEUT", unicode 0x112F
  21984 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-RIEUL", unicode 0x1130
  21991 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-MIEUM", unicode 0x1131
  21998 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-PIEUP", unicode 0x1132
  22005 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-PIEUP-KIYEOK", unicode 0x1133
  22014 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-SSANGSIOS", unicode 0x1134
  22021 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-IEUNG", unicode 0x1135
  22028 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-CIEUC", unicode 0x1136
  22035 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-CHIEUCH", unicode 0x1137
  22042 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-KHIEUKH", unicode 0x1138
  22049 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-THIEUTH", unicode 0x1139
  22056 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-PHIEUPH", unicode 0x113A
  22063 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SIOS-HIEUH", unicode 0x113B
  22070 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHITUEUMSIOS", unicode 0x113C
  22076 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHITUEUMSSANGSIOS", unicode 0x113D
  22081 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CEONGCHIEUMSIOS", unicode 0x113E
  22087 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CEONGCHIEUMSSANGSIOS", unicode 0x113F
  22093 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PANSIOS", unicode 0x1140
  22098 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-KIYEOK", unicode 0x1141
  22105 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-TIKEUT", unicode 0x1142
  22112 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-MIEUM", unicode 0x1143
  22119 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-PIEUP", unicode 0x1144
  22126 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-SIOS", unicode 0x1145
  22133 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-PANSIOS", unicode 0x1146
  22140 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGIEUNG", unicode 0x1147
  22145 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-CIEUC", unicode 0x1148
  22152 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-CHIEUCH", unicode 0x1149
  22159 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-THIEUTH", unicode 0x114A
  22166 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG IEUNG-PHIEUPH", unicode 0x114B
  22173 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG YESIEUNG", unicode 0x114C
  22178 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CIEUC-IEUNG", unicode 0x114D
  22185 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHITUEUMCIEUC", unicode 0x114E
  22191 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHITUEUMSSANGCIEUC", unicode 0x114F
  22197 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CEONGCHIEUMCIEUC", unicode 0x1150
  22203 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CEONGCHIEUMSSANGCIEUC", unicode 0x1151
  22209 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHIEUCH-KHIEUKH", unicode 0x1152
  22216 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHIEUCH-HIEUH", unicode 0x1153
  22223 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CHITUEUMCHIEUCH", unicode 0x1154
  22229 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG CEONGCHIEUMCHIEUCH", unicode 0x1155
  22235 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG PHIEUPH-PIEUP", unicode 0x1156
  22242 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG KAPYEOUNPHIEUPH", unicode 0x1157
  22247 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG SSANGHIEUH", unicode 0x1158
  22252 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG YEORINHIEUH", unicode 0x1159
  0, // undefined code 0x115A
  0, // undefined code 0x115B
  0, // undefined code 0x115C
  0, // undefined code 0x115D
  0, // undefined code 0x115E
  22257 | (kUnicodeCategory_Lo << 27), // "HANGUL CHOSEONG FILLER", unicode 0x115F
  22262 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG FILLER", unicode 0x1160
  22267 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG A", unicode 0x1161
  22271 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG AE", unicode 0x1162
  22276 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YA", unicode 0x1163
  22281 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YAE", unicode 0x1164
  22286 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EO", unicode 0x1165
  22291 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG E", unicode 0x1166
  22295 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YEO", unicode 0x1167
  22300 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YE", unicode 0x1168
  22305 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG O", unicode 0x1169
  22309 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG WA", unicode 0x116A
  22314 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG WAE", unicode 0x116B
  22319 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG OE", unicode 0x116C
  22324 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YO", unicode 0x116D
  22329 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG U", unicode 0x116E
  22333 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG WEO", unicode 0x116F
  22338 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG WE", unicode 0x1170
  22343 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG WI", unicode 0x1171
  22348 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU", unicode 0x1172
  22353 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EU", unicode 0x1173
  22358 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YI", unicode 0x1174
  22362 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I", unicode 0x1175
  22367 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG A-O", unicode 0x1176
  22372 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG A-U", unicode 0x1177
  22377 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YA-O", unicode 0x1178
  22383 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YA-YO", unicode 0x1179
  22390 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EO-O", unicode 0x117A
  22396 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EO-U", unicode 0x117B
  22402 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EO-EU", unicode 0x117C
  22409 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YEO-O", unicode 0x117D
  22415 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YEO-U", unicode 0x117E
  22421 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG O-EO", unicode 0x117F
  22427 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG O-E", unicode 0x1180
  22432 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG O-YE", unicode 0x1181
  22438 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG O-O", unicode 0x1182
  22443 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG O-U", unicode 0x1183
  22448 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YO-YA", unicode 0x1184
  22455 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YO-YAE", unicode 0x1185
  22462 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YO-YEO", unicode 0x1186
  22469 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YO-O", unicode 0x1187
  22475 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YO-I", unicode 0x1188
  22482 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG U-A", unicode 0x1189
  22487 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG U-AE", unicode 0x118A
  22493 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG U-EO-EU", unicode 0x118B
  22501 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG U-YE", unicode 0x118C
  22507 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG U-U", unicode 0x118D
  22512 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-A", unicode 0x118E
  22518 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-EO", unicode 0x118F
  22525 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-E", unicode 0x1190
  22531 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-YEO", unicode 0x1191
  22538 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-YE", unicode 0x1192
  22545 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-U", unicode 0x1193
  22551 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YU-I", unicode 0x1194
  22558 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EU-U", unicode 0x1195
  22564 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG EU-EU", unicode 0x1196
  22571 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG YI-U", unicode 0x1197
  22576 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I-A", unicode 0x1198
  22582 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I-YA", unicode 0x1199
  22589 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I-O", unicode 0x119A
  22595 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I-U", unicode 0x119B
  22601 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I-EU", unicode 0x119C
  22608 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG I-ARAEA", unicode 0x119D
  22615 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG ARAEA", unicode 0x119E
  22620 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG ARAEA-EO", unicode 0x119F
  22627 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG ARAEA-U", unicode 0x11A0
  22633 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG ARAEA-I", unicode 0x11A1
  22640 | (kUnicodeCategory_Lo << 27), // "HANGUL JUNGSEONG SSANGARAEA", unicode 0x11A2
  0, // undefined code 0x11A3
  0, // undefined code 0x11A4
  0, // undefined code 0x11A5
  0, // undefined code 0x11A6
  0, // undefined code 0x11A7
  22646 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KIYEOK", unicode 0x11A8
  22651 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SSANGKIYEOK", unicode 0x11A9
  22656 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KIYEOK-SIOS", unicode 0x11AA
  22663 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN", unicode 0x11AB
  22668 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-CIEUC", unicode 0x11AC
  22675 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-HIEUH", unicode 0x11AD
  22682 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG TIKEUT", unicode 0x11AE
  22687 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL", unicode 0x11AF
  22692 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-KIYEOK", unicode 0x11B0
  22699 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-MIEUM", unicode 0x11B1
  22706 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-PIEUP", unicode 0x11B2
  22713 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-SIOS", unicode 0x11B3
  22720 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-THIEUTH", unicode 0x11B4
  22727 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-PHIEUPH", unicode 0x11B5
  22734 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-HIEUH", unicode 0x11B6
  22741 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM", unicode 0x11B7
  22746 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PIEUP", unicode 0x11B8
  22751 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PIEUP-SIOS", unicode 0x11B9
  22758 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SIOS", unicode 0x11BA
  22763 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SSANGSIOS", unicode 0x11BB
  22768 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG IEUNG", unicode 0x11BC
  22773 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG CIEUC", unicode 0x11BD
  22778 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG CHIEUCH", unicode 0x11BE
  22783 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KHIEUKH", unicode 0x11BF
  22788 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG THIEUTH", unicode 0x11C0
  22793 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PHIEUPH", unicode 0x11C1
  22798 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG HIEUH", unicode 0x11C2
  22803 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KIYEOK-RIEUL", unicode 0x11C3
  22810 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KIYEOK-SIOS-KIYEOK", unicode 0x11C4
  22819 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-KIYEOK", unicode 0x11C5
  22826 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-TIKEUT", unicode 0x11C6
  22833 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-SIOS", unicode 0x11C7
  22840 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-PANSIOS", unicode 0x11C8
  22847 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG NIEUN-THIEUTH", unicode 0x11C9
  22854 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG TIKEUT-KIYEOK", unicode 0x11CA
  22861 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG TIKEUT-RIEUL", unicode 0x11CB
  22868 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-KIYEOK-SIOS", unicode 0x11CC
  22877 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-NIEUN", unicode 0x11CD
  22884 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-TIKEUT", unicode 0x11CE
  22891 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-TIKEUT-HIEUH", unicode 0x11CF
  22900 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SSANGRIEUL", unicode 0x11D0
  22905 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-MIEUM-KIYEOK", unicode 0x11D1
  22914 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-MIEUM-SIOS", unicode 0x11D2
  22923 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-PIEUP-SIOS", unicode 0x11D3
  22932 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-PIEUP-HIEUH", unicode 0x11D4
  22941 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-KAPYEOUNPIEUP", unicode 0x11D5
  22948 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-SSANGSIOS", unicode 0x11D6
  22955 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-PANSIOS", unicode 0x11D7
  22962 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-KHIEUKH", unicode 0x11D8
  22969 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG RIEUL-YEORINHIEUH", unicode 0x11D9
  22976 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-KIYEOK", unicode 0x11DA
  22983 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-RIEUL", unicode 0x11DB
  22990 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-PIEUP", unicode 0x11DC
  22997 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-SIOS", unicode 0x11DD
  23004 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-SSANGSIOS", unicode 0x11DE
  23011 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-PANSIOS", unicode 0x11DF
  23018 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-CHIEUCH", unicode 0x11E0
  23025 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG MIEUM-HIEUH", unicode 0x11E1
  23032 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KAPYEOUNMIEUM", unicode 0x11E2
  23037 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PIEUP-RIEUL", unicode 0x11E3
  23044 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PIEUP-PHIEUPH", unicode 0x11E4
  23051 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PIEUP-HIEUH", unicode 0x11E5
  23058 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KAPYEOUNPIEUP", unicode 0x11E6
  23063 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SIOS-KIYEOK", unicode 0x11E7
  23070 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SIOS-TIKEUT", unicode 0x11E8
  23077 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SIOS-RIEUL", unicode 0x11E9
  23084 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SIOS-PIEUP", unicode 0x11EA
  23091 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PANSIOS", unicode 0x11EB
  23096 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG IEUNG-KIYEOK", unicode 0x11EC
  23103 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG IEUNG-SSANGKIYEOK", unicode 0x11ED
  23110 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG SSANGIEUNG", unicode 0x11EE
  23115 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG IEUNG-KHIEUKH", unicode 0x11EF
  23122 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG YESIEUNG", unicode 0x11F0
  23127 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG YESIEUNG-SIOS", unicode 0x11F1
  23134 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG YESIEUNG-PANSIOS", unicode 0x11F2
  23141 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG PHIEUPH-PIEUP", unicode 0x11F3
  23148 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG KAPYEOUNPHIEUPH", unicode 0x11F4
  23153 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG HIEUH-NIEUN", unicode 0x11F5
  23160 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG HIEUH-RIEUL", unicode 0x11F6
  23167 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG HIEUH-MIEUM", unicode 0x11F7
  23174 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG HIEUH-PIEUP", unicode 0x11F8
  23181 | (kUnicodeCategory_Lo << 27), // "HANGUL JONGSEONG YEORINHIEUH", unicode 0x11F9
  0, // undefined code 0x11FA
  0, // undefined code 0x11FB
  0, // undefined code 0x11FC
  0, // undefined code 0x11FD
  0, // undefined code 0x11FE
  0, // undefined code 0x11FF
} ;

static const uint32_t gNamePage18 [256] = {
  23186 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HA", unicode 0x1200
  23190 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HU", unicode 0x1201
  23194 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HI", unicode 0x1202
  23198 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HAA", unicode 0x1203
  23202 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HEE", unicode 0x1204
  23206 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HE", unicode 0x1205
  23210 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HO", unicode 0x1206
  23214 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HOA", unicode 0x1207
  23219 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LA", unicode 0x1208
  23223 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LU", unicode 0x1209
  23227 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LI", unicode 0x120A
  23231 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LAA", unicode 0x120B
  23235 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LEE", unicode 0x120C
  23239 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LE", unicode 0x120D
  23243 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LO", unicode 0x120E
  23247 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LWA", unicode 0x120F
  23251 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHA", unicode 0x1210
  23256 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHU", unicode 0x1211
  23261 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHI", unicode 0x1212
  23265 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHAA", unicode 0x1213
  23269 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHEE", unicode 0x1214
  23274 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHE", unicode 0x1215
  23279 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHO", unicode 0x1216
  23283 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE HHWA", unicode 0x1217
  23288 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MA", unicode 0x1218
  23292 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MU", unicode 0x1219
  23296 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MI", unicode 0x121A
  23300 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MAA", unicode 0x121B
  23304 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MEE", unicode 0x121C
  23308 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ME", unicode 0x121D
  23312 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MO", unicode 0x121E
  23316 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MWA", unicode 0x121F
  23320 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZA", unicode 0x1220
  23324 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZU", unicode 0x1221
  23329 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZI", unicode 0x1222
  23333 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZAA", unicode 0x1223
  23338 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZEE", unicode 0x1224
  23343 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZE", unicode 0x1225
  23348 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZO", unicode 0x1226
  23352 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SZWA", unicode 0x1227
  23356 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RA", unicode 0x1228
  23360 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RU", unicode 0x1229
  23364 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RI", unicode 0x122A
  23368 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RAA", unicode 0x122B
  23372 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE REE", unicode 0x122C
  23376 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RE", unicode 0x122D
  23380 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RO", unicode 0x122E
  23384 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RWA", unicode 0x122F
  23389 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SA", unicode 0x1230
  23393 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SU", unicode 0x1231
  23397 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SI", unicode 0x1232
  23401 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SAA", unicode 0x1233
  23405 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SEE", unicode 0x1234
  23409 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SE", unicode 0x1235
  23413 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SO", unicode 0x1236
  23417 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SWA", unicode 0x1237
  23421 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHA", unicode 0x1238
  23425 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHU", unicode 0x1239
  23429 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHI", unicode 0x123A
  23433 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHAA", unicode 0x123B
  23437 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHEE", unicode 0x123C
  23441 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHE", unicode 0x123D
  23445 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHO", unicode 0x123E
  23449 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHWA", unicode 0x123F
  23453 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QA", unicode 0x1240
  23457 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QU", unicode 0x1241
  23461 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QI", unicode 0x1242
  23465 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QAA", unicode 0x1243
  23469 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QEE", unicode 0x1244
  23474 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QE", unicode 0x1245
  23478 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QO", unicode 0x1246
  23482 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QOA", unicode 0x1247
  23486 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QWA", unicode 0x1248
  0, // undefined code 0x1249
  23490 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QWI", unicode 0x124A
  23495 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QWAA", unicode 0x124B
  23500 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QWEE", unicode 0x124C
  23505 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QWE", unicode 0x124D
  0, // undefined code 0x124E
  0, // undefined code 0x124F
  23510 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHA", unicode 0x1250
  23515 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHU", unicode 0x1251
  23519 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHI", unicode 0x1252
  23524 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHAA", unicode 0x1253
  23528 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHEE", unicode 0x1254
  23532 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHE", unicode 0x1255
  23537 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHO", unicode 0x1256
  0, // undefined code 0x1257
  23541 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHWA", unicode 0x1258
  0, // undefined code 0x1259
  23546 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHWI", unicode 0x125A
  23551 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHWAA", unicode 0x125B
  23555 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHWEE", unicode 0x125C
  23560 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QHWE", unicode 0x125D
  0, // undefined code 0x125E
  0, // undefined code 0x125F
  23565 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BA", unicode 0x1260
  23569 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BU", unicode 0x1261
  23573 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BI", unicode 0x1262
  23577 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BAA", unicode 0x1263
  23581 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BEE", unicode 0x1264
  23585 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BE", unicode 0x1265
  23589 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BO", unicode 0x1266
  23593 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BWA", unicode 0x1267
  23597 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VA", unicode 0x1268
  23601 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VU", unicode 0x1269
  23605 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VI", unicode 0x126A
  23609 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VAA", unicode 0x126B
  23614 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VEE", unicode 0x126C
  23618 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VE", unicode 0x126D
  23622 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VO", unicode 0x126E
  23626 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE VWA", unicode 0x126F
  23631 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TA", unicode 0x1270
  23635 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TU", unicode 0x1271
  23639 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TI", unicode 0x1272
  23643 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TAA", unicode 0x1273
  23647 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TEE", unicode 0x1274
  23651 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TE", unicode 0x1275
  23655 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TO", unicode 0x1276
  23659 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TWA", unicode 0x1277
  23663 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CA", unicode 0x1278
  23667 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CU", unicode 0x1279
  23671 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CI", unicode 0x127A
  23675 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CAA", unicode 0x127B
  23679 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CEE", unicode 0x127C
  23683 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CE", unicode 0x127D
  23687 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CO", unicode 0x127E
  23691 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CWA", unicode 0x127F
  23695 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XA", unicode 0x1280
  23699 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XU", unicode 0x1281
  23703 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XI", unicode 0x1282
  23707 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XAA", unicode 0x1283
  23712 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XEE", unicode 0x1284
  23717 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XE", unicode 0x1285
  23721 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XO", unicode 0x1286
  23725 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XOA", unicode 0x1287
  23730 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XWA", unicode 0x1288
  0, // undefined code 0x1289
  23735 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XWI", unicode 0x128A
  23739 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XWAA", unicode 0x128B
  23744 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XWEE", unicode 0x128C
  23749 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XWE", unicode 0x128D
  0, // undefined code 0x128E
  0, // undefined code 0x128F
  23754 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NA", unicode 0x1290
  23758 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NU", unicode 0x1291
  23762 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NI", unicode 0x1292
  23766 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NAA", unicode 0x1293
  23770 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NEE", unicode 0x1294
  23774 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NE", unicode 0x1295
  23778 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NO", unicode 0x1296
  23782 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NWA", unicode 0x1297
  23786 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYA", unicode 0x1298
  23790 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYU", unicode 0x1299
  23794 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYI", unicode 0x129A
  23798 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYAA", unicode 0x129B
  23803 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYEE", unicode 0x129C
  23807 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYE", unicode 0x129D
  23811 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYO", unicode 0x129E
  23815 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYWA", unicode 0x129F
  23820 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL A", unicode 0x12A0
  23825 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL U", unicode 0x12A1
  23830 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL I", unicode 0x12A2
  23836 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL AA", unicode 0x12A3
  23842 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL EE", unicode 0x12A4
  23848 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL E", unicode 0x12A5
  23853 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL O", unicode 0x12A6
  23858 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL WA", unicode 0x12A7
  23864 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KA", unicode 0x12A8
  23868 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KU", unicode 0x12A9
  23872 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KI", unicode 0x12AA
  23876 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KAA", unicode 0x12AB
  23880 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KEE", unicode 0x12AC
  23884 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KE", unicode 0x12AD
  23888 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KO", unicode 0x12AE
  23892 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KOA", unicode 0x12AF
  23897 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KWA", unicode 0x12B0
  0, // undefined code 0x12B1
  23901 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KWI", unicode 0x12B2
  23905 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KWAA", unicode 0x12B3
  23909 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KWEE", unicode 0x12B4
  23914 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KWE", unicode 0x12B5
  0, // undefined code 0x12B6
  0, // undefined code 0x12B7
  23918 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXA", unicode 0x12B8
  23923 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXU", unicode 0x12B9
  23927 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXI", unicode 0x12BA
  23932 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXAA", unicode 0x12BB
  23937 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXEE", unicode 0x12BC
  23941 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXE", unicode 0x12BD
  23946 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXO", unicode 0x12BE
  0, // undefined code 0x12BF
  23951 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXWA", unicode 0x12C0
  0, // undefined code 0x12C1
  23955 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXWI", unicode 0x12C2
  23959 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXWAA", unicode 0x12C3
  23964 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXWEE", unicode 0x12C4
  23968 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KXWE", unicode 0x12C5
  0, // undefined code 0x12C6
  0, // undefined code 0x12C7
  23973 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WA", unicode 0x12C8
  23977 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WU", unicode 0x12C9
  23981 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WI", unicode 0x12CA
  23985 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WAA", unicode 0x12CB
  23989 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WEE", unicode 0x12CC
  23993 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WE", unicode 0x12CD
  23997 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WO", unicode 0x12CE
  24001 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE WOA", unicode 0x12CF
  24005 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL A", unicode 0x12D0
  24010 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL U", unicode 0x12D1
  24015 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL I", unicode 0x12D2
  24021 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL AA", unicode 0x12D3
  24027 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL EE", unicode 0x12D4
  24033 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL E", unicode 0x12D5
  24038 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHARYNGEAL O", unicode 0x12D6
  0, // undefined code 0x12D7
  24043 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZA", unicode 0x12D8
  24047 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZU", unicode 0x12D9
  24051 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZI", unicode 0x12DA
  24055 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZAA", unicode 0x12DB
  24059 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZEE", unicode 0x12DC
  24063 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZE", unicode 0x12DD
  24067 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZO", unicode 0x12DE
  24071 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZWA", unicode 0x12DF
  24076 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHA", unicode 0x12E0
  24080 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHU", unicode 0x12E1
  24084 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHI", unicode 0x12E2
  24088 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHAA", unicode 0x12E3
  24093 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHEE", unicode 0x12E4
  24097 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHE", unicode 0x12E5
  24101 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHO", unicode 0x12E6
  24105 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZHWA", unicode 0x12E7
  24110 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YA", unicode 0x12E8
  24114 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YU", unicode 0x12E9
  24118 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YI", unicode 0x12EA
  24121 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YAA", unicode 0x12EB
  24125 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YEE", unicode 0x12EC
  24129 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YE", unicode 0x12ED
  24133 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YO", unicode 0x12EE
  24137 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE YOA", unicode 0x12EF
  24141 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DA", unicode 0x12F0
  24145 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DU", unicode 0x12F1
  24149 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DI", unicode 0x12F2
  24153 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DAA", unicode 0x12F3
  24158 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DEE", unicode 0x12F4
  24162 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DE", unicode 0x12F5
  24166 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DO", unicode 0x12F6
  24170 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DWA", unicode 0x12F7
  24175 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDA", unicode 0x12F8
  24179 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDU", unicode 0x12F9
  24183 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDI", unicode 0x12FA
  24187 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDAA", unicode 0x12FB
  24191 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDEE", unicode 0x12FC
  24196 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDE", unicode 0x12FD
  24200 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDO", unicode 0x12FE
  24204 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDWA", unicode 0x12FF
} ;

static const uint32_t gNamePage19 [256] = {
  24208 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JA", unicode 0x1300
  24212 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JU", unicode 0x1301
  24216 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JI", unicode 0x1302
  24220 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JAA", unicode 0x1303
  24225 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JEE", unicode 0x1304
  24229 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JE", unicode 0x1305
  24233 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JO", unicode 0x1306
  24237 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JWA", unicode 0x1307
  24241 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GA", unicode 0x1308
  24245 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GU", unicode 0x1309
  24249 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GI", unicode 0x130A
  24253 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GAA", unicode 0x130B
  24257 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GEE", unicode 0x130C
  24261 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GE", unicode 0x130D
  24265 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GO", unicode 0x130E
  24269 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GOA", unicode 0x130F
  24274 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GWA", unicode 0x1310
  0, // undefined code 0x1311
  24279 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GWI", unicode 0x1312
  24284 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GWAA", unicode 0x1313
  24289 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GWEE", unicode 0x1314
  24294 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GWE", unicode 0x1315
  0, // undefined code 0x1316
  0, // undefined code 0x1317
  24298 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGA", unicode 0x1318
  24302 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGU", unicode 0x1319
  24306 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGI", unicode 0x131A
  24310 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGAA", unicode 0x131B
  24315 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGEE", unicode 0x131C
  24320 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGE", unicode 0x131D
  24324 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGO", unicode 0x131E
  24328 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGWAA", unicode 0x131F
  24332 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THA", unicode 0x1320
  24336 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THU", unicode 0x1321
  24340 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THI", unicode 0x1322
  24344 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THAA", unicode 0x1323
  24348 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THEE", unicode 0x1324
  24352 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THE", unicode 0x1325
  24356 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THO", unicode 0x1326
  24360 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THWA", unicode 0x1327
  24365 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHA", unicode 0x1328
  24369 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHU", unicode 0x1329
  24373 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHI", unicode 0x132A
  24377 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHAA", unicode 0x132B
  24382 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHEE", unicode 0x132C
  24386 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHE", unicode 0x132D
  24390 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHO", unicode 0x132E
  24394 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHWA", unicode 0x132F
  24399 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHA", unicode 0x1330
  24403 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHU", unicode 0x1331
  24408 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHI", unicode 0x1332
  24412 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHAA", unicode 0x1333
  24417 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHEE", unicode 0x1334
  24421 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHE", unicode 0x1335
  24425 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHO", unicode 0x1336
  24429 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHWA", unicode 0x1337
  24433 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSA", unicode 0x1338
  24437 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSU", unicode 0x1339
  24441 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSI", unicode 0x133A
  24445 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSAA", unicode 0x133B
  24449 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSEE", unicode 0x133C
  24453 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSE", unicode 0x133D
  24457 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSO", unicode 0x133E
  24461 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TSWA", unicode 0x133F
  24465 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZA", unicode 0x1340
  24470 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZU", unicode 0x1341
  24475 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZI", unicode 0x1342
  24480 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZAA", unicode 0x1343
  24485 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZEE", unicode 0x1344
  24490 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZE", unicode 0x1345
  24495 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZO", unicode 0x1346
  24500 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TZOA", unicode 0x1347
  24504 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FA", unicode 0x1348
  24508 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FU", unicode 0x1349
  24512 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FI", unicode 0x134A
  24516 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FAA", unicode 0x134B
  24520 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FEE", unicode 0x134C
  24524 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FE", unicode 0x134D
  24528 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FO", unicode 0x134E
  24532 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FWA", unicode 0x134F
  24536 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PA", unicode 0x1350
  24540 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PU", unicode 0x1351
  24544 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PI", unicode 0x1352
  24548 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PAA", unicode 0x1353
  24552 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PEE", unicode 0x1354
  24556 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PE", unicode 0x1355
  24560 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PO", unicode 0x1356
  24564 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PWA", unicode 0x1357
  24568 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE RYA", unicode 0x1358
  24573 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MYA", unicode 0x1359
  24577 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FYA", unicode 0x135A
  0, // undefined code 0x135B
  0, // undefined code 0x135C
  0, // undefined code 0x135D
  0, // undefined code 0x135E
  24582 | (kUnicodeCategory_Mn << 27), // "ETHIOPIC COMBINING GEMINATION MARK", unicode 0x135F
  24588 | (kUnicodeCategory_So << 27), // "ETHIOPIC SECTION MARK", unicode 0x1360
  24592 | (kUnicodeCategory_Po << 27), // "ETHIOPIC WORDSPACE", unicode 0x1361
  24596 | (kUnicodeCategory_Po << 27), // "ETHIOPIC FULL STOP", unicode 0x1362
  24601 | (kUnicodeCategory_Po << 27), // "ETHIOPIC COMMA", unicode 0x1363
  24604 | (kUnicodeCategory_Po << 27), // "ETHIOPIC SEMICOLON", unicode 0x1364
  24607 | (kUnicodeCategory_Po << 27), // "ETHIOPIC COLON", unicode 0x1365
  24610 | (kUnicodeCategory_Po << 27), // "ETHIOPIC PREFACE COLON", unicode 0x1366
  24616 | (kUnicodeCategory_Po << 27), // "ETHIOPIC QUESTION MARK", unicode 0x1367
  24620 | (kUnicodeCategory_Po << 27), // "ETHIOPIC PARAGRAPH SEPARATOR", unicode 0x1368
  24625 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT ONE", unicode 0x1369
  24629 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT TWO", unicode 0x136A
  24633 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT THREE", unicode 0x136B
  24637 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT FOUR", unicode 0x136C
  24641 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT FIVE", unicode 0x136D
  24645 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT SIX", unicode 0x136E
  24649 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT SEVEN", unicode 0x136F
  24653 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT EIGHT", unicode 0x1370
  24657 | (kUnicodeCategory_No << 27), // "ETHIOPIC DIGIT NINE", unicode 0x1371
  24661 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER TEN", unicode 0x1372
  24666 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER TWENTY", unicode 0x1373
  24671 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER THIRTY", unicode 0x1374
  24676 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER FORTY", unicode 0x1375
  24681 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER FIFTY", unicode 0x1376
  24686 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER SIXTY", unicode 0x1377
  24691 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER SEVENTY", unicode 0x1378
  24696 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER EIGHTY", unicode 0x1379
  24701 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER NINETY", unicode 0x137A
  24706 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER HUNDRED", unicode 0x137B
  24711 | (kUnicodeCategory_No << 27), // "ETHIOPIC NUMBER TEN THOUSAND", unicode 0x137C
  0, // undefined code 0x137D
  0, // undefined code 0x137E
  0, // undefined code 0x137F
  24718 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SEBATBEIT MWA", unicode 0x1380
  24724 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MWI", unicode 0x1381
  24728 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MWEE", unicode 0x1382
  24733 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MWE", unicode 0x1383
  24737 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SEBATBEIT BWA", unicode 0x1384
  24743 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BWI", unicode 0x1385
  24747 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BWEE", unicode 0x1386
  24751 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BWE", unicode 0x1387
  24756 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SEBATBEIT FWA", unicode 0x1388
  24762 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FWI", unicode 0x1389
  24766 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FWEE", unicode 0x138A
  24771 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE FWE", unicode 0x138B
  24776 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SEBATBEIT PWA", unicode 0x138C
  24782 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PWI", unicode 0x138D
  24786 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PWEE", unicode 0x138E
  24791 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PWE", unicode 0x138F
  24795 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK YIZET", unicode 0x1390
  24802 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK DERET", unicode 0x1391
  24808 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK RIKRIK", unicode 0x1392
  24814 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK SHORT RIKRIK", unicode 0x1393
  24822 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK DIFAT", unicode 0x1394
  24829 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK KENAT", unicode 0x1395
  24835 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK CHIRET", unicode 0x1396
  24842 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK HIDET", unicode 0x1397
  24848 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK DERET-HIDET", unicode 0x1398
  24856 | (kUnicodeCategory_So << 27), // "ETHIOPIC TONAL MARK KURT", unicode 0x1399
  0, // undefined code 0x139A
  0, // undefined code 0x139B
  0, // undefined code 0x139C
  0, // undefined code 0x139D
  0, // undefined code 0x139E
  0, // undefined code 0x139F
  24862 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER A", unicode 0x13A0
  24866 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER E", unicode 0x13A1
  24870 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER I", unicode 0x13A2
  24875 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER O", unicode 0x13A3
  24879 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER U", unicode 0x13A4
  24883 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER V", unicode 0x13A5
  24888 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER GA", unicode 0x13A6
  24893 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER KA", unicode 0x13A7
  24898 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER GE", unicode 0x13A8
  24903 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER GI", unicode 0x13A9
  24908 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER GO", unicode 0x13AA
  24913 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER GU", unicode 0x13AB
  24918 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER GV", unicode 0x13AC
  24924 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HA", unicode 0x13AD
  24929 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HE", unicode 0x13AE
  24934 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HI", unicode 0x13AF
  24939 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HO", unicode 0x13B0
  24944 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HU", unicode 0x13B1
  24949 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HV", unicode 0x13B2
  24954 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER LA", unicode 0x13B3
  24959 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER LE", unicode 0x13B4
  24964 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER LI", unicode 0x13B5
  24969 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER LO", unicode 0x13B6
  24974 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER LU", unicode 0x13B7
  24979 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER LV", unicode 0x13B8
  24984 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER MA", unicode 0x13B9
  24989 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER ME", unicode 0x13BA
  24994 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER MI", unicode 0x13BB
  24999 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER MO", unicode 0x13BC
  25004 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER MU", unicode 0x13BD
  25009 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NA", unicode 0x13BE
  25014 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER HNA", unicode 0x13BF
  25019 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NAH", unicode 0x13C0
  25025 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NE", unicode 0x13C1
  25030 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NI", unicode 0x13C2
  25035 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NO", unicode 0x13C3
  25040 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NU", unicode 0x13C4
  25045 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER NV", unicode 0x13C5
  25050 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER QUA", unicode 0x13C6
  25056 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER QUE", unicode 0x13C7
  25061 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER QUI", unicode 0x13C8
  25066 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER QUO", unicode 0x13C9
  25071 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER QUU", unicode 0x13CA
  25076 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER QUV", unicode 0x13CB
  25082 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER SA", unicode 0x13CC
  25087 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER S", unicode 0x13CD
  25092 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER SE", unicode 0x13CE
  25097 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER SI", unicode 0x13CF
  25102 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER SO", unicode 0x13D0
  25107 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER SU", unicode 0x13D1
  25112 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER SV", unicode 0x13D2
  25117 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DA", unicode 0x13D3
  25122 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TA", unicode 0x13D4
  25127 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DE", unicode 0x13D5
  25132 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TE", unicode 0x13D6
  25137 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DI", unicode 0x13D7
  25142 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TI", unicode 0x13D8
  25147 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DO", unicode 0x13D9
  25152 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DU", unicode 0x13DA
  25157 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DV", unicode 0x13DB
  25163 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER DLA", unicode 0x13DC
  25168 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TLA", unicode 0x13DD
  25173 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TLE", unicode 0x13DE
  25178 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TLI", unicode 0x13DF
  25183 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TLO", unicode 0x13E0
  25188 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TLU", unicode 0x13E1
  25193 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TLV", unicode 0x13E2
  25198 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TSA", unicode 0x13E3
  25203 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TSE", unicode 0x13E4
  25208 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TSI", unicode 0x13E5
  25213 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TSO", unicode 0x13E6
  25218 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TSU", unicode 0x13E7
  25223 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER TSV", unicode 0x13E8
  25229 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER WA", unicode 0x13E9
  25234 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER WE", unicode 0x13EA
  25239 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER WI", unicode 0x13EB
  25244 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER WO", unicode 0x13EC
  25249 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER WU", unicode 0x13ED
  25254 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER WV", unicode 0x13EE
  25260 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER YA", unicode 0x13EF
  25265 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER YE", unicode 0x13F0
  25270 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER YI", unicode 0x13F1
  25274 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER YO", unicode 0x13F2
  25279 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER YU", unicode 0x13F3
  25284 | (kUnicodeCategory_Lo << 27), // "CHEROKEE LETTER YV", unicode 0x13F4
  0, // undefined code 0x13F5
  0, // undefined code 0x13F6
  0, // undefined code 0x13F7
  0, // undefined code 0x13F8
  0, // undefined code 0x13F9
  0, // undefined code 0x13FA
  0, // undefined code 0x13FB
  0, // undefined code 0x13FC
  0, // undefined code 0x13FD
  0, // undefined code 0x13FE
  0, // undefined code 0x13FF
} ;

static const uint32_t gNamePage20 [256] = {
  0, // undefined code 0x1400
  25290 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS E", unicode 0x1401
  25293 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS AAI", unicode 0x1402
  25298 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS I", unicode 0x1403
  25302 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS II", unicode 0x1404
  25306 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS O", unicode 0x1405
  25309 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS OO", unicode 0x1406
  25313 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE OO", unicode 0x1407
  25321 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER EE", unicode 0x1408
  25327 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER I", unicode 0x1409
  25333 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS A", unicode 0x140A
  25336 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS AA", unicode 0x140B
  25340 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WE", unicode 0x140C
  25344 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WE", unicode 0x140D
  25352 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WI", unicode 0x140E
  25356 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WI", unicode 0x140F
  25364 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WII", unicode 0x1410
  25368 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WII", unicode 0x1411
  25376 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WO", unicode 0x1412
  25380 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WO", unicode 0x1413
  25388 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WOO", unicode 0x1414
  25392 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WOO", unicode 0x1415
  25400 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI WOO", unicode 0x1416
  25406 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WA", unicode 0x1417
  25410 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WA", unicode 0x1418
  25418 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WAA", unicode 0x1419
  25422 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE WAA", unicode 0x141A
  25430 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI WAA", unicode 0x141B
  25436 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS AI", unicode 0x141C
  25440 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE W", unicode 0x141D
  25448 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS GLOTTAL STOP", unicode 0x141E
  25454 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL ACUTE", unicode 0x141F
  25459 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL GRAVE", unicode 0x1420
  25464 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL BOTTOM HALF RING", unicode 0x1421
  25473 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL TOP HALF RING", unicode 0x1422
  25482 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL RIGHT HALF RING", unicode 0x1423
  25490 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL RING", unicode 0x1424
  25495 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL DOUBLE ACUTE", unicode 0x1425
  25501 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL DOUBLE SHORT VERTICAL STROKES", unicode 0x1426
  25510 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL MIDDLE DOT", unicode 0x1427
  25516 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL SHORT HORIZONTAL STROKE", unicode 0x1428
  25525 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL PLUS", unicode 0x1429
  25530 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FINAL DOWN TACK", unicode 0x142A
  25537 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS EN", unicode 0x142B
  25541 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS IN", unicode 0x142C
  25545 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS ON", unicode 0x142D
  25549 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS AN", unicode 0x142E
  25553 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PE", unicode 0x142F
  25557 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PAAI", unicode 0x1430
  25562 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PI", unicode 0x1431
  25566 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PII", unicode 0x1432
  25570 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PO", unicode 0x1433
  25574 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS POO", unicode 0x1434
  25578 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE POO", unicode 0x1435
  25586 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HEE", unicode 0x1436
  25592 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HI", unicode 0x1437
  25598 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PA", unicode 0x1438
  25602 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PAA", unicode 0x1439
  25606 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWE", unicode 0x143A
  25610 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWE", unicode 0x143B
  25618 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWI", unicode 0x143C
  25622 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWI", unicode 0x143D
  25630 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWII", unicode 0x143E
  25634 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWII", unicode 0x143F
  25642 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWO", unicode 0x1440
  25646 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWO", unicode 0x1441
  25654 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWOO", unicode 0x1442
  25658 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWOO", unicode 0x1443
  25666 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWA", unicode 0x1444
  25670 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWA", unicode 0x1445
  25678 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS PWAA", unicode 0x1446
  25682 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE PWAA", unicode 0x1447
  25690 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE PWAA", unicode 0x1448
  25698 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS P", unicode 0x1449
  25702 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE P", unicode 0x144A
  25710 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER H", unicode 0x144B
  25716 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TE", unicode 0x144C
  25720 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TAAI", unicode 0x144D
  25725 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TI", unicode 0x144E
  25729 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TII", unicode 0x144F
  25733 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TO", unicode 0x1450
  25737 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TOO", unicode 0x1451
  25741 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE TOO", unicode 0x1452
  25749 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DEE", unicode 0x1453
  25755 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DI", unicode 0x1454
  25761 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TA", unicode 0x1455
  25765 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TAA", unicode 0x1456
  25769 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWE", unicode 0x1457
  25773 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWE", unicode 0x1458
  25781 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWI", unicode 0x1459
  25785 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWI", unicode 0x145A
  25793 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWII", unicode 0x145B
  25797 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWII", unicode 0x145C
  25805 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWO", unicode 0x145D
  25809 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWO", unicode 0x145E
  25817 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWOO", unicode 0x145F
  25821 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWOO", unicode 0x1460
  25829 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWA", unicode 0x1461
  25833 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWA", unicode 0x1462
  25841 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TWAA", unicode 0x1463
  25845 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE TWAA", unicode 0x1464
  25853 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI TWAA", unicode 0x1465
  25859 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS T", unicode 0x1466
  25863 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTE", unicode 0x1467
  25867 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTI", unicode 0x1468
  25871 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTO", unicode 0x1469
  25875 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTA", unicode 0x146A
  25879 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KE", unicode 0x146B
  25883 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KAAI", unicode 0x146C
  25888 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KI", unicode 0x146D
  25892 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KII", unicode 0x146E
  25897 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KO", unicode 0x146F
  25901 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KOO", unicode 0x1470
  25905 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE KOO", unicode 0x1471
  25913 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KA", unicode 0x1472
  25917 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KAA", unicode 0x1473
  25921 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWE", unicode 0x1474
  25925 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWE", unicode 0x1475
  25933 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWI", unicode 0x1476
  25937 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWI", unicode 0x1477
  25945 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWII", unicode 0x1478
  25949 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWII", unicode 0x1479
  25957 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWO", unicode 0x147A
  25961 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWO", unicode 0x147B
  25969 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWOO", unicode 0x147C
  25973 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWOO", unicode 0x147D
  25981 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWA", unicode 0x147E
  25985 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWA", unicode 0x147F
  25993 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KWAA", unicode 0x1480
  25997 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE KWAA", unicode 0x1481
  26005 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI KWAA", unicode 0x1482
  26011 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS K", unicode 0x1483
  26015 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS KW", unicode 0x1484
  26019 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SOUTH-SLAVEY KEH", unicode 0x1485
  26027 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SOUTH-SLAVEY KIH", unicode 0x1486
  26035 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SOUTH-SLAVEY KOH", unicode 0x1487
  26043 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SOUTH-SLAVEY KAH", unicode 0x1488
  26052 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CE", unicode 0x1489
  26056 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CAAI", unicode 0x148A
  26061 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CI", unicode 0x148B
  26065 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CII", unicode 0x148C
  26069 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CO", unicode 0x148D
  26073 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS COO", unicode 0x148E
  26077 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE COO", unicode 0x148F
  26085 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CA", unicode 0x1490
  26089 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CAA", unicode 0x1491
  26093 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWE", unicode 0x1492
  26097 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWE", unicode 0x1493
  26105 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWI", unicode 0x1494
  26109 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWI", unicode 0x1495
  26117 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWII", unicode 0x1496
  26121 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWII", unicode 0x1497
  26129 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWO", unicode 0x1498
  26133 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWO", unicode 0x1499
  26141 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWOO", unicode 0x149A
  26145 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWOO", unicode 0x149B
  26153 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWA", unicode 0x149C
  26157 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWA", unicode 0x149D
  26165 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CWAA", unicode 0x149E
  26169 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE CWAA", unicode 0x149F
  26177 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI CWAA", unicode 0x14A0
  26183 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS C", unicode 0x14A1
  26187 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI TH", unicode 0x14A2
  26193 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS ME", unicode 0x14A3
  26197 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MAAI", unicode 0x14A4
  26201 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MI", unicode 0x14A5
  26205 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MII", unicode 0x14A6
  26210 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MO", unicode 0x14A7
  26214 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MOO", unicode 0x14A8
  26218 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE MOO", unicode 0x14A9
  26226 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MA", unicode 0x14AA
  26230 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MAA", unicode 0x14AB
  26234 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWE", unicode 0x14AC
  26238 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWE", unicode 0x14AD
  26246 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWI", unicode 0x14AE
  26250 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWI", unicode 0x14AF
  26258 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWII", unicode 0x14B0
  26262 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWII", unicode 0x14B1
  26270 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWO", unicode 0x14B2
  26274 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWO", unicode 0x14B3
  26282 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWOO", unicode 0x14B4
  26286 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWOO", unicode 0x14B5
  26294 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWA", unicode 0x14B6
  26298 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWA", unicode 0x14B7
  26306 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MWAA", unicode 0x14B8
  26310 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE MWAA", unicode 0x14B9
  26318 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI MWAA", unicode 0x14BA
  26324 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS M", unicode 0x14BB
  26328 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE M", unicode 0x14BC
  26336 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MH", unicode 0x14BD
  26340 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS ATHAPASCAN M", unicode 0x14BE
  26346 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI M", unicode 0x14BF
  26352 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NE", unicode 0x14C0
  26356 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NAAI", unicode 0x14C1
  26361 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NI", unicode 0x14C2
  26365 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NII", unicode 0x14C3
  26369 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NO", unicode 0x14C4
  26373 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NOO", unicode 0x14C5
  26377 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE NOO", unicode 0x14C6
  26385 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NA", unicode 0x14C7
  26389 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NAA", unicode 0x14C8
  26393 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NWE", unicode 0x14C9
  26397 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE NWE", unicode 0x14CA
  26405 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NWA", unicode 0x14CB
  26409 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE NWA", unicode 0x14CC
  26417 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NWAA", unicode 0x14CD
  26421 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE NWAA", unicode 0x14CE
  26429 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI NWAA", unicode 0x14CF
  26435 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS N", unicode 0x14D0
  26439 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NG", unicode 0x14D1
  26445 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NH", unicode 0x14D2
  26450 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LE", unicode 0x14D3
  26454 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LAAI", unicode 0x14D4
  26458 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LI", unicode 0x14D5
  26462 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LII", unicode 0x14D6
  26467 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LO", unicode 0x14D7
  26471 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LOO", unicode 0x14D8
  26475 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE LOO", unicode 0x14D9
  26483 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LA", unicode 0x14DA
  26487 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LAA", unicode 0x14DB
  26491 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWE", unicode 0x14DC
  26495 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWE", unicode 0x14DD
  26503 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWI", unicode 0x14DE
  26507 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWI", unicode 0x14DF
  26515 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWII", unicode 0x14E0
  26519 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWII", unicode 0x14E1
  26527 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWO", unicode 0x14E2
  26531 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWO", unicode 0x14E3
  26539 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWOO", unicode 0x14E4
  26543 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWOO", unicode 0x14E5
  26551 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWA", unicode 0x14E6
  26555 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWA", unicode 0x14E7
  26563 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LWAA", unicode 0x14E8
  26567 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LWAA", unicode 0x14E9
  26575 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS L", unicode 0x14EA
  26579 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE L", unicode 0x14EB
  26587 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MEDIAL L", unicode 0x14EC
  26593 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SE", unicode 0x14ED
  26597 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAAI", unicode 0x14EE
  26602 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SI", unicode 0x14EF
  26606 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SII", unicode 0x14F0
  26610 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SO", unicode 0x14F1
  26614 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SOO", unicode 0x14F2
  26618 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE SOO", unicode 0x14F3
  26626 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SA", unicode 0x14F4
  26630 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAA", unicode 0x14F5
  26634 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWE", unicode 0x14F6
  26638 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWE", unicode 0x14F7
  26646 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWI", unicode 0x14F8
  26650 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWI", unicode 0x14F9
  26658 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWII", unicode 0x14FA
  26662 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWII", unicode 0x14FB
  26670 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWO", unicode 0x14FC
  26674 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWO", unicode 0x14FD
  26682 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWOO", unicode 0x14FE
  26686 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWOO", unicode 0x14FF
} ;

static const uint32_t gNamePage21 [256] = {
  26694 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWA", unicode 0x1500
  26698 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWA", unicode 0x1501
  26706 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SWAA", unicode 0x1502
  26710 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SWAA", unicode 0x1503
  26718 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI SWAA", unicode 0x1504
  26724 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS S", unicode 0x1505
  26728 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS ATHAPASCAN S", unicode 0x1506
  26734 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SW", unicode 0x1507
  26738 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT S", unicode 0x1508
  26744 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MOOSE-CREE SK", unicode 0x1509
  26753 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI SKW", unicode 0x150A
  26760 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI S-W", unicode 0x150B
  26768 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI SPWA", unicode 0x150C
  26775 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI STWA", unicode 0x150D
  26782 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI SKWA", unicode 0x150E
  26789 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI SCWA", unicode 0x150F
  26795 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHE", unicode 0x1510
  26799 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHI", unicode 0x1511
  26803 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHII", unicode 0x1512
  26807 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHO", unicode 0x1513
  26811 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHOO", unicode 0x1514
  26815 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHA", unicode 0x1515
  26819 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHAA", unicode 0x1516
  26823 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWE", unicode 0x1517
  26827 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWE", unicode 0x1518
  26835 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWI", unicode 0x1519
  26839 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWI", unicode 0x151A
  26847 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWII", unicode 0x151B
  26851 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWII", unicode 0x151C
  26859 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWO", unicode 0x151D
  26863 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWO", unicode 0x151E
  26871 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWOO", unicode 0x151F
  26875 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWOO", unicode 0x1520
  26883 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWA", unicode 0x1521
  26887 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWA", unicode 0x1522
  26895 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SHWAA", unicode 0x1523
  26899 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE SHWAA", unicode 0x1524
  26907 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SH", unicode 0x1525
  26911 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YE", unicode 0x1526
  26915 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YAAI", unicode 0x1527
  26920 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YI", unicode 0x1528
  26923 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YII", unicode 0x1529
  26927 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YO", unicode 0x152A
  26931 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YOO", unicode 0x152B
  26935 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y-CREE YOO", unicode 0x152C
  26943 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YA", unicode 0x152D
  26947 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YAA", unicode 0x152E
  26951 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWE", unicode 0x152F
  26955 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWE", unicode 0x1530
  26963 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWI", unicode 0x1531
  26967 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWI", unicode 0x1532
  26975 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWII", unicode 0x1533
  26979 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWII", unicode 0x1534
  26987 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWO", unicode 0x1535
  26991 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWO", unicode 0x1536
  26999 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWOO", unicode 0x1537
  27003 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWOO", unicode 0x1538
  27011 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWA", unicode 0x1539
  27015 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWA", unicode 0x153A
  27023 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS YWAA", unicode 0x153B
  27027 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE YWAA", unicode 0x153C
  27035 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NASKAPI YWAA", unicode 0x153D
  27041 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Y", unicode 0x153E
  27045 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BIBLE-CREE Y", unicode 0x153F
  27054 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE Y", unicode 0x1540
  27062 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI YI", unicode 0x1541
  27067 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RE", unicode 0x1542
  27071 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS R-CREE RE", unicode 0x1543
  27079 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LE", unicode 0x1544
  27087 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RAAI", unicode 0x1545
  27092 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RI", unicode 0x1546
  27096 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RII", unicode 0x1547
  27100 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RO", unicode 0x1548
  27104 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS ROO", unicode 0x1549
  27108 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LO", unicode 0x154A
  27116 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RA", unicode 0x154B
  27120 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RAA", unicode 0x154C
  27124 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE LA", unicode 0x154D
  27132 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS RWAA", unicode 0x154E
  27136 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE RWAA", unicode 0x154F
  27144 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS R", unicode 0x1550
  27148 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE R", unicode 0x1551
  27156 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS MEDIAL R", unicode 0x1552
  27162 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FE", unicode 0x1553
  27166 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FAAI", unicode 0x1554
  27170 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FI", unicode 0x1555
  27174 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FII", unicode 0x1556
  27178 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FO", unicode 0x1557
  27182 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FOO", unicode 0x1558
  27186 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FA", unicode 0x1559
  27190 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FAA", unicode 0x155A
  27194 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS FWAA", unicode 0x155B
  27198 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE FWAA", unicode 0x155C
  27206 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS F", unicode 0x155D
  27210 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THE", unicode 0x155E
  27214 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS N-CREE THE", unicode 0x155F
  27222 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THI", unicode 0x1560
  27226 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS N-CREE THI", unicode 0x1561
  27234 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THII", unicode 0x1562
  27238 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS N-CREE THII", unicode 0x1563
  27246 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THO", unicode 0x1564
  27250 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THOO", unicode 0x1565
  27254 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THA", unicode 0x1566
  27258 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THAA", unicode 0x1567
  27262 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS THWAA", unicode 0x1568
  27266 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE THWAA", unicode 0x1569
  27274 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH", unicode 0x156A
  27278 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTHE", unicode 0x156B
  27283 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTHI", unicode 0x156C
  27287 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTHO", unicode 0x156D
  27291 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTHA", unicode 0x156E
  27295 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TTH", unicode 0x156F
  27300 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TYE", unicode 0x1570
  27304 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TYI", unicode 0x1571
  27308 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TYO", unicode 0x1572
  27313 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TYA", unicode 0x1573
  27318 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HE", unicode 0x1574
  27324 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HI", unicode 0x1575
  27330 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HII", unicode 0x1576
  27337 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HO", unicode 0x1577
  27343 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HOO", unicode 0x1578
  27349 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HA", unicode 0x1579
  27355 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK HAA", unicode 0x157A
  27361 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVIK H", unicode 0x157B
  27367 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NUNAVUT H", unicode 0x157C
  27373 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS HK", unicode 0x157D
  27378 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QAAI", unicode 0x157E
  27383 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QI", unicode 0x157F
  27387 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QII", unicode 0x1580
  27391 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QO", unicode 0x1581
  27395 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QOO", unicode 0x1582
  27399 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QA", unicode 0x1583
  27403 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QAA", unicode 0x1584
  27407 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS Q", unicode 0x1585
  27411 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TLHE", unicode 0x1586
  27415 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TLHI", unicode 0x1587
  27419 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TLHO", unicode 0x1588
  27423 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TLHA", unicode 0x1589
  27427 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE RE", unicode 0x158A
  27435 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE RI", unicode 0x158B
  27443 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE RO", unicode 0x158C
  27451 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WEST-CREE RA", unicode 0x158D
  27459 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGAAI", unicode 0x158E
  27464 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGI", unicode 0x158F
  27468 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGII", unicode 0x1590
  27473 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGO", unicode 0x1591
  27477 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGOO", unicode 0x1592
  27481 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGA", unicode 0x1593
  27485 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGAA", unicode 0x1594
  27489 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NG", unicode 0x1595
  27493 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNG", unicode 0x1596
  27498 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI SHE", unicode 0x1597
  27504 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI SHI", unicode 0x1598
  27510 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI SHO", unicode 0x1599
  27516 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI SHA", unicode 0x159A
  27522 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WOODS-CREE THE", unicode 0x159B
  27530 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WOODS-CREE THI", unicode 0x159C
  27538 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WOODS-CREE THO", unicode 0x159D
  27546 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WOODS-CREE THA", unicode 0x159E
  27554 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS WOODS-CREE TH", unicode 0x159F
  27562 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LHI", unicode 0x15A0
  27566 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LHII", unicode 0x15A1
  27570 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LHO", unicode 0x15A2
  27574 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LHOO", unicode 0x15A3
  27579 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LHA", unicode 0x15A4
  27583 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LHAA", unicode 0x15A5
  27588 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS LH", unicode 0x15A6
  27593 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THE", unicode 0x15A7
  27601 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THI", unicode 0x15A8
  27609 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THII", unicode 0x15A9
  27617 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THO", unicode 0x15AA
  27625 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THOO", unicode 0x15AB
  27633 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THA", unicode 0x15AC
  27641 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE THAA", unicode 0x15AD
  27649 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS TH-CREE TH", unicode 0x15AE
  27657 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS AIVILIK B", unicode 0x15AF
  27662 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT E", unicode 0x15B0
  27667 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT I", unicode 0x15B1
  27673 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT O", unicode 0x15B2
  27678 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT A", unicode 0x15B3
  27683 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT WE", unicode 0x15B4
  27689 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT WI", unicode 0x15B5
  27695 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT WO", unicode 0x15B6
  27701 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT WA", unicode 0x15B7
  27707 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT NE", unicode 0x15B8
  27713 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT NI", unicode 0x15B9
  27719 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT NO", unicode 0x15BA
  27725 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT NA", unicode 0x15BB
  27731 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT KE", unicode 0x15BC
  27737 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT KI", unicode 0x15BD
  27743 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT KO", unicode 0x15BE
  27749 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS BLACKFOOT KA", unicode 0x15BF
  27755 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI HE", unicode 0x15C0
  27761 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI HI", unicode 0x15C1
  27767 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI HO", unicode 0x15C2
  27773 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI HA", unicode 0x15C3
  27779 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GHU", unicode 0x15C4
  27785 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GHO", unicode 0x15C5
  27791 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GHE", unicode 0x15C6
  27797 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GHEE", unicode 0x15C7
  27804 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GHI", unicode 0x15C8
  27810 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GHA", unicode 0x15C9
  27816 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER RU", unicode 0x15CA
  27822 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER RO", unicode 0x15CB
  27828 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER RE", unicode 0x15CC
  27834 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER REE", unicode 0x15CD
  27840 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER RI", unicode 0x15CE
  27846 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER RA", unicode 0x15CF
  27852 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER WU", unicode 0x15D0
  27858 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER WO", unicode 0x15D1
  27864 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER WE", unicode 0x15D2
  27870 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER WEE", unicode 0x15D3
  27876 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER WI", unicode 0x15D4
  27882 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER WA", unicode 0x15D5
  27888 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HWU", unicode 0x15D6
  27894 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HWO", unicode 0x15D7
  27900 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HWE", unicode 0x15D8
  27906 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HWEE", unicode 0x15D9
  27913 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HWI", unicode 0x15DA
  27920 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER HWA", unicode 0x15DB
  27927 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER THU", unicode 0x15DC
  27933 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER THO", unicode 0x15DD
  27939 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER THE", unicode 0x15DE
  27945 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER THEE", unicode 0x15DF
  27951 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER THI", unicode 0x15E0
  27957 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER THA", unicode 0x15E1
  27963 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTU", unicode 0x15E2
  27970 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTO", unicode 0x15E3
  27976 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTE", unicode 0x15E4
  27982 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTEE", unicode 0x15E5
  27989 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTI", unicode 0x15E6
  27995 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTA", unicode 0x15E7
  28001 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER PU", unicode 0x15E8
  28007 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER PO", unicode 0x15E9
  28013 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER PE", unicode 0x15EA
  28019 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER PEE", unicode 0x15EB
  28025 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER PI", unicode 0x15EC
  28031 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER PA", unicode 0x15ED
  28037 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER P", unicode 0x15EE
  28043 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GU", unicode 0x15EF
  28049 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GO", unicode 0x15F0
  28055 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GE", unicode 0x15F1
  28061 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GEE", unicode 0x15F2
  28067 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GI", unicode 0x15F3
  28073 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER GA", unicode 0x15F4
  28079 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KHU", unicode 0x15F5
  28086 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KHO", unicode 0x15F6
  28092 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KHE", unicode 0x15F7
  28098 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KHEE", unicode 0x15F8
  28105 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KHI", unicode 0x15F9
  28111 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KHA", unicode 0x15FA
  28117 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KKU", unicode 0x15FB
  28124 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KKO", unicode 0x15FC
  28131 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KKE", unicode 0x15FD
  28138 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KKEE", unicode 0x15FE
  28145 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KKI", unicode 0x15FF
} ;

static const uint32_t gNamePage22 [256] = {
  28151 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KKA", unicode 0x1600
  28157 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER KK", unicode 0x1601
  28163 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NU", unicode 0x1602
  28169 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NO", unicode 0x1603
  28175 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NE", unicode 0x1604
  28181 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NEE", unicode 0x1605
  28187 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NI", unicode 0x1606
  28193 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER NA", unicode 0x1607
  28199 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER MU", unicode 0x1608
  28205 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER MO", unicode 0x1609
  28211 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ME", unicode 0x160A
  28217 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER MEE", unicode 0x160B
  28223 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER MI", unicode 0x160C
  28229 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER MA", unicode 0x160D
  28235 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER YU", unicode 0x160E
  28241 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER YO", unicode 0x160F
  28247 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER YE", unicode 0x1610
  28253 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER YEE", unicode 0x1611
  28259 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER YI", unicode 0x1612
  28264 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER YA", unicode 0x1613
  28270 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JU", unicode 0x1614
  28276 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI JU", unicode 0x1615
  28282 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JO", unicode 0x1616
  28288 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JE", unicode 0x1617
  28294 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JEE", unicode 0x1618
  28300 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JI", unicode 0x1619
  28306 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS SAYISI JI", unicode 0x161A
  28312 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JA", unicode 0x161B
  28318 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JJU", unicode 0x161C
  28324 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JJO", unicode 0x161D
  28330 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JJE", unicode 0x161E
  28336 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JJEE", unicode 0x161F
  28342 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JJI", unicode 0x1620
  28348 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER JJA", unicode 0x1621
  28354 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LU", unicode 0x1622
  28360 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LO", unicode 0x1623
  28366 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LE", unicode 0x1624
  28372 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LEE", unicode 0x1625
  28378 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LI", unicode 0x1626
  28384 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LA", unicode 0x1627
  28390 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DLU", unicode 0x1628
  28396 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DLO", unicode 0x1629
  28402 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DLE", unicode 0x162A
  28409 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DLEE", unicode 0x162B
  28416 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DLI", unicode 0x162C
  28422 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DLA", unicode 0x162D
  28428 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LHU", unicode 0x162E
  28434 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LHO", unicode 0x162F
  28440 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LHE", unicode 0x1630
  28446 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LHEE", unicode 0x1631
  28453 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LHI", unicode 0x1632
  28459 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER LHA", unicode 0x1633
  28465 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLHU", unicode 0x1634
  28472 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLHO", unicode 0x1635
  28478 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLHE", unicode 0x1636
  28484 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLHEE", unicode 0x1637
  28491 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLHI", unicode 0x1638
  28497 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLHA", unicode 0x1639
  28503 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLU", unicode 0x163A
  28509 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLO", unicode 0x163B
  28515 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLE", unicode 0x163C
  28521 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLEE", unicode 0x163D
  28527 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLI", unicode 0x163E
  28533 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TLA", unicode 0x163F
  28539 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ZU", unicode 0x1640
  28545 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ZO", unicode 0x1641
  28551 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ZE", unicode 0x1642
  28557 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ZEE", unicode 0x1643
  28563 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ZI", unicode 0x1644
  28569 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER ZA", unicode 0x1645
  28575 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER Z", unicode 0x1646
  28581 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER INITIAL Z", unicode 0x1647
  28589 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DZU", unicode 0x1648
  28596 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DZO", unicode 0x1649
  28602 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DZE", unicode 0x164A
  28608 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DZEE", unicode 0x164B
  28615 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DZI", unicode 0x164C
  28622 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER DZA", unicode 0x164D
  28628 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SU", unicode 0x164E
  28634 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SO", unicode 0x164F
  28640 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SE", unicode 0x1650
  28646 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SEE", unicode 0x1651
  28652 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SI", unicode 0x1652
  28658 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SA", unicode 0x1653
  28664 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SHU", unicode 0x1654
  28670 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SHO", unicode 0x1655
  28676 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SHE", unicode 0x1656
  28682 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SHEE", unicode 0x1657
  28688 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SHI", unicode 0x1658
  28694 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SHA", unicode 0x1659
  28700 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER SH", unicode 0x165A
  28706 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TSU", unicode 0x165B
  28712 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TSO", unicode 0x165C
  28718 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TSE", unicode 0x165D
  28724 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TSEE", unicode 0x165E
  28730 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TSI", unicode 0x165F
  28736 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TSA", unicode 0x1660
  28742 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER CHU", unicode 0x1661
  28748 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER CHO", unicode 0x1662
  28754 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER CHE", unicode 0x1663
  28760 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER CHEE", unicode 0x1664
  28766 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER CHI", unicode 0x1665
  28772 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER CHA", unicode 0x1666
  28778 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTSU", unicode 0x1667
  28785 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTSO", unicode 0x1668
  28792 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTSE", unicode 0x1669
  28798 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTSEE", unicode 0x166A
  28805 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTSI", unicode 0x166B
  28811 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS CARRIER TTSA", unicode 0x166C
  28818 | (kUnicodeCategory_Po << 27), // "CANADIAN SYLLABICS CHI SIGN", unicode 0x166D
  28823 | (kUnicodeCategory_Po << 27), // "CANADIAN SYLLABICS FULL STOP", unicode 0x166E
  28829 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS QAI", unicode 0x166F
  28833 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NGAI", unicode 0x1670
  28837 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNGI", unicode 0x1671
  28841 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNGII", unicode 0x1672
  28846 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNGO", unicode 0x1673
  28850 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNGOO", unicode 0x1674
  28855 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNGA", unicode 0x1675
  28860 | (kUnicodeCategory_Lo << 27), // "CANADIAN SYLLABICS NNGAA", unicode 0x1676
  0, // undefined code 0x1677
  0, // undefined code 0x1678
  0, // undefined code 0x1679
  0, // undefined code 0x167A
  0, // undefined code 0x167B
  0, // undefined code 0x167C
  0, // undefined code 0x167D
  0, // undefined code 0x167E
  0, // undefined code 0x167F
  28865 | (kUnicodeCategory_Zs << 27), // "OGHAM SPACE MARK", unicode 0x1680
  28870 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER BEITH", unicode 0x1681
  28875 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER LUIS", unicode 0x1682
  28881 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER FEARN", unicode 0x1683
  28887 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER SAIL", unicode 0x1684
  28893 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER NION", unicode 0x1685
  28898 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER UATH", unicode 0x1686
  28904 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER DAIR", unicode 0x1687
  28910 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER TINNE", unicode 0x1688
  28916 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER COLL", unicode 0x1689
  28921 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER CEIRT", unicode 0x168A
  28927 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER MUIN", unicode 0x168B
  28932 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER GORT", unicode 0x168C
  28937 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER NGEADAL", unicode 0x168D
  28943 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER STRAIF", unicode 0x168E
  28949 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER RUIS", unicode 0x168F
  28955 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER AILM", unicode 0x1690
  28960 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER ONN", unicode 0x1691
  28965 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER UR", unicode 0x1692
  28970 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER EADHADH", unicode 0x1693
  28976 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER IODHADH", unicode 0x1694
  28982 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER EABHADH", unicode 0x1695
  28988 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER OR", unicode 0x1696
  28993 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER UILLEANN", unicode 0x1697
  28999 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER IFIN", unicode 0x1698
  29004 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER EAMHANCHOLL", unicode 0x1699
  29010 | (kUnicodeCategory_Lo << 27), // "OGHAM LETTER PEITH", unicode 0x169A
  29016 | (kUnicodeCategory_Ps << 27), // "OGHAM FEATHER MARK", unicode 0x169B
  29021 | (kUnicodeCategory_Pe << 27), // "OGHAM REVERSED FEATHER MARK", unicode 0x169C
  0, // undefined code 0x169D
  0, // undefined code 0x169E
  0, // undefined code 0x169F
  29028 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER FEHU FEOH FE F", unicode 0x16A0
  29040 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER V", unicode 0x16A1
  29045 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER URUZ UR U", unicode 0x16A2
  29054 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER YR", unicode 0x16A3
  29059 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER Y", unicode 0x16A4
  29064 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER W", unicode 0x16A5
  29069 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER THURISAZ THURS THORN", unicode 0x16A6
  29079 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ETH", unicode 0x16A7
  29084 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ANSUZ A", unicode 0x16A8
  29091 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER OS O", unicode 0x16A9
  29098 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER AC A", unicode 0x16AA
  29104 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER AESC", unicode 0x16AB
  29109 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER LONG-BRANCH-OSS O", unicode 0x16AC
  29119 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-OSS O", unicode 0x16AD
  29129 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER O", unicode 0x16AE
  29133 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER OE", unicode 0x16AF
  29138 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ON", unicode 0x16B0
  29143 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER RAIDO RAD REID R", unicode 0x16B1
  29155 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER KAUNA", unicode 0x16B2
  29161 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER CEN", unicode 0x16B3
  29167 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER KAUN K", unicode 0x16B4
  29175 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER G", unicode 0x16B5
  29180 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ENG", unicode 0x16B6
  29185 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER GEBO GYFU G", unicode 0x16B7
  29196 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER GAR", unicode 0x16B8
  29201 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER WUNJO WYNN W", unicode 0x16B9
  29211 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER HAGLAZ H", unicode 0x16BA
  29219 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER HAEGL H", unicode 0x16BB
  29226 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER LONG-BRANCH-HAGALL H", unicode 0x16BC
  29237 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-HAGALL H", unicode 0x16BD
  29248 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER NAUDIZ NYD NAUD N", unicode 0x16BE
  29259 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-NAUD N", unicode 0x16BF
  29270 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER DOTTED-N", unicode 0x16C0
  29277 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ISAZ IS ISS I", unicode 0x16C1
  29290 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER E", unicode 0x16C2
  29294 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER JERAN J", unicode 0x16C3
  29302 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER GER", unicode 0x16C4
  29308 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER LONG-BRANCH-AR AE", unicode 0x16C5
  29319 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-AR A", unicode 0x16C6
  29329 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER IWAZ EOH", unicode 0x16C7
  29337 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER PERTHO PEORTH P", unicode 0x16C8
  29347 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ALGIZ EOLHX", unicode 0x16C9
  29356 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SOWILO S", unicode 0x16CA
  29364 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SIGEL LONG-BRANCH-SOL S", unicode 0x16CB
  29377 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-SOL S", unicode 0x16CC
  29388 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER C", unicode 0x16CD
  29393 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER Z", unicode 0x16CE
  29398 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER TIWAZ TIR TYR T", unicode 0x16CF
  29409 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-TYR T", unicode 0x16D0
  29420 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER D", unicode 0x16D1
  29425 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER BERKANAN BEORC BJARKAN B", unicode 0x16D2
  29436 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-BJARKAN B", unicode 0x16D3
  29446 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER DOTTED-P", unicode 0x16D4
  29453 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER OPEN-P", unicode 0x16D5
  29460 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER EHWAZ EH E", unicode 0x16D6
  29469 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER MANNAZ MAN M", unicode 0x16D7
  29478 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER LONG-BRANCH-MADR M", unicode 0x16D8
  29489 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-MADR M", unicode 0x16D9
  29500 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER LAUKAZ LAGU LOGR L", unicode 0x16DA
  29514 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER DOTTED-L", unicode 0x16DB
  29521 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER INGWAZ", unicode 0x16DC
  29526 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ING", unicode 0x16DD
  29531 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER DAGAZ DAEG D", unicode 0x16DE
  29541 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER OTHALAN ETHEL O", unicode 0x16DF
  29550 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER EAR", unicode 0x16E0
  29555 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER IOR", unicode 0x16E1
  29561 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER CWEORTH", unicode 0x16E2
  29567 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER CALC", unicode 0x16E3
  29573 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER CEALC", unicode 0x16E4
  29579 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER STAN", unicode 0x16E5
  29584 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER LONG-BRANCH-YR", unicode 0x16E6
  29593 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER SHORT-TWIG-YR", unicode 0x16E7
  29602 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER ICELANDIC-YR", unicode 0x16E8
  29609 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER Q", unicode 0x16E9
  29614 | (kUnicodeCategory_Lo << 27), // "RUNIC LETTER X", unicode 0x16EA
  29619 | (kUnicodeCategory_Po << 27), // "RUNIC SINGLE PUNCTUATION", unicode 0x16EB
  29625 | (kUnicodeCategory_Po << 27), // "RUNIC MULTIPLE PUNCTUATION", unicode 0x16EC
  29631 | (kUnicodeCategory_Po << 27), // "RUNIC CROSS PUNCTUATION", unicode 0x16ED
  29637 | (kUnicodeCategory_Nl << 27), // "RUNIC ARLAUG SYMBOL", unicode 0x16EE
  29643 | (kUnicodeCategory_Nl << 27), // "RUNIC TVIMADUR SYMBOL", unicode 0x16EF
  29649 | (kUnicodeCategory_Nl << 27), // "RUNIC BELGTHOR SYMBOL", unicode 0x16F0
  0, // undefined code 0x16F1
  0, // undefined code 0x16F2
  0, // undefined code 0x16F3
  0, // undefined code 0x16F4
  0, // undefined code 0x16F5
  0, // undefined code 0x16F6
  0, // undefined code 0x16F7
  0, // undefined code 0x16F8
  0, // undefined code 0x16F9
  0, // undefined code 0x16FA
  0, // undefined code 0x16FB
  0, // undefined code 0x16FC
  0, // undefined code 0x16FD
  0, // undefined code 0x16FE
  0, // undefined code 0x16FF
} ;

static const uint32_t gNamePage23 [256] = {
  29654 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER A", unicode 0x1700
  29658 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER I", unicode 0x1701
  29663 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER U", unicode 0x1702
  29667 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER KA", unicode 0x1703
  29672 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER GA", unicode 0x1704
  29677 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER NGA", unicode 0x1705
  29682 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER TA", unicode 0x1706
  29687 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER DA", unicode 0x1707
  29692 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER NA", unicode 0x1708
  29697 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER PA", unicode 0x1709
  29702 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER BA", unicode 0x170A
  29707 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER MA", unicode 0x170B
  29712 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER YA", unicode 0x170C
  0, // undefined code 0x170D
  29717 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER LA", unicode 0x170E
  29722 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER WA", unicode 0x170F
  29727 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER SA", unicode 0x1710
  29732 | (kUnicodeCategory_Lo << 27), // "TAGALOG LETTER HA", unicode 0x1711
  29737 | (kUnicodeCategory_Mn << 27), // "TAGALOG VOWEL SIGN I", unicode 0x1712
  29743 | (kUnicodeCategory_Mn << 27), // "TAGALOG VOWEL SIGN U", unicode 0x1713
  29748 | (kUnicodeCategory_Mn << 27), // "TAGALOG SIGN VIRAMA", unicode 0x1714
  0, // undefined code 0x1715
  0, // undefined code 0x1716
  0, // undefined code 0x1717
  0, // undefined code 0x1718
  0, // undefined code 0x1719
  0, // undefined code 0x171A
  0, // undefined code 0x171B
  0, // undefined code 0x171C
  0, // undefined code 0x171D
  0, // undefined code 0x171E
  0, // undefined code 0x171F
  29753 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER A", unicode 0x1720
  29757 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER I", unicode 0x1721
  29762 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER U", unicode 0x1722
  29766 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER KA", unicode 0x1723
  29771 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER GA", unicode 0x1724
  29776 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER NGA", unicode 0x1725
  29781 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER TA", unicode 0x1726
  29786 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER DA", unicode 0x1727
  29791 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER NA", unicode 0x1728
  29796 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER PA", unicode 0x1729
  29801 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER BA", unicode 0x172A
  29806 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER MA", unicode 0x172B
  29811 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER YA", unicode 0x172C
  29816 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER RA", unicode 0x172D
  29821 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER LA", unicode 0x172E
  29826 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER WA", unicode 0x172F
  29831 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER SA", unicode 0x1730
  29836 | (kUnicodeCategory_Lo << 27), // "HANUNOO LETTER HA", unicode 0x1731
  29841 | (kUnicodeCategory_Mn << 27), // "HANUNOO VOWEL SIGN I", unicode 0x1732
  29847 | (kUnicodeCategory_Mn << 27), // "HANUNOO VOWEL SIGN U", unicode 0x1733
  29852 | (kUnicodeCategory_Mn << 27), // "HANUNOO SIGN PAMUDPOD", unicode 0x1734
  29858 | (kUnicodeCategory_Po << 27), // "PHILIPPINE SINGLE PUNCTUATION", unicode 0x1735
  29864 | (kUnicodeCategory_Po << 27), // "PHILIPPINE DOUBLE PUNCTUATION", unicode 0x1736
  0, // undefined code 0x1737
  0, // undefined code 0x1738
  0, // undefined code 0x1739
  0, // undefined code 0x173A
  0, // undefined code 0x173B
  0, // undefined code 0x173C
  0, // undefined code 0x173D
  0, // undefined code 0x173E
  0, // undefined code 0x173F
  29869 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER A", unicode 0x1740
  29873 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER I", unicode 0x1741
  29878 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER U", unicode 0x1742
  29882 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER KA", unicode 0x1743
  29887 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER GA", unicode 0x1744
  29892 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER NGA", unicode 0x1745
  29897 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER TA", unicode 0x1746
  29902 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER DA", unicode 0x1747
  29907 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER NA", unicode 0x1748
  29912 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER PA", unicode 0x1749
  29917 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER BA", unicode 0x174A
  29922 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER MA", unicode 0x174B
  29927 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER YA", unicode 0x174C
  29932 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER RA", unicode 0x174D
  29937 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER LA", unicode 0x174E
  29942 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER WA", unicode 0x174F
  29947 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER SA", unicode 0x1750
  29952 | (kUnicodeCategory_Lo << 27), // "BUHID LETTER HA", unicode 0x1751
  29957 | (kUnicodeCategory_Mn << 27), // "BUHID VOWEL SIGN I", unicode 0x1752
  29963 | (kUnicodeCategory_Mn << 27), // "BUHID VOWEL SIGN U", unicode 0x1753
  0, // undefined code 0x1754
  0, // undefined code 0x1755
  0, // undefined code 0x1756
  0, // undefined code 0x1757
  0, // undefined code 0x1758
  0, // undefined code 0x1759
  0, // undefined code 0x175A
  0, // undefined code 0x175B
  0, // undefined code 0x175C
  0, // undefined code 0x175D
  0, // undefined code 0x175E
  0, // undefined code 0x175F
  29968 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER A", unicode 0x1760
  29972 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER I", unicode 0x1761
  29977 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER U", unicode 0x1762
  29981 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER KA", unicode 0x1763
  29986 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER GA", unicode 0x1764
  29991 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER NGA", unicode 0x1765
  29996 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER TA", unicode 0x1766
  30001 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER DA", unicode 0x1767
  30006 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER NA", unicode 0x1768
  30011 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER PA", unicode 0x1769
  30016 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER BA", unicode 0x176A
  30021 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER MA", unicode 0x176B
  30026 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER YA", unicode 0x176C
  0, // undefined code 0x176D
  30031 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER LA", unicode 0x176E
  30036 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER WA", unicode 0x176F
  30041 | (kUnicodeCategory_Lo << 27), // "TAGBANWA LETTER SA", unicode 0x1770
  0, // undefined code 0x1771
  30046 | (kUnicodeCategory_Mn << 27), // "TAGBANWA VOWEL SIGN I", unicode 0x1772
  30052 | (kUnicodeCategory_Mn << 27), // "TAGBANWA VOWEL SIGN U", unicode 0x1773
  0, // undefined code 0x1774
  0, // undefined code 0x1775
  0, // undefined code 0x1776
  0, // undefined code 0x1777
  0, // undefined code 0x1778
  0, // undefined code 0x1779
  0, // undefined code 0x177A
  0, // undefined code 0x177B
  0, // undefined code 0x177C
  0, // undefined code 0x177D
  0, // undefined code 0x177E
  0, // undefined code 0x177F
  30057 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER KA", unicode 0x1780
  30062 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER KHA", unicode 0x1781
  30067 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER KO", unicode 0x1782
  30072 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER KHO", unicode 0x1783
  30077 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER NGO", unicode 0x1784
  30082 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER CA", unicode 0x1785
  30087 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER CHA", unicode 0x1786
  30092 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER CO", unicode 0x1787
  30097 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER CHO", unicode 0x1788
  30102 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER NYO", unicode 0x1789
  30107 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER DA", unicode 0x178A
  30112 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER TTHA", unicode 0x178B
  30117 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER DO", unicode 0x178C
  30122 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER TTHO", unicode 0x178D
  30127 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER NNO", unicode 0x178E
  30132 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER TA", unicode 0x178F
  30137 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER THA", unicode 0x1790
  30142 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER TO", unicode 0x1791
  30147 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER THO", unicode 0x1792
  30152 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER NO", unicode 0x1793
  30157 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER BA", unicode 0x1794
  30162 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER PHA", unicode 0x1795
  30167 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER PO", unicode 0x1796
  30172 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER PHO", unicode 0x1797
  30177 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER MO", unicode 0x1798
  30182 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER YO", unicode 0x1799
  30187 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER RO", unicode 0x179A
  30192 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER LO", unicode 0x179B
  30197 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER VO", unicode 0x179C
  30202 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER SHA", unicode 0x179D
  30207 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER SSO", unicode 0x179E
  30212 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER SA", unicode 0x179F
  30217 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER HA", unicode 0x17A0
  30222 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER LA", unicode 0x17A1
  30227 | (kUnicodeCategory_Lo << 27), // "KHMER LETTER QA", unicode 0x17A2
  30232 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QAQ", unicode 0x17A3
  30240 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QAA", unicode 0x17A4
  30247 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QI", unicode 0x17A5
  30254 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QII", unicode 0x17A6
  30261 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QU", unicode 0x17A7
  30268 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QUK", unicode 0x17A8
  30276 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QUU", unicode 0x17A9
  30283 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QUUV", unicode 0x17AA
  30291 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL RY", unicode 0x17AB
  30298 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL RYY", unicode 0x17AC
  30306 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL LY", unicode 0x17AD
  30313 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL LYY", unicode 0x17AE
  30321 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QE", unicode 0x17AF
  30328 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QAI", unicode 0x17B0
  30335 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QOO TYPE ONE", unicode 0x17B1
  30346 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QOO TYPE TWO", unicode 0x17B2
  30357 | (kUnicodeCategory_Lo << 27), // "KHMER INDEPENDENT VOWEL QAU", unicode 0x17B3
  30365 | (kUnicodeCategory_Cf << 27), // "KHMER VOWEL INHERENT AQ", unicode 0x17B4
  30373 | (kUnicodeCategory_Cf << 27), // "KHMER VOWEL INHERENT AA", unicode 0x17B5
  30380 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN AA", unicode 0x17B6
  30386 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN I", unicode 0x17B7
  30392 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN II", unicode 0x17B8
  30398 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN Y", unicode 0x17B9
  30404 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN YY", unicode 0x17BA
  30410 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN U", unicode 0x17BB
  30415 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN UU", unicode 0x17BC
  30421 | (kUnicodeCategory_Mn << 27), // "KHMER VOWEL SIGN UA", unicode 0x17BD
  30427 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN OE", unicode 0x17BE
  30433 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN YA", unicode 0x17BF
  30439 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN IE", unicode 0x17C0
  30445 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN E", unicode 0x17C1
  30450 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN AE", unicode 0x17C2
  30456 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN AI", unicode 0x17C3
  30462 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN OO", unicode 0x17C4
  30468 | (kUnicodeCategory_Mc << 27), // "KHMER VOWEL SIGN AU", unicode 0x17C5
  30474 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN NIKAHIT", unicode 0x17C6
  30480 | (kUnicodeCategory_Mc << 27), // "KHMER SIGN REAHMUK", unicode 0x17C7
  30486 | (kUnicodeCategory_Mc << 27), // "KHMER SIGN YUUKALEAPINTU", unicode 0x17C8
  30492 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN MUUSIKATOAN", unicode 0x17C9
  30498 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN TRIISAP", unicode 0x17CA
  30504 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN BANTOC", unicode 0x17CB
  30510 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN ROBAT", unicode 0x17CC
  30515 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN TOANDAKHIAT", unicode 0x17CD
  30521 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN KAKABAT", unicode 0x17CE
  30527 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN AHSDA", unicode 0x17CF
  30532 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN SAMYOK SANNYA", unicode 0x17D0
  30541 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN VIRIAM", unicode 0x17D1
  30547 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN COENG", unicode 0x17D2
  30552 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN BATHAMASAT", unicode 0x17D3
  30557 | (kUnicodeCategory_Po << 27), // "KHMER SIGN KHAN", unicode 0x17D4
  30563 | (kUnicodeCategory_Po << 27), // "KHMER SIGN BARIYOOSAN", unicode 0x17D5
  30569 | (kUnicodeCategory_Po << 27), // "KHMER SIGN CAMNUC PII KUUH", unicode 0x17D6
  30579 | (kUnicodeCategory_Lm << 27), // "KHMER SIGN LEK TOO", unicode 0x17D7
  30586 | (kUnicodeCategory_Po << 27), // "KHMER SIGN BEYYAL", unicode 0x17D8
  30591 | (kUnicodeCategory_Po << 27), // "KHMER SIGN PHNAEK MUAN", unicode 0x17D9
  30599 | (kUnicodeCategory_Po << 27), // "KHMER SIGN KOOMUUT", unicode 0x17DA
  30605 | (kUnicodeCategory_Sc << 27), // "KHMER CURRENCY SYMBOL RIEL", unicode 0x17DB
  30613 | (kUnicodeCategory_Lo << 27), // "KHMER SIGN AVAKRAHASANYA", unicode 0x17DC
  30619 | (kUnicodeCategory_Mn << 27), // "KHMER SIGN ATTHACAN", unicode 0x17DD
  0, // undefined code 0x17DE
  0, // undefined code 0x17DF
  30624 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT ZERO", unicode 0x17E0
  30629 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT ONE", unicode 0x17E1
  30634 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT TWO", unicode 0x17E2
  30639 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT THREE", unicode 0x17E3
  30644 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT FOUR", unicode 0x17E4
  30649 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT FIVE", unicode 0x17E5
  30654 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT SIX", unicode 0x17E6
  30659 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT SEVEN", unicode 0x17E7
  30664 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT EIGHT", unicode 0x17E8
  30669 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "KHMER DIGIT NINE", unicode 0x17E9
  0, // undefined code 0x17EA
  0, // undefined code 0x17EB
  0, // undefined code 0x17EC
  0, // undefined code 0x17ED
  0, // undefined code 0x17EE
  0, // undefined code 0x17EF
  30674 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK SON", unicode 0x17F0
  30683 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK MUOY", unicode 0x17F1
  30692 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK PII", unicode 0x17F2
  30701 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK BEI", unicode 0x17F3
  30710 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK BUON", unicode 0x17F4
  30719 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK PRAM", unicode 0x17F5
  30728 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK PRAM-MUOY", unicode 0x17F6
  30739 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK PRAM-PII", unicode 0x17F7
  30750 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK PRAM-BEI", unicode 0x17F8
  30761 | (kUnicodeCategory_No << 27), // "KHMER SYMBOL LEK ATTAK PRAM-BUON", unicode 0x17F9
  0, // undefined code 0x17FA
  0, // undefined code 0x17FB
  0, // undefined code 0x17FC
  0, // undefined code 0x17FD
  0, // undefined code 0x17FE
  0, // undefined code 0x17FF
} ;

static const uint32_t gNamePage24 [256] = {
  30772 | (kUnicodeCategory_Po << 27), // "MONGOLIAN BIRGA", unicode 0x1800
  30777 | (kUnicodeCategory_Po << 27), // "MONGOLIAN ELLIPSIS", unicode 0x1801
  30781 | (kUnicodeCategory_Po << 27), // "MONGOLIAN COMMA", unicode 0x1802
  30785 | (kUnicodeCategory_Po << 27), // "MONGOLIAN FULL STOP", unicode 0x1803
  30791 | (kUnicodeCategory_Po << 27), // "MONGOLIAN COLON", unicode 0x1804
  30795 | (kUnicodeCategory_Po << 27), // "MONGOLIAN FOUR DOTS", unicode 0x1805
  30800 | (kUnicodeCategory_Pd << 27), // "MONGOLIAN TODO SOFT HYPHEN", unicode 0x1806
  30808 | (kUnicodeCategory_Po << 27), // "MONGOLIAN SIBE SYLLABLE BOUNDARY MARKER", unicode 0x1807
  30817 | (kUnicodeCategory_Po << 27), // "MONGOLIAN MANCHU COMMA", unicode 0x1808
  30823 | (kUnicodeCategory_Po << 27), // "MONGOLIAN MANCHU FULL STOP", unicode 0x1809
  30831 | (kUnicodeCategory_Po << 27), // "MONGOLIAN NIRUGU", unicode 0x180A
  30836 | (kUnicodeCategory_Mn << 27), // "MONGOLIAN FREE VARIATION SELECTOR ONE", unicode 0x180B
  30844 | (kUnicodeCategory_Mn << 27), // "MONGOLIAN FREE VARIATION SELECTOR TWO", unicode 0x180C
  30852 | (kUnicodeCategory_Mn << 27), // "MONGOLIAN FREE VARIATION SELECTOR THREE", unicode 0x180D
  30860 | (kUnicodeCategory_Zs << 27), // "MONGOLIAN VOWEL SEPARATOR", unicode 0x180E
  0, // undefined code 0x180F
  30865 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT ZERO", unicode 0x1810
  30870 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT ONE", unicode 0x1811
  30875 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT TWO", unicode 0x1812
  30880 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT THREE", unicode 0x1813
  30885 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT FOUR", unicode 0x1814
  30890 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT FIVE", unicode 0x1815
  30895 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT SIX", unicode 0x1816
  30900 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT SEVEN", unicode 0x1817
  30905 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT EIGHT", unicode 0x1818
  30910 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "MONGOLIAN DIGIT NINE", unicode 0x1819
  0, // undefined code 0x181A
  0, // undefined code 0x181B
  0, // undefined code 0x181C
  0, // undefined code 0x181D
  0, // undefined code 0x181E
  0, // undefined code 0x181F
  30915 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER A", unicode 0x1820
  30919 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER E", unicode 0x1821
  30923 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER I", unicode 0x1822
  30928 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER O", unicode 0x1823
  30932 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER U", unicode 0x1824
  30936 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER OE", unicode 0x1825
  30941 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER UE", unicode 0x1826
  30946 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER EE", unicode 0x1827
  30951 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER NA", unicode 0x1828
  30956 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ANG", unicode 0x1829
  30961 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER BA", unicode 0x182A
  30966 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER PA", unicode 0x182B
  30971 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER QA", unicode 0x182C
  30976 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER GA", unicode 0x182D
  30981 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MA", unicode 0x182E
  30986 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER LA", unicode 0x182F
  30991 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SA", unicode 0x1830
  30996 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SHA", unicode 0x1831
  31001 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TA", unicode 0x1832
  31006 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER DA", unicode 0x1833
  31011 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER CHA", unicode 0x1834
  31016 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER JA", unicode 0x1835
  31021 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER YA", unicode 0x1836
  31026 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER RA", unicode 0x1837
  31031 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER WA", unicode 0x1838
  31036 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER FA", unicode 0x1839
  31041 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER KA", unicode 0x183A
  31046 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER KHA", unicode 0x183B
  31051 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TSA", unicode 0x183C
  31056 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ZA", unicode 0x183D
  31061 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER HAA", unicode 0x183E
  31066 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ZRA", unicode 0x183F
  31072 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER LHA", unicode 0x1840
  31077 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ZHI", unicode 0x1841
  31082 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER CHI", unicode 0x1842
  31087 | (kUnicodeCategory_Lm << 27), // "MONGOLIAN LETTER TODO LONG VOWEL SIGN", unicode 0x1843
  31096 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO E", unicode 0x1844
  31102 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO I", unicode 0x1845
  31109 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO O", unicode 0x1846
  31115 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO U", unicode 0x1847
  31121 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO OE", unicode 0x1848
  31128 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO UE", unicode 0x1849
  31135 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO ANG", unicode 0x184A
  31142 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO BA", unicode 0x184B
  31149 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO PA", unicode 0x184C
  31156 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO QA", unicode 0x184D
  31163 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO GA", unicode 0x184E
  31170 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO MA", unicode 0x184F
  31177 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO TA", unicode 0x1850
  31184 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO DA", unicode 0x1851
  31191 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO CHA", unicode 0x1852
  31198 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO JA", unicode 0x1853
  31205 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO TSA", unicode 0x1854
  31212 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO YA", unicode 0x1855
  31219 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO WA", unicode 0x1856
  31226 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO KA", unicode 0x1857
  31233 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO GAA", unicode 0x1858
  31240 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO HAA", unicode 0x1859
  31247 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO JIA", unicode 0x185A
  31255 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO NIA", unicode 0x185B
  31263 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO DZA", unicode 0x185C
  31270 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE E", unicode 0x185D
  31276 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE I", unicode 0x185E
  31283 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE IY", unicode 0x185F
  31290 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE UE", unicode 0x1860
  31297 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE U", unicode 0x1861
  31303 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE ANG", unicode 0x1862
  31310 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE KA", unicode 0x1863
  31317 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE GA", unicode 0x1864
  31324 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE HA", unicode 0x1865
  31331 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE PA", unicode 0x1866
  31338 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE SHA", unicode 0x1867
  31345 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE TA", unicode 0x1868
  31352 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE DA", unicode 0x1869
  31359 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE JA", unicode 0x186A
  31366 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE FA", unicode 0x186B
  31373 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE GAA", unicode 0x186C
  31380 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE HAA", unicode 0x186D
  31387 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE TSA", unicode 0x186E
  31394 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE ZA", unicode 0x186F
  31401 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE RAA", unicode 0x1870
  31408 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE CHA", unicode 0x1871
  31415 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER SIBE ZHA", unicode 0x1872
  31422 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU I", unicode 0x1873
  31429 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU KA", unicode 0x1874
  31436 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU RA", unicode 0x1875
  31443 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU FA", unicode 0x1876
  31450 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ZHA", unicode 0x1877
  0, // undefined code 0x1878
  0, // undefined code 0x1879
  0, // undefined code 0x187A
  0, // undefined code 0x187B
  0, // undefined code 0x187C
  0, // undefined code 0x187D
  0, // undefined code 0x187E
  0, // undefined code 0x187F
  31457 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI ANUSVARA ONE", unicode 0x1880
  31468 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI VISARGA ONE", unicode 0x1881
  31479 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI DAMARU", unicode 0x1882
  31488 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI UBADAMA", unicode 0x1883
  31497 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI INVERTED UBADAMA", unicode 0x1884
  31508 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI BALUDA", unicode 0x1885
  31517 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI THREE BALUDA", unicode 0x1886
  31528 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI A", unicode 0x1887
  31536 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI I", unicode 0x1888
  31545 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI KA", unicode 0x1889
  31554 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI NGA", unicode 0x188A
  31563 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI CA", unicode 0x188B
  31572 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI TTA", unicode 0x188C
  31581 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI TTHA", unicode 0x188D
  31590 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI DDA", unicode 0x188E
  31599 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI NNA", unicode 0x188F
  31608 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI TA", unicode 0x1890
  31617 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI DA", unicode 0x1891
  31626 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI PA", unicode 0x1892
  31635 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI PHA", unicode 0x1893
  31644 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI SSA", unicode 0x1894
  31653 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI ZHA", unicode 0x1895
  31662 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI ZA", unicode 0x1896
  31671 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI AH", unicode 0x1897
  31680 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO ALI GALI TA", unicode 0x1898
  31691 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER TODO ALI GALI ZHA", unicode 0x1899
  31702 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI GHA", unicode 0x189A
  31713 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI NGA", unicode 0x189B
  31724 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI CA", unicode 0x189C
  31735 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI JHA", unicode 0x189D
  31746 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI TTA", unicode 0x189E
  31757 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI DDHA", unicode 0x189F
  31768 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI TA", unicode 0x18A0
  31779 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI DHA", unicode 0x18A1
  31790 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI SSA", unicode 0x18A2
  31801 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI CYA", unicode 0x18A3
  31813 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI ZHA", unicode 0x18A4
  31824 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI ZA", unicode 0x18A5
  31835 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI HALF U", unicode 0x18A6
  31845 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER ALI GALI HALF YA", unicode 0x18A7
  31856 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI BHA", unicode 0x18A8
  31867 | (kUnicodeCategory_Mn << 27), // "MONGOLIAN LETTER ALI GALI DAGALGA", unicode 0x18A9
  31877 | (kUnicodeCategory_Lo << 27), // "MONGOLIAN LETTER MANCHU ALI GALI LHA", unicode 0x18AA
  0, // undefined code 0x18AB
  0, // undefined code 0x18AC
  0, // undefined code 0x18AD
  0, // undefined code 0x18AE
  0, // undefined code 0x18AF
  0, // undefined code 0x18B0
  0, // undefined code 0x18B1
  0, // undefined code 0x18B2
  0, // undefined code 0x18B3
  0, // undefined code 0x18B4
  0, // undefined code 0x18B5
  0, // undefined code 0x18B6
  0, // undefined code 0x18B7
  0, // undefined code 0x18B8
  0, // undefined code 0x18B9
  0, // undefined code 0x18BA
  0, // undefined code 0x18BB
  0, // undefined code 0x18BC
  0, // undefined code 0x18BD
  0, // undefined code 0x18BE
  0, // undefined code 0x18BF
  0, // undefined code 0x18C0
  0, // undefined code 0x18C1
  0, // undefined code 0x18C2
  0, // undefined code 0x18C3
  0, // undefined code 0x18C4
  0, // undefined code 0x18C5
  0, // undefined code 0x18C6
  0, // undefined code 0x18C7
  0, // undefined code 0x18C8
  0, // undefined code 0x18C9
  0, // undefined code 0x18CA
  0, // undefined code 0x18CB
  0, // undefined code 0x18CC
  0, // undefined code 0x18CD
  0, // undefined code 0x18CE
  0, // undefined code 0x18CF
  0, // undefined code 0x18D0
  0, // undefined code 0x18D1
  0, // undefined code 0x18D2
  0, // undefined code 0x18D3
  0, // undefined code 0x18D4
  0, // undefined code 0x18D5
  0, // undefined code 0x18D6
  0, // undefined code 0x18D7
  0, // undefined code 0x18D8
  0, // undefined code 0x18D9
  0, // undefined code 0x18DA
  0, // undefined code 0x18DB
  0, // undefined code 0x18DC
  0, // undefined code 0x18DD
  0, // undefined code 0x18DE
  0, // undefined code 0x18DF
  0, // undefined code 0x18E0
  0, // undefined code 0x18E1
  0, // undefined code 0x18E2
  0, // undefined code 0x18E3
  0, // undefined code 0x18E4
  0, // undefined code 0x18E5
  0, // undefined code 0x18E6
  0, // undefined code 0x18E7
  0, // undefined code 0x18E8
  0, // undefined code 0x18E9
  0, // undefined code 0x18EA
  0, // undefined code 0x18EB
  0, // undefined code 0x18EC
  0, // undefined code 0x18ED
  0, // undefined code 0x18EE
  0, // undefined code 0x18EF
  0, // undefined code 0x18F0
  0, // undefined code 0x18F1
  0, // undefined code 0x18F2
  0, // undefined code 0x18F3
  0, // undefined code 0x18F4
  0, // undefined code 0x18F5
  0, // undefined code 0x18F6
  0, // undefined code 0x18F7
  0, // undefined code 0x18F8
  0, // undefined code 0x18F9
  0, // undefined code 0x18FA
  0, // undefined code 0x18FB
  0, // undefined code 0x18FC
  0, // undefined code 0x18FD
  0, // undefined code 0x18FE
  0, // undefined code 0x18FF
} ;

static const uint32_t gNamePage25 [256] = {
  31888 | (kUnicodeCategory_Lo << 27), // "LIMBU VOWEL-CARRIER LETTER", unicode 0x1900
  31894 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER KA", unicode 0x1901
  31899 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER KHA", unicode 0x1902
  31904 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER GA", unicode 0x1903
  31909 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER GHA", unicode 0x1904
  31914 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER NGA", unicode 0x1905
  31919 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER CA", unicode 0x1906
  31924 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER CHA", unicode 0x1907
  31929 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER JA", unicode 0x1908
  31934 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER JHA", unicode 0x1909
  31939 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER YAN", unicode 0x190A
  31944 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER TA", unicode 0x190B
  31949 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER THA", unicode 0x190C
  31954 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER DA", unicode 0x190D
  31959 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER DHA", unicode 0x190E
  31964 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER NA", unicode 0x190F
  31969 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER PA", unicode 0x1910
  31974 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER PHA", unicode 0x1911
  31979 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER BA", unicode 0x1912
  31984 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER BHA", unicode 0x1913
  31989 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER MA", unicode 0x1914
  31994 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER YA", unicode 0x1915
  31999 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER RA", unicode 0x1916
  32004 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER LA", unicode 0x1917
  32009 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER WA", unicode 0x1918
  32014 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER SHA", unicode 0x1919
  32019 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER SSA", unicode 0x191A
  32024 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER SA", unicode 0x191B
  32029 | (kUnicodeCategory_Lo << 27), // "LIMBU LETTER HA", unicode 0x191C
  0, // undefined code 0x191D
  0, // undefined code 0x191E
  0, // undefined code 0x191F
  32034 | (kUnicodeCategory_Mn << 27), // "LIMBU VOWEL SIGN A", unicode 0x1920
  32039 | (kUnicodeCategory_Mn << 27), // "LIMBU VOWEL SIGN I", unicode 0x1921
  32045 | (kUnicodeCategory_Mn << 27), // "LIMBU VOWEL SIGN U", unicode 0x1922
  32050 | (kUnicodeCategory_Mc << 27), // "LIMBU VOWEL SIGN EE", unicode 0x1923
  32056 | (kUnicodeCategory_Mc << 27), // "LIMBU VOWEL SIGN AI", unicode 0x1924
  32062 | (kUnicodeCategory_Mc << 27), // "LIMBU VOWEL SIGN OO", unicode 0x1925
  32068 | (kUnicodeCategory_Mc << 27), // "LIMBU VOWEL SIGN AU", unicode 0x1926
  32074 | (kUnicodeCategory_Mn << 27), // "LIMBU VOWEL SIGN E", unicode 0x1927
  32079 | (kUnicodeCategory_Mn << 27), // "LIMBU VOWEL SIGN O", unicode 0x1928
  32084 | (kUnicodeCategory_Mc << 27), // "LIMBU SUBJOINED LETTER YA", unicode 0x1929
  32091 | (kUnicodeCategory_Mc << 27), // "LIMBU SUBJOINED LETTER RA", unicode 0x192A
  32098 | (kUnicodeCategory_Mc << 27), // "LIMBU SUBJOINED LETTER WA", unicode 0x192B
  0, // undefined code 0x192C
  0, // undefined code 0x192D
  0, // undefined code 0x192E
  0, // undefined code 0x192F
  32105 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER KA", unicode 0x1930
  32111 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER NGA", unicode 0x1931
  32117 | (kUnicodeCategory_Mn << 27), // "LIMBU SMALL LETTER ANUSVARA", unicode 0x1932
  32123 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER TA", unicode 0x1933
  32129 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER NA", unicode 0x1934
  32135 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER PA", unicode 0x1935
  32141 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER MA", unicode 0x1936
  32147 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER RA", unicode 0x1937
  32153 | (kUnicodeCategory_Mc << 27), // "LIMBU SMALL LETTER LA", unicode 0x1938
  32159 | (kUnicodeCategory_Mn << 27), // "LIMBU SIGN MUKPHRENG", unicode 0x1939
  32165 | (kUnicodeCategory_Mn << 27), // "LIMBU SIGN KEMPHRENG", unicode 0x193A
  32170 | (kUnicodeCategory_Mn << 27), // "LIMBU SIGN SA-I", unicode 0x193B
  0, // undefined code 0x193C
  0, // undefined code 0x193D
  0, // undefined code 0x193E
  0, // undefined code 0x193F
  32177 | (kUnicodeCategory_So << 27), // "LIMBU SIGN LOO", unicode 0x1940
  0, // undefined code 0x1941
  0, // undefined code 0x1942
  0, // undefined code 0x1943
  32182 | (kUnicodeCategory_Po << 27), // "LIMBU EXCLAMATION MARK", unicode 0x1944
  32187 | (kUnicodeCategory_Po << 27), // "LIMBU QUESTION MARK", unicode 0x1945
  32192 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT ZERO", unicode 0x1946
  32197 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT ONE", unicode 0x1947
  32202 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT TWO", unicode 0x1948
  32207 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT THREE", unicode 0x1949
  32212 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT FOUR", unicode 0x194A
  32217 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT FIVE", unicode 0x194B
  32222 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT SIX", unicode 0x194C
  32227 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT SEVEN", unicode 0x194D
  32232 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT EIGHT", unicode 0x194E
  32237 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "LIMBU DIGIT NINE", unicode 0x194F
  32242 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER KA", unicode 0x1950
  32249 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER XA", unicode 0x1951
  32256 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER NGA", unicode 0x1952
  32263 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TSA", unicode 0x1953
  32270 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER SA", unicode 0x1954
  32277 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER YA", unicode 0x1955
  32284 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TA", unicode 0x1956
  32291 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER THA", unicode 0x1957
  32298 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER LA", unicode 0x1958
  32305 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER PA", unicode 0x1959
  32312 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER PHA", unicode 0x195A
  32319 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER MA", unicode 0x195B
  32326 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER FA", unicode 0x195C
  32333 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER VA", unicode 0x195D
  32340 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER HA", unicode 0x195E
  32347 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER QA", unicode 0x195F
  32354 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER KHA", unicode 0x1960
  32361 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TSHA", unicode 0x1961
  32368 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER NA", unicode 0x1962
  32375 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER A", unicode 0x1963
  32381 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER I", unicode 0x1964
  32388 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER EE", unicode 0x1965
  32395 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER EH", unicode 0x1966
  32402 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER U", unicode 0x1967
  32408 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER OO", unicode 0x1968
  32415 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER O", unicode 0x1969
  32421 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER UE", unicode 0x196A
  32428 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER E", unicode 0x196B
  32434 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER AUE", unicode 0x196C
  32441 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER AI", unicode 0x196D
  0, // undefined code 0x196E
  0, // undefined code 0x196F
  32448 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TONE-2", unicode 0x1970
  32457 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TONE-3", unicode 0x1971
  32466 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TONE-4", unicode 0x1972
  32475 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TONE-5", unicode 0x1973
  32484 | (kUnicodeCategory_Lo << 27), // "TAI LE LETTER TONE-6", unicode 0x1974
  0, // undefined code 0x1975
  0, // undefined code 0x1976
  0, // undefined code 0x1977
  0, // undefined code 0x1978
  0, // undefined code 0x1979
  0, // undefined code 0x197A
  0, // undefined code 0x197B
  0, // undefined code 0x197C
  0, // undefined code 0x197D
  0, // undefined code 0x197E
  0, // undefined code 0x197F
  32493 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH QA", unicode 0x1980
  32504 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW QA", unicode 0x1981
  32515 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH KA", unicode 0x1982
  32526 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH XA", unicode 0x1983
  32537 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH NGA", unicode 0x1984
  32548 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW KA", unicode 0x1985
  32559 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW XA", unicode 0x1986
  32570 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW NGA", unicode 0x1987
  32581 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH TSA", unicode 0x1988
  32592 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH SA", unicode 0x1989
  32603 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH YA", unicode 0x198A
  32614 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW TSA", unicode 0x198B
  32625 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW SA", unicode 0x198C
  32636 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW YA", unicode 0x198D
  32647 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH TA", unicode 0x198E
  32658 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH THA", unicode 0x198F
  32669 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH NA", unicode 0x1990
  32680 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW TA", unicode 0x1991
  32691 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW THA", unicode 0x1992
  32702 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW NA", unicode 0x1993
  32713 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH PA", unicode 0x1994
  32724 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH PHA", unicode 0x1995
  32735 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH MA", unicode 0x1996
  32746 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW PA", unicode 0x1997
  32757 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW PHA", unicode 0x1998
  32768 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW MA", unicode 0x1999
  32779 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH FA", unicode 0x199A
  32790 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH VA", unicode 0x199B
  32801 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH LA", unicode 0x199C
  32812 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW FA", unicode 0x199D
  32823 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW VA", unicode 0x199E
  32834 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW LA", unicode 0x199F
  32845 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH HA", unicode 0x19A0
  32856 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH DA", unicode 0x19A1
  32867 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH BA", unicode 0x19A2
  32878 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW HA", unicode 0x19A3
  32889 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW DA", unicode 0x19A4
  32900 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW BA", unicode 0x19A5
  32911 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH KVA", unicode 0x19A6
  32922 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER HIGH XVA", unicode 0x19A7
  32933 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW KVA", unicode 0x19A8
  32944 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER LOW XVA", unicode 0x19A9
  0, // undefined code 0x19AA
  0, // undefined code 0x19AB
  0, // undefined code 0x19AC
  0, // undefined code 0x19AD
  0, // undefined code 0x19AE
  0, // undefined code 0x19AF
  32955 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN VOWEL SHORTENER", unicode 0x19B0
  32967 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN AA", unicode 0x19B1
  32977 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN II", unicode 0x19B2
  32987 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN U", unicode 0x19B3
  32996 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN UU", unicode 0x19B4
  33006 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN E", unicode 0x19B5
  33015 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN AE", unicode 0x19B6
  33025 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN O", unicode 0x19B7
  33034 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN OA", unicode 0x19B8
  33044 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN UE", unicode 0x19B9
  33054 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN AY", unicode 0x19BA
  33064 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN AAY", unicode 0x19BB
  33074 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN UY", unicode 0x19BC
  33084 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN OY", unicode 0x19BD
  33095 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN OAY", unicode 0x19BE
  33105 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN UEY", unicode 0x19BF
  33116 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE VOWEL SIGN IY", unicode 0x19C0
  33126 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL V", unicode 0x19C1
  33136 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL NG", unicode 0x19C2
  33146 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL N", unicode 0x19C3
  33156 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL M", unicode 0x19C4
  33166 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL K", unicode 0x19C5
  33176 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL D", unicode 0x19C6
  33186 | (kUnicodeCategory_Lo << 27), // "NEW TAI LUE LETTER FINAL B", unicode 0x19C7
  33195 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE TONE MARK-1", unicode 0x19C8
  33206 | (kUnicodeCategory_Mc << 27), // "NEW TAI LUE TONE MARK-2", unicode 0x19C9
  0, // undefined code 0x19CA
  0, // undefined code 0x19CB
  0, // undefined code 0x19CC
  0, // undefined code 0x19CD
  0, // undefined code 0x19CE
  0, // undefined code 0x19CF
  33217 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT ZERO", unicode 0x19D0
  33226 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT ONE", unicode 0x19D1
  33235 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT TWO", unicode 0x19D2
  33244 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT THREE", unicode 0x19D3
  33253 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT FOUR", unicode 0x19D4
  33262 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT FIVE", unicode 0x19D5
  33271 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT SIX", unicode 0x19D6
  33280 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT SEVEN", unicode 0x19D7
  33289 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT EIGHT", unicode 0x19D8
  33298 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "NEW TAI LUE DIGIT NINE", unicode 0x19D9
  0, // undefined code 0x19DA
  0, // undefined code 0x19DB
  0, // undefined code 0x19DC
  0, // undefined code 0x19DD
  33307 | (kUnicodeCategory_Po << 27), // "NEW TAI LUE SIGN LAE", unicode 0x19DE
  33317 | (kUnicodeCategory_Po << 27), // "NEW TAI LUE SIGN LAEV", unicode 0x19DF
  33326 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PATHAMASAT", unicode 0x19E0
  33331 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL MUOY KOET", unicode 0x19E1
  33338 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PII KOET", unicode 0x19E2
  33345 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL BEI KOET", unicode 0x19E3
  33352 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL BUON KOET", unicode 0x19E4
  33359 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM KOET", unicode 0x19E5
  33366 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-MUOY KOET", unicode 0x19E6
  33375 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-PII KOET", unicode 0x19E7
  33384 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-BEI KOET", unicode 0x19E8
  33393 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-BUON KOET", unicode 0x19E9
  33402 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP KOET", unicode 0x19EA
  33409 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-MUOY KOET", unicode 0x19EB
  33418 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-PII KOET", unicode 0x19EC
  33427 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-BEI KOET", unicode 0x19ED
  33436 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-BUON KOET", unicode 0x19EE
  33445 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-PRAM KOET", unicode 0x19EF
  33454 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL TUTEYASAT", unicode 0x19F0
  33460 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL MUOY ROC", unicode 0x19F1
  33467 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PII ROC", unicode 0x19F2
  33474 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL BEI ROC", unicode 0x19F3
  33481 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL BUON ROC", unicode 0x19F4
  33488 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM ROC", unicode 0x19F5
  33495 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-MUOY ROC", unicode 0x19F6
  33504 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-PII ROC", unicode 0x19F7
  33513 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-BEI ROC", unicode 0x19F8
  33522 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL PRAM-BUON ROC", unicode 0x19F9
  33531 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP ROC", unicode 0x19FA
  33538 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-MUOY ROC", unicode 0x19FB
  33547 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-PII ROC", unicode 0x19FC
  33556 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-BEI ROC", unicode 0x19FD
  33565 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-BUON ROC", unicode 0x19FE
  33574 | (kUnicodeCategory_So << 27), // "KHMER SYMBOL DAP-PRAM ROC", unicode 0x19FF
} ;

static const uint32_t gNamePage26 [256] = {
  33583 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER KA", unicode 0x1A00
  33588 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER GA", unicode 0x1A01
  33593 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER NGA", unicode 0x1A02
  33598 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER NGKA", unicode 0x1A03
  33604 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER PA", unicode 0x1A04
  33609 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER BA", unicode 0x1A05
  33614 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER MA", unicode 0x1A06
  33619 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER MPA", unicode 0x1A07
  33624 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER TA", unicode 0x1A08
  33629 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER DA", unicode 0x1A09
  33634 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER NA", unicode 0x1A0A
  33639 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER NRA", unicode 0x1A0B
  33644 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER CA", unicode 0x1A0C
  33649 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER JA", unicode 0x1A0D
  33654 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER NYA", unicode 0x1A0E
  33659 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER NYCA", unicode 0x1A0F
  33664 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER YA", unicode 0x1A10
  33669 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER RA", unicode 0x1A11
  33674 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER LA", unicode 0x1A12
  33679 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER VA", unicode 0x1A13
  33684 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER SA", unicode 0x1A14
  33689 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER A", unicode 0x1A15
  33693 | (kUnicodeCategory_Lo << 27), // "BUGINESE LETTER HA", unicode 0x1A16
  33698 | (kUnicodeCategory_Mn << 27), // "BUGINESE VOWEL SIGN I", unicode 0x1A17
  33704 | (kUnicodeCategory_Mn << 27), // "BUGINESE VOWEL SIGN U", unicode 0x1A18
  33709 | (kUnicodeCategory_Mc << 27), // "BUGINESE VOWEL SIGN E", unicode 0x1A19
  33714 | (kUnicodeCategory_Mc << 27), // "BUGINESE VOWEL SIGN O", unicode 0x1A1A
  33719 | (kUnicodeCategory_Mc << 27), // "BUGINESE VOWEL SIGN AE", unicode 0x1A1B
  0, // undefined code 0x1A1C
  0, // undefined code 0x1A1D
  33725 | (kUnicodeCategory_Po << 27), // "BUGINESE PALLAWA", unicode 0x1A1E
  33730 | (kUnicodeCategory_Po << 27), // "BUGINESE END OF SECTION", unicode 0x1A1F
  0, // undefined code 0x1A20
  0, // undefined code 0x1A21
  0, // undefined code 0x1A22
  0, // undefined code 0x1A23
  0, // undefined code 0x1A24
  0, // undefined code 0x1A25
  0, // undefined code 0x1A26
  0, // undefined code 0x1A27
  0, // undefined code 0x1A28
  0, // undefined code 0x1A29
  0, // undefined code 0x1A2A
  0, // undefined code 0x1A2B
  0, // undefined code 0x1A2C
  0, // undefined code 0x1A2D
  0, // undefined code 0x1A2E
  0, // undefined code 0x1A2F
  0, // undefined code 0x1A30
  0, // undefined code 0x1A31
  0, // undefined code 0x1A32
  0, // undefined code 0x1A33
  0, // undefined code 0x1A34
  0, // undefined code 0x1A35
  0, // undefined code 0x1A36
  0, // undefined code 0x1A37
  0, // undefined code 0x1A38
  0, // undefined code 0x1A39
  0, // undefined code 0x1A3A
  0, // undefined code 0x1A3B
  0, // undefined code 0x1A3C
  0, // undefined code 0x1A3D
  0, // undefined code 0x1A3E
  0, // undefined code 0x1A3F
  0, // undefined code 0x1A40
  0, // undefined code 0x1A41
  0, // undefined code 0x1A42
  0, // undefined code 0x1A43
  0, // undefined code 0x1A44
  0, // undefined code 0x1A45
  0, // undefined code 0x1A46
  0, // undefined code 0x1A47
  0, // undefined code 0x1A48
  0, // undefined code 0x1A49
  0, // undefined code 0x1A4A
  0, // undefined code 0x1A4B
  0, // undefined code 0x1A4C
  0, // undefined code 0x1A4D
  0, // undefined code 0x1A4E
  0, // undefined code 0x1A4F
  0, // undefined code 0x1A50
  0, // undefined code 0x1A51
  0, // undefined code 0x1A52
  0, // undefined code 0x1A53
  0, // undefined code 0x1A54
  0, // undefined code 0x1A55
  0, // undefined code 0x1A56
  0, // undefined code 0x1A57
  0, // undefined code 0x1A58
  0, // undefined code 0x1A59
  0, // undefined code 0x1A5A
  0, // undefined code 0x1A5B
  0, // undefined code 0x1A5C
  0, // undefined code 0x1A5D
  0, // undefined code 0x1A5E
  0, // undefined code 0x1A5F
  0, // undefined code 0x1A60
  0, // undefined code 0x1A61
  0, // undefined code 0x1A62
  0, // undefined code 0x1A63
  0, // undefined code 0x1A64
  0, // undefined code 0x1A65
  0, // undefined code 0x1A66
  0, // undefined code 0x1A67
  0, // undefined code 0x1A68
  0, // undefined code 0x1A69
  0, // undefined code 0x1A6A
  0, // undefined code 0x1A6B
  0, // undefined code 0x1A6C
  0, // undefined code 0x1A6D
  0, // undefined code 0x1A6E
  0, // undefined code 0x1A6F
  0, // undefined code 0x1A70
  0, // undefined code 0x1A71
  0, // undefined code 0x1A72
  0, // undefined code 0x1A73
  0, // undefined code 0x1A74
  0, // undefined code 0x1A75
  0, // undefined code 0x1A76
  0, // undefined code 0x1A77
  0, // undefined code 0x1A78
  0, // undefined code 0x1A79
  0, // undefined code 0x1A7A
  0, // undefined code 0x1A7B
  0, // undefined code 0x1A7C
  0, // undefined code 0x1A7D
  0, // undefined code 0x1A7E
  0, // undefined code 0x1A7F
  0, // undefined code 0x1A80
  0, // undefined code 0x1A81
  0, // undefined code 0x1A82
  0, // undefined code 0x1A83
  0, // undefined code 0x1A84
  0, // undefined code 0x1A85
  0, // undefined code 0x1A86
  0, // undefined code 0x1A87
  0, // undefined code 0x1A88
  0, // undefined code 0x1A89
  0, // undefined code 0x1A8A
  0, // undefined code 0x1A8B
  0, // undefined code 0x1A8C
  0, // undefined code 0x1A8D
  0, // undefined code 0x1A8E
  0, // undefined code 0x1A8F
  0, // undefined code 0x1A90
  0, // undefined code 0x1A91
  0, // undefined code 0x1A92
  0, // undefined code 0x1A93
  0, // undefined code 0x1A94
  0, // undefined code 0x1A95
  0, // undefined code 0x1A96
  0, // undefined code 0x1A97
  0, // undefined code 0x1A98
  0, // undefined code 0x1A99
  0, // undefined code 0x1A9A
  0, // undefined code 0x1A9B
  0, // undefined code 0x1A9C
  0, // undefined code 0x1A9D
  0, // undefined code 0x1A9E
  0, // undefined code 0x1A9F
  0, // undefined code 0x1AA0
  0, // undefined code 0x1AA1
  0, // undefined code 0x1AA2
  0, // undefined code 0x1AA3
  0, // undefined code 0x1AA4
  0, // undefined code 0x1AA5
  0, // undefined code 0x1AA6
  0, // undefined code 0x1AA7
  0, // undefined code 0x1AA8
  0, // undefined code 0x1AA9
  0, // undefined code 0x1AAA
  0, // undefined code 0x1AAB
  0, // undefined code 0x1AAC
  0, // undefined code 0x1AAD
  0, // undefined code 0x1AAE
  0, // undefined code 0x1AAF
  0, // undefined code 0x1AB0
  0, // undefined code 0x1AB1
  0, // undefined code 0x1AB2
  0, // undefined code 0x1AB3
  0, // undefined code 0x1AB4
  0, // undefined code 0x1AB5
  0, // undefined code 0x1AB6
  0, // undefined code 0x1AB7
  0, // undefined code 0x1AB8
  0, // undefined code 0x1AB9
  0, // undefined code 0x1ABA
  0, // undefined code 0x1ABB
  0, // undefined code 0x1ABC
  0, // undefined code 0x1ABD
  0, // undefined code 0x1ABE
  0, // undefined code 0x1ABF
  0, // undefined code 0x1AC0
  0, // undefined code 0x1AC1
  0, // undefined code 0x1AC2
  0, // undefined code 0x1AC3
  0, // undefined code 0x1AC4
  0, // undefined code 0x1AC5
  0, // undefined code 0x1AC6
  0, // undefined code 0x1AC7
  0, // undefined code 0x1AC8
  0, // undefined code 0x1AC9
  0, // undefined code 0x1ACA
  0, // undefined code 0x1ACB
  0, // undefined code 0x1ACC
  0, // undefined code 0x1ACD
  0, // undefined code 0x1ACE
  0, // undefined code 0x1ACF
  0, // undefined code 0x1AD0
  0, // undefined code 0x1AD1
  0, // undefined code 0x1AD2
  0, // undefined code 0x1AD3
  0, // undefined code 0x1AD4
  0, // undefined code 0x1AD5
  0, // undefined code 0x1AD6
  0, // undefined code 0x1AD7
  0, // undefined code 0x1AD8
  0, // undefined code 0x1AD9
  0, // undefined code 0x1ADA
  0, // undefined code 0x1ADB
  0, // undefined code 0x1ADC
  0, // undefined code 0x1ADD
  0, // undefined code 0x1ADE
  0, // undefined code 0x1ADF
  0, // undefined code 0x1AE0
  0, // undefined code 0x1AE1
  0, // undefined code 0x1AE2
  0, // undefined code 0x1AE3
  0, // undefined code 0x1AE4
  0, // undefined code 0x1AE5
  0, // undefined code 0x1AE6
  0, // undefined code 0x1AE7
  0, // undefined code 0x1AE8
  0, // undefined code 0x1AE9
  0, // undefined code 0x1AEA
  0, // undefined code 0x1AEB
  0, // undefined code 0x1AEC
  0, // undefined code 0x1AED
  0, // undefined code 0x1AEE
  0, // undefined code 0x1AEF
  0, // undefined code 0x1AF0
  0, // undefined code 0x1AF1
  0, // undefined code 0x1AF2
  0, // undefined code 0x1AF3
  0, // undefined code 0x1AF4
  0, // undefined code 0x1AF5
  0, // undefined code 0x1AF6
  0, // undefined code 0x1AF7
  0, // undefined code 0x1AF8
  0, // undefined code 0x1AF9
  0, // undefined code 0x1AFA
  0, // undefined code 0x1AFB
  0, // undefined code 0x1AFC
  0, // undefined code 0x1AFD
  0, // undefined code 0x1AFE
  0, // undefined code 0x1AFF
} ;

static const uint32_t gNamePage27 [256] = {
  33738 | (kUnicodeCategory_Mn << 27), // "BALINESE SIGN ULU RICEM", unicode 0x1B00
  33745 | (kUnicodeCategory_Mn << 27), // "BALINESE SIGN ULU CANDRA", unicode 0x1B01
  33752 | (kUnicodeCategory_Mn << 27), // "BALINESE SIGN CECEK", unicode 0x1B02
  33758 | (kUnicodeCategory_Mn << 27), // "BALINESE SIGN SURANG", unicode 0x1B03
  33763 | (kUnicodeCategory_Mc << 27), // "BALINESE SIGN BISAH", unicode 0x1B04
  33769 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER AKARA", unicode 0x1B05
  33774 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER AKARA TEDUNG", unicode 0x1B06
  33781 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER IKARA", unicode 0x1B07
  33786 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER IKARA TEDUNG", unicode 0x1B08
  33793 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER UKARA", unicode 0x1B09
  33798 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER UKARA TEDUNG", unicode 0x1B0A
  33805 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER RA REPA", unicode 0x1B0B
  33812 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER RA REPA TEDUNG", unicode 0x1B0C
  33821 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER LA LENGA", unicode 0x1B0D
  33828 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER LA LENGA TEDUNG", unicode 0x1B0E
  33837 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER EKARA", unicode 0x1B0F
  33843 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER AIKARA", unicode 0x1B10
  33849 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER OKARA", unicode 0x1B11
  33854 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER OKARA TEDUNG", unicode 0x1B12
  33861 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER KA", unicode 0x1B13
  33866 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER KA MAHAPRANA", unicode 0x1B14
  33873 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER GA", unicode 0x1B15
  33878 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER GA GORA", unicode 0x1B16
  33886 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER NGA", unicode 0x1B17
  33891 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER CA", unicode 0x1B18
  33896 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER CA LACA", unicode 0x1B19
  33903 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER JA", unicode 0x1B1A
  33908 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER JA JERA", unicode 0x1B1B
  33916 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER NYA", unicode 0x1B1C
  33921 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER TA LATIK", unicode 0x1B1D
  33929 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER TA MURDA MAHAPRANA", unicode 0x1B1E
  33938 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER DA MURDA ALPAPRANA", unicode 0x1B1F
  33947 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER DA MURDA MAHAPRANA", unicode 0x1B20
  33956 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER NA RAMBAT", unicode 0x1B21
  33964 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER TA", unicode 0x1B22
  33969 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER TA TAWA", unicode 0x1B23
  33976 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER DA", unicode 0x1B24
  33981 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER DA MADU", unicode 0x1B25
  33989 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER NA", unicode 0x1B26
  33994 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER PA", unicode 0x1B27
  33999 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER PA KAPAL", unicode 0x1B28
  34007 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER BA", unicode 0x1B29
  34012 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER BA KEMBANG", unicode 0x1B2A
  34020 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER MA", unicode 0x1B2B
  34025 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER YA", unicode 0x1B2C
  34030 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER RA", unicode 0x1B2D
  34035 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER LA", unicode 0x1B2E
  34040 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER WA", unicode 0x1B2F
  34045 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER SA SAGA", unicode 0x1B30
  34053 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER SA SAPA", unicode 0x1B31
  34060 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER SA", unicode 0x1B32
  34065 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER HA", unicode 0x1B33
  34070 | (kUnicodeCategory_Mn << 27), // "BALINESE SIGN REREKAN", unicode 0x1B34
  34075 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN TEDUNG", unicode 0x1B35
  34081 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN ULU", unicode 0x1B36
  34087 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN ULU SARI", unicode 0x1B37
  34096 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN SUKU", unicode 0x1B38
  34102 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN SUKU ILUT", unicode 0x1B39
  34111 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN RA REPA", unicode 0x1B3A
  34119 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN RA REPA TEDUNG", unicode 0x1B3B
  34129 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN LA LENGA", unicode 0x1B3C
  34137 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN LA LENGA TEDUNG", unicode 0x1B3D
  34147 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN TALING", unicode 0x1B3E
  34153 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN TALING REPA", unicode 0x1B3F
  34161 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN TALING TEDUNG", unicode 0x1B40
  34169 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN TALING REPA TEDUNG", unicode 0x1B41
  34179 | (kUnicodeCategory_Mn << 27), // "BALINESE VOWEL SIGN PEPET", unicode 0x1B42
  34185 | (kUnicodeCategory_Mc << 27), // "BALINESE VOWEL SIGN PEPET TEDUNG", unicode 0x1B43
  34193 | (kUnicodeCategory_Mc << 27), // "BALINESE ADEG ADEG", unicode 0x1B44
  34199 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER KAF SASAK", unicode 0x1B45
  34206 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER KHOT SASAK", unicode 0x1B46
  34214 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER TZIR SASAK", unicode 0x1B47
  34222 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER EF SASAK", unicode 0x1B48
  34229 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER VE SASAK", unicode 0x1B49
  34236 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER ZAL SASAK", unicode 0x1B4A
  34243 | (kUnicodeCategory_Lo << 27), // "BALINESE LETTER ASYURA SASAK", unicode 0x1B4B
  0, // undefined code 0x1B4C
  0, // undefined code 0x1B4D
  0, // undefined code 0x1B4E
  0, // undefined code 0x1B4F
  34250 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT ZERO", unicode 0x1B50
  34255 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT ONE", unicode 0x1B51
  34260 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT TWO", unicode 0x1B52
  34265 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT THREE", unicode 0x1B53
  34270 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT FOUR", unicode 0x1B54
  34275 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT FIVE", unicode 0x1B55
  34280 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT SIX", unicode 0x1B56
  34285 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT SEVEN", unicode 0x1B57
  34290 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT EIGHT", unicode 0x1B58
  34295 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "BALINESE DIGIT NINE", unicode 0x1B59
  34300 | (kUnicodeCategory_Po << 27), // "BALINESE PANTI", unicode 0x1B5A
  34305 | (kUnicodeCategory_Po << 27), // "BALINESE PAMADA", unicode 0x1B5B
  34310 | (kUnicodeCategory_Po << 27), // "BALINESE WINDU", unicode 0x1B5C
  34315 | (kUnicodeCategory_Po << 27), // "BALINESE CARIK PAMUNGKAH", unicode 0x1B5D
  34322 | (kUnicodeCategory_Po << 27), // "BALINESE CARIK SIKI", unicode 0x1B5E
  34329 | (kUnicodeCategory_Po << 27), // "BALINESE CARIK PAREREN", unicode 0x1B5F
  34336 | (kUnicodeCategory_Po << 27), // "BALINESE PAMENENG", unicode 0x1B60
  34341 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DONG", unicode 0x1B61
  34347 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DENG", unicode 0x1B62
  34354 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DUNG", unicode 0x1B63
  34361 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DANG", unicode 0x1B64
  34367 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DANG SURANG", unicode 0x1B65
  34375 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DING", unicode 0x1B66
  34381 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DAENG", unicode 0x1B67
  34387 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DEUNG", unicode 0x1B68
  34394 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DAING", unicode 0x1B69
  34400 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL DANG GEDE", unicode 0x1B6A
  34409 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING TEGEH", unicode 0x1B6B
  34417 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING ENDEP", unicode 0x1B6C
  34425 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING KEMPUL", unicode 0x1B6D
  34432 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING KEMPLI", unicode 0x1B6E
  34439 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING JEGOGAN", unicode 0x1B6F
  34446 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING KEMPUL WITH JEGOGAN", unicode 0x1B70
  34456 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING KEMPLI WITH JEGOGAN", unicode 0x1B71
  34466 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING BENDE", unicode 0x1B72
  34474 | (kUnicodeCategory_Mn << 27), // "BALINESE MUSICAL SYMBOL COMBINING GONG", unicode 0x1B73
  34481 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL RIGHT-HAND OPEN DUG", unicode 0x1B74
  34492 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL RIGHT-HAND OPEN DAG", unicode 0x1B75
  34503 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL RIGHT-HAND CLOSED TUK", unicode 0x1B76
  34514 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL RIGHT-HAND CLOSED TAK", unicode 0x1B77
  34525 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL LEFT-HAND OPEN PANG", unicode 0x1B78
  34537 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL LEFT-HAND OPEN PUNG", unicode 0x1B79
  34549 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL LEFT-HAND CLOSED PLAK", unicode 0x1B7A
  34560 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL LEFT-HAND CLOSED PLUK", unicode 0x1B7B
  34571 | (kUnicodeCategory_So << 27), // "BALINESE MUSICAL SYMBOL LEFT-HAND OPEN PING", unicode 0x1B7C
  0, // undefined code 0x1B7D
  0, // undefined code 0x1B7E
  0, // undefined code 0x1B7F
  34582 | (kUnicodeCategory_Mn << 27), // "SUNDANESE SIGN PANYECEK", unicode 0x1B80
  34587 | (kUnicodeCategory_Mn << 27), // "SUNDANESE SIGN PANGLAYAR", unicode 0x1B81
  34593 | (kUnicodeCategory_Mc << 27), // "SUNDANESE SIGN PANGWISAD", unicode 0x1B82
  34598 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER A", unicode 0x1B83
  34602 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER I", unicode 0x1B84
  34607 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER U", unicode 0x1B85
  34611 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER AE", unicode 0x1B86
  34616 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER O", unicode 0x1B87
  34620 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER E", unicode 0x1B88
  34624 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER EU", unicode 0x1B89
  34629 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER KA", unicode 0x1B8A
  34634 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER QA", unicode 0x1B8B
  34639 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER GA", unicode 0x1B8C
  34644 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER NGA", unicode 0x1B8D
  34649 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER CA", unicode 0x1B8E
  34654 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER JA", unicode 0x1B8F
  34659 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER ZA", unicode 0x1B90
  34664 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER NYA", unicode 0x1B91
  34669 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER TA", unicode 0x1B92
  34674 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER DA", unicode 0x1B93
  34679 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER NA", unicode 0x1B94
  34684 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER PA", unicode 0x1B95
  34689 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER FA", unicode 0x1B96
  34694 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER VA", unicode 0x1B97
  34699 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER BA", unicode 0x1B98
  34704 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER MA", unicode 0x1B99
  34709 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER YA", unicode 0x1B9A
  34714 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER RA", unicode 0x1B9B
  34719 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER LA", unicode 0x1B9C
  34724 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER WA", unicode 0x1B9D
  34729 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER SA", unicode 0x1B9E
  34734 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER XA", unicode 0x1B9F
  34739 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER HA", unicode 0x1BA0
  34744 | (kUnicodeCategory_Mc << 27), // "SUNDANESE CONSONANT SIGN PAMINGKAL", unicode 0x1BA1
  34752 | (kUnicodeCategory_Mn << 27), // "SUNDANESE CONSONANT SIGN PANYAKRA", unicode 0x1BA2
  34760 | (kUnicodeCategory_Mn << 27), // "SUNDANESE CONSONANT SIGN PANYIKU", unicode 0x1BA3
  34768 | (kUnicodeCategory_Mn << 27), // "SUNDANESE VOWEL SIGN PANGHULU", unicode 0x1BA4
  34774 | (kUnicodeCategory_Mn << 27), // "SUNDANESE VOWEL SIGN PANYUKU", unicode 0x1BA5
  34781 | (kUnicodeCategory_Mc << 27), // "SUNDANESE VOWEL SIGN PANAELAENG", unicode 0x1BA6
  34788 | (kUnicodeCategory_Mc << 27), // "SUNDANESE VOWEL SIGN PANOLONG", unicode 0x1BA7
  34795 | (kUnicodeCategory_Mn << 27), // "SUNDANESE VOWEL SIGN PAMEPET", unicode 0x1BA8
  34802 | (kUnicodeCategory_Mn << 27), // "SUNDANESE VOWEL SIGN PANEULEUNG", unicode 0x1BA9
  34809 | (kUnicodeCategory_Mc << 27), // "SUNDANESE SIGN PAMAAEH", unicode 0x1BAA
  0, // undefined code 0x1BAB
  0, // undefined code 0x1BAC
  0, // undefined code 0x1BAD
  34815 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER KHA", unicode 0x1BAE
  34820 | (kUnicodeCategory_Lo << 27), // "SUNDANESE LETTER SYA", unicode 0x1BAF
  34826 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT ZERO", unicode 0x1BB0
  34831 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT ONE", unicode 0x1BB1
  34836 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT TWO", unicode 0x1BB2
  34841 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT THREE", unicode 0x1BB3
  34846 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT FOUR", unicode 0x1BB4
  34851 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT FIVE", unicode 0x1BB5
  34856 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT SIX", unicode 0x1BB6
  34861 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT SEVEN", unicode 0x1BB7
  34866 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT EIGHT", unicode 0x1BB8
  34871 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "SUNDANESE DIGIT NINE", unicode 0x1BB9
  0, // undefined code 0x1BBA
  0, // undefined code 0x1BBB
  0, // undefined code 0x1BBC
  0, // undefined code 0x1BBD
  0, // undefined code 0x1BBE
  0, // undefined code 0x1BBF
  0, // undefined code 0x1BC0
  0, // undefined code 0x1BC1
  0, // undefined code 0x1BC2
  0, // undefined code 0x1BC3
  0, // undefined code 0x1BC4
  0, // undefined code 0x1BC5
  0, // undefined code 0x1BC6
  0, // undefined code 0x1BC7
  0, // undefined code 0x1BC8
  0, // undefined code 0x1BC9
  0, // undefined code 0x1BCA
  0, // undefined code 0x1BCB
  0, // undefined code 0x1BCC
  0, // undefined code 0x1BCD
  0, // undefined code 0x1BCE
  0, // undefined code 0x1BCF
  0, // undefined code 0x1BD0
  0, // undefined code 0x1BD1
  0, // undefined code 0x1BD2
  0, // undefined code 0x1BD3
  0, // undefined code 0x1BD4
  0, // undefined code 0x1BD5
  0, // undefined code 0x1BD6
  0, // undefined code 0x1BD7
  0, // undefined code 0x1BD8
  0, // undefined code 0x1BD9
  0, // undefined code 0x1BDA
  0, // undefined code 0x1BDB
  0, // undefined code 0x1BDC
  0, // undefined code 0x1BDD
  0, // undefined code 0x1BDE
  0, // undefined code 0x1BDF
  0, // undefined code 0x1BE0
  0, // undefined code 0x1BE1
  0, // undefined code 0x1BE2
  0, // undefined code 0x1BE3
  0, // undefined code 0x1BE4
  0, // undefined code 0x1BE5
  0, // undefined code 0x1BE6
  0, // undefined code 0x1BE7
  0, // undefined code 0x1BE8
  0, // undefined code 0x1BE9
  0, // undefined code 0x1BEA
  0, // undefined code 0x1BEB
  0, // undefined code 0x1BEC
  0, // undefined code 0x1BED
  0, // undefined code 0x1BEE
  0, // undefined code 0x1BEF
  0, // undefined code 0x1BF0
  0, // undefined code 0x1BF1
  0, // undefined code 0x1BF2
  0, // undefined code 0x1BF3
  0, // undefined code 0x1BF4
  0, // undefined code 0x1BF5
  0, // undefined code 0x1BF6
  0, // undefined code 0x1BF7
  0, // undefined code 0x1BF8
  0, // undefined code 0x1BF9
  0, // undefined code 0x1BFA
  0, // undefined code 0x1BFB
  0, // undefined code 0x1BFC
  0, // undefined code 0x1BFD
  0, // undefined code 0x1BFE
  0, // undefined code 0x1BFF
} ;

static const uint32_t gNamePage28 [256] = {
  34876 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER KA", unicode 0x1C00
  34881 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER KLA", unicode 0x1C01
  34886 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER KHA", unicode 0x1C02
  34891 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER GA", unicode 0x1C03
  34896 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER GLA", unicode 0x1C04
  34902 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER NGA", unicode 0x1C05
  34907 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER CA", unicode 0x1C06
  34912 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER CHA", unicode 0x1C07
  34917 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER JA", unicode 0x1C08
  34922 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER NYA", unicode 0x1C09
  34927 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER TA", unicode 0x1C0A
  34932 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER THA", unicode 0x1C0B
  34937 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER DA", unicode 0x1C0C
  34942 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER NA", unicode 0x1C0D
  34947 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER PA", unicode 0x1C0E
  34952 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER PLA", unicode 0x1C0F
  34957 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER PHA", unicode 0x1C10
  34962 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER FA", unicode 0x1C11
  34967 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER FLA", unicode 0x1C12
  34972 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER BA", unicode 0x1C13
  34977 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER BLA", unicode 0x1C14
  34982 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER MA", unicode 0x1C15
  34987 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER MLA", unicode 0x1C16
  34992 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER TSA", unicode 0x1C17
  34997 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER TSHA", unicode 0x1C18
  35002 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER DZA", unicode 0x1C19
  35007 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER YA", unicode 0x1C1A
  35012 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER RA", unicode 0x1C1B
  35017 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER LA", unicode 0x1C1C
  35022 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER HA", unicode 0x1C1D
  35027 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER HLA", unicode 0x1C1E
  35032 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER VA", unicode 0x1C1F
  35037 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER SA", unicode 0x1C20
  35042 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER SHA", unicode 0x1C21
  35047 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER WA", unicode 0x1C22
  35052 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER A", unicode 0x1C23
  35056 | (kUnicodeCategory_Mc << 27), // "LEPCHA SUBJOINED LETTER YA", unicode 0x1C24
  35063 | (kUnicodeCategory_Mc << 27), // "LEPCHA SUBJOINED LETTER RA", unicode 0x1C25
  35070 | (kUnicodeCategory_Mc << 27), // "LEPCHA VOWEL SIGN AA", unicode 0x1C26
  35076 | (kUnicodeCategory_Mc << 27), // "LEPCHA VOWEL SIGN I", unicode 0x1C27
  35082 | (kUnicodeCategory_Mc << 27), // "LEPCHA VOWEL SIGN O", unicode 0x1C28
  35087 | (kUnicodeCategory_Mc << 27), // "LEPCHA VOWEL SIGN OO", unicode 0x1C29
  35093 | (kUnicodeCategory_Mc << 27), // "LEPCHA VOWEL SIGN U", unicode 0x1C2A
  35098 | (kUnicodeCategory_Mc << 27), // "LEPCHA VOWEL SIGN UU", unicode 0x1C2B
  35104 | (kUnicodeCategory_Mn << 27), // "LEPCHA VOWEL SIGN E", unicode 0x1C2C
  35109 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN K", unicode 0x1C2D
  35116 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN M", unicode 0x1C2E
  35123 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN L", unicode 0x1C2F
  35130 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN N", unicode 0x1C30
  35137 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN P", unicode 0x1C31
  35144 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN R", unicode 0x1C32
  35151 | (kUnicodeCategory_Mn << 27), // "LEPCHA CONSONANT SIGN T", unicode 0x1C33
  35158 | (kUnicodeCategory_Mc << 27), // "LEPCHA CONSONANT SIGN NYIN-DO", unicode 0x1C34
  35168 | (kUnicodeCategory_Mc << 27), // "LEPCHA CONSONANT SIGN KANG", unicode 0x1C35
  35176 | (kUnicodeCategory_Mn << 27), // "LEPCHA SIGN RAN", unicode 0x1C36
  35182 | (kUnicodeCategory_Mn << 27), // "LEPCHA SIGN NUKTA", unicode 0x1C37
  0, // undefined code 0x1C38
  0, // undefined code 0x1C39
  0, // undefined code 0x1C3A
  35187 | (kUnicodeCategory_Po << 27), // "LEPCHA PUNCTUATION TA-ROL", unicode 0x1C3B
  35195 | (kUnicodeCategory_Po << 27), // "LEPCHA PUNCTUATION NYET THYOOM TA-ROL", unicode 0x1C3C
  35208 | (kUnicodeCategory_Po << 27), // "LEPCHA PUNCTUATION CER-WA", unicode 0x1C3D
  35216 | (kUnicodeCategory_Po << 27), // "LEPCHA PUNCTUATION TSHOOK CER-WA", unicode 0x1C3E
  35226 | (kUnicodeCategory_Po << 27), // "LEPCHA PUNCTUATION TSHOOK", unicode 0x1C3F
  35232 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT ZERO", unicode 0x1C40
  35237 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT ONE", unicode 0x1C41
  35242 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT TWO", unicode 0x1C42
  35247 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT THREE", unicode 0x1C43
  35252 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT FOUR", unicode 0x1C44
  35257 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT FIVE", unicode 0x1C45
  35262 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT SIX", unicode 0x1C46
  35267 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT SEVEN", unicode 0x1C47
  35272 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT EIGHT", unicode 0x1C48
  35277 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "LEPCHA DIGIT NINE", unicode 0x1C49
  0, // undefined code 0x1C4A
  0, // undefined code 0x1C4B
  0, // undefined code 0x1C4C
  35282 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER TTA", unicode 0x1C4D
  35287 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER TTHA", unicode 0x1C4E
  35292 | (kUnicodeCategory_Lo << 27), // "LEPCHA LETTER DDA", unicode 0x1C4F
  35297 | (0 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT ZERO", unicode 0x1C50
  35304 | (1 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT ONE", unicode 0x1C51
  35311 | (2 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT TWO", unicode 0x1C52
  35318 | (3 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT THREE", unicode 0x1C53
  35325 | (4 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT FOUR", unicode 0x1C54
  35332 | (5 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT FIVE", unicode 0x1C55
  35339 | (6 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT SIX", unicode 0x1C56
  35346 | (7 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT SEVEN", unicode 0x1C57
  35353 | (8 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT EIGHT", unicode 0x1C58
  35360 | (9 << 16) | (kUnicodeCategory_Nd << 27), // "OL CHIKI DIGIT NINE", unicode 0x1C59
  35367 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER LA", unicode 0x1C5A
  35374 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AT", unicode 0x1C5B
  35381 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AG", unicode 0x1C5C
  35389 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER ANG", unicode 0x1C5D
  35396 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AL", unicode 0x1C5E
  35403 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER LAA", unicode 0x1C5F
  35410 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AAK", unicode 0x1C60
  35418 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AAJ", unicode 0x1C61
  35425 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AAM", unicode 0x1C62
  35433 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER AAW", unicode 0x1C63
  35440 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER LI", unicode 0x1C64
  35447 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER IS", unicode 0x1C65
  35454 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER IH", unicode 0x1C66
  35461 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER INY", unicode 0x1C67
  35469 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER IR", unicode 0x1C68
  35476 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER LU", unicode 0x1C69
  35483 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER UC", unicode 0x1C6A
  35491 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER UD", unicode 0x1C6B
  35498 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER UNN", unicode 0x1C6C
  35505 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER UY", unicode 0x1C6D
  35512 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER LE", unicode 0x1C6E
  35519 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER EP", unicode 0x1C6F
  35526 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER EDD", unicode 0x1C70
  35533 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER EN", unicode 0x1C71
  35540 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER ERR", unicode 0x1C72
  35547 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER LO", unicode 0x1C73
  35554 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER OTT", unicode 0x1C74
  35562 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER OB", unicode 0x1C75
  35570 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER OV", unicode 0x1C76
  35577 | (kUnicodeCategory_Lo << 27), // "OL CHIKI LETTER OH", unicode 0x1C77
  35584 | (kUnicodeCategory_Lm << 27), // "OL CHIKI MU TTUDDAG", unicode 0x1C78
  35593 | (kUnicodeCategory_Lm << 27), // "OL CHIKI GAAHLAA TTUDDAAG", unicode 0x1C79
  35601 | (kUnicodeCategory_Lm << 27), // "OL CHIKI MU-GAAHLAA TTUDDAAG", unicode 0x1C7A
  35611 | (kUnicodeCategory_Lm << 27), // "OL CHIKI RELAA", unicode 0x1C7B
  35618 | (kUnicodeCategory_Lm << 27), // "OL CHIKI PHAARKAA", unicode 0x1C7C
  35625 | (kUnicodeCategory_Lm << 27), // "OL CHIKI AHAD", unicode 0x1C7D
  35631 | (kUnicodeCategory_Po << 27), // "OL CHIKI PUNCTUATION MUCAAD", unicode 0x1C7E
  35639 | (kUnicodeCategory_Po << 27), // "OL CHIKI PUNCTUATION DOUBLE MUCAAD", unicode 0x1C7F
  0, // undefined code 0x1C80
  0, // undefined code 0x1C81
  0, // undefined code 0x1C82
  0, // undefined code 0x1C83
  0, // undefined code 0x1C84
  0, // undefined code 0x1C85
  0, // undefined code 0x1C86
  0, // undefined code 0x1C87
  0, // undefined code 0x1C88
  0, // undefined code 0x1C89
  0, // undefined code 0x1C8A
  0, // undefined code 0x1C8B
  0, // undefined code 0x1C8C
  0, // undefined code 0x1C8D
  0, // undefined code 0x1C8E
  0, // undefined code 0x1C8F
  0, // undefined code 0x1C90
  0, // undefined code 0x1C91
  0, // undefined code 0x1C92
  0, // undefined code 0x1C93
  0, // undefined code 0x1C94
  0, // undefined code 0x1C95
  0, // undefined code 0x1C96
  0, // undefined code 0x1C97
  0, // undefined code 0x1C98
  0, // undefined code 0x1C99
  0, // undefined code 0x1C9A
  0, // undefined code 0x1C9B
  0, // undefined code 0x1C9C
  0, // undefined code 0x1C9D
  0, // undefined code 0x1C9E
  0, // undefined code 0x1C9F
  0, // undefined code 0x1CA0
  0, // undefined code 0x1CA1
  0, // undefined code 0x1CA2
  0, // undefined code 0x1CA3
  0, // undefined code 0x1CA4
  0, // undefined code 0x1CA5
  0, // undefined code 0x1CA6
  0, // undefined code 0x1CA7
  0, // undefined code 0x1CA8
  0, // undefined code 0x1CA9
  0, // undefined code 0x1CAA
  0, // undefined code 0x1CAB
  0, // undefined code 0x1CAC
  0, // undefined code 0x1CAD
  0, // undefined code 0x1CAE
  0, // undefined code 0x1CAF
  0, // undefined code 0x1CB0
  0, // undefined code 0x1CB1
  0, // undefined code 0x1CB2
  0, // undefined code 0x1CB3
  0, // undefined code 0x1CB4
  0, // undefined code 0x1CB5
  0, // undefined code 0x1CB6
  0, // undefined code 0x1CB7
  0, // undefined code 0x1CB8
  0, // undefined code 0x1CB9
  0, // undefined code 0x1CBA
  0, // undefined code 0x1CBB
  0, // undefined code 0x1CBC
  0, // undefined code 0x1CBD
  0, // undefined code 0x1CBE
  0, // undefined code 0x1CBF
  0, // undefined code 0x1CC0
  0, // undefined code 0x1CC1
  0, // undefined code 0x1CC2
  0, // undefined code 0x1CC3
  0, // undefined code 0x1CC4
  0, // undefined code 0x1CC5
  0, // undefined code 0x1CC6
  0, // undefined code 0x1CC7
  0, // undefined code 0x1CC8
  0, // undefined code 0x1CC9
  0, // undefined code 0x1CCA
  0, // undefined code 0x1CCB
  0, // undefined code 0x1CCC
  0, // undefined code 0x1CCD
  0, // undefined code 0x1CCE
  0, // undefined code 0x1CCF
  0, // undefined code 0x1CD0
  0, // undefined code 0x1CD1
  0, // undefined code 0x1CD2
  0, // undefined code 0x1CD3
  0, // undefined code 0x1CD4
  0, // undefined code 0x1CD5
  0, // undefined code 0x1CD6
  0, // undefined code 0x1CD7
  0, // undefined code 0x1CD8
  0, // undefined code 0x1CD9
  0, // undefined code 0x1CDA
  0, // undefined code 0x1CDB
  0, // undefined code 0x1CDC
  0, // undefined code 0x1CDD
  0, // undefined code 0x1CDE
  0, // undefined code 0x1CDF
  0, // undefined code 0x1CE0
  0, // undefined code 0x1CE1
  0, // undefined code 0x1CE2
  0, // undefined code 0x1CE3
  0, // undefined code 0x1CE4
  0, // undefined code 0x1CE5
  0, // undefined code 0x1CE6
  0, // undefined code 0x1CE7
  0, // undefined code 0x1CE8
  0, // undefined code 0x1CE9
  0, // undefined code 0x1CEA
  0, // undefined code 0x1CEB
  0, // undefined code 0x1CEC
  0, // undefined code 0x1CED
  0, // undefined code 0x1CEE
  0, // undefined code 0x1CEF
  0, // undefined code 0x1CF0
  0, // undefined code 0x1CF1
  0, // undefined code 0x1CF2
  0, // undefined code 0x1CF3
  0, // undefined code 0x1CF4
  0, // undefined code 0x1CF5
  0, // undefined code 0x1CF6
  0, // undefined code 0x1CF7
  0, // undefined code 0x1CF8
  0, // undefined code 0x1CF9
  0, // undefined code 0x1CFA
  0, // undefined code 0x1CFB
  0, // undefined code 0x1CFC
  0, // undefined code 0x1CFD
  0, // undefined code 0x1CFE
  0, // undefined code 0x1CFF
} ;

static const uint32_t gNamePage29 [256] = {
  35648 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL A", unicode 0x1D00
  35653 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL AE", unicode 0x1D01
  35659 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED AE", unicode 0x1D02
  35666 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL BARRED B", unicode 0x1D03
  35673 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL C", unicode 0x1D04
  35679 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL D", unicode 0x1D05
  35685 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL ETH", unicode 0x1D06
  35691 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL E", unicode 0x1D07
  35696 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED OPEN E", unicode 0x1D08
  35704 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED I", unicode 0x1D09
  35711 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL J", unicode 0x1D0A
  35717 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL K", unicode 0x1D0B
  35723 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL L WITH STROKE", unicode 0x1D0C
  35732 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL M", unicode 0x1D0D
  35738 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL REVERSED N", unicode 0x1D0E
  35746 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL O", unicode 0x1D0F
  35751 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL OPEN O", unicode 0x1D10
  35758 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SIDEWAYS O", unicode 0x1D11
  35764 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SIDEWAYS OPEN O", unicode 0x1D12
  35772 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SIDEWAYS O WITH STROKE", unicode 0x1D13
  35781 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED OE", unicode 0x1D14
  35788 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL OU", unicode 0x1D15
  35794 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TOP HALF O", unicode 0x1D16
  35802 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER BOTTOM HALF O", unicode 0x1D17
  35810 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL P", unicode 0x1D18
  35816 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL REVERSED R", unicode 0x1D19
  35824 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL TURNED R", unicode 0x1D1A
  35832 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL T", unicode 0x1D1B
  35838 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL U", unicode 0x1D1C
  35843 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SIDEWAYS U", unicode 0x1D1D
  35849 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SIDEWAYS DIAERESIZED U", unicode 0x1D1E
  35858 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SIDEWAYS TURNED M", unicode 0x1D1F
  35867 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL V", unicode 0x1D20
  35873 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL W", unicode 0x1D21
  35879 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL Z", unicode 0x1D22
  35885 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL EZH", unicode 0x1D23
  35891 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER VOICED LARYNGEAL SPIRANT", unicode 0x1D24
  35900 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER AIN", unicode 0x1D25
  35904 | (kUnicodeCategory_Ll << 27), // "GREEK LETTER SMALL CAPITAL GAMMA", unicode 0x1D26
  35910 | (kUnicodeCategory_Ll << 27), // "GREEK LETTER SMALL CAPITAL LAMDA", unicode 0x1D27
  35916 | (kUnicodeCategory_Ll << 27), // "GREEK LETTER SMALL CAPITAL PI", unicode 0x1D28
  35922 | (kUnicodeCategory_Ll << 27), // "GREEK LETTER SMALL CAPITAL RHO", unicode 0x1D29
  35928 | (kUnicodeCategory_Ll << 27), // "GREEK LETTER SMALL CAPITAL PSI", unicode 0x1D2A
  35934 | (kUnicodeCategory_Ll << 27), // "CYRILLIC LETTER SMALL CAPITAL EL", unicode 0x1D2B
  35940 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL A", unicode 0x1D2C
  35944 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL AE", unicode 0x1D2D
  35949 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL B", unicode 0x1D2E
  35953 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL BARRED B", unicode 0x1D2F
  35959 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL D", unicode 0x1D30
  35964 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL E", unicode 0x1D31
  35968 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL REVERSED E", unicode 0x1D32
  35974 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL G", unicode 0x1D33
  35979 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL H", unicode 0x1D34
  35984 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL I", unicode 0x1D35
  35989 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL J", unicode 0x1D36
  35994 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL K", unicode 0x1D37
  35999 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL L", unicode 0x1D38
  36004 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL M", unicode 0x1D39
  36009 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL N", unicode 0x1D3A
  36014 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL REVERSED N", unicode 0x1D3B
  36021 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL O", unicode 0x1D3C
  36025 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL OU", unicode 0x1D3D
  36030 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL P", unicode 0x1D3E
  36035 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL R", unicode 0x1D3F
  36040 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL T", unicode 0x1D40
  36045 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL U", unicode 0x1D41
  36049 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL W", unicode 0x1D42
  36054 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL A", unicode 0x1D43
  36058 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED A", unicode 0x1D44
  36064 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL ALPHA", unicode 0x1D45
  36069 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED AE", unicode 0x1D46
  36076 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL B", unicode 0x1D47
  36080 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL D", unicode 0x1D48
  36085 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL E", unicode 0x1D49
  36089 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL SCHWA", unicode 0x1D4A
  36094 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL OPEN E", unicode 0x1D4B
  36100 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED OPEN E", unicode 0x1D4C
  36108 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL G", unicode 0x1D4D
  36113 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED I", unicode 0x1D4E
  36120 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL K", unicode 0x1D4F
  36125 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL M", unicode 0x1D50
  36130 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL ENG", unicode 0x1D51
  36135 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL O", unicode 0x1D52
  36139 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL OPEN O", unicode 0x1D53
  36145 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TOP HALF O", unicode 0x1D54
  36153 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL BOTTOM HALF O", unicode 0x1D55
  36161 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL P", unicode 0x1D56
  36166 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL T", unicode 0x1D57
  36171 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL U", unicode 0x1D58
  36175 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL SIDEWAYS U", unicode 0x1D59
  36181 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED M", unicode 0x1D5A
  36188 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL V", unicode 0x1D5B
  36193 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL AIN", unicode 0x1D5C
  36198 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL BETA", unicode 0x1D5D
  36203 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL GREEK GAMMA", unicode 0x1D5E
  36209 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL DELTA", unicode 0x1D5F
  36214 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL GREEK PHI", unicode 0x1D60
  36220 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CHI", unicode 0x1D61
  36225 | (kUnicodeCategory_Ll << 27), // "LATIN SUBSCRIPT SMALL LETTER I", unicode 0x1D62
  36232 | (kUnicodeCategory_Ll << 27), // "LATIN SUBSCRIPT SMALL LETTER R", unicode 0x1D63
  36239 | (kUnicodeCategory_Ll << 27), // "LATIN SUBSCRIPT SMALL LETTER U", unicode 0x1D64
  36245 | (kUnicodeCategory_Ll << 27), // "LATIN SUBSCRIPT SMALL LETTER V", unicode 0x1D65
  36252 | (kUnicodeCategory_Ll << 27), // "GREEK SUBSCRIPT SMALL LETTER BETA", unicode 0x1D66
  36259 | (kUnicodeCategory_Ll << 27), // "GREEK SUBSCRIPT SMALL LETTER GAMMA", unicode 0x1D67
  36266 | (kUnicodeCategory_Ll << 27), // "GREEK SUBSCRIPT SMALL LETTER RHO", unicode 0x1D68
  36273 | (kUnicodeCategory_Ll << 27), // "GREEK SUBSCRIPT SMALL LETTER PHI", unicode 0x1D69
  36280 | (kUnicodeCategory_Ll << 27), // "GREEK SUBSCRIPT SMALL LETTER CHI", unicode 0x1D6A
  36287 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER UE", unicode 0x1D6B
  36292 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH MIDDLE TILDE", unicode 0x1D6C
  36301 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH MIDDLE TILDE", unicode 0x1D6D
  36311 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER F WITH MIDDLE TILDE", unicode 0x1D6E
  36321 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M WITH MIDDLE TILDE", unicode 0x1D6F
  36331 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH MIDDLE TILDE", unicode 0x1D70
  36341 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P WITH MIDDLE TILDE", unicode 0x1D71
  36351 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH MIDDLE TILDE", unicode 0x1D72
  36361 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH FISHHOOK AND MIDDLE TILDE", unicode 0x1D73
  36374 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH MIDDLE TILDE", unicode 0x1D74
  36384 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH MIDDLE TILDE", unicode 0x1D75
  36394 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH MIDDLE TILDE", unicode 0x1D76
  36404 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED G", unicode 0x1D77
  36411 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CYRILLIC EN", unicode 0x1D78
  36416 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER INSULAR G", unicode 0x1D79
  36423 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TH WITH STRIKETHROUGH", unicode 0x1D7A
  36431 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL CAPITAL LETTER I WITH STROKE", unicode 0x1D7B
  36440 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER IOTA WITH STROKE", unicode 0x1D7C
  36448 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P WITH STROKE", unicode 0x1D7D
  36456 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL CAPITAL LETTER U WITH STROKE", unicode 0x1D7E
  36464 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER UPSILON WITH STROKE", unicode 0x1D7F
  36472 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH PALATAL HOOK", unicode 0x1D80
  36481 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH PALATAL HOOK", unicode 0x1D81
  36491 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER F WITH PALATAL HOOK", unicode 0x1D82
  36501 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH PALATAL HOOK", unicode 0x1D83
  36511 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH PALATAL HOOK", unicode 0x1D84
  36521 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH PALATAL HOOK", unicode 0x1D85
  36531 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M WITH PALATAL HOOK", unicode 0x1D86
  36541 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH PALATAL HOOK", unicode 0x1D87
  36551 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P WITH PALATAL HOOK", unicode 0x1D88
  36561 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH PALATAL HOOK", unicode 0x1D89
  36571 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH PALATAL HOOK", unicode 0x1D8A
  36581 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ESH WITH PALATAL HOOK", unicode 0x1D8B
  36591 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V WITH PALATAL HOOK", unicode 0x1D8C
  36601 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER X WITH PALATAL HOOK", unicode 0x1D8D
  36611 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH PALATAL HOOK", unicode 0x1D8E
  36621 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH RETROFLEX HOOK", unicode 0x1D8F
  36630 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ALPHA WITH RETROFLEX HOOK", unicode 0x1D90
  36640 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH HOOK AND TAIL", unicode 0x1D91
  36651 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH RETROFLEX HOOK", unicode 0x1D92
  36660 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER OPEN E WITH RETROFLEX HOOK", unicode 0x1D93
  36671 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER REVERSED OPEN E WITH RETROFLEX HOOK", unicode 0x1D94
  36684 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER SCHWA WITH RETROFLEX HOOK", unicode 0x1D95
  36694 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH RETROFLEX HOOK", unicode 0x1D96
  36704 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER OPEN O WITH RETROFLEX HOOK", unicode 0x1D97
  36715 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER ESH WITH RETROFLEX HOOK", unicode 0x1D98
  36725 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH RETROFLEX HOOK", unicode 0x1D99
  36734 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER EZH WITH RETROFLEX HOOK", unicode 0x1D9A
  36744 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED ALPHA", unicode 0x1D9B
  36751 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL C", unicode 0x1D9C
  36756 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL C WITH CURL", unicode 0x1D9D
  36764 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL ETH", unicode 0x1D9E
  36769 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL REVERSED OPEN E", unicode 0x1D9F
  36777 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL F", unicode 0x1DA0
  36782 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL DOTLESS J WITH STROKE", unicode 0x1DA1
  36792 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL SCRIPT G", unicode 0x1DA2
  36799 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED H", unicode 0x1DA3
  36806 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL I WITH STROKE", unicode 0x1DA4
  36814 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL IOTA", unicode 0x1DA5
  36819 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CAPITAL I", unicode 0x1DA6
  36825 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CAPITAL I WITH STROKE", unicode 0x1DA7
  36834 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL J WITH CROSSED-TAIL", unicode 0x1DA8
  36844 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL L WITH RETROFLEX HOOK", unicode 0x1DA9
  36854 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL L WITH PALATAL HOOK", unicode 0x1DAA
  36864 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CAPITAL L", unicode 0x1DAB
  36870 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL M WITH HOOK", unicode 0x1DAC
  36878 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED M WITH LONG LEG", unicode 0x1DAD
  36890 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL N WITH LEFT HOOK", unicode 0x1DAE
  36899 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL N WITH RETROFLEX HOOK", unicode 0x1DAF
  36909 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CAPITAL N", unicode 0x1DB0
  36915 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL BARRED O", unicode 0x1DB1
  36921 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL PHI", unicode 0x1DB2
  36926 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL S WITH HOOK", unicode 0x1DB3
  36934 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL ESH", unicode 0x1DB4
  36939 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL T WITH PALATAL HOOK", unicode 0x1DB5
  36949 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL U BAR", unicode 0x1DB6
  36955 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL UPSILON", unicode 0x1DB7
  36960 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL CAPITAL U", unicode 0x1DB8
  36965 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL V WITH HOOK", unicode 0x1DB9
  36973 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL TURNED V", unicode 0x1DBA
  36980 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL Z", unicode 0x1DBB
  36985 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL Z WITH RETROFLEX HOOK", unicode 0x1DBC
  36995 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL Z WITH CURL", unicode 0x1DBD
  37003 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL EZH", unicode 0x1DBE
  37008 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER SMALL THETA", unicode 0x1DBF
  37013 | (kUnicodeCategory_Mn << 27), // "COMBINING DOTTED GRAVE ACCENT", unicode 0x1DC0
  37020 | (kUnicodeCategory_Mn << 27), // "COMBINING DOTTED ACUTE ACCENT", unicode 0x1DC1
  37027 | (kUnicodeCategory_Mn << 27), // "COMBINING SNAKE BELOW", unicode 0x1DC2
  37031 | (kUnicodeCategory_Mn << 27), // "COMBINING SUSPENSION MARK", unicode 0x1DC3
  37036 | (kUnicodeCategory_Mn << 27), // "COMBINING MACRON-ACUTE", unicode 0x1DC4
  37041 | (kUnicodeCategory_Mn << 27), // "COMBINING GRAVE-MACRON", unicode 0x1DC5
  37046 | (kUnicodeCategory_Mn << 27), // "COMBINING MACRON-GRAVE", unicode 0x1DC6
  37051 | (kUnicodeCategory_Mn << 27), // "COMBINING ACUTE-MACRON", unicode 0x1DC7
  37056 | (kUnicodeCategory_Mn << 27), // "COMBINING GRAVE-ACUTE-GRAVE", unicode 0x1DC8
  37063 | (kUnicodeCategory_Mn << 27), // "COMBINING ACUTE-GRAVE-ACUTE", unicode 0x1DC9
  37070 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER R BELOW", unicode 0x1DCA
  37077 | (kUnicodeCategory_Mn << 27), // "COMBINING BREVE-MACRON", unicode 0x1DCB
  37082 | (kUnicodeCategory_Mn << 27), // "COMBINING MACRON-BREVE", unicode 0x1DCC
  37087 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE CIRCUMFLEX ABOVE", unicode 0x1DCD
  37092 | (kUnicodeCategory_Mn << 27), // "COMBINING OGONEK ABOVE", unicode 0x1DCE
  37096 | (kUnicodeCategory_Mn << 27), // "COMBINING ZIGZAG BELOW", unicode 0x1DCF
  37100 | (kUnicodeCategory_Mn << 27), // "COMBINING IS BELOW", unicode 0x1DD0
  37104 | (kUnicodeCategory_Mn << 27), // "COMBINING UR ABOVE", unicode 0x1DD1
  37108 | (kUnicodeCategory_Mn << 27), // "COMBINING US ABOVE", unicode 0x1DD2
  37112 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER FLATTENED OPEN A ABOVE", unicode 0x1DD3
  37122 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER AE", unicode 0x1DD4
  37128 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER AO", unicode 0x1DD5
  37134 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER AV", unicode 0x1DD6
  37140 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER C CEDILLA", unicode 0x1DD7
  37148 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER INSULAR D", unicode 0x1DD8
  37156 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER ETH", unicode 0x1DD9
  37162 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER G", unicode 0x1DDA
  37168 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN LETTER SMALL CAPITAL G", unicode 0x1DDB
  37175 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER K", unicode 0x1DDC
  37181 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER L", unicode 0x1DDD
  37187 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN LETTER SMALL CAPITAL L", unicode 0x1DDE
  37194 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN LETTER SMALL CAPITAL M", unicode 0x1DDF
  37201 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER N", unicode 0x1DE0
  37207 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN LETTER SMALL CAPITAL N", unicode 0x1DE1
  37214 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN LETTER SMALL CAPITAL R", unicode 0x1DE2
  37221 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER R ROTUNDA", unicode 0x1DE3
  37229 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER S", unicode 0x1DE4
  37235 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER LONG S", unicode 0x1DE5
  37243 | (kUnicodeCategory_Mn << 27), // "COMBINING LATIN SMALL LETTER Z", unicode 0x1DE6
  0, // undefined code 0x1DE7
  0, // undefined code 0x1DE8
  0, // undefined code 0x1DE9
  0, // undefined code 0x1DEA
  0, // undefined code 0x1DEB
  0, // undefined code 0x1DEC
  0, // undefined code 0x1DED
  0, // undefined code 0x1DEE
  0, // undefined code 0x1DEF
  0, // undefined code 0x1DF0
  0, // undefined code 0x1DF1
  0, // undefined code 0x1DF2
  0, // undefined code 0x1DF3
  0, // undefined code 0x1DF4
  0, // undefined code 0x1DF5
  0, // undefined code 0x1DF6
  0, // undefined code 0x1DF7
  0, // undefined code 0x1DF8
  0, // undefined code 0x1DF9
  0, // undefined code 0x1DFA
  0, // undefined code 0x1DFB
  0, // undefined code 0x1DFC
  0, // undefined code 0x1DFD
  37249 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT ARROWHEAD ABOVE", unicode 0x1DFE
  37254 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT ARROWHEAD AND DOWN ARROWHEAD BELOW", unicode 0x1DFF
} ;

static const uint32_t gNamePage30 [256] = {
  37264 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH RING BELOW", unicode 0x1E00
  37272 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH RING BELOW", unicode 0x1E01
  37280 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B WITH DOT ABOVE", unicode 0x1E02
  37287 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH DOT ABOVE", unicode 0x1E03
  37294 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B WITH DOT BELOW", unicode 0x1E04
  37301 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH DOT BELOW", unicode 0x1E05
  37308 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER B WITH LINE BELOW", unicode 0x1E06
  37316 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER B WITH LINE BELOW", unicode 0x1E07
  37324 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER C WITH CEDILLA AND ACUTE", unicode 0x1E08
  37335 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER C WITH CEDILLA AND ACUTE", unicode 0x1E09
  37346 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH DOT ABOVE", unicode 0x1E0A
  37354 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH DOT ABOVE", unicode 0x1E0B
  37362 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH DOT BELOW", unicode 0x1E0C
  37370 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH DOT BELOW", unicode 0x1E0D
  37378 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH LINE BELOW", unicode 0x1E0E
  37387 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH LINE BELOW", unicode 0x1E0F
  37396 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH CEDILLA", unicode 0x1E10
  37404 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH CEDILLA", unicode 0x1E11
  37412 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER D WITH CIRCUMFLEX BELOW", unicode 0x1E12
  37421 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER D WITH CIRCUMFLEX BELOW", unicode 0x1E13
  37430 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH MACRON AND GRAVE", unicode 0x1E14
  37440 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH MACRON AND GRAVE", unicode 0x1E15
  37450 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH MACRON AND ACUTE", unicode 0x1E16
  37460 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH MACRON AND ACUTE", unicode 0x1E17
  37470 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX BELOW", unicode 0x1E18
  37478 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX BELOW", unicode 0x1E19
  37486 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH TILDE BELOW", unicode 0x1E1A
  37494 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH TILDE BELOW", unicode 0x1E1B
  37502 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CEDILLA AND BREVE", unicode 0x1E1C
  37512 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CEDILLA AND BREVE", unicode 0x1E1D
  37522 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER F WITH DOT ABOVE", unicode 0x1E1E
  37530 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER F WITH DOT ABOVE", unicode 0x1E1F
  37538 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER G WITH MACRON", unicode 0x1E20
  37546 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER G WITH MACRON", unicode 0x1E21
  37554 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH DOT ABOVE", unicode 0x1E22
  37562 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH DOT ABOVE", unicode 0x1E23
  37570 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH DOT BELOW", unicode 0x1E24
  37578 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH DOT BELOW", unicode 0x1E25
  37586 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH DIAERESIS", unicode 0x1E26
  37594 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH DIAERESIS", unicode 0x1E27
  37602 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH CEDILLA", unicode 0x1E28
  37610 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH CEDILLA", unicode 0x1E29
  37618 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH BREVE BELOW", unicode 0x1E2A
  37627 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH BREVE BELOW", unicode 0x1E2B
  37636 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH TILDE BELOW", unicode 0x1E2C
  37645 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH TILDE BELOW", unicode 0x1E2D
  37654 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH DIAERESIS AND ACUTE", unicode 0x1E2E
  37665 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH DIAERESIS AND ACUTE", unicode 0x1E2F
  37676 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH ACUTE", unicode 0x1E30
  37684 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH ACUTE", unicode 0x1E31
  37692 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH DOT BELOW", unicode 0x1E32
  37700 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH DOT BELOW", unicode 0x1E33
  37708 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH LINE BELOW", unicode 0x1E34
  37717 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH LINE BELOW", unicode 0x1E35
  37726 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH DOT BELOW", unicode 0x1E36
  37734 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH DOT BELOW", unicode 0x1E37
  37742 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH DOT BELOW AND MACRON", unicode 0x1E38
  37753 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH DOT BELOW AND MACRON", unicode 0x1E39
  37764 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH LINE BELOW", unicode 0x1E3A
  37773 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH LINE BELOW", unicode 0x1E3B
  37782 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH CIRCUMFLEX BELOW", unicode 0x1E3C
  37791 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH CIRCUMFLEX BELOW", unicode 0x1E3D
  37800 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER M WITH ACUTE", unicode 0x1E3E
  37808 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M WITH ACUTE", unicode 0x1E3F
  37816 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER M WITH DOT ABOVE", unicode 0x1E40
  37824 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M WITH DOT ABOVE", unicode 0x1E41
  37832 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER M WITH DOT BELOW", unicode 0x1E42
  37840 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER M WITH DOT BELOW", unicode 0x1E43
  37848 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH DOT ABOVE", unicode 0x1E44
  37856 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH DOT ABOVE", unicode 0x1E45
  37864 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH DOT BELOW", unicode 0x1E46
  37872 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH DOT BELOW", unicode 0x1E47
  37880 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH LINE BELOW", unicode 0x1E48
  37889 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH LINE BELOW", unicode 0x1E49
  37898 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER N WITH CIRCUMFLEX BELOW", unicode 0x1E4A
  37907 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER N WITH CIRCUMFLEX BELOW", unicode 0x1E4B
  37916 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH TILDE AND ACUTE", unicode 0x1E4C
  37926 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH TILDE AND ACUTE", unicode 0x1E4D
  37936 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH TILDE AND DIAERESIS", unicode 0x1E4E
  37946 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH TILDE AND DIAERESIS", unicode 0x1E4F
  37956 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH MACRON AND GRAVE", unicode 0x1E50
  37966 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH MACRON AND GRAVE", unicode 0x1E51
  37976 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH MACRON AND ACUTE", unicode 0x1E52
  37986 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH MACRON AND ACUTE", unicode 0x1E53
  37996 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER P WITH ACUTE", unicode 0x1E54
  38004 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P WITH ACUTE", unicode 0x1E55
  38012 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER P WITH DOT ABOVE", unicode 0x1E56
  38020 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER P WITH DOT ABOVE", unicode 0x1E57
  38028 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH DOT ABOVE", unicode 0x1E58
  38036 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH DOT ABOVE", unicode 0x1E59
  38044 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH DOT BELOW", unicode 0x1E5A
  38052 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH DOT BELOW", unicode 0x1E5B
  38060 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH DOT BELOW AND MACRON", unicode 0x1E5C
  38071 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH DOT BELOW AND MACRON", unicode 0x1E5D
  38082 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH LINE BELOW", unicode 0x1E5E
  38091 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER R WITH LINE BELOW", unicode 0x1E5F
  38100 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH DOT ABOVE", unicode 0x1E60
  38108 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH DOT ABOVE", unicode 0x1E61
  38116 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH DOT BELOW", unicode 0x1E62
  38124 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH DOT BELOW", unicode 0x1E63
  38132 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH ACUTE AND DOT ABOVE", unicode 0x1E64
  38143 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH ACUTE AND DOT ABOVE", unicode 0x1E65
  38154 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH CARON AND DOT ABOVE", unicode 0x1E66
  38165 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH CARON AND DOT ABOVE", unicode 0x1E67
  38176 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER S WITH DOT BELOW AND DOT ABOVE", unicode 0x1E68
  38187 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER S WITH DOT BELOW AND DOT ABOVE", unicode 0x1E69
  38198 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH DOT ABOVE", unicode 0x1E6A
  38206 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH DOT ABOVE", unicode 0x1E6B
  38214 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH DOT BELOW", unicode 0x1E6C
  38222 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH DOT BELOW", unicode 0x1E6D
  38230 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH LINE BELOW", unicode 0x1E6E
  38239 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH LINE BELOW", unicode 0x1E6F
  38248 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER T WITH CIRCUMFLEX BELOW", unicode 0x1E70
  38257 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH CIRCUMFLEX BELOW", unicode 0x1E71
  38266 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DIAERESIS BELOW", unicode 0x1E72
  38274 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DIAERESIS BELOW", unicode 0x1E73
  38282 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH TILDE BELOW", unicode 0x1E74
  38290 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH TILDE BELOW", unicode 0x1E75
  38298 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH CIRCUMFLEX BELOW", unicode 0x1E76
  38306 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH CIRCUMFLEX BELOW", unicode 0x1E77
  38314 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH TILDE AND ACUTE", unicode 0x1E78
  38324 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH TILDE AND ACUTE", unicode 0x1E79
  38334 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH MACRON AND DIAERESIS", unicode 0x1E7A
  38344 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH MACRON AND DIAERESIS", unicode 0x1E7B
  38354 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER V WITH TILDE", unicode 0x1E7C
  38362 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V WITH TILDE", unicode 0x1E7D
  38370 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER V WITH DOT BELOW", unicode 0x1E7E
  38378 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V WITH DOT BELOW", unicode 0x1E7F
  38386 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH GRAVE", unicode 0x1E80
  38394 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH GRAVE", unicode 0x1E81
  38402 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH ACUTE", unicode 0x1E82
  38410 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH ACUTE", unicode 0x1E83
  38418 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH DIAERESIS", unicode 0x1E84
  38426 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH DIAERESIS", unicode 0x1E85
  38434 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH DOT ABOVE", unicode 0x1E86
  38442 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH DOT ABOVE", unicode 0x1E87
  38450 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH DOT BELOW", unicode 0x1E88
  38458 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH DOT BELOW", unicode 0x1E89
  38466 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER X WITH DOT ABOVE", unicode 0x1E8A
  38474 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER X WITH DOT ABOVE", unicode 0x1E8B
  38482 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER X WITH DIAERESIS", unicode 0x1E8C
  38490 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER X WITH DIAERESIS", unicode 0x1E8D
  38498 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH DOT ABOVE", unicode 0x1E8E
  38506 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH DOT ABOVE", unicode 0x1E8F
  38514 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH CIRCUMFLEX", unicode 0x1E90
  38522 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH CIRCUMFLEX", unicode 0x1E91
  38530 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH DOT BELOW", unicode 0x1E92
  38538 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH DOT BELOW", unicode 0x1E93
  38546 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH LINE BELOW", unicode 0x1E94
  38555 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH LINE BELOW", unicode 0x1E95
  38564 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH LINE BELOW", unicode 0x1E96
  38573 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH DIAERESIS", unicode 0x1E97
  38581 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH RING ABOVE", unicode 0x1E98
  38590 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH RING ABOVE", unicode 0x1E99
  38599 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH RIGHT HALF RING", unicode 0x1E9A
  38609 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LONG S WITH DOT ABOVE", unicode 0x1E9B
  38619 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LONG S WITH DIAGONAL STROKE", unicode 0x1E9C
  38631 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER LONG S WITH HIGH STROKE", unicode 0x1E9D
  38643 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER SHARP S", unicode 0x1E9E
  38650 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER DELTA", unicode 0x1E9F
  38655 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH DOT BELOW", unicode 0x1EA0
  38662 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH DOT BELOW", unicode 0x1EA1
  38669 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH HOOK ABOVE", unicode 0x1EA2
  38677 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH HOOK ABOVE", unicode 0x1EA3
  38685 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE", unicode 0x1EA4
  38695 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE", unicode 0x1EA5
  38705 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE", unicode 0x1EA6
  38715 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE", unicode 0x1EA7
  38725 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE", unicode 0x1EA8
  38736 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE", unicode 0x1EA9
  38747 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE", unicode 0x1EAA
  38757 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE", unicode 0x1EAB
  38767 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW", unicode 0x1EAC
  38777 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW", unicode 0x1EAD
  38787 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH BREVE AND ACUTE", unicode 0x1EAE
  38797 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH BREVE AND ACUTE", unicode 0x1EAF
  38807 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH BREVE AND GRAVE", unicode 0x1EB0
  38817 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH BREVE AND GRAVE", unicode 0x1EB1
  38827 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE", unicode 0x1EB2
  38838 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE", unicode 0x1EB3
  38849 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH BREVE AND TILDE", unicode 0x1EB4
  38859 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH BREVE AND TILDE", unicode 0x1EB5
  38869 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW", unicode 0x1EB6
  38879 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH BREVE AND DOT BELOW", unicode 0x1EB7
  38889 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH DOT BELOW", unicode 0x1EB8
  38896 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH DOT BELOW", unicode 0x1EB9
  38903 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH HOOK ABOVE", unicode 0x1EBA
  38911 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH HOOK ABOVE", unicode 0x1EBB
  38919 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH TILDE", unicode 0x1EBC
  38926 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH TILDE", unicode 0x1EBD
  38933 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE", unicode 0x1EBE
  38943 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE", unicode 0x1EBF
  38953 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE", unicode 0x1EC0
  38963 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE", unicode 0x1EC1
  38973 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE", unicode 0x1EC2
  38984 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE", unicode 0x1EC3
  38995 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE", unicode 0x1EC4
  39005 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE", unicode 0x1EC5
  39015 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW", unicode 0x1EC6
  39025 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW", unicode 0x1EC7
  39035 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH HOOK ABOVE", unicode 0x1EC8
  39044 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH HOOK ABOVE", unicode 0x1EC9
  39053 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER I WITH DOT BELOW", unicode 0x1ECA
  39061 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER I WITH DOT BELOW", unicode 0x1ECB
  39069 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH DOT BELOW", unicode 0x1ECC
  39076 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH DOT BELOW", unicode 0x1ECD
  39083 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HOOK ABOVE", unicode 0x1ECE
  39091 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HOOK ABOVE", unicode 0x1ECF
  39099 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE", unicode 0x1ED0
  39109 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE", unicode 0x1ED1
  39119 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE", unicode 0x1ED2
  39129 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE", unicode 0x1ED3
  39139 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE", unicode 0x1ED4
  39150 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE", unicode 0x1ED5
  39161 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE", unicode 0x1ED6
  39171 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE", unicode 0x1ED7
  39181 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW", unicode 0x1ED8
  39191 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW", unicode 0x1ED9
  39201 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HORN AND ACUTE", unicode 0x1EDA
  39211 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HORN AND ACUTE", unicode 0x1EDB
  39221 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HORN AND GRAVE", unicode 0x1EDC
  39231 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HORN AND GRAVE", unicode 0x1EDD
  39241 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE", unicode 0x1EDE
  39252 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE", unicode 0x1EDF
  39263 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HORN AND TILDE", unicode 0x1EE0
  39273 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HORN AND TILDE", unicode 0x1EE1
  39283 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW", unicode 0x1EE2
  39293 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH HORN AND DOT BELOW", unicode 0x1EE3
  39303 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH DOT BELOW", unicode 0x1EE4
  39310 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH DOT BELOW", unicode 0x1EE5
  39317 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HOOK ABOVE", unicode 0x1EE6
  39325 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HOOK ABOVE", unicode 0x1EE7
  39333 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HORN AND ACUTE", unicode 0x1EE8
  39343 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HORN AND ACUTE", unicode 0x1EE9
  39353 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HORN AND GRAVE", unicode 0x1EEA
  39363 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HORN AND GRAVE", unicode 0x1EEB
  39373 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE", unicode 0x1EEC
  39384 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE", unicode 0x1EED
  39395 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HORN AND TILDE", unicode 0x1EEE
  39405 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HORN AND TILDE", unicode 0x1EEF
  39415 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW", unicode 0x1EF0
  39425 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER U WITH HORN AND DOT BELOW", unicode 0x1EF1
  39435 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH GRAVE", unicode 0x1EF2
  39443 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH GRAVE", unicode 0x1EF3
  39451 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH DOT BELOW", unicode 0x1EF4
  39459 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH DOT BELOW", unicode 0x1EF5
  39467 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH HOOK ABOVE", unicode 0x1EF6
  39476 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH HOOK ABOVE", unicode 0x1EF7
  39485 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH TILDE", unicode 0x1EF8
  39493 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH TILDE", unicode 0x1EF9
  39501 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER MIDDLE-WELSH LL", unicode 0x1EFA
  39510 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER MIDDLE-WELSH LL", unicode 0x1EFB
  39519 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER MIDDLE-WELSH V", unicode 0x1EFC
  39528 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER MIDDLE-WELSH V", unicode 0x1EFD
  39537 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Y WITH LOOP", unicode 0x1EFE
  39545 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Y WITH LOOP", unicode 0x1EFF
} ;

static const uint32_t gNamePage31 [256] = {
  39553 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI", unicode 0x1F00
  39561 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA", unicode 0x1F01
  39569 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND VARIA", unicode 0x1F02
  39580 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND VARIA", unicode 0x1F03
  39591 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND OXIA", unicode 0x1F04
  39602 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND OXIA", unicode 0x1F05
  39613 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND PERISPOMENI", unicode 0x1F06
  39624 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND PERISPOMENI", unicode 0x1F07
  39635 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI", unicode 0x1F08
  39643 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA", unicode 0x1F09
  39651 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND VARIA", unicode 0x1F0A
  39662 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND VARIA", unicode 0x1F0B
  39673 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND OXIA", unicode 0x1F0C
  39684 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND OXIA", unicode 0x1F0D
  39695 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND PERISPOMENI", unicode 0x1F0E
  39706 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND PERISPOMENI", unicode 0x1F0F
  39717 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH PSILI", unicode 0x1F10
  39725 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH DASIA", unicode 0x1F11
  39733 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH PSILI AND VARIA", unicode 0x1F12
  39744 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH DASIA AND VARIA", unicode 0x1F13
  39755 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH PSILI AND OXIA", unicode 0x1F14
  39766 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH DASIA AND OXIA", unicode 0x1F15
  0, // undefined code 0x1F16
  0, // undefined code 0x1F17
  39777 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH PSILI", unicode 0x1F18
  39785 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH DASIA", unicode 0x1F19
  39793 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH PSILI AND VARIA", unicode 0x1F1A
  39804 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH DASIA AND VARIA", unicode 0x1F1B
  39815 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH PSILI AND OXIA", unicode 0x1F1C
  39826 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH DASIA AND OXIA", unicode 0x1F1D
  0, // undefined code 0x1F1E
  0, // undefined code 0x1F1F
  39837 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI", unicode 0x1F20
  39845 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA", unicode 0x1F21
  39853 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND VARIA", unicode 0x1F22
  39864 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND VARIA", unicode 0x1F23
  39875 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND OXIA", unicode 0x1F24
  39886 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND OXIA", unicode 0x1F25
  39897 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND PERISPOMENI", unicode 0x1F26
  39908 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND PERISPOMENI", unicode 0x1F27
  39919 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI", unicode 0x1F28
  39927 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA", unicode 0x1F29
  39935 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND VARIA", unicode 0x1F2A
  39946 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND VARIA", unicode 0x1F2B
  39957 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND OXIA", unicode 0x1F2C
  39968 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND OXIA", unicode 0x1F2D
  39979 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND PERISPOMENI", unicode 0x1F2E
  39990 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND PERISPOMENI", unicode 0x1F2F
  40001 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH PSILI", unicode 0x1F30
  40009 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DASIA", unicode 0x1F31
  40017 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH PSILI AND VARIA", unicode 0x1F32
  40028 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DASIA AND VARIA", unicode 0x1F33
  40039 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH PSILI AND OXIA", unicode 0x1F34
  40050 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DASIA AND OXIA", unicode 0x1F35
  40061 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH PSILI AND PERISPOMENI", unicode 0x1F36
  40072 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DASIA AND PERISPOMENI", unicode 0x1F37
  40083 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH PSILI", unicode 0x1F38
  40091 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH DASIA", unicode 0x1F39
  40099 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH PSILI AND VARIA", unicode 0x1F3A
  40110 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH DASIA AND VARIA", unicode 0x1F3B
  40121 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH PSILI AND OXIA", unicode 0x1F3C
  40132 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH DASIA AND OXIA", unicode 0x1F3D
  40143 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH PSILI AND PERISPOMENI", unicode 0x1F3E
  40154 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH DASIA AND PERISPOMENI", unicode 0x1F3F
  40165 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH PSILI", unicode 0x1F40
  40173 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH DASIA", unicode 0x1F41
  40181 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH PSILI AND VARIA", unicode 0x1F42
  40192 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH DASIA AND VARIA", unicode 0x1F43
  40203 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH PSILI AND OXIA", unicode 0x1F44
  40214 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH DASIA AND OXIA", unicode 0x1F45
  0, // undefined code 0x1F46
  0, // undefined code 0x1F47
  40225 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH PSILI", unicode 0x1F48
  40233 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH DASIA", unicode 0x1F49
  40241 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH PSILI AND VARIA", unicode 0x1F4A
  40252 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH DASIA AND VARIA", unicode 0x1F4B
  40263 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH PSILI AND OXIA", unicode 0x1F4C
  40274 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH DASIA AND OXIA", unicode 0x1F4D
  0, // undefined code 0x1F4E
  0, // undefined code 0x1F4F
  40285 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH PSILI", unicode 0x1F50
  40293 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DASIA", unicode 0x1F51
  40301 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH PSILI AND VARIA", unicode 0x1F52
  40312 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DASIA AND VARIA", unicode 0x1F53
  40323 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH PSILI AND OXIA", unicode 0x1F54
  40334 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DASIA AND OXIA", unicode 0x1F55
  40345 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH PSILI AND PERISPOMENI", unicode 0x1F56
  40356 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DASIA AND PERISPOMENI", unicode 0x1F57
  0, // undefined code 0x1F58
  40367 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH DASIA", unicode 0x1F59
  0, // undefined code 0x1F5A
  40375 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH DASIA AND VARIA", unicode 0x1F5B
  0, // undefined code 0x1F5C
  40386 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH DASIA AND OXIA", unicode 0x1F5D
  0, // undefined code 0x1F5E
  40397 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH DASIA AND PERISPOMENI", unicode 0x1F5F
  40408 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI", unicode 0x1F60
  40416 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA", unicode 0x1F61
  40424 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND VARIA", unicode 0x1F62
  40435 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND VARIA", unicode 0x1F63
  40446 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND OXIA", unicode 0x1F64
  40457 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND OXIA", unicode 0x1F65
  40468 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND PERISPOMENI", unicode 0x1F66
  40479 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND PERISPOMENI", unicode 0x1F67
  40490 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI", unicode 0x1F68
  40498 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA", unicode 0x1F69
  40506 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND VARIA", unicode 0x1F6A
  40517 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND VARIA", unicode 0x1F6B
  40528 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND OXIA", unicode 0x1F6C
  40539 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND OXIA", unicode 0x1F6D
  40550 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND PERISPOMENI", unicode 0x1F6E
  40561 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND PERISPOMENI", unicode 0x1F6F
  40572 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH VARIA", unicode 0x1F70
  40580 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH OXIA", unicode 0x1F71
  40588 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH VARIA", unicode 0x1F72
  40596 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER EPSILON WITH OXIA", unicode 0x1F73
  40604 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH VARIA", unicode 0x1F74
  40612 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH OXIA", unicode 0x1F75
  40620 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH VARIA", unicode 0x1F76
  40628 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH OXIA", unicode 0x1F77
  40636 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH VARIA", unicode 0x1F78
  40644 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMICRON WITH OXIA", unicode 0x1F79
  40652 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH VARIA", unicode 0x1F7A
  40660 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH OXIA", unicode 0x1F7B
  40668 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH VARIA", unicode 0x1F7C
  40676 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH OXIA", unicode 0x1F7D
  0, // undefined code 0x1F7E
  0, // undefined code 0x1F7F
  40684 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND YPOGEGRAMMENI", unicode 0x1F80
  40695 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND YPOGEGRAMMENI", unicode 0x1F81
  40706 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND VARIA AND YPOGEGRAMMENI", unicode 0x1F82
  40720 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND VARIA AND YPOGEGRAMMENI", unicode 0x1F83
  40734 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND OXIA AND YPOGEGRAMMENI", unicode 0x1F84
  40748 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND OXIA AND YPOGEGRAMMENI", unicode 0x1F85
  40762 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1F86
  40776 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1F87
  40790 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND PROSGEGRAMMENI", unicode 0x1F88
  40801 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND PROSGEGRAMMENI", unicode 0x1F89
  40812 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND VARIA AND PROSGEGRAMMENI", unicode 0x1F8A
  40826 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND VARIA AND PROSGEGRAMMENI", unicode 0x1F8B
  40840 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND OXIA AND PROSGEGRAMMENI", unicode 0x1F8C
  40854 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND OXIA AND PROSGEGRAMMENI", unicode 0x1F8D
  40868 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI", unicode 0x1F8E
  40882 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI", unicode 0x1F8F
  40896 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND YPOGEGRAMMENI", unicode 0x1F90
  40907 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND YPOGEGRAMMENI", unicode 0x1F91
  40918 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND VARIA AND YPOGEGRAMMENI", unicode 0x1F92
  40932 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND VARIA AND YPOGEGRAMMENI", unicode 0x1F93
  40946 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND OXIA AND YPOGEGRAMMENI", unicode 0x1F94
  40960 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND OXIA AND YPOGEGRAMMENI", unicode 0x1F95
  40974 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1F96
  40988 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1F97
  41002 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND PROSGEGRAMMENI", unicode 0x1F98
  41013 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND PROSGEGRAMMENI", unicode 0x1F99
  41024 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND VARIA AND PROSGEGRAMMENI", unicode 0x1F9A
  41038 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND VARIA AND PROSGEGRAMMENI", unicode 0x1F9B
  41052 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND OXIA AND PROSGEGRAMMENI", unicode 0x1F9C
  41066 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND OXIA AND PROSGEGRAMMENI", unicode 0x1F9D
  41080 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI", unicode 0x1F9E
  41094 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI", unicode 0x1F9F
  41108 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND YPOGEGRAMMENI", unicode 0x1FA0
  41119 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND YPOGEGRAMMENI", unicode 0x1FA1
  41130 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND VARIA AND YPOGEGRAMMENI", unicode 0x1FA2
  41144 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND VARIA AND YPOGEGRAMMENI", unicode 0x1FA3
  41158 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND OXIA AND YPOGEGRAMMENI", unicode 0x1FA4
  41172 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND OXIA AND YPOGEGRAMMENI", unicode 0x1FA5
  41186 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1FA6
  41200 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1FA7
  41214 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND PROSGEGRAMMENI", unicode 0x1FA8
  41225 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND PROSGEGRAMMENI", unicode 0x1FA9
  41236 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND VARIA AND PROSGEGRAMMENI", unicode 0x1FAA
  41250 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND VARIA AND PROSGEGRAMMENI", unicode 0x1FAB
  41264 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND OXIA AND PROSGEGRAMMENI", unicode 0x1FAC
  41278 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND OXIA AND PROSGEGRAMMENI", unicode 0x1FAD
  41292 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI", unicode 0x1FAE
  41306 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI", unicode 0x1FAF
  41320 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH VRACHY", unicode 0x1FB0
  41328 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH MACRON", unicode 0x1FB1
  41336 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH VARIA AND YPOGEGRAMMENI", unicode 0x1FB2
  41347 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH YPOGEGRAMMENI", unicode 0x1FB3
  41355 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH OXIA AND YPOGEGRAMMENI", unicode 0x1FB4
  0, // undefined code 0x1FB5
  41366 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PERISPOMENI", unicode 0x1FB6
  41374 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ALPHA WITH PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1FB7
  41385 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH VRACHY", unicode 0x1FB8
  41393 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH MACRON", unicode 0x1FB9
  41401 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH VARIA", unicode 0x1FBA
  41409 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ALPHA WITH OXIA", unicode 0x1FBB
  41417 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ALPHA WITH PROSGEGRAMMENI", unicode 0x1FBC
  41425 | (kUnicodeCategory_Sk << 27), // "GREEK KORONIS", unicode 0x1FBD
  41428 | (kUnicodeCategory_Ll << 27), // "GREEK PROSGEGRAMMENI", unicode 0x1FBE
  41431 | (kUnicodeCategory_Sk << 27), // "GREEK PSILI", unicode 0x1FBF
  41434 | (kUnicodeCategory_Sk << 27), // "GREEK PERISPOMENI", unicode 0x1FC0
  41437 | (kUnicodeCategory_Sk << 27), // "GREEK DIALYTIKA AND PERISPOMENI", unicode 0x1FC1
  41443 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH VARIA AND YPOGEGRAMMENI", unicode 0x1FC2
  41454 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH YPOGEGRAMMENI", unicode 0x1FC3
  41462 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH OXIA AND YPOGEGRAMMENI", unicode 0x1FC4
  0, // undefined code 0x1FC5
  41473 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PERISPOMENI", unicode 0x1FC6
  41481 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER ETA WITH PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1FC7
  41492 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH VARIA", unicode 0x1FC8
  41500 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER EPSILON WITH OXIA", unicode 0x1FC9
  41508 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH VARIA", unicode 0x1FCA
  41516 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER ETA WITH OXIA", unicode 0x1FCB
  41524 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER ETA WITH PROSGEGRAMMENI", unicode 0x1FCC
  41532 | (kUnicodeCategory_Sk << 27), // "GREEK PSILI AND VARIA", unicode 0x1FCD
  41538 | (kUnicodeCategory_Sk << 27), // "GREEK PSILI AND OXIA", unicode 0x1FCE
  41544 | (kUnicodeCategory_Sk << 27), // "GREEK PSILI AND PERISPOMENI", unicode 0x1FCF
  41550 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH VRACHY", unicode 0x1FD0
  41558 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH MACRON", unicode 0x1FD1
  41566 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DIALYTIKA AND VARIA", unicode 0x1FD2
  41577 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DIALYTIKA AND OXIA", unicode 0x1FD3
  0, // undefined code 0x1FD4
  0, // undefined code 0x1FD5
  41588 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH PERISPOMENI", unicode 0x1FD6
  41596 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER IOTA WITH DIALYTIKA AND PERISPOMENI", unicode 0x1FD7
  41607 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH VRACHY", unicode 0x1FD8
  41615 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH MACRON", unicode 0x1FD9
  41623 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH VARIA", unicode 0x1FDA
  41631 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER IOTA WITH OXIA", unicode 0x1FDB
  0, // undefined code 0x1FDC
  41639 | (kUnicodeCategory_Sk << 27), // "GREEK DASIA AND VARIA", unicode 0x1FDD
  41645 | (kUnicodeCategory_Sk << 27), // "GREEK DASIA AND OXIA", unicode 0x1FDE
  41651 | (kUnicodeCategory_Sk << 27), // "GREEK DASIA AND PERISPOMENI", unicode 0x1FDF
  41657 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH VRACHY", unicode 0x1FE0
  41665 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH MACRON", unicode 0x1FE1
  41673 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND VARIA", unicode 0x1FE2
  41684 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND OXIA", unicode 0x1FE3
  41695 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER RHO WITH PSILI", unicode 0x1FE4
  41703 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER RHO WITH DASIA", unicode 0x1FE5
  41711 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH PERISPOMENI", unicode 0x1FE6
  41719 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND PERISPOMENI", unicode 0x1FE7
  41730 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH VRACHY", unicode 0x1FE8
  41738 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH MACRON", unicode 0x1FE9
  41746 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH VARIA", unicode 0x1FEA
  41754 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER UPSILON WITH OXIA", unicode 0x1FEB
  41762 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER RHO WITH DASIA", unicode 0x1FEC
  41770 | (kUnicodeCategory_Sk << 27), // "GREEK DIALYTIKA AND VARIA", unicode 0x1FED
  41776 | (kUnicodeCategory_Sk << 27), // "GREEK DIALYTIKA AND OXIA", unicode 0x1FEE
  41782 | (kUnicodeCategory_Sk << 27), // "GREEK VARIA", unicode 0x1FEF
  0, // undefined code 0x1FF0
  0, // undefined code 0x1FF1
  41785 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH VARIA AND YPOGEGRAMMENI", unicode 0x1FF2
  41796 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH YPOGEGRAMMENI", unicode 0x1FF3
  41804 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH OXIA AND YPOGEGRAMMENI", unicode 0x1FF4
  0, // undefined code 0x1FF5
  41815 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PERISPOMENI", unicode 0x1FF6
  41823 | (kUnicodeCategory_Ll << 27), // "GREEK SMALL LETTER OMEGA WITH PERISPOMENI AND YPOGEGRAMMENI", unicode 0x1FF7
  41834 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH VARIA", unicode 0x1FF8
  41842 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMICRON WITH OXIA", unicode 0x1FF9
  41850 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH VARIA", unicode 0x1FFA
  41858 | (kUnicodeCategory_Lu << 27), // "GREEK CAPITAL LETTER OMEGA WITH OXIA", unicode 0x1FFB
  41866 | (kUnicodeCategory_Lt << 27), // "GREEK CAPITAL LETTER OMEGA WITH PROSGEGRAMMENI", unicode 0x1FFC
  41874 | (kUnicodeCategory_Sk << 27), // "GREEK OXIA", unicode 0x1FFD
  41877 | (kUnicodeCategory_Sk << 27), // "GREEK DASIA", unicode 0x1FFE
  0, // undefined code 0x1FFF
} ;

static const uint32_t gNamePage32 [256] = {
  41880 | (kUnicodeCategory_Zs << 27), // "EN QUAD", unicode 0x2000
  41884 | (kUnicodeCategory_Zs << 27), // "EM QUAD", unicode 0x2001
  41888 | (kUnicodeCategory_Zs << 27), // "EN SPACE", unicode 0x2002
  41892 | (kUnicodeCategory_Zs << 27), // "EM SPACE", unicode 0x2003
  41896 | (kUnicodeCategory_Zs << 27), // "THREE-PER-EM SPACE", unicode 0x2004
  41904 | (kUnicodeCategory_Zs << 27), // "FOUR-PER-EM SPACE", unicode 0x2005
  41912 | (kUnicodeCategory_Zs << 27), // "SIX-PER-EM SPACE", unicode 0x2006
  41920 | (kUnicodeCategory_Zs << 27), // "FIGURE SPACE", unicode 0x2007
  41924 | (kUnicodeCategory_Zs << 27), // "PUNCTUATION SPACE", unicode 0x2008
  41928 | (kUnicodeCategory_Zs << 27), // "THIN SPACE", unicode 0x2009
  41932 | (kUnicodeCategory_Zs << 27), // "HAIR SPACE", unicode 0x200A
  41936 | (kUnicodeCategory_Cf << 27), // "ZERO WIDTH SPACE", unicode 0x200B
  41942 | (kUnicodeCategory_Cf << 27), // "ZERO WIDTH NON-JOINER", unicode 0x200C
  41950 | (kUnicodeCategory_Cf << 27), // "ZERO WIDTH JOINER", unicode 0x200D
  41956 | (kUnicodeCategory_Cf << 27), // "LEFT-TO-RIGHT MARK", unicode 0x200E
  41961 | (kUnicodeCategory_Cf << 27), // "RIGHT-TO-LEFT MARK", unicode 0x200F
  41966 | (kUnicodeCategory_Pd << 27), // "HYPHEN", unicode 0x2010
  41968 | (kUnicodeCategory_Pd << 27), // "NON-BREAKING HYPHEN", unicode 0x2011
  41974 | (kUnicodeCategory_Pd << 27), // "FIGURE DASH", unicode 0x2012
  41978 | (kUnicodeCategory_Pd << 27), // "EN DASH", unicode 0x2013
  41982 | (kUnicodeCategory_Pd << 27), // "EM DASH", unicode 0x2014
  41986 | (kUnicodeCategory_Pd << 27), // "HORIZONTAL BAR", unicode 0x2015
  41990 | (kUnicodeCategory_Po << 27), // "DOUBLE VERTICAL LINE", unicode 0x2016
  41994 | (kUnicodeCategory_Po << 27), // "DOUBLE LOW LINE", unicode 0x2017
  41999 | (kUnicodeCategory_Pi << 27), // "LEFT SINGLE QUOTATION MARK", unicode 0x2018
  42005 | (kUnicodeCategory_Pf << 27), // "RIGHT SINGLE QUOTATION MARK", unicode 0x2019
  42011 | (kUnicodeCategory_Ps << 27), // "SINGLE LOW-9 QUOTATION MARK", unicode 0x201A
  42020 | (kUnicodeCategory_Pi << 27), // "SINGLE HIGH-REVERSED-9 QUOTATION MARK", unicode 0x201B
  42031 | (kUnicodeCategory_Pi << 27), // "LEFT DOUBLE QUOTATION MARK", unicode 0x201C
  42036 | (kUnicodeCategory_Pf << 27), // "RIGHT DOUBLE QUOTATION MARK", unicode 0x201D
  42041 | (kUnicodeCategory_Ps << 27), // "DOUBLE LOW-9 QUOTATION MARK", unicode 0x201E
  42049 | (kUnicodeCategory_Pi << 27), // "DOUBLE HIGH-REVERSED-9 QUOTATION MARK", unicode 0x201F
  42059 | (kUnicodeCategory_Po << 27), // "DAGGER", unicode 0x2020
  42061 | (kUnicodeCategory_Po << 27), // "DOUBLE DAGGER", unicode 0x2021
  42064 | (kUnicodeCategory_Po << 27), // "BULLET", unicode 0x2022
  42066 | (kUnicodeCategory_Po << 27), // "TRIANGULAR BULLET", unicode 0x2023
  42070 | (kUnicodeCategory_Po << 27), // "ONE DOT LEADER", unicode 0x2024
  42075 | (kUnicodeCategory_Po << 27), // "TWO DOT LEADER", unicode 0x2025
  42080 | (kUnicodeCategory_Po << 27), // "HORIZONTAL ELLIPSIS", unicode 0x2026
  42084 | (kUnicodeCategory_Po << 27), // "HYPHENATION POINT", unicode 0x2027
  42089 | (kUnicodeCategory_Zl << 27), // "LINE SEPARATOR", unicode 0x2028
  42093 | (kUnicodeCategory_Zp << 27), // "PARAGRAPH SEPARATOR", unicode 0x2029
  42097 | (kUnicodeCategory_Cf << 27), // "LEFT-TO-RIGHT EMBEDDING", unicode 0x202A
  42103 | (kUnicodeCategory_Cf << 27), // "RIGHT-TO-LEFT EMBEDDING", unicode 0x202B
  42109 | (kUnicodeCategory_Cf << 27), // "POP DIRECTIONAL FORMATTING", unicode 0x202C
  42116 | (kUnicodeCategory_Cf << 27), // "LEFT-TO-RIGHT OVERRIDE", unicode 0x202D
  42122 | (kUnicodeCategory_Cf << 27), // "RIGHT-TO-LEFT OVERRIDE", unicode 0x202E
  42128 | (kUnicodeCategory_Zs << 27), // "NARROW NO-BREAK SPACE", unicode 0x202F
  42136 | (kUnicodeCategory_Po << 27), // "PER MILLE SIGN", unicode 0x2030
  42141 | (kUnicodeCategory_Po << 27), // "PER TEN THOUSAND SIGN", unicode 0x2031
  42148 | (kUnicodeCategory_Po << 27), // "PRIME", unicode 0x2032
  42150 | (kUnicodeCategory_Po << 27), // "DOUBLE PRIME", unicode 0x2033
  42153 | (kUnicodeCategory_Po << 27), // "TRIPLE PRIME", unicode 0x2034
  42157 | (kUnicodeCategory_Po << 27), // "REVERSED PRIME", unicode 0x2035
  42161 | (kUnicodeCategory_Po << 27), // "REVERSED DOUBLE PRIME", unicode 0x2036
  42166 | (kUnicodeCategory_Po << 27), // "REVERSED TRIPLE PRIME", unicode 0x2037
  42172 | (kUnicodeCategory_Po << 27), // "CARET", unicode 0x2038
  42174 | (kUnicodeCategory_Pi << 27), // "SINGLE LEFT-POINTING ANGLE QUOTATION MARK", unicode 0x2039
  42184 | (kUnicodeCategory_Pf << 27), // "SINGLE RIGHT-POINTING ANGLE QUOTATION MARK", unicode 0x203A
  42194 | (kUnicodeCategory_Po << 27), // "REFERENCE MARK", unicode 0x203B
  42198 | (kUnicodeCategory_Po << 27), // "DOUBLE EXCLAMATION MARK", unicode 0x203C
  42202 | (kUnicodeCategory_Po << 27), // "INTERROBANG", unicode 0x203D
  42204 | (kUnicodeCategory_Po << 27), // "OVERLINE", unicode 0x203E
  42206 | (kUnicodeCategory_Pc << 27), // "UNDERTIE", unicode 0x203F
  42208 | (kUnicodeCategory_Pc << 27), // "CHARACTER TIE", unicode 0x2040
  42212 | (kUnicodeCategory_Po << 27), // "CARET INSERTION POINT", unicode 0x2041
  42218 | (kUnicodeCategory_Po << 27), // "ASTERISM", unicode 0x2042
  42221 | (kUnicodeCategory_Po << 27), // "HYPHEN BULLET", unicode 0x2043
  42225 | (kUnicodeCategory_Sm << 27), // "FRACTION SLASH", unicode 0x2044
  42229 | (kUnicodeCategory_Ps << 27), // "LEFT SQUARE BRACKET WITH QUILL", unicode 0x2045
  42236 | (kUnicodeCategory_Pe << 27), // "RIGHT SQUARE BRACKET WITH QUILL", unicode 0x2046
  42243 | (kUnicodeCategory_Po << 27), // "DOUBLE QUESTION MARK", unicode 0x2047
  42247 | (kUnicodeCategory_Po << 27), // "QUESTION EXCLAMATION MARK", unicode 0x2048
  42252 | (kUnicodeCategory_Po << 27), // "EXCLAMATION QUESTION MARK", unicode 0x2049
  42257 | (kUnicodeCategory_Po << 27), // "TIRONIAN SIGN ET", unicode 0x204A
  42263 | (kUnicodeCategory_Po << 27), // "REVERSED PILCROW SIGN", unicode 0x204B
  42268 | (kUnicodeCategory_Po << 27), // "BLACK LEFTWARDS BULLET", unicode 0x204C
  42274 | (kUnicodeCategory_Po << 27), // "BLACK RIGHTWARDS BULLET", unicode 0x204D
  42280 | (kUnicodeCategory_Po << 27), // "LOW ASTERISK", unicode 0x204E
  42284 | (kUnicodeCategory_Po << 27), // "REVERSED SEMICOLON", unicode 0x204F
  42288 | (kUnicodeCategory_Po << 27), // "CLOSE UP", unicode 0x2050
  42292 | (kUnicodeCategory_Po << 27), // "TWO ASTERISKS ALIGNED VERTICALLY", unicode 0x2051
  42302 | (kUnicodeCategory_Sm << 27), // "COMMERCIAL MINUS SIGN", unicode 0x2052
  42307 | (kUnicodeCategory_Po << 27), // "SWUNG DASH", unicode 0x2053
  42312 | (kUnicodeCategory_Pc << 27), // "INVERTED UNDERTIE", unicode 0x2054
  42316 | (kUnicodeCategory_Po << 27), // "FLOWER PUNCTUATION MARK", unicode 0x2055
  42321 | (kUnicodeCategory_Po << 27), // "THREE DOT PUNCTUATION", unicode 0x2056
  42326 | (kUnicodeCategory_Po << 27), // "QUADRUPLE PRIME", unicode 0x2057
  42330 | (kUnicodeCategory_Po << 27), // "FOUR DOT PUNCTUATION", unicode 0x2058
  42335 | (kUnicodeCategory_Po << 27), // "FIVE DOT PUNCTUATION", unicode 0x2059
  42340 | (kUnicodeCategory_Po << 27), // "TWO DOT PUNCTUATION", unicode 0x205A
  42345 | (kUnicodeCategory_Po << 27), // "FOUR DOT MARK", unicode 0x205B
  42349 | (kUnicodeCategory_Po << 27), // "DOTTED CROSS", unicode 0x205C
  42353 | (kUnicodeCategory_Po << 27), // "TRICOLON", unicode 0x205D
  42355 | (kUnicodeCategory_Po << 27), // "VERTICAL FOUR DOTS", unicode 0x205E
  42359 | (kUnicodeCategory_Zs << 27), // "MEDIUM MATHEMATICAL SPACE", unicode 0x205F
  42364 | (kUnicodeCategory_Cf << 27), // "WORD JOINER", unicode 0x2060
  42368 | (kUnicodeCategory_Cf << 27), // "FUNCTION APPLICATION", unicode 0x2061
  42373 | (kUnicodeCategory_Cf << 27), // "INVISIBLE TIMES", unicode 0x2062
  42376 | (kUnicodeCategory_Cf << 27), // "INVISIBLE SEPARATOR", unicode 0x2063
  42380 | (kUnicodeCategory_Cf << 27), // "INVISIBLE PLUS", unicode 0x2064
  0, // undefined code 0x2065
  0, // undefined code 0x2066
  0, // undefined code 0x2067
  0, // undefined code 0x2068
  0, // undefined code 0x2069
  42384 | (kUnicodeCategory_Cf << 27), // "INHIBIT SYMMETRIC SWAPPING", unicode 0x206A
  42390 | (kUnicodeCategory_Cf << 27), // "ACTIVATE SYMMETRIC SWAPPING", unicode 0x206B
  42396 | (kUnicodeCategory_Cf << 27), // "INHIBIT ARABIC FORM SHAPING", unicode 0x206C
  42402 | (kUnicodeCategory_Cf << 27), // "ACTIVATE ARABIC FORM SHAPING", unicode 0x206D
  42408 | (kUnicodeCategory_Cf << 27), // "NATIONAL DIGIT SHAPES", unicode 0x206E
  42414 | (kUnicodeCategory_Cf << 27), // "NOMINAL DIGIT SHAPES", unicode 0x206F
  42420 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT ZERO", unicode 0x2070
  42424 | (kUnicodeCategory_Ll << 27), // "SUPERSCRIPT LATIN SMALL LETTER I", unicode 0x2071
  0, // undefined code 0x2072
  0, // undefined code 0x2073
  42431 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT FOUR", unicode 0x2074
  42435 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT FIVE", unicode 0x2075
  42439 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT SIX", unicode 0x2076
  42443 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT SEVEN", unicode 0x2077
  42447 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT EIGHT", unicode 0x2078
  42451 | (kUnicodeCategory_No << 27), // "SUPERSCRIPT NINE", unicode 0x2079
  42455 | (kUnicodeCategory_Sm << 27), // "SUPERSCRIPT PLUS SIGN", unicode 0x207A
  42460 | (kUnicodeCategory_Sm << 27), // "SUPERSCRIPT MINUS", unicode 0x207B
  42464 | (kUnicodeCategory_Sm << 27), // "SUPERSCRIPT EQUALS SIGN", unicode 0x207C
  42469 | (kUnicodeCategory_Ps << 27), // "SUPERSCRIPT LEFT PARENTHESIS", unicode 0x207D
  42474 | (kUnicodeCategory_Pe << 27), // "SUPERSCRIPT RIGHT PARENTHESIS", unicode 0x207E
  42479 | (kUnicodeCategory_Ll << 27), // "SUPERSCRIPT LATIN SMALL LETTER N", unicode 0x207F
  42486 | (kUnicodeCategory_No << 27), // "SUBSCRIPT ZERO", unicode 0x2080
  42490 | (kUnicodeCategory_No << 27), // "SUBSCRIPT ONE", unicode 0x2081
  42494 | (kUnicodeCategory_No << 27), // "SUBSCRIPT TWO", unicode 0x2082
  42498 | (kUnicodeCategory_No << 27), // "SUBSCRIPT THREE", unicode 0x2083
  42502 | (kUnicodeCategory_No << 27), // "SUBSCRIPT FOUR", unicode 0x2084
  42506 | (kUnicodeCategory_No << 27), // "SUBSCRIPT FIVE", unicode 0x2085
  42510 | (kUnicodeCategory_No << 27), // "SUBSCRIPT SIX", unicode 0x2086
  42514 | (kUnicodeCategory_No << 27), // "SUBSCRIPT SEVEN", unicode 0x2087
  42518 | (kUnicodeCategory_No << 27), // "SUBSCRIPT EIGHT", unicode 0x2088
  42522 | (kUnicodeCategory_No << 27), // "SUBSCRIPT NINE", unicode 0x2089
  42526 | (kUnicodeCategory_Sm << 27), // "SUBSCRIPT PLUS SIGN", unicode 0x208A
  42531 | (kUnicodeCategory_Sm << 27), // "SUBSCRIPT MINUS", unicode 0x208B
  42535 | (kUnicodeCategory_Sm << 27), // "SUBSCRIPT EQUALS SIGN", unicode 0x208C
  42540 | (kUnicodeCategory_Ps << 27), // "SUBSCRIPT LEFT PARENTHESIS", unicode 0x208D
  42545 | (kUnicodeCategory_Pe << 27), // "SUBSCRIPT RIGHT PARENTHESIS", unicode 0x208E
  0, // undefined code 0x208F
  42550 | (kUnicodeCategory_Lm << 27), // "LATIN SUBSCRIPT SMALL LETTER A", unicode 0x2090
  42556 | (kUnicodeCategory_Lm << 27), // "LATIN SUBSCRIPT SMALL LETTER E", unicode 0x2091
  42562 | (kUnicodeCategory_Lm << 27), // "LATIN SUBSCRIPT SMALL LETTER O", unicode 0x2092
  42568 | (kUnicodeCategory_Lm << 27), // "LATIN SUBSCRIPT SMALL LETTER X", unicode 0x2093
  42575 | (kUnicodeCategory_Lm << 27), // "LATIN SUBSCRIPT SMALL LETTER SCHWA", unicode 0x2094
  0, // undefined code 0x2095
  0, // undefined code 0x2096
  0, // undefined code 0x2097
  0, // undefined code 0x2098
  0, // undefined code 0x2099
  0, // undefined code 0x209A
  0, // undefined code 0x209B
  0, // undefined code 0x209C
  0, // undefined code 0x209D
  0, // undefined code 0x209E
  0, // undefined code 0x209F
  42582 | (kUnicodeCategory_Sc << 27), // "EURO-CURRENCY SIGN", unicode 0x20A0
  42587 | (kUnicodeCategory_Sc << 27), // "COLON SIGN", unicode 0x20A1
  42590 | (kUnicodeCategory_Sc << 27), // "CRUZEIRO SIGN", unicode 0x20A2
  42594 | (kUnicodeCategory_Sc << 27), // "FRENCH FRANC SIGN", unicode 0x20A3
  42601 | (kUnicodeCategory_Sc << 27), // "LIRA SIGN", unicode 0x20A4
  42605 | (kUnicodeCategory_Sc << 27), // "MILL SIGN", unicode 0x20A5
  42608 | (kUnicodeCategory_Sc << 27), // "NAIRA SIGN", unicode 0x20A6
  42612 | (kUnicodeCategory_Sc << 27), // "PESETA SIGN", unicode 0x20A7
  42615 | (kUnicodeCategory_Sc << 27), // "RUPEE SIGN", unicode 0x20A8
  42618 | (kUnicodeCategory_Sc << 27), // "WON SIGN", unicode 0x20A9
  42621 | (kUnicodeCategory_Sc << 27), // "NEW SHEQEL SIGN", unicode 0x20AA
  42626 | (kUnicodeCategory_Sc << 27), // "DONG SIGN", unicode 0x20AB
  42629 | (kUnicodeCategory_Sc << 27), // "EURO SIGN", unicode 0x20AC
  42632 | (kUnicodeCategory_Sc << 27), // "KIP SIGN", unicode 0x20AD
  42635 | (kUnicodeCategory_Sc << 27), // "TUGRIK SIGN", unicode 0x20AE
  42639 | (kUnicodeCategory_Sc << 27), // "DRACHMA SIGN", unicode 0x20AF
  42642 | (kUnicodeCategory_Sc << 27), // "GERMAN PENNY SIGN", unicode 0x20B0
  42648 | (kUnicodeCategory_Sc << 27), // "PESO SIGN", unicode 0x20B1
  42651 | (kUnicodeCategory_Sc << 27), // "GUARANI SIGN", unicode 0x20B2
  42655 | (kUnicodeCategory_Sc << 27), // "AUSTRAL SIGN", unicode 0x20B3
  42659 | (kUnicodeCategory_Sc << 27), // "HRYVNIA SIGN", unicode 0x20B4
  42662 | (kUnicodeCategory_Sc << 27), // "CEDI SIGN", unicode 0x20B5
  0, // undefined code 0x20B6
  0, // undefined code 0x20B7
  0, // undefined code 0x20B8
  0, // undefined code 0x20B9
  0, // undefined code 0x20BA
  0, // undefined code 0x20BB
  0, // undefined code 0x20BC
  0, // undefined code 0x20BD
  0, // undefined code 0x20BE
  0, // undefined code 0x20BF
  0, // undefined code 0x20C0
  0, // undefined code 0x20C1
  0, // undefined code 0x20C2
  0, // undefined code 0x20C3
  0, // undefined code 0x20C4
  0, // undefined code 0x20C5
  0, // undefined code 0x20C6
  0, // undefined code 0x20C7
  0, // undefined code 0x20C8
  0, // undefined code 0x20C9
  0, // undefined code 0x20CA
  0, // undefined code 0x20CB
  0, // undefined code 0x20CC
  0, // undefined code 0x20CD
  0, // undefined code 0x20CE
  0, // undefined code 0x20CF
  42665 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT HARPOON ABOVE", unicode 0x20D0
  42670 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT HARPOON ABOVE", unicode 0x20D1
  42675 | (kUnicodeCategory_Mn << 27), // "COMBINING LONG VERTICAL LINE OVERLAY", unicode 0x20D2
  42683 | (kUnicodeCategory_Mn << 27), // "COMBINING SHORT VERTICAL LINE OVERLAY", unicode 0x20D3
  42691 | (kUnicodeCategory_Mn << 27), // "COMBINING ANTICLOCKWISE ARROW ABOVE", unicode 0x20D4
  42696 | (kUnicodeCategory_Mn << 27), // "COMBINING CLOCKWISE ARROW ABOVE", unicode 0x20D5
  42701 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT ARROW ABOVE", unicode 0x20D6
  42705 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT ARROW ABOVE", unicode 0x20D7
  42709 | (kUnicodeCategory_Mn << 27), // "COMBINING RING OVERLAY", unicode 0x20D8
  42714 | (kUnicodeCategory_Mn << 27), // "COMBINING CLOCKWISE RING OVERLAY", unicode 0x20D9
  42721 | (kUnicodeCategory_Mn << 27), // "COMBINING ANTICLOCKWISE RING OVERLAY", unicode 0x20DA
  42728 | (kUnicodeCategory_Mn << 27), // "COMBINING THREE DOTS ABOVE", unicode 0x20DB
  42733 | (kUnicodeCategory_Mn << 27), // "COMBINING FOUR DOTS ABOVE", unicode 0x20DC
  42738 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING CIRCLE", unicode 0x20DD
  42743 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING SQUARE", unicode 0x20DE
  42747 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING DIAMOND", unicode 0x20DF
  42752 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING CIRCLE BACKSLASH", unicode 0x20E0
  42759 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT RIGHT ARROW ABOVE", unicode 0x20E1
  42764 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING SCREEN", unicode 0x20E2
  42769 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING KEYCAP", unicode 0x20E3
  42775 | (kUnicodeCategory_Me << 27), // "COMBINING ENCLOSING UPWARD POINTING TRIANGLE", unicode 0x20E4
  42784 | (kUnicodeCategory_Mn << 27), // "COMBINING REVERSE SOLIDUS OVERLAY", unicode 0x20E5
  42791 | (kUnicodeCategory_Mn << 27), // "COMBINING DOUBLE VERTICAL STROKE OVERLAY", unicode 0x20E6
  42798 | (kUnicodeCategory_Mn << 27), // "COMBINING ANNUITY SYMBOL", unicode 0x20E7
  42802 | (kUnicodeCategory_Mn << 27), // "COMBINING TRIPLE UNDERDOT", unicode 0x20E8
  42807 | (kUnicodeCategory_Mn << 27), // "COMBINING WIDE BRIDGE ABOVE", unicode 0x20E9
  42813 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFTWARDS ARROW OVERLAY", unicode 0x20EA
  42819 | (kUnicodeCategory_Mn << 27), // "COMBINING LONG DOUBLE SOLIDUS OVERLAY", unicode 0x20EB
  42827 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHTWARDS HARPOON WITH BARB DOWNWARDS", unicode 0x20EC
  42837 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFTWARDS HARPOON WITH BARB DOWNWARDS", unicode 0x20ED
  42847 | (kUnicodeCategory_Mn << 27), // "COMBINING LEFT ARROW BELOW", unicode 0x20EE
  42851 | (kUnicodeCategory_Mn << 27), // "COMBINING RIGHT ARROW BELOW", unicode 0x20EF
  42855 | (kUnicodeCategory_Mn << 27), // "COMBINING ASTERISK ABOVE", unicode 0x20F0
  0, // undefined code 0x20F1
  0, // undefined code 0x20F2
  0, // undefined code 0x20F3
  0, // undefined code 0x20F4
  0, // undefined code 0x20F5
  0, // undefined code 0x20F6
  0, // undefined code 0x20F7
  0, // undefined code 0x20F8
  0, // undefined code 0x20F9
  0, // undefined code 0x20FA
  0, // undefined code 0x20FB
  0, // undefined code 0x20FC
  0, // undefined code 0x20FD
  0, // undefined code 0x20FE
  0, // undefined code 0x20FF
} ;

static const uint32_t gNamePage33 [256] = {
  42859 | (kUnicodeCategory_So << 27), // "ACCOUNT OF", unicode 0x2100
  42863 | (kUnicodeCategory_So << 27), // "ADDRESSED TO THE SUBJECT", unicode 0x2101
  42872 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL C", unicode 0x2102
  42878 | (kUnicodeCategory_So << 27), // "DEGREE CELSIUS", unicode 0x2103
  42883 | (kUnicodeCategory_So << 27), // "CENTRE LINE SYMBOL", unicode 0x2104
  42888 | (kUnicodeCategory_So << 27), // "CARE OF", unicode 0x2105
  42892 | (kUnicodeCategory_So << 27), // "CADA UNA", unicode 0x2106
  42897 | (kUnicodeCategory_Lu << 27), // "EULER CONSTANT", unicode 0x2107
  42902 | (kUnicodeCategory_So << 27), // "SCRUPLE", unicode 0x2108
  42905 | (kUnicodeCategory_So << 27), // "DEGREE FAHRENHEIT", unicode 0x2109
  42909 | (kUnicodeCategory_Ll << 27), // "SCRIPT SMALL G", unicode 0x210A
  42914 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL H", unicode 0x210B
  42919 | (kUnicodeCategory_Lu << 27), // "BLACK-LETTER CAPITAL H", unicode 0x210C
  42925 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL H", unicode 0x210D
  42931 | (kUnicodeCategory_Ll << 27), // "PLANCK CONSTANT", unicode 0x210E
  42935 | (kUnicodeCategory_Ll << 27), // "PLANCK CONSTANT OVER TWO PI", unicode 0x210F
  42945 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL I", unicode 0x2110
  42950 | (kUnicodeCategory_Lu << 27), // "BLACK-LETTER CAPITAL I", unicode 0x2111
  42956 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL L", unicode 0x2112
  42961 | (kUnicodeCategory_Ll << 27), // "SCRIPT SMALL L", unicode 0x2113
  42966 | (kUnicodeCategory_So << 27), // "L B BAR SYMBOL", unicode 0x2114
  42972 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL N", unicode 0x2115
  42978 | (kUnicodeCategory_So << 27), // "NUMERO SIGN", unicode 0x2116
  42982 | (kUnicodeCategory_So << 27), // "SOUND RECORDING COPYRIGHT", unicode 0x2117
  42989 | (kUnicodeCategory_So << 27), // "SCRIPT CAPITAL P", unicode 0x2118
  42994 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL P", unicode 0x2119
  43000 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL Q", unicode 0x211A
  43006 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL R", unicode 0x211B
  43011 | (kUnicodeCategory_Lu << 27), // "BLACK-LETTER CAPITAL R", unicode 0x211C
  43017 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL R", unicode 0x211D
  43023 | (kUnicodeCategory_So << 27), // "PRESCRIPTION TAKE", unicode 0x211E
  43029 | (kUnicodeCategory_So << 27), // "RESPONSE", unicode 0x211F
  43031 | (kUnicodeCategory_So << 27), // "SERVICE MARK", unicode 0x2120
  43034 | (kUnicodeCategory_So << 27), // "TELEPHONE SIGN", unicode 0x2121
  43037 | (kUnicodeCategory_So << 27), // "TRADE MARK SIGN", unicode 0x2122
  43041 | (kUnicodeCategory_So << 27), // "VERSICLE", unicode 0x2123
  43044 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL Z", unicode 0x2124
  43050 | (kUnicodeCategory_So << 27), // "OUNCE SIGN", unicode 0x2125
  43054 | (kUnicodeCategory_Lu << 27), // "OHM SIGN", unicode 0x2126
  43057 | (kUnicodeCategory_So << 27), // "INVERTED OHM SIGN", unicode 0x2127
  43062 | (kUnicodeCategory_Lu << 27), // "BLACK-LETTER CAPITAL Z", unicode 0x2128
  43068 | (kUnicodeCategory_So << 27), // "TURNED GREEK SMALL LETTER IOTA", unicode 0x2129
  43075 | (kUnicodeCategory_Lu << 27), // "KELVIN SIGN", unicode 0x212A
  43078 | (kUnicodeCategory_Lu << 27), // "ANGSTROM SIGN", unicode 0x212B
  43082 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL B", unicode 0x212C
  43086 | (kUnicodeCategory_Lu << 27), // "BLACK-LETTER CAPITAL C", unicode 0x212D
  43092 | (kUnicodeCategory_So << 27), // "ESTIMATED SYMBOL", unicode 0x212E
  43095 | (kUnicodeCategory_Ll << 27), // "SCRIPT SMALL E", unicode 0x212F
  43099 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL E", unicode 0x2130
  43103 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL F", unicode 0x2131
  43108 | (kUnicodeCategory_Lu << 27), // "TURNED CAPITAL F", unicode 0x2132
  43113 | (kUnicodeCategory_Lu << 27), // "SCRIPT CAPITAL M", unicode 0x2133
  43118 | (kUnicodeCategory_Ll << 27), // "SCRIPT SMALL O", unicode 0x2134
  43122 | (kUnicodeCategory_Lo << 27), // "ALEF SYMBOL", unicode 0x2135
  43125 | (kUnicodeCategory_Lo << 27), // "BET SYMBOL", unicode 0x2136
  43128 | (kUnicodeCategory_Lo << 27), // "GIMEL SYMBOL", unicode 0x2137
  43131 | (kUnicodeCategory_Lo << 27), // "DALET SYMBOL", unicode 0x2138
  43134 | (kUnicodeCategory_Ll << 27), // "INFORMATION SOURCE", unicode 0x2139
  43139 | (kUnicodeCategory_So << 27), // "ROTATED CAPITAL Q", unicode 0x213A
  43144 | (kUnicodeCategory_So << 27), // "FACSIMILE SIGN", unicode 0x213B
  43147 | (kUnicodeCategory_Ll << 27), // "DOUBLE-STRUCK SMALL PI", unicode 0x213C
  43153 | (kUnicodeCategory_Ll << 27), // "DOUBLE-STRUCK SMALL GAMMA", unicode 0x213D
  43159 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL GAMMA", unicode 0x213E
  43165 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK CAPITAL PI", unicode 0x213F
  43171 | (kUnicodeCategory_Sm << 27), // "DOUBLE-STRUCK N-ARY SUMMATION", unicode 0x2140
  43180 | (kUnicodeCategory_Sm << 27), // "TURNED SANS-SERIF CAPITAL G", unicode 0x2141
  43187 | (kUnicodeCategory_Sm << 27), // "TURNED SANS-SERIF CAPITAL L", unicode 0x2142
  43194 | (kUnicodeCategory_Sm << 27), // "REVERSED SANS-SERIF CAPITAL L", unicode 0x2143
  43201 | (kUnicodeCategory_Sm << 27), // "TURNED SANS-SERIF CAPITAL Y", unicode 0x2144
  43208 | (kUnicodeCategory_Lu << 27), // "DOUBLE-STRUCK ITALIC CAPITAL D", unicode 0x2145
  43215 | (kUnicodeCategory_Ll << 27), // "DOUBLE-STRUCK ITALIC SMALL D", unicode 0x2146
  43222 | (kUnicodeCategory_Ll << 27), // "DOUBLE-STRUCK ITALIC SMALL E", unicode 0x2147
  43228 | (kUnicodeCategory_Ll << 27), // "DOUBLE-STRUCK ITALIC SMALL I", unicode 0x2148
  43235 | (kUnicodeCategory_Ll << 27), // "DOUBLE-STRUCK ITALIC SMALL J", unicode 0x2149
  43242 | (kUnicodeCategory_So << 27), // "PROPERTY LINE", unicode 0x214A
  43247 | (kUnicodeCategory_Sm << 27), // "TURNED AMPERSAND", unicode 0x214B
  43251 | (kUnicodeCategory_So << 27), // "PER SIGN", unicode 0x214C
  43254 | (kUnicodeCategory_So << 27), // "AKTIESELSKAB", unicode 0x214D
  43256 | (kUnicodeCategory_Ll << 27), // "TURNED SMALL F", unicode 0x214E
  43261 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SAMARITAN SOURCE", unicode 0x214F
  0, // undefined code 0x2150
  0, // undefined code 0x2151
  0, // undefined code 0x2152
  43268 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION ONE THIRD", unicode 0x2153
  43276 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION TWO THIRDS", unicode 0x2154
  43284 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION ONE FIFTH", unicode 0x2155
  43293 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION TWO FIFTHS", unicode 0x2156
  43301 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION THREE FIFTHS", unicode 0x2157
  43309 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION FOUR FIFTHS", unicode 0x2158
  43317 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION ONE SIXTH", unicode 0x2159
  43325 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION FIVE SIXTHS", unicode 0x215A
  43333 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION ONE EIGHTH", unicode 0x215B
  43341 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION THREE EIGHTHS", unicode 0x215C
  43349 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION FIVE EIGHTHS", unicode 0x215D
  43357 | (kUnicodeCategory_No << 27), // "VULGAR FRACTION SEVEN EIGHTHS", unicode 0x215E
  43365 | (kUnicodeCategory_No << 27), // "FRACTION NUMERATOR ONE", unicode 0x215F
  43371 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL ONE", unicode 0x2160
  43377 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL TWO", unicode 0x2161
  43383 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL THREE", unicode 0x2162
  43389 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FOUR", unicode 0x2163
  43395 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FIVE", unicode 0x2164
  43401 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL SIX", unicode 0x2165
  43407 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL SEVEN", unicode 0x2166
  43413 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL EIGHT", unicode 0x2167
  43419 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL NINE", unicode 0x2168
  43425 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL TEN", unicode 0x2169
  43431 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL ELEVEN", unicode 0x216A
  43437 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL TWELVE", unicode 0x216B
  43443 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FIFTY", unicode 0x216C
  43449 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL ONE HUNDRED", unicode 0x216D
  43457 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FIVE HUNDRED", unicode 0x216E
  43465 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL ONE THOUSAND", unicode 0x216F
  43473 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL ONE", unicode 0x2170
  43480 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL TWO", unicode 0x2171
  43487 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL THREE", unicode 0x2172
  43494 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL FOUR", unicode 0x2173
  43501 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL FIVE", unicode 0x2174
  43508 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL SIX", unicode 0x2175
  43515 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL SEVEN", unicode 0x2176
  43522 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL EIGHT", unicode 0x2177
  43529 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL NINE", unicode 0x2178
  43536 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL TEN", unicode 0x2179
  43543 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL ELEVEN", unicode 0x217A
  43550 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL TWELVE", unicode 0x217B
  43557 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL FIFTY", unicode 0x217C
  43564 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL ONE HUNDRED", unicode 0x217D
  43573 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL FIVE HUNDRED", unicode 0x217E
  43582 | (kUnicodeCategory_Nl << 27), // "SMALL ROMAN NUMERAL ONE THOUSAND", unicode 0x217F
  43591 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL ONE THOUSAND C D", unicode 0x2180
  43603 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FIVE THOUSAND", unicode 0x2181
  43611 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL TEN THOUSAND", unicode 0x2182
  43619 | (kUnicodeCategory_Lu << 27), // "ROMAN NUMERAL REVERSED ONE HUNDRED", unicode 0x2183
  43629 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER REVERSED C", unicode 0x2184
  43636 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL SIX LATE FORM", unicode 0x2185
  43646 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FIFTY EARLY FORM", unicode 0x2186
  43655 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL FIFTY THOUSAND", unicode 0x2187
  43663 | (kUnicodeCategory_Nl << 27), // "ROMAN NUMERAL ONE HUNDRED THOUSAND", unicode 0x2188
  0, // undefined code 0x2189
  0, // undefined code 0x218A
  0, // undefined code 0x218B
  0, // undefined code 0x218C
  0, // undefined code 0x218D
  0, // undefined code 0x218E
  0, // undefined code 0x218F
  43673 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW", unicode 0x2190
  43676 | (kUnicodeCategory_Sm << 27), // "UPWARDS ARROW", unicode 0x2191
  43679 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW", unicode 0x2192
  43682 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS ARROW", unicode 0x2193
  43685 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT ARROW", unicode 0x2194
  43688 | (kUnicodeCategory_So << 27), // "UP DOWN ARROW", unicode 0x2195
  43693 | (kUnicodeCategory_So << 27), // "NORTH WEST ARROW", unicode 0x2196
  43698 | (kUnicodeCategory_So << 27), // "NORTH EAST ARROW", unicode 0x2197
  43703 | (kUnicodeCategory_So << 27), // "SOUTH EAST ARROW", unicode 0x2198
  43708 | (kUnicodeCategory_So << 27), // "SOUTH WEST ARROW", unicode 0x2199
  43713 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH STROKE", unicode 0x219A
  43719 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH STROKE", unicode 0x219B
  43725 | (kUnicodeCategory_So << 27), // "LEFTWARDS WAVE ARROW", unicode 0x219C
  43730 | (kUnicodeCategory_So << 27), // "RIGHTWARDS WAVE ARROW", unicode 0x219D
  43735 | (kUnicodeCategory_So << 27), // "LEFTWARDS TWO HEADED ARROW", unicode 0x219E
  43742 | (kUnicodeCategory_So << 27), // "UPWARDS TWO HEADED ARROW", unicode 0x219F
  43749 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO HEADED ARROW", unicode 0x21A0
  43756 | (kUnicodeCategory_So << 27), // "DOWNWARDS TWO HEADED ARROW", unicode 0x21A1
  43763 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW WITH TAIL", unicode 0x21A2
  43769 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH TAIL", unicode 0x21A3
  43775 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW FROM BAR", unicode 0x21A4
  43782 | (kUnicodeCategory_So << 27), // "UPWARDS ARROW FROM BAR", unicode 0x21A5
  43789 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW FROM BAR", unicode 0x21A6
  43796 | (kUnicodeCategory_So << 27), // "DOWNWARDS ARROW FROM BAR", unicode 0x21A7
  43803 | (kUnicodeCategory_So << 27), // "UP DOWN ARROW WITH BASE", unicode 0x21A8
  43811 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW WITH HOOK", unicode 0x21A9
  43817 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW WITH HOOK", unicode 0x21AA
  43823 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW WITH LOOP", unicode 0x21AB
  43829 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW WITH LOOP", unicode 0x21AC
  43835 | (kUnicodeCategory_So << 27), // "LEFT RIGHT WAVE ARROW", unicode 0x21AD
  43840 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT ARROW WITH STROKE", unicode 0x21AE
  43846 | (kUnicodeCategory_So << 27), // "DOWNWARDS ZIGZAG ARROW", unicode 0x21AF
  43851 | (kUnicodeCategory_So << 27), // "UPWARDS ARROW WITH TIP LEFTWARDS", unicode 0x21B0
  43859 | (kUnicodeCategory_So << 27), // "UPWARDS ARROW WITH TIP RIGHTWARDS", unicode 0x21B1
  43867 | (kUnicodeCategory_So << 27), // "DOWNWARDS ARROW WITH TIP LEFTWARDS", unicode 0x21B2
  43875 | (kUnicodeCategory_So << 27), // "DOWNWARDS ARROW WITH TIP RIGHTWARDS", unicode 0x21B3
  43883 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW WITH CORNER DOWNWARDS", unicode 0x21B4
  43891 | (kUnicodeCategory_So << 27), // "DOWNWARDS ARROW WITH CORNER LEFTWARDS", unicode 0x21B5
  43899 | (kUnicodeCategory_So << 27), // "ANTICLOCKWISE TOP SEMICIRCLE ARROW", unicode 0x21B6
  43906 | (kUnicodeCategory_So << 27), // "CLOCKWISE TOP SEMICIRCLE ARROW", unicode 0x21B7
  43913 | (kUnicodeCategory_So << 27), // "NORTH WEST ARROW TO LONG BAR", unicode 0x21B8
  43924 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW TO BAR OVER RIGHTWARDS ARROW TO BAR", unicode 0x21B9
  43940 | (kUnicodeCategory_So << 27), // "ANTICLOCKWISE OPEN CIRCLE ARROW", unicode 0x21BA
  43947 | (kUnicodeCategory_So << 27), // "CLOCKWISE OPEN CIRCLE ARROW", unicode 0x21BB
  43954 | (kUnicodeCategory_So << 27), // "LEFTWARDS HARPOON WITH BARB UPWARDS", unicode 0x21BC
  43963 | (kUnicodeCategory_So << 27), // "LEFTWARDS HARPOON WITH BARB DOWNWARDS", unicode 0x21BD
  43972 | (kUnicodeCategory_So << 27), // "UPWARDS HARPOON WITH BARB RIGHTWARDS", unicode 0x21BE
  43981 | (kUnicodeCategory_So << 27), // "UPWARDS HARPOON WITH BARB LEFTWARDS", unicode 0x21BF
  43990 | (kUnicodeCategory_So << 27), // "RIGHTWARDS HARPOON WITH BARB UPWARDS", unicode 0x21C0
  43999 | (kUnicodeCategory_So << 27), // "RIGHTWARDS HARPOON WITH BARB DOWNWARDS", unicode 0x21C1
  44008 | (kUnicodeCategory_So << 27), // "DOWNWARDS HARPOON WITH BARB RIGHTWARDS", unicode 0x21C2
  44017 | (kUnicodeCategory_So << 27), // "DOWNWARDS HARPOON WITH BARB LEFTWARDS", unicode 0x21C3
  44026 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW OVER LEFTWARDS ARROW", unicode 0x21C4
  44034 | (kUnicodeCategory_So << 27), // "UPWARDS ARROW LEFTWARDS OF DOWNWARDS ARROW", unicode 0x21C5
  44044 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW OVER RIGHTWARDS ARROW", unicode 0x21C6
  44052 | (kUnicodeCategory_So << 27), // "LEFTWARDS PAIRED ARROWS", unicode 0x21C7
  44058 | (kUnicodeCategory_So << 27), // "UPWARDS PAIRED ARROWS", unicode 0x21C8
  44064 | (kUnicodeCategory_So << 27), // "RIGHTWARDS PAIRED ARROWS", unicode 0x21C9
  44070 | (kUnicodeCategory_So << 27), // "DOWNWARDS PAIRED ARROWS", unicode 0x21CA
  44076 | (kUnicodeCategory_So << 27), // "LEFTWARDS HARPOON OVER RIGHTWARDS HARPOON", unicode 0x21CB
  44086 | (kUnicodeCategory_So << 27), // "RIGHTWARDS HARPOON OVER LEFTWARDS HARPOON", unicode 0x21CC
  44096 | (kUnicodeCategory_So << 27), // "LEFTWARDS DOUBLE ARROW WITH STROKE", unicode 0x21CD
  44103 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT DOUBLE ARROW WITH STROKE", unicode 0x21CE
  44110 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS DOUBLE ARROW WITH STROKE", unicode 0x21CF
  44117 | (kUnicodeCategory_So << 27), // "LEFTWARDS DOUBLE ARROW", unicode 0x21D0
  44121 | (kUnicodeCategory_So << 27), // "UPWARDS DOUBLE ARROW", unicode 0x21D1
  44125 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS DOUBLE ARROW", unicode 0x21D2
  44129 | (kUnicodeCategory_So << 27), // "DOWNWARDS DOUBLE ARROW", unicode 0x21D3
  44133 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT DOUBLE ARROW", unicode 0x21D4
  44137 | (kUnicodeCategory_So << 27), // "UP DOWN DOUBLE ARROW", unicode 0x21D5
  44143 | (kUnicodeCategory_So << 27), // "NORTH WEST DOUBLE ARROW", unicode 0x21D6
  44149 | (kUnicodeCategory_So << 27), // "NORTH EAST DOUBLE ARROW", unicode 0x21D7
  44155 | (kUnicodeCategory_So << 27), // "SOUTH EAST DOUBLE ARROW", unicode 0x21D8
  44161 | (kUnicodeCategory_So << 27), // "SOUTH WEST DOUBLE ARROW", unicode 0x21D9
  44167 | (kUnicodeCategory_So << 27), // "LEFTWARDS TRIPLE ARROW", unicode 0x21DA
  44172 | (kUnicodeCategory_So << 27), // "RIGHTWARDS TRIPLE ARROW", unicode 0x21DB
  44177 | (kUnicodeCategory_So << 27), // "LEFTWARDS SQUIGGLE ARROW", unicode 0x21DC
  44182 | (kUnicodeCategory_So << 27), // "RIGHTWARDS SQUIGGLE ARROW", unicode 0x21DD
  44187 | (kUnicodeCategory_So << 27), // "UPWARDS ARROW WITH DOUBLE STROKE", unicode 0x21DE
  44194 | (kUnicodeCategory_So << 27), // "DOWNWARDS ARROW WITH DOUBLE STROKE", unicode 0x21DF
  44201 | (kUnicodeCategory_So << 27), // "LEFTWARDS DASHED ARROW", unicode 0x21E0
  44206 | (kUnicodeCategory_So << 27), // "UPWARDS DASHED ARROW", unicode 0x21E1
  44211 | (kUnicodeCategory_So << 27), // "RIGHTWARDS DASHED ARROW", unicode 0x21E2
  44216 | (kUnicodeCategory_So << 27), // "DOWNWARDS DASHED ARROW", unicode 0x21E3
  44221 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW TO BAR", unicode 0x21E4
  44228 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW TO BAR", unicode 0x21E5
  44235 | (kUnicodeCategory_So << 27), // "LEFTWARDS WHITE ARROW", unicode 0x21E6
  44240 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE ARROW", unicode 0x21E7
  44245 | (kUnicodeCategory_So << 27), // "RIGHTWARDS WHITE ARROW", unicode 0x21E8
  44250 | (kUnicodeCategory_So << 27), // "DOWNWARDS WHITE ARROW", unicode 0x21E9
  44255 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE ARROW FROM BAR", unicode 0x21EA
  44264 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE ARROW ON PEDESTAL", unicode 0x21EB
  44273 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE ARROW ON PEDESTAL WITH HORIZONTAL BAR", unicode 0x21EC
  44287 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE ARROW ON PEDESTAL WITH VERTICAL BAR", unicode 0x21ED
  44300 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE DOUBLE ARROW", unicode 0x21EE
  44306 | (kUnicodeCategory_So << 27), // "UPWARDS WHITE DOUBLE ARROW ON PEDESTAL", unicode 0x21EF
  44316 | (kUnicodeCategory_So << 27), // "RIGHTWARDS WHITE ARROW FROM WALL", unicode 0x21F0
  44326 | (kUnicodeCategory_So << 27), // "NORTH WEST ARROW TO CORNER", unicode 0x21F1
  44335 | (kUnicodeCategory_So << 27), // "SOUTH EAST ARROW TO CORNER", unicode 0x21F2
  44344 | (kUnicodeCategory_So << 27), // "UP DOWN WHITE ARROW", unicode 0x21F3
  44351 | (kUnicodeCategory_Sm << 27), // "RIGHT ARROW WITH SMALL CIRCLE", unicode 0x21F4
  44357 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS ARROW LEFTWARDS OF UPWARDS ARROW", unicode 0x21F5
  44367 | (kUnicodeCategory_Sm << 27), // "THREE RIGHTWARDS ARROWS", unicode 0x21F6
  44373 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH VERTICAL STROKE", unicode 0x21F7
  44380 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH VERTICAL STROKE", unicode 0x21F8
  44387 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT ARROW WITH VERTICAL STROKE", unicode 0x21F9
  44394 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH DOUBLE VERTICAL STROKE", unicode 0x21FA
  44402 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH DOUBLE VERTICAL STROKE", unicode 0x21FB
  44410 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT ARROW WITH DOUBLE VERTICAL STROKE", unicode 0x21FC
  44418 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS OPEN-HEADED ARROW", unicode 0x21FD
  44425 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS OPEN-HEADED ARROW", unicode 0x21FE
  44432 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT OPEN-HEADED ARROW", unicode 0x21FF
} ;

static const uint32_t gNamePage34 [256] = {
  44439 | (kUnicodeCategory_Sm << 27), // "FOR ALL", unicode 0x2200
  44442 | (kUnicodeCategory_Sm << 27), // "COMPLEMENT", unicode 0x2201
  44445 | (kUnicodeCategory_Sm << 27), // "PARTIAL DIFFERENTIAL", unicode 0x2202
  44449 | (kUnicodeCategory_Sm << 27), // "THERE EXISTS", unicode 0x2203
  44453 | (kUnicodeCategory_Sm << 27), // "THERE DOES NOT EXIST", unicode 0x2204
  44462 | (kUnicodeCategory_Sm << 27), // "EMPTY SET", unicode 0x2205
  44466 | (kUnicodeCategory_Sm << 27), // "INCREMENT", unicode 0x2206
  44469 | (kUnicodeCategory_Sm << 27), // "NABLA", unicode 0x2207
  44471 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF", unicode 0x2208
  44475 | (kUnicodeCategory_Sm << 27), // "NOT AN ELEMENT OF", unicode 0x2209
  44483 | (kUnicodeCategory_Sm << 27), // "SMALL ELEMENT OF", unicode 0x220A
  44488 | (kUnicodeCategory_Sm << 27), // "CONTAINS AS MEMBER", unicode 0x220B
  44494 | (kUnicodeCategory_Sm << 27), // "DOES NOT CONTAIN AS MEMBER", unicode 0x220C
  44504 | (kUnicodeCategory_Sm << 27), // "SMALL CONTAINS AS MEMBER", unicode 0x220D
  44511 | (kUnicodeCategory_Sm << 27), // "END OF PROOF", unicode 0x220E
  44517 | (kUnicodeCategory_Sm << 27), // "N-ARY PRODUCT", unicode 0x220F
  44523 | (kUnicodeCategory_Sm << 27), // "N-ARY COPRODUCT", unicode 0x2210
  44529 | (kUnicodeCategory_Sm << 27), // "N-ARY SUMMATION", unicode 0x2211
  44535 | (kUnicodeCategory_Sm << 27), // "MINUS SIGN", unicode 0x2212
  44538 | (kUnicodeCategory_Sm << 27), // "MINUS-OR-PLUS SIGN", unicode 0x2213
  44545 | (kUnicodeCategory_Sm << 27), // "DOT PLUS", unicode 0x2214
  44548 | (kUnicodeCategory_Sm << 27), // "DIVISION SLASH", unicode 0x2215
  44552 | (kUnicodeCategory_Sm << 27), // "SET MINUS", unicode 0x2216
  44556 | (kUnicodeCategory_Sm << 27), // "ASTERISK OPERATOR", unicode 0x2217
  44560 | (kUnicodeCategory_Sm << 27), // "RING OPERATOR", unicode 0x2218
  44564 | (kUnicodeCategory_Sm << 27), // "BULLET OPERATOR", unicode 0x2219
  44568 | (kUnicodeCategory_Sm << 27), // "SQUARE ROOT", unicode 0x221A
  44571 | (kUnicodeCategory_Sm << 27), // "CUBE ROOT", unicode 0x221B
  44575 | (kUnicodeCategory_Sm << 27), // "FOURTH ROOT", unicode 0x221C
  44579 | (kUnicodeCategory_Sm << 27), // "PROPORTIONAL TO", unicode 0x221D
  44584 | (kUnicodeCategory_Sm << 27), // "INFINITY", unicode 0x221E
  44586 | (kUnicodeCategory_Sm << 27), // "RIGHT ANGLE", unicode 0x221F
  44589 | (kUnicodeCategory_Sm << 27), // "ANGLE", unicode 0x2220
  44591 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE", unicode 0x2221
  44595 | (kUnicodeCategory_Sm << 27), // "SPHERICAL ANGLE", unicode 0x2222
  44599 | (kUnicodeCategory_Sm << 27), // "DIVIDES", unicode 0x2223
  44602 | (kUnicodeCategory_Sm << 27), // "DOES NOT DIVIDE", unicode 0x2224
  44608 | (kUnicodeCategory_Sm << 27), // "PARALLEL TO", unicode 0x2225
  44612 | (kUnicodeCategory_Sm << 27), // "NOT PARALLEL TO", unicode 0x2226
  44618 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND", unicode 0x2227
  44621 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR", unicode 0x2228
  44625 | (kUnicodeCategory_Sm << 27), // "INTERSECTION", unicode 0x2229
  44627 | (kUnicodeCategory_Sm << 27), // "UNION", unicode 0x222A
  44629 | (kUnicodeCategory_Sm << 27), // "INTEGRAL", unicode 0x222B
  44631 | (kUnicodeCategory_Sm << 27), // "DOUBLE INTEGRAL", unicode 0x222C
  44634 | (kUnicodeCategory_Sm << 27), // "TRIPLE INTEGRAL", unicode 0x222D
  44638 | (kUnicodeCategory_Sm << 27), // "CONTOUR INTEGRAL", unicode 0x222E
  44642 | (kUnicodeCategory_Sm << 27), // "SURFACE INTEGRAL", unicode 0x222F
  44647 | (kUnicodeCategory_Sm << 27), // "VOLUME INTEGRAL", unicode 0x2230
  44651 | (kUnicodeCategory_Sm << 27), // "CLOCKWISE INTEGRAL", unicode 0x2231
  44655 | (kUnicodeCategory_Sm << 27), // "CLOCKWISE CONTOUR INTEGRAL", unicode 0x2232
  44661 | (kUnicodeCategory_Sm << 27), // "ANTICLOCKWISE CONTOUR INTEGRAL", unicode 0x2233
  44667 | (kUnicodeCategory_Sm << 27), // "THEREFORE", unicode 0x2234
  44669 | (kUnicodeCategory_Sm << 27), // "BECAUSE", unicode 0x2235
  44671 | (kUnicodeCategory_Sm << 27), // "RATIO", unicode 0x2236
  44674 | (kUnicodeCategory_Sm << 27), // "PROPORTION", unicode 0x2237
  44676 | (kUnicodeCategory_Sm << 27), // "DOT MINUS", unicode 0x2238
  44679 | (kUnicodeCategory_Sm << 27), // "EXCESS", unicode 0x2239
  44682 | (kUnicodeCategory_Sm << 27), // "GEOMETRIC PROPORTION", unicode 0x223A
  44686 | (kUnicodeCategory_Sm << 27), // "HOMOTHETIC", unicode 0x223B
  44688 | (kUnicodeCategory_Sm << 27), // "TILDE OPERATOR", unicode 0x223C
  44692 | (kUnicodeCategory_Sm << 27), // "REVERSED TILDE", unicode 0x223D
  44696 | (kUnicodeCategory_Sm << 27), // "INVERTED LAZY S", unicode 0x223E
  44703 | (kUnicodeCategory_Sm << 27), // "SINE WAVE", unicode 0x223F
  44708 | (kUnicodeCategory_Sm << 27), // "WREATH PRODUCT", unicode 0x2240
  44713 | (kUnicodeCategory_Sm << 27), // "NOT TILDE", unicode 0x2241
  44717 | (kUnicodeCategory_Sm << 27), // "MINUS TILDE", unicode 0x2242
  44721 | (kUnicodeCategory_Sm << 27), // "ASYMPTOTICALLY EQUAL TO", unicode 0x2243
  44727 | (kUnicodeCategory_Sm << 27), // "NOT ASYMPTOTICALLY EQUAL TO", unicode 0x2244
  44735 | (kUnicodeCategory_Sm << 27), // "APPROXIMATELY EQUAL TO", unicode 0x2245
  44741 | (kUnicodeCategory_Sm << 27), // "APPROXIMATELY BUT NOT ACTUALLY EQUAL TO", unicode 0x2246
  44753 | (kUnicodeCategory_Sm << 27), // "NEITHER APPROXIMATELY NOR ACTUALLY EQUAL TO", unicode 0x2247
  44765 | (kUnicodeCategory_Sm << 27), // "ALMOST EQUAL TO", unicode 0x2248
  44771 | (kUnicodeCategory_Sm << 27), // "NOT ALMOST EQUAL TO", unicode 0x2249
  44779 | (kUnicodeCategory_Sm << 27), // "ALMOST EQUAL OR EQUAL TO", unicode 0x224A
  44789 | (kUnicodeCategory_Sm << 27), // "TRIPLE TILDE", unicode 0x224B
  44793 | (kUnicodeCategory_Sm << 27), // "ALL EQUAL TO", unicode 0x224C
  44799 | (kUnicodeCategory_Sm << 27), // "EQUIVALENT TO", unicode 0x224D
  44803 | (kUnicodeCategory_Sm << 27), // "GEOMETRICALLY EQUIVALENT TO", unicode 0x224E
  44809 | (kUnicodeCategory_Sm << 27), // "DIFFERENCE BETWEEN", unicode 0x224F
  44814 | (kUnicodeCategory_Sm << 27), // "APPROACHES THE LIMIT", unicode 0x2250
  44821 | (kUnicodeCategory_Sm << 27), // "GEOMETRICALLY EQUAL TO", unicode 0x2251
  44827 | (kUnicodeCategory_Sm << 27), // "APPROXIMATELY EQUAL TO OR THE IMAGE OF", unicode 0x2252
  44841 | (kUnicodeCategory_Sm << 27), // "IMAGE OF OR APPROXIMATELY EQUAL TO", unicode 0x2253
  44853 | (kUnicodeCategory_Sm << 27), // "COLON EQUALS", unicode 0x2254
  44857 | (kUnicodeCategory_Sm << 27), // "EQUALS COLON", unicode 0x2255
  44861 | (kUnicodeCategory_Sm << 27), // "RING IN EQUAL TO", unicode 0x2256
  44869 | (kUnicodeCategory_Sm << 27), // "RING EQUAL TO", unicode 0x2257
  44875 | (kUnicodeCategory_Sm << 27), // "CORRESPONDS TO", unicode 0x2258
  44880 | (kUnicodeCategory_Sm << 27), // "ESTIMATES", unicode 0x2259
  44882 | (kUnicodeCategory_Sm << 27), // "EQUIANGULAR TO", unicode 0x225A
  44887 | (kUnicodeCategory_Sm << 27), // "STAR EQUALS", unicode 0x225B
  44891 | (kUnicodeCategory_Sm << 27), // "DELTA EQUAL TO", unicode 0x225C
  44897 | (kUnicodeCategory_Sm << 27), // "EQUAL TO BY DEFINITION", unicode 0x225D
  44906 | (kUnicodeCategory_Sm << 27), // "MEASURED BY", unicode 0x225E
  44910 | (kUnicodeCategory_Sm << 27), // "QUESTIONED EQUAL TO", unicode 0x225F
  44917 | (kUnicodeCategory_Sm << 27), // "NOT EQUAL TO", unicode 0x2260
  44923 | (kUnicodeCategory_Sm << 27), // "IDENTICAL TO", unicode 0x2261
  44927 | (kUnicodeCategory_Sm << 27), // "NOT IDENTICAL TO", unicode 0x2262
  44933 | (kUnicodeCategory_Sm << 27), // "STRICTLY EQUIVALENT TO", unicode 0x2263
  44940 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR EQUAL TO", unicode 0x2264
  44950 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR EQUAL TO", unicode 0x2265
  44960 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OVER EQUAL TO", unicode 0x2266
  44970 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OVER EQUAL TO", unicode 0x2267
  44980 | (kUnicodeCategory_Sm << 27), // "LESS-THAN BUT NOT EQUAL TO", unicode 0x2268
  44992 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN BUT NOT EQUAL TO", unicode 0x2269
  45004 | (kUnicodeCategory_Sm << 27), // "MUCH LESS-THAN", unicode 0x226A
  45010 | (kUnicodeCategory_Sm << 27), // "MUCH GREATER-THAN", unicode 0x226B
  45016 | (kUnicodeCategory_Sm << 27), // "BETWEEN", unicode 0x226C
  45018 | (kUnicodeCategory_Sm << 27), // "NOT EQUIVALENT TO", unicode 0x226D
  45024 | (kUnicodeCategory_Sm << 27), // "NOT LESS-THAN", unicode 0x226E
  45030 | (kUnicodeCategory_Sm << 27), // "NOT GREATER-THAN", unicode 0x226F
  45036 | (kUnicodeCategory_Sm << 27), // "NEITHER LESS-THAN NOR EQUAL TO", unicode 0x2270
  45048 | (kUnicodeCategory_Sm << 27), // "NEITHER GREATER-THAN NOR EQUAL TO", unicode 0x2271
  45060 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR EQUIVALENT TO", unicode 0x2272
  45070 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR EQUIVALENT TO", unicode 0x2273
  45080 | (kUnicodeCategory_Sm << 27), // "NEITHER LESS-THAN NOR EQUIVALENT TO", unicode 0x2274
  45092 | (kUnicodeCategory_Sm << 27), // "NEITHER GREATER-THAN NOR EQUIVALENT TO", unicode 0x2275
  45104 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR GREATER-THAN", unicode 0x2276
  45114 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR LESS-THAN", unicode 0x2277
  45124 | (kUnicodeCategory_Sm << 27), // "NEITHER LESS-THAN NOR GREATER-THAN", unicode 0x2278
  45136 | (kUnicodeCategory_Sm << 27), // "NEITHER GREATER-THAN NOR LESS-THAN", unicode 0x2279
  45148 | (kUnicodeCategory_Sm << 27), // "PRECEDES", unicode 0x227A
  45150 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS", unicode 0x227B
  45152 | (kUnicodeCategory_Sm << 27), // "PRECEDES OR EQUAL TO", unicode 0x227C
  45160 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS OR EQUAL TO", unicode 0x227D
  45168 | (kUnicodeCategory_Sm << 27), // "PRECEDES OR EQUIVALENT TO", unicode 0x227E
  45176 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS OR EQUIVALENT TO", unicode 0x227F
  45184 | (kUnicodeCategory_Sm << 27), // "DOES NOT PRECEDE", unicode 0x2280
  45190 | (kUnicodeCategory_Sm << 27), // "DOES NOT SUCCEED", unicode 0x2281
  45196 | (kUnicodeCategory_Sm << 27), // "SUBSET OF", unicode 0x2282
  45200 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF", unicode 0x2283
  45204 | (kUnicodeCategory_Sm << 27), // "NOT A SUBSET OF", unicode 0x2284
  45211 | (kUnicodeCategory_Sm << 27), // "NOT A SUPERSET OF", unicode 0x2285
  45218 | (kUnicodeCategory_Sm << 27), // "SUBSET OF OR EQUAL TO", unicode 0x2286
  45228 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF OR EQUAL TO", unicode 0x2287
  45238 | (kUnicodeCategory_Sm << 27), // "NEITHER A SUBSET OF NOR EQUAL TO", unicode 0x2288
  45251 | (kUnicodeCategory_Sm << 27), // "NEITHER A SUPERSET OF NOR EQUAL TO", unicode 0x2289
  45264 | (kUnicodeCategory_Sm << 27), // "SUBSET OF WITH NOT EQUAL TO", unicode 0x228A
  45275 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF WITH NOT EQUAL TO", unicode 0x228B
  45286 | (kUnicodeCategory_Sm << 27), // "MULTISET", unicode 0x228C
  45288 | (kUnicodeCategory_Sm << 27), // "MULTISET MULTIPLICATION", unicode 0x228D
  45292 | (kUnicodeCategory_Sm << 27), // "MULTISET UNION", unicode 0x228E
  45296 | (kUnicodeCategory_Sm << 27), // "SQUARE IMAGE OF", unicode 0x228F
  45301 | (kUnicodeCategory_Sm << 27), // "SQUARE ORIGINAL OF", unicode 0x2290
  45306 | (kUnicodeCategory_Sm << 27), // "SQUARE IMAGE OF OR EQUAL TO", unicode 0x2291
  45317 | (kUnicodeCategory_Sm << 27), // "SQUARE ORIGINAL OF OR EQUAL TO", unicode 0x2292
  45328 | (kUnicodeCategory_Sm << 27), // "SQUARE CAP", unicode 0x2293
  45331 | (kUnicodeCategory_Sm << 27), // "SQUARE CUP", unicode 0x2294
  45334 | (kUnicodeCategory_Sm << 27), // "CIRCLED PLUS", unicode 0x2295
  45337 | (kUnicodeCategory_Sm << 27), // "CIRCLED MINUS", unicode 0x2296
  45340 | (kUnicodeCategory_Sm << 27), // "CIRCLED TIMES", unicode 0x2297
  45342 | (kUnicodeCategory_Sm << 27), // "CIRCLED DIVISION SLASH", unicode 0x2298
  45347 | (kUnicodeCategory_Sm << 27), // "CIRCLED DOT OPERATOR", unicode 0x2299
  45351 | (kUnicodeCategory_Sm << 27), // "CIRCLED RING OPERATOR", unicode 0x229A
  45356 | (kUnicodeCategory_Sm << 27), // "CIRCLED ASTERISK OPERATOR", unicode 0x229B
  45361 | (kUnicodeCategory_Sm << 27), // "CIRCLED EQUALS", unicode 0x229C
  45364 | (kUnicodeCategory_Sm << 27), // "CIRCLED DASH", unicode 0x229D
  45367 | (kUnicodeCategory_Sm << 27), // "SQUARED PLUS", unicode 0x229E
  45371 | (kUnicodeCategory_Sm << 27), // "SQUARED MINUS", unicode 0x229F
  45375 | (kUnicodeCategory_Sm << 27), // "SQUARED TIMES", unicode 0x22A0
  45378 | (kUnicodeCategory_Sm << 27), // "SQUARED DOT OPERATOR", unicode 0x22A1
  45383 | (kUnicodeCategory_Sm << 27), // "RIGHT TACK", unicode 0x22A2
  45386 | (kUnicodeCategory_Sm << 27), // "LEFT TACK", unicode 0x22A3
  45389 | (kUnicodeCategory_Sm << 27), // "DOWN TACK", unicode 0x22A4
  45393 | (kUnicodeCategory_Sm << 27), // "UP TACK", unicode 0x22A5
  45397 | (kUnicodeCategory_Sm << 27), // "ASSERTION", unicode 0x22A6
  45400 | (kUnicodeCategory_Sm << 27), // "MODELS", unicode 0x22A7
  45403 | (kUnicodeCategory_Sm << 27), // "TRUE", unicode 0x22A8
  45405 | (kUnicodeCategory_Sm << 27), // "FORCES", unicode 0x22A9
  45407 | (kUnicodeCategory_Sm << 27), // "TRIPLE VERTICAL BAR RIGHT TURNSTILE", unicode 0x22AA
  45415 | (kUnicodeCategory_Sm << 27), // "DOUBLE VERTICAL BAR DOUBLE RIGHT TURNSTILE", unicode 0x22AB
  45423 | (kUnicodeCategory_Sm << 27), // "DOES NOT PROVE", unicode 0x22AC
  45430 | (kUnicodeCategory_Sm << 27), // "NOT TRUE", unicode 0x22AD
  45434 | (kUnicodeCategory_Sm << 27), // "DOES NOT FORCE", unicode 0x22AE
  45441 | (kUnicodeCategory_Sm << 27), // "NEGATED DOUBLE VERTICAL BAR DOUBLE RIGHT TURNSTILE", unicode 0x22AF
  45451 | (kUnicodeCategory_Sm << 27), // "PRECEDES UNDER RELATION", unicode 0x22B0
  45457 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS UNDER RELATION", unicode 0x22B1
  45463 | (kUnicodeCategory_Sm << 27), // "NORMAL SUBGROUP OF", unicode 0x22B2
  45469 | (kUnicodeCategory_Sm << 27), // "CONTAINS AS NORMAL SUBGROUP", unicode 0x22B3
  45477 | (kUnicodeCategory_Sm << 27), // "NORMAL SUBGROUP OF OR EQUAL TO", unicode 0x22B4
  45489 | (kUnicodeCategory_Sm << 27), // "CONTAINS AS NORMAL SUBGROUP OR EQUAL TO", unicode 0x22B5
  45503 | (kUnicodeCategory_Sm << 27), // "ORIGINAL OF", unicode 0x22B6
  45507 | (kUnicodeCategory_Sm << 27), // "IMAGE OF", unicode 0x22B7
  45511 | (kUnicodeCategory_Sm << 27), // "MULTIMAP", unicode 0x22B8
  45513 | (kUnicodeCategory_Sm << 27), // "HERMITIAN CONJUGATE MATRIX", unicode 0x22B9
  45521 | (kUnicodeCategory_Sm << 27), // "INTERCALATE", unicode 0x22BA
  45523 | (kUnicodeCategory_Sm << 27), // "XOR", unicode 0x22BB
  45525 | (kUnicodeCategory_Sm << 27), // "NAND", unicode 0x22BC
  45528 | (kUnicodeCategory_Sm << 27), // "NOR", unicode 0x22BD
  45530 | (kUnicodeCategory_Sm << 27), // "RIGHT ANGLE WITH ARC", unicode 0x22BE
  45536 | (kUnicodeCategory_Sm << 27), // "RIGHT TRIANGLE", unicode 0x22BF
  45539 | (kUnicodeCategory_Sm << 27), // "N-ARY LOGICAL AND", unicode 0x22C0
  45546 | (kUnicodeCategory_Sm << 27), // "N-ARY LOGICAL OR", unicode 0x22C1
  45554 | (kUnicodeCategory_Sm << 27), // "N-ARY INTERSECTION", unicode 0x22C2
  45560 | (kUnicodeCategory_Sm << 27), // "N-ARY UNION", unicode 0x22C3
  45566 | (kUnicodeCategory_Sm << 27), // "DIAMOND OPERATOR", unicode 0x22C4
  45570 | (kUnicodeCategory_Sm << 27), // "DOT OPERATOR", unicode 0x22C5
  45573 | (kUnicodeCategory_Sm << 27), // "STAR OPERATOR", unicode 0x22C6
  45577 | (kUnicodeCategory_Sm << 27), // "DIVISION TIMES", unicode 0x22C7
  45580 | (kUnicodeCategory_Sm << 27), // "BOWTIE", unicode 0x22C8
  45582 | (kUnicodeCategory_Sm << 27), // "LEFT NORMAL FACTOR SEMIDIRECT PRODUCT", unicode 0x22C9
  45591 | (kUnicodeCategory_Sm << 27), // "RIGHT NORMAL FACTOR SEMIDIRECT PRODUCT", unicode 0x22CA
  45600 | (kUnicodeCategory_Sm << 27), // "LEFT SEMIDIRECT PRODUCT", unicode 0x22CB
  45605 | (kUnicodeCategory_Sm << 27), // "RIGHT SEMIDIRECT PRODUCT", unicode 0x22CC
  45610 | (kUnicodeCategory_Sm << 27), // "REVERSED TILDE EQUALS", unicode 0x22CD
  45616 | (kUnicodeCategory_Sm << 27), // "CURLY LOGICAL OR", unicode 0x22CE
  45622 | (kUnicodeCategory_Sm << 27), // "CURLY LOGICAL AND", unicode 0x22CF
  45627 | (kUnicodeCategory_Sm << 27), // "DOUBLE SUBSET", unicode 0x22D0
  45630 | (kUnicodeCategory_Sm << 27), // "DOUBLE SUPERSET", unicode 0x22D1
  45633 | (kUnicodeCategory_Sm << 27), // "DOUBLE INTERSECTION", unicode 0x22D2
  45636 | (kUnicodeCategory_Sm << 27), // "DOUBLE UNION", unicode 0x22D3
  45639 | (kUnicodeCategory_Sm << 27), // "PITCHFORK", unicode 0x22D4
  45641 | (kUnicodeCategory_Sm << 27), // "EQUAL AND PARALLEL TO", unicode 0x22D5
  45648 | (kUnicodeCategory_Sm << 27), // "LESS-THAN WITH DOT", unicode 0x22D6
  45654 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN WITH DOT", unicode 0x22D7
  45660 | (kUnicodeCategory_Sm << 27), // "VERY MUCH LESS-THAN", unicode 0x22D8
  45668 | (kUnicodeCategory_Sm << 27), // "VERY MUCH GREATER-THAN", unicode 0x22D9
  45676 | (kUnicodeCategory_Sm << 27), // "LESS-THAN EQUAL TO OR GREATER-THAN", unicode 0x22DA
  45690 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN EQUAL TO OR LESS-THAN", unicode 0x22DB
  45704 | (kUnicodeCategory_Sm << 27), // "EQUAL TO OR LESS-THAN", unicode 0x22DC
  45714 | (kUnicodeCategory_Sm << 27), // "EQUAL TO OR GREATER-THAN", unicode 0x22DD
  45724 | (kUnicodeCategory_Sm << 27), // "EQUAL TO OR PRECEDES", unicode 0x22DE
  45732 | (kUnicodeCategory_Sm << 27), // "EQUAL TO OR SUCCEEDS", unicode 0x22DF
  45740 | (kUnicodeCategory_Sm << 27), // "DOES NOT PRECEDE OR EQUAL", unicode 0x22E0
  45750 | (kUnicodeCategory_Sm << 27), // "DOES NOT SUCCEED OR EQUAL", unicode 0x22E1
  45760 | (kUnicodeCategory_Sm << 27), // "NOT SQUARE IMAGE OF OR EQUAL TO", unicode 0x22E2
  45773 | (kUnicodeCategory_Sm << 27), // "NOT SQUARE ORIGINAL OF OR EQUAL TO", unicode 0x22E3
  45786 | (kUnicodeCategory_Sm << 27), // "SQUARE IMAGE OF OR NOT EQUAL TO", unicode 0x22E4
  45799 | (kUnicodeCategory_Sm << 27), // "SQUARE ORIGINAL OF OR NOT EQUAL TO", unicode 0x22E5
  45812 | (kUnicodeCategory_Sm << 27), // "LESS-THAN BUT NOT EQUIVALENT TO", unicode 0x22E6
  45824 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN BUT NOT EQUIVALENT TO", unicode 0x22E7
  45836 | (kUnicodeCategory_Sm << 27), // "PRECEDES BUT NOT EQUIVALENT TO", unicode 0x22E8
  45846 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS BUT NOT EQUIVALENT TO", unicode 0x22E9
  45856 | (kUnicodeCategory_Sm << 27), // "NOT NORMAL SUBGROUP OF", unicode 0x22EA
  45864 | (kUnicodeCategory_Sm << 27), // "DOES NOT CONTAIN AS NORMAL SUBGROUP", unicode 0x22EB
  45876 | (kUnicodeCategory_Sm << 27), // "NOT NORMAL SUBGROUP OF OR EQUAL TO", unicode 0x22EC
  45890 | (kUnicodeCategory_Sm << 27), // "DOES NOT CONTAIN AS NORMAL SUBGROUP OR EQUAL", unicode 0x22ED
  45906 | (kUnicodeCategory_Sm << 27), // "VERTICAL ELLIPSIS", unicode 0x22EE
  45909 | (kUnicodeCategory_Sm << 27), // "MIDLINE HORIZONTAL ELLIPSIS", unicode 0x22EF
  45916 | (kUnicodeCategory_Sm << 27), // "UP RIGHT DIAGONAL ELLIPSIS", unicode 0x22F0
  45923 | (kUnicodeCategory_Sm << 27), // "DOWN RIGHT DIAGONAL ELLIPSIS", unicode 0x22F1
  45930 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF WITH LONG HORIZONTAL STROKE", unicode 0x22F2
  45941 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF WITH VERTICAL BAR AT END OF HORIZONTAL STROKE", unicode 0x22F3
  45959 | (kUnicodeCategory_Sm << 27), // "SMALL ELEMENT OF WITH VERTICAL BAR AT END OF HORIZONTAL STROKE", unicode 0x22F4
  45978 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF WITH DOT ABOVE", unicode 0x22F5
  45985 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF WITH OVERBAR", unicode 0x22F6
  45992 | (kUnicodeCategory_Sm << 27), // "SMALL ELEMENT OF WITH OVERBAR", unicode 0x22F7
  46000 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF WITH UNDERBAR", unicode 0x22F8
  46007 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF WITH TWO HORIZONTAL STROKES", unicode 0x22F9
  46018 | (kUnicodeCategory_Sm << 27), // "CONTAINS WITH LONG HORIZONTAL STROKE", unicode 0x22FA
  46027 | (kUnicodeCategory_Sm << 27), // "CONTAINS WITH VERTICAL BAR AT END OF HORIZONTAL STROKE", unicode 0x22FB
  46043 | (kUnicodeCategory_Sm << 27), // "SMALL CONTAINS WITH VERTICAL BAR AT END OF HORIZONTAL STROKE", unicode 0x22FC
  46060 | (kUnicodeCategory_Sm << 27), // "CONTAINS WITH OVERBAR", unicode 0x22FD
  46065 | (kUnicodeCategory_Sm << 27), // "SMALL CONTAINS WITH OVERBAR", unicode 0x22FE
  46071 | (kUnicodeCategory_Sm << 27), // "Z NOTATION BAG MEMBERSHIP", unicode 0x22FF
} ;

static const uint32_t gNamePage35 [256] = {
  46079 | (kUnicodeCategory_So << 27), // "DIAMETER SIGN", unicode 0x2300
  46083 | (kUnicodeCategory_So << 27), // "ELECTRIC ARROW", unicode 0x2301
  46087 | (kUnicodeCategory_So << 27), // "HOUSE", unicode 0x2302
  46090 | (kUnicodeCategory_So << 27), // "UP ARROWHEAD", unicode 0x2303
  46094 | (kUnicodeCategory_So << 27), // "DOWN ARROWHEAD", unicode 0x2304
  46098 | (kUnicodeCategory_So << 27), // "PROJECTIVE", unicode 0x2305
  46100 | (kUnicodeCategory_So << 27), // "PERSPECTIVE", unicode 0x2306
  46103 | (kUnicodeCategory_So << 27), // "WAVY LINE", unicode 0x2307
  46107 | (kUnicodeCategory_Sm << 27), // "LEFT CEILING", unicode 0x2308
  46110 | (kUnicodeCategory_Sm << 27), // "RIGHT CEILING", unicode 0x2309
  46113 | (kUnicodeCategory_Sm << 27), // "LEFT FLOOR", unicode 0x230A
  46116 | (kUnicodeCategory_Sm << 27), // "RIGHT FLOOR", unicode 0x230B
  46119 | (kUnicodeCategory_So << 27), // "BOTTOM RIGHT CROP", unicode 0x230C
  46124 | (kUnicodeCategory_So << 27), // "BOTTOM LEFT CROP", unicode 0x230D
  46129 | (kUnicodeCategory_So << 27), // "TOP RIGHT CROP", unicode 0x230E
  46134 | (kUnicodeCategory_So << 27), // "TOP LEFT CROP", unicode 0x230F
  46139 | (kUnicodeCategory_So << 27), // "REVERSED NOT SIGN", unicode 0x2310
  46144 | (kUnicodeCategory_So << 27), // "SQUARE LOZENGE", unicode 0x2311
  46147 | (kUnicodeCategory_So << 27), // "ARC", unicode 0x2312
  46149 | (kUnicodeCategory_So << 27), // "SEGMENT", unicode 0x2313
  46151 | (kUnicodeCategory_So << 27), // "SECTOR", unicode 0x2314
  46153 | (kUnicodeCategory_So << 27), // "TELEPHONE RECORDER", unicode 0x2315
  46157 | (kUnicodeCategory_So << 27), // "POSITION INDICATOR", unicode 0x2316
  46162 | (kUnicodeCategory_So << 27), // "VIEWDATA SQUARE", unicode 0x2317
  46165 | (kUnicodeCategory_So << 27), // "PLACE OF INTEREST SIGN", unicode 0x2318
  46172 | (kUnicodeCategory_So << 27), // "TURNED NOT SIGN", unicode 0x2319
  46177 | (kUnicodeCategory_So << 27), // "WATCH", unicode 0x231A
  46179 | (kUnicodeCategory_So << 27), // "HOURGLASS", unicode 0x231B
  46181 | (kUnicodeCategory_So << 27), // "TOP LEFT CORNER", unicode 0x231C
  46186 | (kUnicodeCategory_So << 27), // "TOP RIGHT CORNER", unicode 0x231D
  46191 | (kUnicodeCategory_So << 27), // "BOTTOM LEFT CORNER", unicode 0x231E
  46196 | (kUnicodeCategory_So << 27), // "BOTTOM RIGHT CORNER", unicode 0x231F
  46201 | (kUnicodeCategory_Sm << 27), // "TOP HALF INTEGRAL", unicode 0x2320
  46207 | (kUnicodeCategory_Sm << 27), // "BOTTOM HALF INTEGRAL", unicode 0x2321
  46213 | (kUnicodeCategory_So << 27), // "FROWN", unicode 0x2322
  46216 | (kUnicodeCategory_So << 27), // "SMILE", unicode 0x2323
  46219 | (kUnicodeCategory_So << 27), // "UP ARROWHEAD BETWEEN TWO HORIZONTAL BARS", unicode 0x2324
  46231 | (kUnicodeCategory_So << 27), // "OPTION KEY", unicode 0x2325
  46236 | (kUnicodeCategory_So << 27), // "ERASE TO THE RIGHT", unicode 0x2326
  46243 | (kUnicodeCategory_So << 27), // "X IN A RECTANGLE BOX", unicode 0x2327
  46252 | (kUnicodeCategory_So << 27), // "KEYBOARD", unicode 0x2328
  46255 | (kUnicodeCategory_Ps << 27), // "LEFT-POINTING ANGLE BRACKET", unicode 0x2329
  46262 | (kUnicodeCategory_Pe << 27), // "RIGHT-POINTING ANGLE BRACKET", unicode 0x232A
  46269 | (kUnicodeCategory_So << 27), // "ERASE TO THE LEFT", unicode 0x232B
  46276 | (kUnicodeCategory_So << 27), // "BENZENE RING", unicode 0x232C
  46280 | (kUnicodeCategory_So << 27), // "CYLINDRICITY", unicode 0x232D
  46283 | (kUnicodeCategory_So << 27), // "ALL AROUND-PROFILE", unicode 0x232E
  46290 | (kUnicodeCategory_So << 27), // "SYMMETRY", unicode 0x232F
  46293 | (kUnicodeCategory_So << 27), // "TOTAL RUNOUT", unicode 0x2330
  46299 | (kUnicodeCategory_So << 27), // "DIMENSION ORIGIN", unicode 0x2331
  46304 | (kUnicodeCategory_So << 27), // "CONICAL TAPER", unicode 0x2332
  46310 | (kUnicodeCategory_So << 27), // "SLOPE", unicode 0x2333
  46313 | (kUnicodeCategory_So << 27), // "COUNTERBORE", unicode 0x2334
  46316 | (kUnicodeCategory_So << 27), // "COUNTERSINK", unicode 0x2335
  46319 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL I-BEAM", unicode 0x2336
  46328 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL SQUISH QUAD", unicode 0x2337
  46337 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD EQUAL", unicode 0x2338
  46346 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD DIVIDE", unicode 0x2339
  46355 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD DIAMOND", unicode 0x233A
  46364 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD JOT", unicode 0x233B
  46373 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD CIRCLE", unicode 0x233C
  46382 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL CIRCLE STILE", unicode 0x233D
  46391 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL CIRCLE JOT", unicode 0x233E
  46400 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL SLASH BAR", unicode 0x233F
  46409 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL BACKSLASH BAR", unicode 0x2340
  46418 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD SLASH", unicode 0x2341
  46427 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD BACKSLASH", unicode 0x2342
  46436 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD LESS-THAN", unicode 0x2343
  46447 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD GREATER-THAN", unicode 0x2344
  46458 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL LEFTWARDS VANE", unicode 0x2345
  46467 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL RIGHTWARDS VANE", unicode 0x2346
  46476 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD LEFTWARDS ARROW", unicode 0x2347
  46486 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD RIGHTWARDS ARROW", unicode 0x2348
  46496 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL CIRCLE BACKSLASH", unicode 0x2349
  46505 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DOWN TACK UNDERBAR", unicode 0x234A
  46516 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DELTA STILE", unicode 0x234B
  46525 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD DOWN CARET", unicode 0x234C
  46536 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD DELTA", unicode 0x234D
  46545 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DOWN TACK JOT", unicode 0x234E
  46556 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL UPWARDS VANE", unicode 0x234F
  46565 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD UPWARDS ARROW", unicode 0x2350
  46575 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL UP TACK OVERBAR", unicode 0x2351
  46586 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DEL STILE", unicode 0x2352
  46595 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD UP CARET", unicode 0x2353
  46606 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD DEL", unicode 0x2354
  46615 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL UP TACK JOT", unicode 0x2355
  46626 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DOWNWARDS VANE", unicode 0x2356
  46635 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD DOWNWARDS ARROW", unicode 0x2357
  46645 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUOTE UNDERBAR", unicode 0x2358
  46654 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DELTA UNDERBAR", unicode 0x2359
  46663 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DIAMOND UNDERBAR", unicode 0x235A
  46672 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL JOT UNDERBAR", unicode 0x235B
  46681 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL CIRCLE UNDERBAR", unicode 0x235C
  46690 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL UP SHOE JOT", unicode 0x235D
  46701 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUOTE QUAD", unicode 0x235E
  46710 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL CIRCLE STAR", unicode 0x235F
  46719 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD COLON", unicode 0x2360
  46728 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL UP TACK DIAERESIS", unicode 0x2361
  46739 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DEL DIAERESIS", unicode 0x2362
  46748 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL STAR DIAERESIS", unicode 0x2363
  46757 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL JOT DIAERESIS", unicode 0x2364
  46766 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL CIRCLE DIAERESIS", unicode 0x2365
  46775 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DOWN SHOE STILE", unicode 0x2366
  46786 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL LEFT SHOE STILE", unicode 0x2367
  46796 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL TILDE DIAERESIS", unicode 0x2368
  46805 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL GREATER-THAN DIAERESIS", unicode 0x2369
  46816 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL COMMA BAR", unicode 0x236A
  46825 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DEL TILDE", unicode 0x236B
  46834 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL ZILDE", unicode 0x236C
  46842 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL STILE TILDE", unicode 0x236D
  46851 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL SEMICOLON UNDERBAR", unicode 0x236E
  46860 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD NOT EQUAL", unicode 0x236F
  46871 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD QUESTION", unicode 0x2370
  46880 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL DOWN CARET TILDE", unicode 0x2371
  46891 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL UP CARET TILDE", unicode 0x2372
  46902 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL IOTA", unicode 0x2373
  46909 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL RHO", unicode 0x2374
  46916 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL OMEGA", unicode 0x2375
  46923 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL ALPHA UNDERBAR", unicode 0x2376
  46932 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL EPSILON UNDERBAR", unicode 0x2377
  46941 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL IOTA UNDERBAR", unicode 0x2378
  46950 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL OMEGA UNDERBAR", unicode 0x2379
  46959 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL ALPHA", unicode 0x237A
  46966 | (kUnicodeCategory_So << 27), // "NOT CHECK MARK", unicode 0x237B
  46971 | (kUnicodeCategory_Sm << 27), // "RIGHT ANGLE WITH DOWNWARDS ZIGZAG ARROW", unicode 0x237C
  46980 | (kUnicodeCategory_So << 27), // "SHOULDERED OPEN BOX", unicode 0x237D
  46987 | (kUnicodeCategory_So << 27), // "BELL SYMBOL", unicode 0x237E
  46990 | (kUnicodeCategory_So << 27), // "VERTICAL LINE WITH MIDDLE DOT", unicode 0x237F
  46997 | (kUnicodeCategory_So << 27), // "INSERTION SYMBOL", unicode 0x2380
  47000 | (kUnicodeCategory_So << 27), // "CONTINUOUS UNDERLINE SYMBOL", unicode 0x2381
  47006 | (kUnicodeCategory_So << 27), // "DISCONTINUOUS UNDERLINE SYMBOL", unicode 0x2382
  47011 | (kUnicodeCategory_So << 27), // "EMPHASIS SYMBOL", unicode 0x2383
  47014 | (kUnicodeCategory_So << 27), // "COMPOSITION SYMBOL", unicode 0x2384
  47017 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH CENTRE VERTICAL LINE", unicode 0x2385
  47026 | (kUnicodeCategory_So << 27), // "ENTER SYMBOL", unicode 0x2386
  47029 | (kUnicodeCategory_So << 27), // "ALTERNATIVE KEY SYMBOL", unicode 0x2387
  47034 | (kUnicodeCategory_So << 27), // "HELM SYMBOL", unicode 0x2388
  47038 | (kUnicodeCategory_So << 27), // "CIRCLED HORIZONTAL BAR WITH NOTCH", unicode 0x2389
  47046 | (kUnicodeCategory_So << 27), // "CIRCLED TRIANGLE DOWN", unicode 0x238A
  47051 | (kUnicodeCategory_So << 27), // "BROKEN CIRCLE WITH NORTHWEST ARROW", unicode 0x238B
  47060 | (kUnicodeCategory_So << 27), // "UNDO SYMBOL", unicode 0x238C
  47064 | (kUnicodeCategory_So << 27), // "MONOSTABLE SYMBOL", unicode 0x238D
  47068 | (kUnicodeCategory_So << 27), // "HYSTERESIS SYMBOL", unicode 0x238E
  47071 | (kUnicodeCategory_So << 27), // "OPEN-CIRCUIT-OUTPUT H-TYPE SYMBOL", unicode 0x238F
  47082 | (kUnicodeCategory_So << 27), // "OPEN-CIRCUIT-OUTPUT L-TYPE SYMBOL", unicode 0x2390
  47093 | (kUnicodeCategory_So << 27), // "PASSIVE-PULL-DOWN-OUTPUT SYMBOL", unicode 0x2391
  47102 | (kUnicodeCategory_So << 27), // "PASSIVE-PULL-UP-OUTPUT SYMBOL", unicode 0x2392
  47111 | (kUnicodeCategory_So << 27), // "DIRECT CURRENT SYMBOL FORM TWO", unicode 0x2393
  47119 | (kUnicodeCategory_So << 27), // "SOFTWARE-FUNCTION SYMBOL", unicode 0x2394
  47124 | (kUnicodeCategory_So << 27), // "APL FUNCTIONAL SYMBOL QUAD", unicode 0x2395
  47131 | (kUnicodeCategory_So << 27), // "DECIMAL SEPARATOR KEY SYMBOL", unicode 0x2396
  47138 | (kUnicodeCategory_So << 27), // "PREVIOUS PAGE", unicode 0x2397
  47142 | (kUnicodeCategory_So << 27), // "NEXT PAGE", unicode 0x2398
  47147 | (kUnicodeCategory_So << 27), // "PRINT SCREEN SYMBOL", unicode 0x2399
  47152 | (kUnicodeCategory_So << 27), // "CLEAR SCREEN SYMBOL", unicode 0x239A
  47157 | (kUnicodeCategory_Sm << 27), // "LEFT PARENTHESIS UPPER HOOK", unicode 0x239B
  47164 | (kUnicodeCategory_Sm << 27), // "LEFT PARENTHESIS EXTENSION", unicode 0x239C
  47169 | (kUnicodeCategory_Sm << 27), // "LEFT PARENTHESIS LOWER HOOK", unicode 0x239D
  47176 | (kUnicodeCategory_Sm << 27), // "RIGHT PARENTHESIS UPPER HOOK", unicode 0x239E
  47183 | (kUnicodeCategory_Sm << 27), // "RIGHT PARENTHESIS EXTENSION", unicode 0x239F
  47188 | (kUnicodeCategory_Sm << 27), // "RIGHT PARENTHESIS LOWER HOOK", unicode 0x23A0
  47195 | (kUnicodeCategory_Sm << 27), // "LEFT SQUARE BRACKET UPPER CORNER", unicode 0x23A1
  47203 | (kUnicodeCategory_Sm << 27), // "LEFT SQUARE BRACKET EXTENSION", unicode 0x23A2
  47209 | (kUnicodeCategory_Sm << 27), // "LEFT SQUARE BRACKET LOWER CORNER", unicode 0x23A3
  47217 | (kUnicodeCategory_Sm << 27), // "RIGHT SQUARE BRACKET UPPER CORNER", unicode 0x23A4
  47225 | (kUnicodeCategory_Sm << 27), // "RIGHT SQUARE BRACKET EXTENSION", unicode 0x23A5
  47231 | (kUnicodeCategory_Sm << 27), // "RIGHT SQUARE BRACKET LOWER CORNER", unicode 0x23A6
  47239 | (kUnicodeCategory_Sm << 27), // "LEFT CURLY BRACKET UPPER HOOK", unicode 0x23A7
  47248 | (kUnicodeCategory_Sm << 27), // "LEFT CURLY BRACKET MIDDLE PIECE", unicode 0x23A8
  47257 | (kUnicodeCategory_Sm << 27), // "LEFT CURLY BRACKET LOWER HOOK", unicode 0x23A9
  47266 | (kUnicodeCategory_Sm << 27), // "CURLY BRACKET EXTENSION", unicode 0x23AA
  47272 | (kUnicodeCategory_Sm << 27), // "RIGHT CURLY BRACKET UPPER HOOK", unicode 0x23AB
  47281 | (kUnicodeCategory_Sm << 27), // "RIGHT CURLY BRACKET MIDDLE PIECE", unicode 0x23AC
  47290 | (kUnicodeCategory_Sm << 27), // "RIGHT CURLY BRACKET LOWER HOOK", unicode 0x23AD
  47299 | (kUnicodeCategory_Sm << 27), // "INTEGRAL EXTENSION", unicode 0x23AE
  47303 | (kUnicodeCategory_Sm << 27), // "HORIZONTAL LINE EXTENSION", unicode 0x23AF
  47309 | (kUnicodeCategory_Sm << 27), // "UPPER LEFT OR LOWER RIGHT CURLY BRACKET SECTION", unicode 0x23B0
  47323 | (kUnicodeCategory_Sm << 27), // "UPPER RIGHT OR LOWER LEFT CURLY BRACKET SECTION", unicode 0x23B1
  47337 | (kUnicodeCategory_Sm << 27), // "SUMMATION TOP", unicode 0x23B2
  47341 | (kUnicodeCategory_Sm << 27), // "SUMMATION BOTTOM", unicode 0x23B3
  47345 | (kUnicodeCategory_So << 27), // "TOP SQUARE BRACKET", unicode 0x23B4
  47350 | (kUnicodeCategory_So << 27), // "BOTTOM SQUARE BRACKET", unicode 0x23B5
  47355 | (kUnicodeCategory_So << 27), // "BOTTOM SQUARE BRACKET OVER TOP SQUARE BRACKET", unicode 0x23B6
  47367 | (kUnicodeCategory_So << 27), // "RADICAL SYMBOL BOTTOM", unicode 0x23B7
  47371 | (kUnicodeCategory_So << 27), // "LEFT VERTICAL BOX LINE", unicode 0x23B8
  47377 | (kUnicodeCategory_So << 27), // "RIGHT VERTICAL BOX LINE", unicode 0x23B9
  47383 | (kUnicodeCategory_So << 27), // "HORIZONTAL SCAN LINE-1", unicode 0x23BA
  47391 | (kUnicodeCategory_So << 27), // "HORIZONTAL SCAN LINE-3", unicode 0x23BB
  47399 | (kUnicodeCategory_So << 27), // "HORIZONTAL SCAN LINE-7", unicode 0x23BC
  47407 | (kUnicodeCategory_So << 27), // "HORIZONTAL SCAN LINE-9", unicode 0x23BD
  47415 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL AND TOP RIGHT", unicode 0x23BE
  47425 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL AND BOTTOM RIGHT", unicode 0x23BF
  47435 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL WITH CIRCLE", unicode 0x23C0
  47444 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH CIRCLE", unicode 0x23C1
  47457 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH CIRCLE", unicode 0x23C2
  47470 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL WITH TRIANGLE", unicode 0x23C3
  47479 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH TRIANGLE", unicode 0x23C4
  47492 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH TRIANGLE", unicode 0x23C5
  47505 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL AND WAVE", unicode 0x23C6
  47514 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH WAVE", unicode 0x23C7
  47527 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH WAVE", unicode 0x23C8
  47540 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL", unicode 0x23C9
  47550 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL", unicode 0x23CA
  47560 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL AND TOP LEFT", unicode 0x23CB
  47570 | (kUnicodeCategory_So << 27), // "DENTISTRY SYMBOL LIGHT VERTICAL AND BOTTOM LEFT", unicode 0x23CC
  47580 | (kUnicodeCategory_So << 27), // "SQUARE FOOT", unicode 0x23CD
  47583 | (kUnicodeCategory_So << 27), // "RETURN SYMBOL", unicode 0x23CE
  47586 | (kUnicodeCategory_So << 27), // "EJECT SYMBOL", unicode 0x23CF
  47590 | (kUnicodeCategory_So << 27), // "VERTICAL LINE EXTENSION", unicode 0x23D0
  47595 | (kUnicodeCategory_So << 27), // "METRICAL BREVE", unicode 0x23D1
  47599 | (kUnicodeCategory_So << 27), // "METRICAL LONG OVER SHORT", unicode 0x23D2
  47607 | (kUnicodeCategory_So << 27), // "METRICAL SHORT OVER LONG", unicode 0x23D3
  47615 | (kUnicodeCategory_So << 27), // "METRICAL LONG OVER TWO SHORTS", unicode 0x23D4
  47625 | (kUnicodeCategory_So << 27), // "METRICAL TWO SHORTS OVER LONG", unicode 0x23D5
  47635 | (kUnicodeCategory_So << 27), // "METRICAL TWO SHORTS JOINED", unicode 0x23D6
  47643 | (kUnicodeCategory_So << 27), // "METRICAL TRISEME", unicode 0x23D7
  47647 | (kUnicodeCategory_So << 27), // "METRICAL TETRASEME", unicode 0x23D8
  47651 | (kUnicodeCategory_So << 27), // "METRICAL PENTASEME", unicode 0x23D9
  47655 | (kUnicodeCategory_So << 27), // "EARTH GROUND", unicode 0x23DA
  47660 | (kUnicodeCategory_So << 27), // "FUSE", unicode 0x23DB
  47662 | (kUnicodeCategory_Sm << 27), // "TOP PARENTHESIS", unicode 0x23DC
  47666 | (kUnicodeCategory_Sm << 27), // "BOTTOM PARENTHESIS", unicode 0x23DD
  47670 | (kUnicodeCategory_Sm << 27), // "TOP CURLY BRACKET", unicode 0x23DE
  47676 | (kUnicodeCategory_Sm << 27), // "BOTTOM CURLY BRACKET", unicode 0x23DF
  47682 | (kUnicodeCategory_Sm << 27), // "TOP TORTOISE SHELL BRACKET", unicode 0x23E0
  47690 | (kUnicodeCategory_Sm << 27), // "BOTTOM TORTOISE SHELL BRACKET", unicode 0x23E1
  47698 | (kUnicodeCategory_So << 27), // "WHITE TRAPEZIUM", unicode 0x23E2
  47703 | (kUnicodeCategory_So << 27), // "BENZENE RING WITH CIRCLE", unicode 0x23E3
  47710 | (kUnicodeCategory_So << 27), // "STRAIGHTNESS", unicode 0x23E4
  47713 | (kUnicodeCategory_So << 27), // "FLATNESS", unicode 0x23E5
  47716 | (kUnicodeCategory_So << 27), // "AC CURRENT", unicode 0x23E6
  47720 | (kUnicodeCategory_So << 27), // "ELECTRICAL INTERSECTION", unicode 0x23E7
  0, // undefined code 0x23E8
  0, // undefined code 0x23E9
  0, // undefined code 0x23EA
  0, // undefined code 0x23EB
  0, // undefined code 0x23EC
  0, // undefined code 0x23ED
  0, // undefined code 0x23EE
  0, // undefined code 0x23EF
  0, // undefined code 0x23F0
  0, // undefined code 0x23F1
  0, // undefined code 0x23F2
  0, // undefined code 0x23F3
  0, // undefined code 0x23F4
  0, // undefined code 0x23F5
  0, // undefined code 0x23F6
  0, // undefined code 0x23F7
  0, // undefined code 0x23F8
  0, // undefined code 0x23F9
  0, // undefined code 0x23FA
  0, // undefined code 0x23FB
  0, // undefined code 0x23FC
  0, // undefined code 0x23FD
  0, // undefined code 0x23FE
  0, // undefined code 0x23FF
} ;

static const uint32_t gNamePage36 [256] = {
  47724 | (kUnicodeCategory_So << 27), // "SYMBOL FOR NULL", unicode 0x2400
  47728 | (kUnicodeCategory_So << 27), // "SYMBOL FOR START OF HEADING", unicode 0x2401
  47737 | (kUnicodeCategory_So << 27), // "SYMBOL FOR START OF TEXT", unicode 0x2402
  47745 | (kUnicodeCategory_So << 27), // "SYMBOL FOR END OF TEXT", unicode 0x2403
  47753 | (kUnicodeCategory_So << 27), // "SYMBOL FOR END OF TRANSMISSION", unicode 0x2404
  47761 | (kUnicodeCategory_So << 27), // "SYMBOL FOR ENQUIRY", unicode 0x2405
  47765 | (kUnicodeCategory_So << 27), // "SYMBOL FOR ACKNOWLEDGE", unicode 0x2406
  47769 | (kUnicodeCategory_So << 27), // "SYMBOL FOR BELL", unicode 0x2407
  47773 | (kUnicodeCategory_So << 27), // "SYMBOL FOR BACKSPACE", unicode 0x2408
  47778 | (kUnicodeCategory_So << 27), // "SYMBOL FOR HORIZONTAL TABULATION", unicode 0x2409
  47784 | (kUnicodeCategory_So << 27), // "SYMBOL FOR LINE FEED", unicode 0x240A
  47790 | (kUnicodeCategory_So << 27), // "SYMBOL FOR VERTICAL TABULATION", unicode 0x240B
  47795 | (kUnicodeCategory_So << 27), // "SYMBOL FOR FORM FEED", unicode 0x240C
  47800 | (kUnicodeCategory_So << 27), // "SYMBOL FOR CARRIAGE RETURN", unicode 0x240D
  47806 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SHIFT OUT", unicode 0x240E
  47812 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SHIFT IN", unicode 0x240F
  47818 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DATA LINK ESCAPE", unicode 0x2410
  47828 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DEVICE CONTROL ONE", unicode 0x2411
  47836 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DEVICE CONTROL TWO", unicode 0x2412
  47844 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DEVICE CONTROL THREE", unicode 0x2413
  47852 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DEVICE CONTROL FOUR", unicode 0x2414
  47860 | (kUnicodeCategory_So << 27), // "SYMBOL FOR NEGATIVE ACKNOWLEDGE", unicode 0x2415
  47866 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SYNCHRONOUS IDLE", unicode 0x2416
  47873 | (kUnicodeCategory_So << 27), // "SYMBOL FOR END OF TRANSMISSION BLOCK", unicode 0x2417
  47883 | (kUnicodeCategory_So << 27), // "SYMBOL FOR CANCEL", unicode 0x2418
  47887 | (kUnicodeCategory_So << 27), // "SYMBOL FOR END OF MEDIUM", unicode 0x2419
  47895 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SUBSTITUTE", unicode 0x241A
  47899 | (kUnicodeCategory_So << 27), // "SYMBOL FOR ESCAPE", unicode 0x241B
  47903 | (kUnicodeCategory_So << 27), // "SYMBOL FOR FILE SEPARATOR", unicode 0x241C
  47910 | (kUnicodeCategory_So << 27), // "SYMBOL FOR GROUP SEPARATOR", unicode 0x241D
  47917 | (kUnicodeCategory_So << 27), // "SYMBOL FOR RECORD SEPARATOR", unicode 0x241E
  47924 | (kUnicodeCategory_So << 27), // "SYMBOL FOR UNIT SEPARATOR", unicode 0x241F
  47930 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SPACE", unicode 0x2420
  47934 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DELETE", unicode 0x2421
  47938 | (kUnicodeCategory_So << 27), // "BLANK SYMBOL", unicode 0x2422
  47941 | (kUnicodeCategory_So << 27), // "OPEN BOX", unicode 0x2423
  47945 | (kUnicodeCategory_So << 27), // "SYMBOL FOR NEWLINE", unicode 0x2424
  47949 | (kUnicodeCategory_So << 27), // "SYMBOL FOR DELETE FORM TWO", unicode 0x2425
  47956 | (kUnicodeCategory_So << 27), // "SYMBOL FOR SUBSTITUTE FORM TWO", unicode 0x2426
  0, // undefined code 0x2427
  0, // undefined code 0x2428
  0, // undefined code 0x2429
  0, // undefined code 0x242A
  0, // undefined code 0x242B
  0, // undefined code 0x242C
  0, // undefined code 0x242D
  0, // undefined code 0x242E
  0, // undefined code 0x242F
  0, // undefined code 0x2430
  0, // undefined code 0x2431
  0, // undefined code 0x2432
  0, // undefined code 0x2433
  0, // undefined code 0x2434
  0, // undefined code 0x2435
  0, // undefined code 0x2436
  0, // undefined code 0x2437
  0, // undefined code 0x2438
  0, // undefined code 0x2439
  0, // undefined code 0x243A
  0, // undefined code 0x243B
  0, // undefined code 0x243C
  0, // undefined code 0x243D
  0, // undefined code 0x243E
  0, // undefined code 0x243F
  47963 | (kUnicodeCategory_So << 27), // "OCR HOOK", unicode 0x2440
  47967 | (kUnicodeCategory_So << 27), // "OCR CHAIR", unicode 0x2441
  47972 | (kUnicodeCategory_So << 27), // "OCR FORK", unicode 0x2442
  47976 | (kUnicodeCategory_So << 27), // "OCR INVERTED FORK", unicode 0x2443
  47982 | (kUnicodeCategory_So << 27), // "OCR BELT BUCKLE", unicode 0x2444
  47988 | (kUnicodeCategory_So << 27), // "OCR BOW TIE", unicode 0x2445
  47994 | (kUnicodeCategory_So << 27), // "OCR BRANCH BANK IDENTIFICATION", unicode 0x2446
  48003 | (kUnicodeCategory_So << 27), // "OCR AMOUNT OF CHECK", unicode 0x2447
  48011 | (kUnicodeCategory_So << 27), // "OCR DASH", unicode 0x2448
  48015 | (kUnicodeCategory_So << 27), // "OCR CUSTOMER ACCOUNT NUMBER", unicode 0x2449
  48023 | (kUnicodeCategory_So << 27), // "OCR DOUBLE BACKSLASH", unicode 0x244A
  0, // undefined code 0x244B
  0, // undefined code 0x244C
  0, // undefined code 0x244D
  0, // undefined code 0x244E
  0, // undefined code 0x244F
  0, // undefined code 0x2450
  0, // undefined code 0x2451
  0, // undefined code 0x2452
  0, // undefined code 0x2453
  0, // undefined code 0x2454
  0, // undefined code 0x2455
  0, // undefined code 0x2456
  0, // undefined code 0x2457
  0, // undefined code 0x2458
  0, // undefined code 0x2459
  0, // undefined code 0x245A
  0, // undefined code 0x245B
  0, // undefined code 0x245C
  0, // undefined code 0x245D
  0, // undefined code 0x245E
  0, // undefined code 0x245F
  48028 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT ONE", unicode 0x2460
  48032 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT TWO", unicode 0x2461
  48036 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT THREE", unicode 0x2462
  48040 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT FOUR", unicode 0x2463
  48044 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT FIVE", unicode 0x2464
  48048 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT SIX", unicode 0x2465
  48052 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT SEVEN", unicode 0x2466
  48056 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT EIGHT", unicode 0x2467
  48060 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT NINE", unicode 0x2468
  48064 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER TEN", unicode 0x2469
  48069 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER ELEVEN", unicode 0x246A
  48074 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER TWELVE", unicode 0x246B
  48079 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER THIRTEEN", unicode 0x246C
  48084 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER FOURTEEN", unicode 0x246D
  48089 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER FIFTEEN", unicode 0x246E
  48094 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER SIXTEEN", unicode 0x246F
  48099 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER SEVENTEEN", unicode 0x2470
  48104 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER EIGHTEEN", unicode 0x2471
  48109 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER NINETEEN", unicode 0x2472
  48114 | (kUnicodeCategory_No << 27), // "CIRCLED NUMBER TWENTY", unicode 0x2473
  48119 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT ONE", unicode 0x2474
  48124 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT TWO", unicode 0x2475
  48129 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT THREE", unicode 0x2476
  48134 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT FOUR", unicode 0x2477
  48139 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT FIVE", unicode 0x2478
  48144 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT SIX", unicode 0x2479
  48149 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT SEVEN", unicode 0x247A
  48154 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT EIGHT", unicode 0x247B
  48159 | (kUnicodeCategory_No << 27), // "PARENTHESIZED DIGIT NINE", unicode 0x247C
  48164 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER TEN", unicode 0x247D
  48170 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER ELEVEN", unicode 0x247E
  48176 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER TWELVE", unicode 0x247F
  48182 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER THIRTEEN", unicode 0x2480
  48188 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER FOURTEEN", unicode 0x2481
  48194 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER FIFTEEN", unicode 0x2482
  48200 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER SIXTEEN", unicode 0x2483
  48206 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER SEVENTEEN", unicode 0x2484
  48212 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER EIGHTEEN", unicode 0x2485
  48218 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER NINETEEN", unicode 0x2486
  48224 | (kUnicodeCategory_No << 27), // "PARENTHESIZED NUMBER TWENTY", unicode 0x2487
  48230 | (kUnicodeCategory_No << 27), // "DIGIT ONE FULL STOP", unicode 0x2488
  48237 | (kUnicodeCategory_No << 27), // "DIGIT TWO FULL STOP", unicode 0x2489
  48244 | (kUnicodeCategory_No << 27), // "DIGIT THREE FULL STOP", unicode 0x248A
  48251 | (kUnicodeCategory_No << 27), // "DIGIT FOUR FULL STOP", unicode 0x248B
  48258 | (kUnicodeCategory_No << 27), // "DIGIT FIVE FULL STOP", unicode 0x248C
  48265 | (kUnicodeCategory_No << 27), // "DIGIT SIX FULL STOP", unicode 0x248D
  48272 | (kUnicodeCategory_No << 27), // "DIGIT SEVEN FULL STOP", unicode 0x248E
  48279 | (kUnicodeCategory_No << 27), // "DIGIT EIGHT FULL STOP", unicode 0x248F
  48286 | (kUnicodeCategory_No << 27), // "DIGIT NINE FULL STOP", unicode 0x2490
  48293 | (kUnicodeCategory_No << 27), // "NUMBER TEN FULL STOP", unicode 0x2491
  48301 | (kUnicodeCategory_No << 27), // "NUMBER ELEVEN FULL STOP", unicode 0x2492
  48309 | (kUnicodeCategory_No << 27), // "NUMBER TWELVE FULL STOP", unicode 0x2493
  48317 | (kUnicodeCategory_No << 27), // "NUMBER THIRTEEN FULL STOP", unicode 0x2494
  48325 | (kUnicodeCategory_No << 27), // "NUMBER FOURTEEN FULL STOP", unicode 0x2495
  48333 | (kUnicodeCategory_No << 27), // "NUMBER FIFTEEN FULL STOP", unicode 0x2496
  48341 | (kUnicodeCategory_No << 27), // "NUMBER SIXTEEN FULL STOP", unicode 0x2497
  48349 | (kUnicodeCategory_No << 27), // "NUMBER SEVENTEEN FULL STOP", unicode 0x2498
  48357 | (kUnicodeCategory_No << 27), // "NUMBER EIGHTEEN FULL STOP", unicode 0x2499
  48365 | (kUnicodeCategory_No << 27), // "NUMBER NINETEEN FULL STOP", unicode 0x249A
  48373 | (kUnicodeCategory_No << 27), // "NUMBER TWENTY FULL STOP", unicode 0x249B
  48381 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER A", unicode 0x249C
  48387 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER B", unicode 0x249D
  48393 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER C", unicode 0x249E
  48400 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER D", unicode 0x249F
  48407 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER E", unicode 0x24A0
  48413 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER F", unicode 0x24A1
  48420 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER G", unicode 0x24A2
  48427 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER H", unicode 0x24A3
  48434 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER I", unicode 0x24A4
  48441 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER J", unicode 0x24A5
  48448 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER K", unicode 0x24A6
  48455 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER L", unicode 0x24A7
  48462 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER M", unicode 0x24A8
  48469 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER N", unicode 0x24A9
  48476 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER O", unicode 0x24AA
  48482 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER P", unicode 0x24AB
  48489 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER Q", unicode 0x24AC
  48496 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER R", unicode 0x24AD
  48503 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER S", unicode 0x24AE
  48510 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER T", unicode 0x24AF
  48517 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER U", unicode 0x24B0
  48523 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER V", unicode 0x24B1
  48530 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER W", unicode 0x24B2
  48537 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER X", unicode 0x24B3
  48544 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER Y", unicode 0x24B4
  48551 | (kUnicodeCategory_So << 27), // "PARENTHESIZED LATIN SMALL LETTER Z", unicode 0x24B5
  48558 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER A", unicode 0x24B6
  48563 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER B", unicode 0x24B7
  48568 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER C", unicode 0x24B8
  48574 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER D", unicode 0x24B9
  48580 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER E", unicode 0x24BA
  48585 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER F", unicode 0x24BB
  48591 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER G", unicode 0x24BC
  48597 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER H", unicode 0x24BD
  48603 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER I", unicode 0x24BE
  48609 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER J", unicode 0x24BF
  48615 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER K", unicode 0x24C0
  48621 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER L", unicode 0x24C1
  48627 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER M", unicode 0x24C2
  48633 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER N", unicode 0x24C3
  48639 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER O", unicode 0x24C4
  48644 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER P", unicode 0x24C5
  48650 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER Q", unicode 0x24C6
  48656 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER R", unicode 0x24C7
  48662 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER S", unicode 0x24C8
  48668 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER T", unicode 0x24C9
  48674 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER U", unicode 0x24CA
  48679 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER V", unicode 0x24CB
  48685 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER W", unicode 0x24CC
  48691 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER X", unicode 0x24CD
  48697 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER Y", unicode 0x24CE
  48703 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN CAPITAL LETTER Z", unicode 0x24CF
  48709 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER A", unicode 0x24D0
  48714 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER B", unicode 0x24D1
  48719 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER C", unicode 0x24D2
  48725 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER D", unicode 0x24D3
  48731 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER E", unicode 0x24D4
  48736 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER F", unicode 0x24D5
  48742 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER G", unicode 0x24D6
  48748 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER H", unicode 0x24D7
  48754 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER I", unicode 0x24D8
  48760 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER J", unicode 0x24D9
  48766 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER K", unicode 0x24DA
  48772 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER L", unicode 0x24DB
  48778 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER M", unicode 0x24DC
  48784 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER N", unicode 0x24DD
  48790 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER O", unicode 0x24DE
  48795 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER P", unicode 0x24DF
  48801 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER Q", unicode 0x24E0
  48807 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER R", unicode 0x24E1
  48813 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER S", unicode 0x24E2
  48819 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER T", unicode 0x24E3
  48825 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER U", unicode 0x24E4
  48830 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER V", unicode 0x24E5
  48836 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER W", unicode 0x24E6
  48842 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER X", unicode 0x24E7
  48848 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER Y", unicode 0x24E8
  48854 | (kUnicodeCategory_So << 27), // "CIRCLED LATIN SMALL LETTER Z", unicode 0x24E9
  48860 | (kUnicodeCategory_No << 27), // "CIRCLED DIGIT ZERO", unicode 0x24EA
  48864 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER ELEVEN", unicode 0x24EB
  48871 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER TWELVE", unicode 0x24EC
  48878 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER THIRTEEN", unicode 0x24ED
  48885 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER FOURTEEN", unicode 0x24EE
  48892 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER FIFTEEN", unicode 0x24EF
  48899 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER SIXTEEN", unicode 0x24F0
  48906 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER SEVENTEEN", unicode 0x24F1
  48913 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER EIGHTEEN", unicode 0x24F2
  48920 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER NINETEEN", unicode 0x24F3
  48927 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED NUMBER TWENTY", unicode 0x24F4
  48934 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT ONE", unicode 0x24F5
  48939 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT TWO", unicode 0x24F6
  48944 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT THREE", unicode 0x24F7
  48949 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT FOUR", unicode 0x24F8
  48954 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT FIVE", unicode 0x24F9
  48959 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT SIX", unicode 0x24FA
  48964 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT SEVEN", unicode 0x24FB
  48969 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT EIGHT", unicode 0x24FC
  48974 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED DIGIT NINE", unicode 0x24FD
  48979 | (kUnicodeCategory_No << 27), // "DOUBLE CIRCLED NUMBER TEN", unicode 0x24FE
  48985 | (kUnicodeCategory_No << 27), // "NEGATIVE CIRCLED DIGIT ZERO", unicode 0x24FF
} ;

static const uint32_t gNamePage37 [256] = {
  48991 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT HORIZONTAL", unicode 0x2500
  48999 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY HORIZONTAL", unicode 0x2501
  49007 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT VERTICAL", unicode 0x2502
  49014 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY VERTICAL", unicode 0x2503
  49021 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT TRIPLE DASH HORIZONTAL", unicode 0x2504
  49033 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY TRIPLE DASH HORIZONTAL", unicode 0x2505
  49045 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT TRIPLE DASH VERTICAL", unicode 0x2506
  49056 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY TRIPLE DASH VERTICAL", unicode 0x2507
  49067 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT QUADRUPLE DASH HORIZONTAL", unicode 0x2508
  49079 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY QUADRUPLE DASH HORIZONTAL", unicode 0x2509
  49091 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT QUADRUPLE DASH VERTICAL", unicode 0x250A
  49102 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY QUADRUPLE DASH VERTICAL", unicode 0x250B
  49113 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DOWN AND RIGHT", unicode 0x250C
  49123 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN LIGHT AND RIGHT HEAVY", unicode 0x250D
  49135 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN HEAVY AND RIGHT LIGHT", unicode 0x250E
  49147 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY DOWN AND RIGHT", unicode 0x250F
  49157 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DOWN AND LEFT", unicode 0x2510
  49167 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN LIGHT AND LEFT HEAVY", unicode 0x2511
  49179 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN HEAVY AND LEFT LIGHT", unicode 0x2512
  49191 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY DOWN AND LEFT", unicode 0x2513
  49201 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT UP AND RIGHT", unicode 0x2514
  49211 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP LIGHT AND RIGHT HEAVY", unicode 0x2515
  49223 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP HEAVY AND RIGHT LIGHT", unicode 0x2516
  49235 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY UP AND RIGHT", unicode 0x2517
  49245 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT UP AND LEFT", unicode 0x2518
  49255 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP LIGHT AND LEFT HEAVY", unicode 0x2519
  49267 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP HEAVY AND LEFT LIGHT", unicode 0x251A
  49279 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY UP AND LEFT", unicode 0x251B
  49289 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT VERTICAL AND RIGHT", unicode 0x251C
  49298 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL LIGHT AND RIGHT HEAVY", unicode 0x251D
  49309 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP HEAVY AND RIGHT DOWN LIGHT", unicode 0x251E
  49323 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN HEAVY AND RIGHT UP LIGHT", unicode 0x251F
  49337 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL HEAVY AND RIGHT LIGHT", unicode 0x2520
  49348 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN LIGHT AND RIGHT UP HEAVY", unicode 0x2521
  49362 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP LIGHT AND RIGHT DOWN HEAVY", unicode 0x2522
  49376 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY VERTICAL AND RIGHT", unicode 0x2523
  49385 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT VERTICAL AND LEFT", unicode 0x2524
  49394 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL LIGHT AND LEFT HEAVY", unicode 0x2525
  49405 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP HEAVY AND LEFT DOWN LIGHT", unicode 0x2526
  49419 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN HEAVY AND LEFT UP LIGHT", unicode 0x2527
  49433 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL HEAVY AND LEFT LIGHT", unicode 0x2528
  49444 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN LIGHT AND LEFT UP HEAVY", unicode 0x2529
  49458 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP LIGHT AND LEFT DOWN HEAVY", unicode 0x252A
  49472 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY VERTICAL AND LEFT", unicode 0x252B
  49481 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DOWN AND HORIZONTAL", unicode 0x252C
  49492 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT HEAVY AND RIGHT DOWN LIGHT", unicode 0x252D
  49505 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT HEAVY AND LEFT DOWN LIGHT", unicode 0x252E
  49518 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN LIGHT AND HORIZONTAL HEAVY", unicode 0x252F
  49531 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN HEAVY AND HORIZONTAL LIGHT", unicode 0x2530
  49544 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT LIGHT AND LEFT DOWN HEAVY", unicode 0x2531
  49557 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT LIGHT AND RIGHT DOWN HEAVY", unicode 0x2532
  49570 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY DOWN AND HORIZONTAL", unicode 0x2533
  49581 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT UP AND HORIZONTAL", unicode 0x2534
  49592 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT HEAVY AND RIGHT UP LIGHT", unicode 0x2535
  49605 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT HEAVY AND LEFT UP LIGHT", unicode 0x2536
  49618 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP LIGHT AND HORIZONTAL HEAVY", unicode 0x2537
  49631 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP HEAVY AND HORIZONTAL LIGHT", unicode 0x2538
  49644 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT LIGHT AND LEFT UP HEAVY", unicode 0x2539
  49657 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT LIGHT AND RIGHT UP HEAVY", unicode 0x253A
  49670 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY UP AND HORIZONTAL", unicode 0x253B
  49681 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL", unicode 0x253C
  49691 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT HEAVY AND RIGHT VERTICAL LIGHT", unicode 0x253D
  49703 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT HEAVY AND LEFT VERTICAL LIGHT", unicode 0x253E
  49715 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL LIGHT AND HORIZONTAL HEAVY", unicode 0x253F
  49727 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP HEAVY AND DOWN HORIZONTAL LIGHT", unicode 0x2540
  49742 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN HEAVY AND UP HORIZONTAL LIGHT", unicode 0x2541
  49757 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL HEAVY AND HORIZONTAL LIGHT", unicode 0x2542
  49769 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT UP HEAVY AND RIGHT DOWN LIGHT", unicode 0x2543
  49784 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT UP HEAVY AND LEFT DOWN LIGHT", unicode 0x2544
  49799 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT DOWN HEAVY AND RIGHT UP LIGHT", unicode 0x2545
  49814 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT DOWN HEAVY AND LEFT UP LIGHT", unicode 0x2546
  49829 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN LIGHT AND UP HORIZONTAL HEAVY", unicode 0x2547
  49844 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP LIGHT AND DOWN HORIZONTAL HEAVY", unicode 0x2548
  49859 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS RIGHT LIGHT AND LEFT VERTICAL HEAVY", unicode 0x2549
  49871 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LEFT LIGHT AND RIGHT VERTICAL HEAVY", unicode 0x254A
  49883 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY VERTICAL AND HORIZONTAL", unicode 0x254B
  49893 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DOUBLE DASH HORIZONTAL", unicode 0x254C
  49904 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY DOUBLE DASH HORIZONTAL", unicode 0x254D
  49915 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DOUBLE DASH VERTICAL", unicode 0x254E
  49925 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY DOUBLE DASH VERTICAL", unicode 0x254F
  49935 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE HORIZONTAL", unicode 0x2550
  49942 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE VERTICAL", unicode 0x2551
  49948 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN SINGLE AND RIGHT DOUBLE", unicode 0x2552
  49959 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN DOUBLE AND RIGHT SINGLE", unicode 0x2553
  49970 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE DOWN AND RIGHT", unicode 0x2554
  49979 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN SINGLE AND LEFT DOUBLE", unicode 0x2555
  49990 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN DOUBLE AND LEFT SINGLE", unicode 0x2556
  50001 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE DOWN AND LEFT", unicode 0x2557
  50010 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP SINGLE AND RIGHT DOUBLE", unicode 0x2558
  50021 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP DOUBLE AND RIGHT SINGLE", unicode 0x2559
  50032 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE UP AND RIGHT", unicode 0x255A
  50041 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP SINGLE AND LEFT DOUBLE", unicode 0x255B
  50052 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP DOUBLE AND LEFT SINGLE", unicode 0x255C
  50063 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE UP AND LEFT", unicode 0x255D
  50072 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL SINGLE AND RIGHT DOUBLE", unicode 0x255E
  50082 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL DOUBLE AND RIGHT SINGLE", unicode 0x255F
  50092 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE VERTICAL AND RIGHT", unicode 0x2560
  50100 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL SINGLE AND LEFT DOUBLE", unicode 0x2561
  50110 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL DOUBLE AND LEFT SINGLE", unicode 0x2562
  50120 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE VERTICAL AND LEFT", unicode 0x2563
  50128 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN SINGLE AND HORIZONTAL DOUBLE", unicode 0x2564
  50140 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOWN DOUBLE AND HORIZONTAL SINGLE", unicode 0x2565
  50152 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE DOWN AND HORIZONTAL", unicode 0x2566
  50162 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP SINGLE AND HORIZONTAL DOUBLE", unicode 0x2567
  50174 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS UP DOUBLE AND HORIZONTAL SINGLE", unicode 0x2568
  50186 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE UP AND HORIZONTAL", unicode 0x2569
  50196 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL SINGLE AND HORIZONTAL DOUBLE", unicode 0x256A
  50207 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS VERTICAL DOUBLE AND HORIZONTAL SINGLE", unicode 0x256B
  50218 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS DOUBLE VERTICAL AND HORIZONTAL", unicode 0x256C
  50227 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT ARC DOWN AND RIGHT", unicode 0x256D
  50239 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT ARC DOWN AND LEFT", unicode 0x256E
  50251 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT ARC UP AND LEFT", unicode 0x256F
  50263 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT ARC UP AND RIGHT", unicode 0x2570
  50275 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DIAGONAL UPPER RIGHT TO LOWER LEFT", unicode 0x2571
  50291 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DIAGONAL UPPER LEFT TO LOWER RIGHT", unicode 0x2572
  50307 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DIAGONAL CROSS", unicode 0x2573
  50317 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT LEFT", unicode 0x2574
  50324 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT UP", unicode 0x2575
  50332 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT RIGHT", unicode 0x2576
  50339 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT DOWN", unicode 0x2577
  50347 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY LEFT", unicode 0x2578
  50354 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY UP", unicode 0x2579
  50362 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY RIGHT", unicode 0x257A
  50369 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY DOWN", unicode 0x257B
  50377 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT LEFT AND HEAVY RIGHT", unicode 0x257C
  50388 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS LIGHT UP AND HEAVY DOWN", unicode 0x257D
  50401 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY LEFT AND LIGHT RIGHT", unicode 0x257E
  50412 | (kUnicodeCategory_So << 27), // "BOX DRAWINGS HEAVY UP AND LIGHT DOWN", unicode 0x257F
  50425 | (kUnicodeCategory_So << 27), // "UPPER HALF BLOCK", unicode 0x2580
  50431 | (kUnicodeCategory_So << 27), // "LOWER ONE EIGHTH BLOCK", unicode 0x2581
  50439 | (kUnicodeCategory_So << 27), // "LOWER ONE QUARTER BLOCK", unicode 0x2582
  50447 | (kUnicodeCategory_So << 27), // "LOWER THREE EIGHTHS BLOCK", unicode 0x2583
  50455 | (kUnicodeCategory_So << 27), // "LOWER HALF BLOCK", unicode 0x2584
  50461 | (kUnicodeCategory_So << 27), // "LOWER FIVE EIGHTHS BLOCK", unicode 0x2585
  50469 | (kUnicodeCategory_So << 27), // "LOWER THREE QUARTERS BLOCK", unicode 0x2586
  50477 | (kUnicodeCategory_So << 27), // "LOWER SEVEN EIGHTHS BLOCK", unicode 0x2587
  50485 | (kUnicodeCategory_So << 27), // "FULL BLOCK", unicode 0x2588
  50489 | (kUnicodeCategory_So << 27), // "LEFT SEVEN EIGHTHS BLOCK", unicode 0x2589
  50496 | (kUnicodeCategory_So << 27), // "LEFT THREE QUARTERS BLOCK", unicode 0x258A
  50503 | (kUnicodeCategory_So << 27), // "LEFT FIVE EIGHTHS BLOCK", unicode 0x258B
  50510 | (kUnicodeCategory_So << 27), // "LEFT HALF BLOCK", unicode 0x258C
  50515 | (kUnicodeCategory_So << 27), // "LEFT THREE EIGHTHS BLOCK", unicode 0x258D
  50522 | (kUnicodeCategory_So << 27), // "LEFT ONE QUARTER BLOCK", unicode 0x258E
  50529 | (kUnicodeCategory_So << 27), // "LEFT ONE EIGHTH BLOCK", unicode 0x258F
  50536 | (kUnicodeCategory_So << 27), // "RIGHT HALF BLOCK", unicode 0x2590
  50541 | (kUnicodeCategory_So << 27), // "LIGHT SHADE", unicode 0x2591
  50545 | (kUnicodeCategory_So << 27), // "MEDIUM SHADE", unicode 0x2592
  50549 | (kUnicodeCategory_So << 27), // "DARK SHADE", unicode 0x2593
  50554 | (kUnicodeCategory_So << 27), // "UPPER ONE EIGHTH BLOCK", unicode 0x2594
  50562 | (kUnicodeCategory_So << 27), // "RIGHT ONE EIGHTH BLOCK", unicode 0x2595
  50569 | (kUnicodeCategory_So << 27), // "QUADRANT LOWER LEFT", unicode 0x2596
  50574 | (kUnicodeCategory_So << 27), // "QUADRANT LOWER RIGHT", unicode 0x2597
  50579 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER LEFT", unicode 0x2598
  50584 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER LEFT AND LOWER LEFT AND LOWER RIGHT", unicode 0x2599
  50597 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER LEFT AND LOWER RIGHT", unicode 0x259A
  50606 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER LEFT AND UPPER RIGHT AND LOWER LEFT", unicode 0x259B
  50619 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER LEFT AND UPPER RIGHT AND LOWER RIGHT", unicode 0x259C
  50632 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER RIGHT", unicode 0x259D
  50637 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER RIGHT AND LOWER LEFT", unicode 0x259E
  50646 | (kUnicodeCategory_So << 27), // "QUADRANT UPPER RIGHT AND LOWER LEFT AND LOWER RIGHT", unicode 0x259F
  50659 | (kUnicodeCategory_So << 27), // "BLACK SQUARE", unicode 0x25A0
  50662 | (kUnicodeCategory_So << 27), // "WHITE SQUARE", unicode 0x25A1
  50665 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH ROUNDED CORNERS", unicode 0x25A2
  50673 | (kUnicodeCategory_So << 27), // "WHITE SQUARE CONTAINING BLACK SMALL SQUARE", unicode 0x25A3
  50682 | (kUnicodeCategory_So << 27), // "SQUARE WITH HORIZONTAL FILL", unicode 0x25A4
  50688 | (kUnicodeCategory_So << 27), // "SQUARE WITH VERTICAL FILL", unicode 0x25A5
  50693 | (kUnicodeCategory_So << 27), // "SQUARE WITH ORTHOGONAL CROSSHATCH FILL", unicode 0x25A6
  50701 | (kUnicodeCategory_So << 27), // "SQUARE WITH UPPER LEFT TO LOWER RIGHT FILL", unicode 0x25A7
  50713 | (kUnicodeCategory_So << 27), // "SQUARE WITH UPPER RIGHT TO LOWER LEFT FILL", unicode 0x25A8
  50725 | (kUnicodeCategory_So << 27), // "SQUARE WITH DIAGONAL CROSSHATCH FILL", unicode 0x25A9
  50733 | (kUnicodeCategory_So << 27), // "BLACK SMALL SQUARE", unicode 0x25AA
  50737 | (kUnicodeCategory_So << 27), // "WHITE SMALL SQUARE", unicode 0x25AB
  50741 | (kUnicodeCategory_So << 27), // "BLACK RECTANGLE", unicode 0x25AC
  50745 | (kUnicodeCategory_So << 27), // "WHITE RECTANGLE", unicode 0x25AD
  50749 | (kUnicodeCategory_So << 27), // "BLACK VERTICAL RECTANGLE", unicode 0x25AE
  50754 | (kUnicodeCategory_So << 27), // "WHITE VERTICAL RECTANGLE", unicode 0x25AF
  50759 | (kUnicodeCategory_So << 27), // "BLACK PARALLELOGRAM", unicode 0x25B0
  50763 | (kUnicodeCategory_So << 27), // "WHITE PARALLELOGRAM", unicode 0x25B1
  50767 | (kUnicodeCategory_So << 27), // "BLACK UP-POINTING TRIANGLE", unicode 0x25B2
  50775 | (kUnicodeCategory_So << 27), // "WHITE UP-POINTING TRIANGLE", unicode 0x25B3
  50783 | (kUnicodeCategory_So << 27), // "BLACK UP-POINTING SMALL TRIANGLE", unicode 0x25B4
  50792 | (kUnicodeCategory_So << 27), // "WHITE UP-POINTING SMALL TRIANGLE", unicode 0x25B5
  50801 | (kUnicodeCategory_So << 27), // "BLACK RIGHT-POINTING TRIANGLE", unicode 0x25B6
  50808 | (kUnicodeCategory_Sm << 27), // "WHITE RIGHT-POINTING TRIANGLE", unicode 0x25B7
  50815 | (kUnicodeCategory_So << 27), // "BLACK RIGHT-POINTING SMALL TRIANGLE", unicode 0x25B8
  50823 | (kUnicodeCategory_So << 27), // "WHITE RIGHT-POINTING SMALL TRIANGLE", unicode 0x25B9
  50831 | (kUnicodeCategory_So << 27), // "BLACK RIGHT-POINTING POINTER", unicode 0x25BA
  50838 | (kUnicodeCategory_So << 27), // "WHITE RIGHT-POINTING POINTER", unicode 0x25BB
  50845 | (kUnicodeCategory_So << 27), // "BLACK DOWN-POINTING TRIANGLE", unicode 0x25BC
  50853 | (kUnicodeCategory_So << 27), // "WHITE DOWN-POINTING TRIANGLE", unicode 0x25BD
  50861 | (kUnicodeCategory_So << 27), // "BLACK DOWN-POINTING SMALL TRIANGLE", unicode 0x25BE
  50870 | (kUnicodeCategory_So << 27), // "WHITE DOWN-POINTING SMALL TRIANGLE", unicode 0x25BF
  50879 | (kUnicodeCategory_So << 27), // "BLACK LEFT-POINTING TRIANGLE", unicode 0x25C0
  50886 | (kUnicodeCategory_Sm << 27), // "WHITE LEFT-POINTING TRIANGLE", unicode 0x25C1
  50893 | (kUnicodeCategory_So << 27), // "BLACK LEFT-POINTING SMALL TRIANGLE", unicode 0x25C2
  50901 | (kUnicodeCategory_So << 27), // "WHITE LEFT-POINTING SMALL TRIANGLE", unicode 0x25C3
  50909 | (kUnicodeCategory_So << 27), // "BLACK LEFT-POINTING POINTER", unicode 0x25C4
  50916 | (kUnicodeCategory_So << 27), // "WHITE LEFT-POINTING POINTER", unicode 0x25C5
  50923 | (kUnicodeCategory_So << 27), // "BLACK DIAMOND", unicode 0x25C6
  50927 | (kUnicodeCategory_So << 27), // "WHITE DIAMOND", unicode 0x25C7
  50931 | (kUnicodeCategory_So << 27), // "WHITE DIAMOND CONTAINING BLACK SMALL DIAMOND", unicode 0x25C8
  50942 | (kUnicodeCategory_So << 27), // "FISHEYE", unicode 0x25C9
  50945 | (kUnicodeCategory_So << 27), // "LOZENGE", unicode 0x25CA
  50947 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE", unicode 0x25CB
  50951 | (kUnicodeCategory_So << 27), // "DOTTED CIRCLE", unicode 0x25CC
  50955 | (kUnicodeCategory_So << 27), // "CIRCLE WITH VERTICAL FILL", unicode 0x25CD
  50961 | (kUnicodeCategory_So << 27), // "BULLSEYE", unicode 0x25CE
  50964 | (kUnicodeCategory_So << 27), // "BLACK CIRCLE", unicode 0x25CF
  50968 | (kUnicodeCategory_So << 27), // "CIRCLE WITH LEFT HALF BLACK", unicode 0x25D0
  50976 | (kUnicodeCategory_So << 27), // "CIRCLE WITH RIGHT HALF BLACK", unicode 0x25D1
  50984 | (kUnicodeCategory_So << 27), // "CIRCLE WITH LOWER HALF BLACK", unicode 0x25D2
  50993 | (kUnicodeCategory_So << 27), // "CIRCLE WITH UPPER HALF BLACK", unicode 0x25D3
  51002 | (kUnicodeCategory_So << 27), // "CIRCLE WITH UPPER RIGHT QUADRANT BLACK", unicode 0x25D4
  51012 | (kUnicodeCategory_So << 27), // "CIRCLE WITH ALL BUT UPPER LEFT QUADRANT BLACK", unicode 0x25D5
  51026 | (kUnicodeCategory_So << 27), // "LEFT HALF BLACK CIRCLE", unicode 0x25D6
  51033 | (kUnicodeCategory_So << 27), // "RIGHT HALF BLACK CIRCLE", unicode 0x25D7
  51040 | (kUnicodeCategory_So << 27), // "INVERSE BULLET", unicode 0x25D8
  51044 | (kUnicodeCategory_So << 27), // "INVERSE WHITE CIRCLE", unicode 0x25D9
  51050 | (kUnicodeCategory_So << 27), // "UPPER HALF INVERSE WHITE CIRCLE", unicode 0x25DA
  51060 | (kUnicodeCategory_So << 27), // "LOWER HALF INVERSE WHITE CIRCLE", unicode 0x25DB
  51070 | (kUnicodeCategory_So << 27), // "UPPER LEFT QUADRANT CIRCULAR ARC", unicode 0x25DC
  51079 | (kUnicodeCategory_So << 27), // "UPPER RIGHT QUADRANT CIRCULAR ARC", unicode 0x25DD
  51088 | (kUnicodeCategory_So << 27), // "LOWER RIGHT QUADRANT CIRCULAR ARC", unicode 0x25DE
  51097 | (kUnicodeCategory_So << 27), // "LOWER LEFT QUADRANT CIRCULAR ARC", unicode 0x25DF
  51106 | (kUnicodeCategory_So << 27), // "UPPER HALF CIRCLE", unicode 0x25E0
  51112 | (kUnicodeCategory_So << 27), // "LOWER HALF CIRCLE", unicode 0x25E1
  51118 | (kUnicodeCategory_So << 27), // "BLACK LOWER RIGHT TRIANGLE", unicode 0x25E2
  51125 | (kUnicodeCategory_So << 27), // "BLACK LOWER LEFT TRIANGLE", unicode 0x25E3
  51132 | (kUnicodeCategory_So << 27), // "BLACK UPPER LEFT TRIANGLE", unicode 0x25E4
  51139 | (kUnicodeCategory_So << 27), // "BLACK UPPER RIGHT TRIANGLE", unicode 0x25E5
  51146 | (kUnicodeCategory_So << 27), // "WHITE BULLET", unicode 0x25E6
  51150 | (kUnicodeCategory_So << 27), // "SQUARE WITH LEFT HALF BLACK", unicode 0x25E7
  51157 | (kUnicodeCategory_So << 27), // "SQUARE WITH RIGHT HALF BLACK", unicode 0x25E8
  51164 | (kUnicodeCategory_So << 27), // "SQUARE WITH UPPER LEFT DIAGONAL HALF BLACK", unicode 0x25E9
  51175 | (kUnicodeCategory_So << 27), // "SQUARE WITH LOWER RIGHT DIAGONAL HALF BLACK", unicode 0x25EA
  51186 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH VERTICAL BISECTING LINE", unicode 0x25EB
  51195 | (kUnicodeCategory_So << 27), // "WHITE UP-POINTING TRIANGLE WITH DOT", unicode 0x25EC
  51205 | (kUnicodeCategory_So << 27), // "UP-POINTING TRIANGLE WITH LEFT HALF BLACK", unicode 0x25ED
  51217 | (kUnicodeCategory_So << 27), // "UP-POINTING TRIANGLE WITH RIGHT HALF BLACK", unicode 0x25EE
  51229 | (kUnicodeCategory_So << 27), // "LARGE CIRCLE", unicode 0x25EF
  51233 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH UPPER LEFT QUADRANT", unicode 0x25F0
  51242 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH LOWER LEFT QUADRANT", unicode 0x25F1
  51251 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH LOWER RIGHT QUADRANT", unicode 0x25F2
  51260 | (kUnicodeCategory_So << 27), // "WHITE SQUARE WITH UPPER RIGHT QUADRANT", unicode 0x25F3
  51269 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE WITH UPPER LEFT QUADRANT", unicode 0x25F4
  51279 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE WITH LOWER LEFT QUADRANT", unicode 0x25F5
  51289 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE WITH LOWER RIGHT QUADRANT", unicode 0x25F6
  51299 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE WITH UPPER RIGHT QUADRANT", unicode 0x25F7
  51309 | (kUnicodeCategory_Sm << 27), // "UPPER LEFT TRIANGLE", unicode 0x25F8
  51314 | (kUnicodeCategory_Sm << 27), // "UPPER RIGHT TRIANGLE", unicode 0x25F9
  51319 | (kUnicodeCategory_Sm << 27), // "LOWER LEFT TRIANGLE", unicode 0x25FA
  51324 | (kUnicodeCategory_Sm << 27), // "WHITE MEDIUM SQUARE", unicode 0x25FB
  51329 | (kUnicodeCategory_Sm << 27), // "BLACK MEDIUM SQUARE", unicode 0x25FC
  51334 | (kUnicodeCategory_Sm << 27), // "WHITE MEDIUM SMALL SQUARE", unicode 0x25FD
  51340 | (kUnicodeCategory_Sm << 27), // "BLACK MEDIUM SMALL SQUARE", unicode 0x25FE
  51346 | (kUnicodeCategory_Sm << 27), // "LOWER RIGHT TRIANGLE", unicode 0x25FF
} ;

static const uint32_t gNamePage38 [256] = {
  51351 | (kUnicodeCategory_So << 27), // "BLACK SUN WITH RAYS", unicode 0x2600
  51358 | (kUnicodeCategory_So << 27), // "CLOUD", unicode 0x2601
  51360 | (kUnicodeCategory_So << 27), // "UMBRELLA", unicode 0x2602
  51362 | (kUnicodeCategory_So << 27), // "SNOWMAN", unicode 0x2603
  51365 | (kUnicodeCategory_So << 27), // "COMET", unicode 0x2604
  51368 | (kUnicodeCategory_So << 27), // "BLACK STAR", unicode 0x2605
  51372 | (kUnicodeCategory_So << 27), // "WHITE STAR", unicode 0x2606
  51376 | (kUnicodeCategory_So << 27), // "LIGHTNING", unicode 0x2607
  51379 | (kUnicodeCategory_So << 27), // "THUNDERSTORM", unicode 0x2608
  51382 | (kUnicodeCategory_So << 27), // "SUN", unicode 0x2609
  51384 | (kUnicodeCategory_So << 27), // "ASCENDING NODE", unicode 0x260A
  51388 | (kUnicodeCategory_So << 27), // "DESCENDING NODE", unicode 0x260B
  51392 | (kUnicodeCategory_So << 27), // "CONJUNCTION", unicode 0x260C
  51395 | (kUnicodeCategory_So << 27), // "OPPOSITION", unicode 0x260D
  51397 | (kUnicodeCategory_So << 27), // "BLACK TELEPHONE", unicode 0x260E
  51401 | (kUnicodeCategory_So << 27), // "WHITE TELEPHONE", unicode 0x260F
  51405 | (kUnicodeCategory_So << 27), // "BALLOT BOX", unicode 0x2610
  51409 | (kUnicodeCategory_So << 27), // "BALLOT BOX WITH CHECK", unicode 0x2611
  51416 | (kUnicodeCategory_So << 27), // "BALLOT BOX WITH X", unicode 0x2612
  51423 | (kUnicodeCategory_So << 27), // "SALTIRE", unicode 0x2613
  51425 | (kUnicodeCategory_So << 27), // "UMBRELLA WITH RAIN DROPS", unicode 0x2614
  51433 | (kUnicodeCategory_So << 27), // "HOT BEVERAGE", unicode 0x2615
  51438 | (kUnicodeCategory_So << 27), // "WHITE SHOGI PIECE", unicode 0x2616
  51444 | (kUnicodeCategory_So << 27), // "BLACK SHOGI PIECE", unicode 0x2617
  51450 | (kUnicodeCategory_So << 27), // "SHAMROCK", unicode 0x2618
  51453 | (kUnicodeCategory_So << 27), // "REVERSED ROTATED FLORAL HEART BULLET", unicode 0x2619
  51463 | (kUnicodeCategory_So << 27), // "BLACK LEFT POINTING INDEX", unicode 0x261A
  51470 | (kUnicodeCategory_So << 27), // "BLACK RIGHT POINTING INDEX", unicode 0x261B
  51477 | (kUnicodeCategory_So << 27), // "WHITE LEFT POINTING INDEX", unicode 0x261C
  51484 | (kUnicodeCategory_So << 27), // "WHITE UP POINTING INDEX", unicode 0x261D
  51492 | (kUnicodeCategory_So << 27), // "WHITE RIGHT POINTING INDEX", unicode 0x261E
  51499 | (kUnicodeCategory_So << 27), // "WHITE DOWN POINTING INDEX", unicode 0x261F
  51507 | (kUnicodeCategory_So << 27), // "SKULL AND CROSSBONES", unicode 0x2620
  51513 | (kUnicodeCategory_So << 27), // "CAUTION SIGN", unicode 0x2621
  51516 | (kUnicodeCategory_So << 27), // "RADIOACTIVE SIGN", unicode 0x2622
  51520 | (kUnicodeCategory_So << 27), // "BIOHAZARD SIGN", unicode 0x2623
  51524 | (kUnicodeCategory_So << 27), // "CADUCEUS", unicode 0x2624
  51527 | (kUnicodeCategory_So << 27), // "ANKH", unicode 0x2625
  51530 | (kUnicodeCategory_So << 27), // "ORTHODOX CROSS", unicode 0x2626
  51534 | (kUnicodeCategory_So << 27), // "CHI RHO", unicode 0x2627
  51538 | (kUnicodeCategory_So << 27), // "CROSS OF LORRAINE", unicode 0x2628
  51544 | (kUnicodeCategory_So << 27), // "CROSS OF JERUSALEM", unicode 0x2629
  51551 | (kUnicodeCategory_So << 27), // "STAR AND CRESCENT", unicode 0x262A
  51556 | (kUnicodeCategory_So << 27), // "FARSI SYMBOL", unicode 0x262B
  51559 | (kUnicodeCategory_So << 27), // "ADI SHAKTI", unicode 0x262C
  51563 | (kUnicodeCategory_So << 27), // "HAMMER AND SICKLE", unicode 0x262D
  51569 | (kUnicodeCategory_So << 27), // "PEACE SYMBOL", unicode 0x262E
  51572 | (kUnicodeCategory_So << 27), // "YIN YANG", unicode 0x262F
  51576 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR HEAVEN", unicode 0x2630
  51581 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR LAKE", unicode 0x2631
  51586 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR FIRE", unicode 0x2632
  51591 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR THUNDER", unicode 0x2633
  51596 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR WIND", unicode 0x2634
  51601 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR WATER", unicode 0x2635
  51606 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR MOUNTAIN", unicode 0x2636
  51611 | (kUnicodeCategory_So << 27), // "TRIGRAM FOR EARTH", unicode 0x2637
  51616 | (kUnicodeCategory_So << 27), // "WHEEL OF DHARMA", unicode 0x2638
  51623 | (kUnicodeCategory_So << 27), // "WHITE FROWNING FACE", unicode 0x2639
  51630 | (kUnicodeCategory_So << 27), // "WHITE SMILING FACE", unicode 0x263A
  51636 | (kUnicodeCategory_So << 27), // "BLACK SMILING FACE", unicode 0x263B
  51642 | (kUnicodeCategory_So << 27), // "WHITE SUN WITH RAYS", unicode 0x263C
  51649 | (kUnicodeCategory_So << 27), // "FIRST QUARTER MOON", unicode 0x263D
  51655 | (kUnicodeCategory_So << 27), // "LAST QUARTER MOON", unicode 0x263E
  51661 | (kUnicodeCategory_So << 27), // "MERCURY", unicode 0x263F
  51663 | (kUnicodeCategory_So << 27), // "FEMALE SIGN", unicode 0x2640
  51666 | (kUnicodeCategory_So << 27), // "EARTH", unicode 0x2641
  51668 | (kUnicodeCategory_So << 27), // "MALE SIGN", unicode 0x2642
  51671 | (kUnicodeCategory_So << 27), // "JUPITER", unicode 0x2643
  51673 | (kUnicodeCategory_So << 27), // "SATURN", unicode 0x2644
  51675 | (kUnicodeCategory_So << 27), // "URANUS", unicode 0x2645
  51678 | (kUnicodeCategory_So << 27), // "NEPTUNE", unicode 0x2646
  51680 | (kUnicodeCategory_So << 27), // "PLUTO", unicode 0x2647
  51683 | (kUnicodeCategory_So << 27), // "ARIES", unicode 0x2648
  51686 | (kUnicodeCategory_So << 27), // "TAURUS", unicode 0x2649
  51689 | (kUnicodeCategory_So << 27), // "GEMINI", unicode 0x264A
  51691 | (kUnicodeCategory_So << 27), // "CANCER", unicode 0x264B
  51694 | (kUnicodeCategory_So << 27), // "LEO", unicode 0x264C
  51697 | (kUnicodeCategory_So << 27), // "VIRGO", unicode 0x264D
  51700 | (kUnicodeCategory_So << 27), // "LIBRA", unicode 0x264E
  51702 | (kUnicodeCategory_So << 27), // "SCORPIUS", unicode 0x264F
  51704 | (kUnicodeCategory_So << 27), // "SAGITTARIUS", unicode 0x2650
  51706 | (kUnicodeCategory_So << 27), // "CAPRICORN", unicode 0x2651
  51709 | (kUnicodeCategory_So << 27), // "AQUARIUS", unicode 0x2652
  51712 | (kUnicodeCategory_So << 27), // "PISCES", unicode 0x2653
  51715 | (kUnicodeCategory_So << 27), // "WHITE CHESS KING", unicode 0x2654
  51721 | (kUnicodeCategory_So << 27), // "WHITE CHESS QUEEN", unicode 0x2655
  51727 | (kUnicodeCategory_So << 27), // "WHITE CHESS ROOK", unicode 0x2656
  51733 | (kUnicodeCategory_So << 27), // "WHITE CHESS BISHOP", unicode 0x2657
  51739 | (kUnicodeCategory_So << 27), // "WHITE CHESS KNIGHT", unicode 0x2658
  51745 | (kUnicodeCategory_So << 27), // "WHITE CHESS PAWN", unicode 0x2659
  51751 | (kUnicodeCategory_So << 27), // "BLACK CHESS KING", unicode 0x265A
  51757 | (kUnicodeCategory_So << 27), // "BLACK CHESS QUEEN", unicode 0x265B
  51763 | (kUnicodeCategory_So << 27), // "BLACK CHESS ROOK", unicode 0x265C
  51769 | (kUnicodeCategory_So << 27), // "BLACK CHESS BISHOP", unicode 0x265D
  51775 | (kUnicodeCategory_So << 27), // "BLACK CHESS KNIGHT", unicode 0x265E
  51781 | (kUnicodeCategory_So << 27), // "BLACK CHESS PAWN", unicode 0x265F
  51787 | (kUnicodeCategory_So << 27), // "BLACK SPADE SUIT", unicode 0x2660
  51793 | (kUnicodeCategory_So << 27), // "WHITE HEART SUIT", unicode 0x2661
  51799 | (kUnicodeCategory_So << 27), // "WHITE DIAMOND SUIT", unicode 0x2662
  51805 | (kUnicodeCategory_So << 27), // "BLACK CLUB SUIT", unicode 0x2663
  51811 | (kUnicodeCategory_So << 27), // "WHITE SPADE SUIT", unicode 0x2664
  51817 | (kUnicodeCategory_So << 27), // "BLACK HEART SUIT", unicode 0x2665
  51823 | (kUnicodeCategory_So << 27), // "BLACK DIAMOND SUIT", unicode 0x2666
  51829 | (kUnicodeCategory_So << 27), // "WHITE CLUB SUIT", unicode 0x2667
  51835 | (kUnicodeCategory_So << 27), // "HOT SPRINGS", unicode 0x2668
  51839 | (kUnicodeCategory_So << 27), // "QUARTER NOTE", unicode 0x2669
  51843 | (kUnicodeCategory_So << 27), // "EIGHTH NOTE", unicode 0x266A
  51847 | (kUnicodeCategory_So << 27), // "BEAMED EIGHTH NOTES", unicode 0x266B
  51853 | (kUnicodeCategory_So << 27), // "BEAMED SIXTEENTH NOTES", unicode 0x266C
  51859 | (kUnicodeCategory_So << 27), // "MUSIC FLAT SIGN", unicode 0x266D
  51864 | (kUnicodeCategory_So << 27), // "MUSIC NATURAL SIGN", unicode 0x266E
  51869 | (kUnicodeCategory_Sm << 27), // "MUSIC SHARP SIGN", unicode 0x266F
  51874 | (kUnicodeCategory_So << 27), // "WEST SYRIAC CROSS", unicode 0x2670
  51880 | (kUnicodeCategory_So << 27), // "EAST SYRIAC CROSS", unicode 0x2671
  51886 | (kUnicodeCategory_So << 27), // "UNIVERSAL RECYCLING SYMBOL", unicode 0x2672
  51891 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-1 PLASTICS", unicode 0x2673
  51901 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-2 PLASTICS", unicode 0x2674
  51911 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-3 PLASTICS", unicode 0x2675
  51921 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-4 PLASTICS", unicode 0x2676
  51931 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-5 PLASTICS", unicode 0x2677
  51941 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-6 PLASTICS", unicode 0x2678
  51951 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR TYPE-7 PLASTICS", unicode 0x2679
  51961 | (kUnicodeCategory_So << 27), // "RECYCLING SYMBOL FOR GENERIC MATERIALS", unicode 0x267A
  51971 | (kUnicodeCategory_So << 27), // "BLACK UNIVERSAL RECYCLING SYMBOL", unicode 0x267B
  51978 | (kUnicodeCategory_So << 27), // "RECYCLED PAPER SYMBOL", unicode 0x267C
  51983 | (kUnicodeCategory_So << 27), // "PARTIALLY-RECYCLED PAPER SYMBOL", unicode 0x267D
  51991 | (kUnicodeCategory_So << 27), // "PERMANENT PAPER SIGN", unicode 0x267E
  51997 | (kUnicodeCategory_So << 27), // "WHEELCHAIR SYMBOL", unicode 0x267F
  52000 | (kUnicodeCategory_So << 27), // "DIE FACE-1", unicode 0x2680
  52006 | (kUnicodeCategory_So << 27), // "DIE FACE-2", unicode 0x2681
  52012 | (kUnicodeCategory_So << 27), // "DIE FACE-3", unicode 0x2682
  52018 | (kUnicodeCategory_So << 27), // "DIE FACE-4", unicode 0x2683
  52024 | (kUnicodeCategory_So << 27), // "DIE FACE-5", unicode 0x2684
  52030 | (kUnicodeCategory_So << 27), // "DIE FACE-6", unicode 0x2685
  52036 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE WITH DOT RIGHT", unicode 0x2686
  52043 | (kUnicodeCategory_So << 27), // "WHITE CIRCLE WITH TWO DOTS", unicode 0x2687
  52051 | (kUnicodeCategory_So << 27), // "BLACK CIRCLE WITH WHITE DOT RIGHT", unicode 0x2688
  52060 | (kUnicodeCategory_So << 27), // "BLACK CIRCLE WITH TWO WHITE DOTS", unicode 0x2689
  52070 | (kUnicodeCategory_So << 27), // "MONOGRAM FOR YANG", unicode 0x268A
  52075 | (kUnicodeCategory_So << 27), // "MONOGRAM FOR YIN", unicode 0x268B
  52080 | (kUnicodeCategory_So << 27), // "DIGRAM FOR GREATER YANG", unicode 0x268C
  52087 | (kUnicodeCategory_So << 27), // "DIGRAM FOR LESSER YIN", unicode 0x268D
  52094 | (kUnicodeCategory_So << 27), // "DIGRAM FOR LESSER YANG", unicode 0x268E
  52101 | (kUnicodeCategory_So << 27), // "DIGRAM FOR GREATER YIN", unicode 0x268F
  52108 | (kUnicodeCategory_So << 27), // "WHITE FLAG", unicode 0x2690
  52112 | (kUnicodeCategory_So << 27), // "BLACK FLAG", unicode 0x2691
  52116 | (kUnicodeCategory_So << 27), // "HAMMER AND PICK", unicode 0x2692
  52122 | (kUnicodeCategory_So << 27), // "ANCHOR", unicode 0x2693
  52124 | (kUnicodeCategory_So << 27), // "CROSSED SWORDS", unicode 0x2694
  52129 | (kUnicodeCategory_So << 27), // "STAFF OF AESCULAPIUS", unicode 0x2695
  52136 | (kUnicodeCategory_So << 27), // "SCALES", unicode 0x2696
  52139 | (kUnicodeCategory_So << 27), // "ALEMBIC", unicode 0x2697
  52142 | (kUnicodeCategory_So << 27), // "FLOWER", unicode 0x2698
  52144 | (kUnicodeCategory_So << 27), // "GEAR", unicode 0x2699
  52147 | (kUnicodeCategory_So << 27), // "STAFF OF HERMES", unicode 0x269A
  52154 | (kUnicodeCategory_So << 27), // "ATOM SYMBOL", unicode 0x269B
  52158 | (kUnicodeCategory_So << 27), // "FLEUR-DE-LIS", unicode 0x269C
  52165 | (kUnicodeCategory_So << 27), // "OUTLINED WHITE STAR", unicode 0x269D
  0, // undefined code 0x269E
  0, // undefined code 0x269F
  52171 | (kUnicodeCategory_So << 27), // "WARNING SIGN", unicode 0x26A0
  52175 | (kUnicodeCategory_So << 27), // "HIGH VOLTAGE SIGN", unicode 0x26A1
  52181 | (kUnicodeCategory_So << 27), // "DOUBLED FEMALE SIGN", unicode 0x26A2
  52186 | (kUnicodeCategory_So << 27), // "DOUBLED MALE SIGN", unicode 0x26A3
  52191 | (kUnicodeCategory_So << 27), // "INTERLOCKED FEMALE AND MALE SIGN", unicode 0x26A4
  52199 | (kUnicodeCategory_So << 27), // "MALE AND FEMALE SIGN", unicode 0x26A5
  52205 | (kUnicodeCategory_So << 27), // "MALE WITH STROKE SIGN", unicode 0x26A6
  52211 | (kUnicodeCategory_So << 27), // "MALE WITH STROKE AND MALE AND FEMALE SIGN", unicode 0x26A7
  52223 | (kUnicodeCategory_So << 27), // "VERTICAL MALE WITH STROKE SIGN", unicode 0x26A8
  52230 | (kUnicodeCategory_So << 27), // "HORIZONTAL MALE WITH STROKE SIGN", unicode 0x26A9
  52238 | (kUnicodeCategory_So << 27), // "MEDIUM WHITE CIRCLE", unicode 0x26AA
  52244 | (kUnicodeCategory_So << 27), // "MEDIUM BLACK CIRCLE", unicode 0x26AB
  52250 | (kUnicodeCategory_So << 27), // "MEDIUM SMALL WHITE CIRCLE", unicode 0x26AC
  52257 | (kUnicodeCategory_So << 27), // "MARRIAGE SYMBOL", unicode 0x26AD
  52261 | (kUnicodeCategory_So << 27), // "DIVORCE SYMBOL", unicode 0x26AE
  52265 | (kUnicodeCategory_So << 27), // "UNMARRIED PARTNERSHIP SYMBOL", unicode 0x26AF
  52271 | (kUnicodeCategory_So << 27), // "COFFIN", unicode 0x26B0
  52274 | (kUnicodeCategory_So << 27), // "FUNERAL URN", unicode 0x26B1
  52280 | (kUnicodeCategory_So << 27), // "NEUTER", unicode 0x26B2
  52282 | (kUnicodeCategory_So << 27), // "CERES", unicode 0x26B3
  52285 | (kUnicodeCategory_So << 27), // "PALLAS", unicode 0x26B4
  52288 | (kUnicodeCategory_So << 27), // "JUNO", unicode 0x26B5
  52290 | (kUnicodeCategory_So << 27), // "VESTA", unicode 0x26B6
  52293 | (kUnicodeCategory_So << 27), // "CHIRON", unicode 0x26B7
  52296 | (kUnicodeCategory_So << 27), // "BLACK MOON LILITH", unicode 0x26B8
  52303 | (kUnicodeCategory_So << 27), // "SEXTILE", unicode 0x26B9
  52306 | (kUnicodeCategory_So << 27), // "SEMISEXTILE", unicode 0x26BA
  52309 | (kUnicodeCategory_So << 27), // "QUINCUNX", unicode 0x26BB
  52311 | (kUnicodeCategory_So << 27), // "SESQUIQUADRATE", unicode 0x26BC
  0, // undefined code 0x26BD
  0, // undefined code 0x26BE
  0, // undefined code 0x26BF
  52314 | (kUnicodeCategory_So << 27), // "WHITE DRAUGHTS MAN", unicode 0x26C0
  52320 | (kUnicodeCategory_So << 27), // "WHITE DRAUGHTS KING", unicode 0x26C1
  52326 | (kUnicodeCategory_So << 27), // "BLACK DRAUGHTS MAN", unicode 0x26C2
  52332 | (kUnicodeCategory_So << 27), // "BLACK DRAUGHTS KING", unicode 0x26C3
  0, // undefined code 0x26C4
  0, // undefined code 0x26C5
  0, // undefined code 0x26C6
  0, // undefined code 0x26C7
  0, // undefined code 0x26C8
  0, // undefined code 0x26C9
  0, // undefined code 0x26CA
  0, // undefined code 0x26CB
  0, // undefined code 0x26CC
  0, // undefined code 0x26CD
  0, // undefined code 0x26CE
  0, // undefined code 0x26CF
  0, // undefined code 0x26D0
  0, // undefined code 0x26D1
  0, // undefined code 0x26D2
  0, // undefined code 0x26D3
  0, // undefined code 0x26D4
  0, // undefined code 0x26D5
  0, // undefined code 0x26D6
  0, // undefined code 0x26D7
  0, // undefined code 0x26D8
  0, // undefined code 0x26D9
  0, // undefined code 0x26DA
  0, // undefined code 0x26DB
  0, // undefined code 0x26DC
  0, // undefined code 0x26DD
  0, // undefined code 0x26DE
  0, // undefined code 0x26DF
  0, // undefined code 0x26E0
  0, // undefined code 0x26E1
  0, // undefined code 0x26E2
  0, // undefined code 0x26E3
  0, // undefined code 0x26E4
  0, // undefined code 0x26E5
  0, // undefined code 0x26E6
  0, // undefined code 0x26E7
  0, // undefined code 0x26E8
  0, // undefined code 0x26E9
  0, // undefined code 0x26EA
  0, // undefined code 0x26EB
  0, // undefined code 0x26EC
  0, // undefined code 0x26ED
  0, // undefined code 0x26EE
  0, // undefined code 0x26EF
  0, // undefined code 0x26F0
  0, // undefined code 0x26F1
  0, // undefined code 0x26F2
  0, // undefined code 0x26F3
  0, // undefined code 0x26F4
  0, // undefined code 0x26F5
  0, // undefined code 0x26F6
  0, // undefined code 0x26F7
  0, // undefined code 0x26F8
  0, // undefined code 0x26F9
  0, // undefined code 0x26FA
  0, // undefined code 0x26FB
  0, // undefined code 0x26FC
  0, // undefined code 0x26FD
  0, // undefined code 0x26FE
  0, // undefined code 0x26FF
} ;

static const uint32_t gNamePage39 [256] = {
  0, // undefined code 0x2700
  52338 | (kUnicodeCategory_So << 27), // "UPPER BLADE SCISSORS", unicode 0x2701
  52344 | (kUnicodeCategory_So << 27), // "BLACK SCISSORS", unicode 0x2702
  52348 | (kUnicodeCategory_So << 27), // "LOWER BLADE SCISSORS", unicode 0x2703
  52354 | (kUnicodeCategory_So << 27), // "WHITE SCISSORS", unicode 0x2704
  0, // undefined code 0x2705
  52358 | (kUnicodeCategory_So << 27), // "TELEPHONE LOCATION SIGN", unicode 0x2706
  52364 | (kUnicodeCategory_So << 27), // "TAPE DRIVE", unicode 0x2707
  52369 | (kUnicodeCategory_So << 27), // "AIRPLANE", unicode 0x2708
  52372 | (kUnicodeCategory_So << 27), // "ENVELOPE", unicode 0x2709
  0, // undefined code 0x270A
  0, // undefined code 0x270B
  52374 | (kUnicodeCategory_So << 27), // "VICTORY HAND", unicode 0x270C
  52379 | (kUnicodeCategory_So << 27), // "WRITING HAND", unicode 0x270D
  52384 | (kUnicodeCategory_So << 27), // "LOWER RIGHT PENCIL", unicode 0x270E
  52389 | (kUnicodeCategory_So << 27), // "PENCIL", unicode 0x270F
  52391 | (kUnicodeCategory_So << 27), // "UPPER RIGHT PENCIL", unicode 0x2710
  52396 | (kUnicodeCategory_So << 27), // "WHITE NIB", unicode 0x2711
  52400 | (kUnicodeCategory_So << 27), // "BLACK NIB", unicode 0x2712
  52404 | (kUnicodeCategory_So << 27), // "CHECK MARK", unicode 0x2713
  52407 | (kUnicodeCategory_So << 27), // "HEAVY CHECK MARK", unicode 0x2714
  52412 | (kUnicodeCategory_So << 27), // "MULTIPLICATION X", unicode 0x2715
  52416 | (kUnicodeCategory_So << 27), // "HEAVY MULTIPLICATION X", unicode 0x2716
  52422 | (kUnicodeCategory_So << 27), // "BALLOT X", unicode 0x2717
  52426 | (kUnicodeCategory_So << 27), // "HEAVY BALLOT X", unicode 0x2718
  52432 | (kUnicodeCategory_So << 27), // "OUTLINED GREEK CROSS", unicode 0x2719
  52437 | (kUnicodeCategory_So << 27), // "HEAVY GREEK CROSS", unicode 0x271A
  52442 | (kUnicodeCategory_So << 27), // "OPEN CENTRE CROSS", unicode 0x271B
  52448 | (kUnicodeCategory_So << 27), // "HEAVY OPEN CENTRE CROSS", unicode 0x271C
  52456 | (kUnicodeCategory_So << 27), // "LATIN CROSS", unicode 0x271D
  52459 | (kUnicodeCategory_So << 27), // "SHADOWED WHITE LATIN CROSS", unicode 0x271E
  52466 | (kUnicodeCategory_So << 27), // "OUTLINED LATIN CROSS", unicode 0x271F
  52471 | (kUnicodeCategory_So << 27), // "MALTESE CROSS", unicode 0x2720
  52476 | (kUnicodeCategory_So << 27), // "STAR OF DAVID", unicode 0x2721
  52482 | (kUnicodeCategory_So << 27), // "FOUR TEARDROP-SPOKED ASTERISK", unicode 0x2722
  52490 | (kUnicodeCategory_So << 27), // "FOUR BALLOON-SPOKED ASTERISK", unicode 0x2723
  52498 | (kUnicodeCategory_So << 27), // "HEAVY FOUR BALLOON-SPOKED ASTERISK", unicode 0x2724
  52508 | (kUnicodeCategory_So << 27), // "FOUR CLUB-SPOKED ASTERISK", unicode 0x2725
  52516 | (kUnicodeCategory_So << 27), // "BLACK FOUR POINTED STAR", unicode 0x2726
  52524 | (kUnicodeCategory_So << 27), // "WHITE FOUR POINTED STAR", unicode 0x2727
  0, // undefined code 0x2728
  52532 | (kUnicodeCategory_So << 27), // "STRESS OUTLINED WHITE STAR", unicode 0x2729
  52540 | (kUnicodeCategory_So << 27), // "CIRCLED WHITE STAR", unicode 0x272A
  52545 | (kUnicodeCategory_So << 27), // "OPEN CENTRE BLACK STAR", unicode 0x272B
  52553 | (kUnicodeCategory_So << 27), // "BLACK CENTRE WHITE STAR", unicode 0x272C
  52561 | (kUnicodeCategory_So << 27), // "OUTLINED BLACK STAR", unicode 0x272D
  52567 | (kUnicodeCategory_So << 27), // "HEAVY OUTLINED BLACK STAR", unicode 0x272E
  52575 | (kUnicodeCategory_So << 27), // "PINWHEEL STAR", unicode 0x272F
  52579 | (kUnicodeCategory_So << 27), // "SHADOWED WHITE STAR", unicode 0x2730
  52585 | (kUnicodeCategory_So << 27), // "HEAVY ASTERISK", unicode 0x2731
  52589 | (kUnicodeCategory_So << 27), // "OPEN CENTRE ASTERISK", unicode 0x2732
  52595 | (kUnicodeCategory_So << 27), // "EIGHT SPOKED ASTERISK", unicode 0x2733
  52601 | (kUnicodeCategory_So << 27), // "EIGHT POINTED BLACK STAR", unicode 0x2734
  52609 | (kUnicodeCategory_So << 27), // "EIGHT POINTED PINWHEEL STAR", unicode 0x2735
  52617 | (kUnicodeCategory_So << 27), // "SIX POINTED BLACK STAR", unicode 0x2736
  52625 | (kUnicodeCategory_So << 27), // "EIGHT POINTED RECTILINEAR BLACK STAR", unicode 0x2737
  52635 | (kUnicodeCategory_So << 27), // "HEAVY EIGHT POINTED RECTILINEAR BLACK STAR", unicode 0x2738
  52647 | (kUnicodeCategory_So << 27), // "TWELVE POINTED BLACK STAR", unicode 0x2739
  52655 | (kUnicodeCategory_So << 27), // "SIXTEEN POINTED ASTERISK", unicode 0x273A
  52661 | (kUnicodeCategory_So << 27), // "TEARDROP-SPOKED ASTERISK", unicode 0x273B
  52667 | (kUnicodeCategory_So << 27), // "OPEN CENTRE TEARDROP-SPOKED ASTERISK", unicode 0x273C
  52677 | (kUnicodeCategory_So << 27), // "HEAVY TEARDROP-SPOKED ASTERISK", unicode 0x273D
  52685 | (kUnicodeCategory_So << 27), // "SIX PETALLED BLACK AND WHITE FLORETTE", unicode 0x273E
  52696 | (kUnicodeCategory_So << 27), // "BLACK FLORETTE", unicode 0x273F
  52700 | (kUnicodeCategory_So << 27), // "WHITE FLORETTE", unicode 0x2740
  52704 | (kUnicodeCategory_So << 27), // "EIGHT PETALLED OUTLINED BLACK FLORETTE", unicode 0x2741
  52714 | (kUnicodeCategory_So << 27), // "CIRCLED OPEN CENTRE EIGHT POINTED STAR", unicode 0x2742
  52725 | (kUnicodeCategory_So << 27), // "HEAVY TEARDROP-SPOKED PINWHEEL ASTERISK", unicode 0x2743
  52735 | (kUnicodeCategory_So << 27), // "SNOWFLAKE", unicode 0x2744
  52737 | (kUnicodeCategory_So << 27), // "TIGHT TRIFOLIATE SNOWFLAKE", unicode 0x2745
  52744 | (kUnicodeCategory_So << 27), // "HEAVY CHEVRON SNOWFLAKE", unicode 0x2746
  52751 | (kUnicodeCategory_So << 27), // "SPARKLE", unicode 0x2747
  52753 | (kUnicodeCategory_So << 27), // "HEAVY SPARKLE", unicode 0x2748
  52757 | (kUnicodeCategory_So << 27), // "BALLOON-SPOKED ASTERISK", unicode 0x2749
  52763 | (kUnicodeCategory_So << 27), // "EIGHT TEARDROP-SPOKED PROPELLER ASTERISK", unicode 0x274A
  52773 | (kUnicodeCategory_So << 27), // "HEAVY EIGHT TEARDROP-SPOKED PROPELLER ASTERISK", unicode 0x274B
  0, // undefined code 0x274C
  52785 | (kUnicodeCategory_So << 27), // "SHADOWED WHITE CIRCLE", unicode 0x274D
  0, // undefined code 0x274E
  52791 | (kUnicodeCategory_So << 27), // "LOWER RIGHT DROP-SHADOWED WHITE SQUARE", unicode 0x274F
  52801 | (kUnicodeCategory_So << 27), // "UPPER RIGHT DROP-SHADOWED WHITE SQUARE", unicode 0x2750
  52811 | (kUnicodeCategory_So << 27), // "LOWER RIGHT SHADOWED WHITE SQUARE", unicode 0x2751
  52819 | (kUnicodeCategory_So << 27), // "UPPER RIGHT SHADOWED WHITE SQUARE", unicode 0x2752
  0, // undefined code 0x2753
  0, // undefined code 0x2754
  0, // undefined code 0x2755
  52827 | (kUnicodeCategory_So << 27), // "BLACK DIAMOND MINUS WHITE X", unicode 0x2756
  0, // undefined code 0x2757
  52837 | (kUnicodeCategory_So << 27), // "LIGHT VERTICAL BAR", unicode 0x2758
  52842 | (kUnicodeCategory_So << 27), // "MEDIUM VERTICAL BAR", unicode 0x2759
  52847 | (kUnicodeCategory_So << 27), // "HEAVY VERTICAL BAR", unicode 0x275A
  52852 | (kUnicodeCategory_So << 27), // "HEAVY SINGLE TURNED COMMA QUOTATION MARK ORNAMENT", unicode 0x275B
  52865 | (kUnicodeCategory_So << 27), // "HEAVY SINGLE COMMA QUOTATION MARK ORNAMENT", unicode 0x275C
  52876 | (kUnicodeCategory_So << 27), // "HEAVY DOUBLE TURNED COMMA QUOTATION MARK ORNAMENT", unicode 0x275D
  52888 | (kUnicodeCategory_So << 27), // "HEAVY DOUBLE COMMA QUOTATION MARK ORNAMENT", unicode 0x275E
  0, // undefined code 0x275F
  0, // undefined code 0x2760
  52898 | (kUnicodeCategory_So << 27), // "CURVED STEM PARAGRAPH SIGN ORNAMENT", unicode 0x2761
  52907 | (kUnicodeCategory_So << 27), // "HEAVY EXCLAMATION MARK ORNAMENT", unicode 0x2762
  52914 | (kUnicodeCategory_So << 27), // "HEAVY HEART EXCLAMATION MARK ORNAMENT", unicode 0x2763
  52923 | (kUnicodeCategory_So << 27), // "HEAVY BLACK HEART", unicode 0x2764
  52929 | (kUnicodeCategory_So << 27), // "ROTATED HEAVY BLACK HEART BULLET", unicode 0x2765
  52939 | (kUnicodeCategory_So << 27), // "FLORAL HEART", unicode 0x2766
  52943 | (kUnicodeCategory_So << 27), // "ROTATED FLORAL HEART BULLET", unicode 0x2767
  52951 | (kUnicodeCategory_Ps << 27), // "MEDIUM LEFT PARENTHESIS ORNAMENT", unicode 0x2768
  52958 | (kUnicodeCategory_Pe << 27), // "MEDIUM RIGHT PARENTHESIS ORNAMENT", unicode 0x2769
  52965 | (kUnicodeCategory_Ps << 27), // "MEDIUM FLATTENED LEFT PARENTHESIS ORNAMENT", unicode 0x276A
  52974 | (kUnicodeCategory_Pe << 27), // "MEDIUM FLATTENED RIGHT PARENTHESIS ORNAMENT", unicode 0x276B
  52983 | (kUnicodeCategory_Ps << 27), // "MEDIUM LEFT-POINTING ANGLE BRACKET ORNAMENT", unicode 0x276C
  52994 | (kUnicodeCategory_Pe << 27), // "MEDIUM RIGHT-POINTING ANGLE BRACKET ORNAMENT", unicode 0x276D
  53005 | (kUnicodeCategory_Ps << 27), // "HEAVY LEFT-POINTING ANGLE QUOTATION MARK ORNAMENT", unicode 0x276E
  53017 | (kUnicodeCategory_Pe << 27), // "HEAVY RIGHT-POINTING ANGLE QUOTATION MARK ORNAMENT", unicode 0x276F
  53029 | (kUnicodeCategory_Ps << 27), // "HEAVY LEFT-POINTING ANGLE BRACKET ORNAMENT", unicode 0x2770
  53040 | (kUnicodeCategory_Pe << 27), // "HEAVY RIGHT-POINTING ANGLE BRACKET ORNAMENT", unicode 0x2771
  53051 | (kUnicodeCategory_Ps << 27), // "LIGHT LEFT TORTOISE SHELL BRACKET ORNAMENT", unicode 0x2772
  53062 | (kUnicodeCategory_Pe << 27), // "LIGHT RIGHT TORTOISE SHELL BRACKET ORNAMENT", unicode 0x2773
  53073 | (kUnicodeCategory_Ps << 27), // "MEDIUM LEFT CURLY BRACKET ORNAMENT", unicode 0x2774
  53082 | (kUnicodeCategory_Pe << 27), // "MEDIUM RIGHT CURLY BRACKET ORNAMENT", unicode 0x2775
  53091 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT ONE", unicode 0x2776
  53099 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT TWO", unicode 0x2777
  53107 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT THREE", unicode 0x2778
  53115 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT FOUR", unicode 0x2779
  53123 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT FIVE", unicode 0x277A
  53131 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT SIX", unicode 0x277B
  53139 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT SEVEN", unicode 0x277C
  53147 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT EIGHT", unicode 0x277D
  53155 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED DIGIT NINE", unicode 0x277E
  53163 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED NUMBER TEN", unicode 0x277F
  53172 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT ONE", unicode 0x2780
  53180 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT TWO", unicode 0x2781
  53188 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT THREE", unicode 0x2782
  53196 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT FOUR", unicode 0x2783
  53204 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT FIVE", unicode 0x2784
  53212 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT SIX", unicode 0x2785
  53220 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT SEVEN", unicode 0x2786
  53228 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT EIGHT", unicode 0x2787
  53236 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF DIGIT NINE", unicode 0x2788
  53244 | (kUnicodeCategory_No << 27), // "DINGBAT CIRCLED SANS-SERIF NUMBER TEN", unicode 0x2789
  53253 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT ONE", unicode 0x278A
  53263 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT TWO", unicode 0x278B
  53273 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT THREE", unicode 0x278C
  53283 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT FOUR", unicode 0x278D
  53293 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT FIVE", unicode 0x278E
  53303 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT SIX", unicode 0x278F
  53313 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT SEVEN", unicode 0x2790
  53323 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT EIGHT", unicode 0x2791
  53333 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT NINE", unicode 0x2792
  53343 | (kUnicodeCategory_No << 27), // "DINGBAT NEGATIVE CIRCLED SANS-SERIF NUMBER TEN", unicode 0x2793
  53354 | (kUnicodeCategory_So << 27), // "HEAVY WIDE-HEADED RIGHTWARDS ARROW", unicode 0x2794
  0, // undefined code 0x2795
  0, // undefined code 0x2796
  0, // undefined code 0x2797
  53363 | (kUnicodeCategory_So << 27), // "HEAVY SOUTH EAST ARROW", unicode 0x2798
  53370 | (kUnicodeCategory_So << 27), // "HEAVY RIGHTWARDS ARROW", unicode 0x2799
  53375 | (kUnicodeCategory_So << 27), // "HEAVY NORTH EAST ARROW", unicode 0x279A
  53382 | (kUnicodeCategory_So << 27), // "DRAFTING POINT RIGHTWARDS ARROW", unicode 0x279B
  53389 | (kUnicodeCategory_So << 27), // "HEAVY ROUND-TIPPED RIGHTWARDS ARROW", unicode 0x279C
  53399 | (kUnicodeCategory_So << 27), // "TRIANGLE-HEADED RIGHTWARDS ARROW", unicode 0x279D
  53406 | (kUnicodeCategory_So << 27), // "HEAVY TRIANGLE-HEADED RIGHTWARDS ARROW", unicode 0x279E
  53415 | (kUnicodeCategory_So << 27), // "DASHED TRIANGLE-HEADED RIGHTWARDS ARROW", unicode 0x279F
  53424 | (kUnicodeCategory_So << 27), // "HEAVY DASHED TRIANGLE-HEADED RIGHTWARDS ARROW", unicode 0x27A0
  53435 | (kUnicodeCategory_So << 27), // "BLACK RIGHTWARDS ARROW", unicode 0x27A1
  53440 | (kUnicodeCategory_So << 27), // "THREE-D TOP-LIGHTED RIGHTWARDS ARROWHEAD", unicode 0x27A2
  53452 | (kUnicodeCategory_So << 27), // "THREE-D BOTTOM-LIGHTED RIGHTWARDS ARROWHEAD", unicode 0x27A3
  53464 | (kUnicodeCategory_So << 27), // "BLACK RIGHTWARDS ARROWHEAD", unicode 0x27A4
  53470 | (kUnicodeCategory_So << 27), // "HEAVY BLACK CURVED DOWNWARDS AND RIGHTWARDS ARROW", unicode 0x27A5
  53482 | (kUnicodeCategory_So << 27), // "HEAVY BLACK CURVED UPWARDS AND RIGHTWARDS ARROW", unicode 0x27A6
  53494 | (kUnicodeCategory_So << 27), // "SQUAT BLACK RIGHTWARDS ARROW", unicode 0x27A7
  53501 | (kUnicodeCategory_So << 27), // "HEAVY CONCAVE-POINTED BLACK RIGHTWARDS ARROW", unicode 0x27A8
  53512 | (kUnicodeCategory_So << 27), // "RIGHT-SHADED WHITE RIGHTWARDS ARROW", unicode 0x27A9
  53520 | (kUnicodeCategory_So << 27), // "LEFT-SHADED WHITE RIGHTWARDS ARROW", unicode 0x27AA
  53528 | (kUnicodeCategory_So << 27), // "BACK-TILTED SHADOWED WHITE RIGHTWARDS ARROW", unicode 0x27AB
  53539 | (kUnicodeCategory_So << 27), // "FRONT-TILTED SHADOWED WHITE RIGHTWARDS ARROW", unicode 0x27AC
  53551 | (kUnicodeCategory_So << 27), // "HEAVY LOWER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW", unicode 0x27AD
  53563 | (kUnicodeCategory_So << 27), // "HEAVY UPPER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW", unicode 0x27AE
  53575 | (kUnicodeCategory_So << 27), // "NOTCHED LOWER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW", unicode 0x27AF
  0, // undefined code 0x27B0
  53587 | (kUnicodeCategory_So << 27), // "NOTCHED UPPER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW", unicode 0x27B1
  53599 | (kUnicodeCategory_So << 27), // "CIRCLED HEAVY WHITE RIGHTWARDS ARROW", unicode 0x27B2
  53607 | (kUnicodeCategory_So << 27), // "WHITE-FEATHERED RIGHTWARDS ARROW", unicode 0x27B3
  53614 | (kUnicodeCategory_So << 27), // "BLACK-FEATHERED SOUTH EAST ARROW", unicode 0x27B4
  53623 | (kUnicodeCategory_So << 27), // "BLACK-FEATHERED RIGHTWARDS ARROW", unicode 0x27B5
  53630 | (kUnicodeCategory_So << 27), // "BLACK-FEATHERED NORTH EAST ARROW", unicode 0x27B6
  53639 | (kUnicodeCategory_So << 27), // "HEAVY BLACK-FEATHERED SOUTH EAST ARROW", unicode 0x27B7
  53650 | (kUnicodeCategory_So << 27), // "HEAVY BLACK-FEATHERED RIGHTWARDS ARROW", unicode 0x27B8
  53659 | (kUnicodeCategory_So << 27), // "HEAVY BLACK-FEATHERED NORTH EAST ARROW", unicode 0x27B9
  53670 | (kUnicodeCategory_So << 27), // "TEARDROP-BARBED RIGHTWARDS ARROW", unicode 0x27BA
  53678 | (kUnicodeCategory_So << 27), // "HEAVY TEARDROP-SHANKED RIGHTWARDS ARROW", unicode 0x27BB
  53688 | (kUnicodeCategory_So << 27), // "WEDGE-TAILED RIGHTWARDS ARROW", unicode 0x27BC
  53695 | (kUnicodeCategory_So << 27), // "HEAVY WEDGE-TAILED RIGHTWARDS ARROW", unicode 0x27BD
  53704 | (kUnicodeCategory_So << 27), // "OPEN-OUTLINED RIGHTWARDS ARROW", unicode 0x27BE
  0, // undefined code 0x27BF
  53711 | (kUnicodeCategory_Sm << 27), // "THREE DIMENSIONAL ANGLE", unicode 0x27C0
  53718 | (kUnicodeCategory_Sm << 27), // "WHITE TRIANGLE CONTAINING SMALL WHITE TRIANGLE", unicode 0x27C1
  53729 | (kUnicodeCategory_Sm << 27), // "PERPENDICULAR", unicode 0x27C2
  53731 | (kUnicodeCategory_Sm << 27), // "OPEN SUBSET", unicode 0x27C3
  53735 | (kUnicodeCategory_Sm << 27), // "OPEN SUPERSET", unicode 0x27C4
  53739 | (kUnicodeCategory_Ps << 27), // "LEFT S-SHAPED BAG DELIMITER", unicode 0x27C5
  53748 | (kUnicodeCategory_Pe << 27), // "RIGHT S-SHAPED BAG DELIMITER", unicode 0x27C6
  53757 | (kUnicodeCategory_Sm << 27), // "OR WITH DOT INSIDE", unicode 0x27C7
  53763 | (kUnicodeCategory_Sm << 27), // "REVERSE SOLIDUS PRECEDING SUBSET", unicode 0x27C8
  53771 | (kUnicodeCategory_Sm << 27), // "SUPERSET PRECEDING SOLIDUS", unicode 0x27C9
  53777 | (kUnicodeCategory_Sm << 27), // "VERTICAL BAR WITH HORIZONTAL STROKE", unicode 0x27CA
  0, // undefined code 0x27CB
  53785 | (kUnicodeCategory_Sm << 27), // "LONG DIVISION", unicode 0x27CC
  0, // undefined code 0x27CD
  0, // undefined code 0x27CE
  0, // undefined code 0x27CF
  53789 | (kUnicodeCategory_Sm << 27), // "WHITE DIAMOND WITH CENTRED DOT", unicode 0x27D0
  53797 | (kUnicodeCategory_Sm << 27), // "AND WITH DOT", unicode 0x27D1
  53800 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF OPENING UPWARDS", unicode 0x27D2
  53808 | (kUnicodeCategory_Sm << 27), // "LOWER RIGHT CORNER WITH DOT", unicode 0x27D3
  53815 | (kUnicodeCategory_Sm << 27), // "UPPER LEFT CORNER WITH DOT", unicode 0x27D4
  53822 | (kUnicodeCategory_Sm << 27), // "LEFT OUTER JOIN", unicode 0x27D5
  53827 | (kUnicodeCategory_Sm << 27), // "RIGHT OUTER JOIN", unicode 0x27D6
  53832 | (kUnicodeCategory_Sm << 27), // "FULL OUTER JOIN", unicode 0x27D7
  53838 | (kUnicodeCategory_Sm << 27), // "LARGE UP TACK", unicode 0x27D8
  53844 | (kUnicodeCategory_Sm << 27), // "LARGE DOWN TACK", unicode 0x27D9
  53850 | (kUnicodeCategory_Sm << 27), // "LEFT AND RIGHT DOUBLE TURNSTILE", unicode 0x27DA
  53856 | (kUnicodeCategory_Sm << 27), // "LEFT AND RIGHT TACK", unicode 0x27DB
  53861 | (kUnicodeCategory_Sm << 27), // "LEFT MULTIMAP", unicode 0x27DC
  53864 | (kUnicodeCategory_Sm << 27), // "LONG RIGHT TACK", unicode 0x27DD
  53869 | (kUnicodeCategory_Sm << 27), // "LONG LEFT TACK", unicode 0x27DE
  53874 | (kUnicodeCategory_Sm << 27), // "UP TACK WITH CIRCLE ABOVE", unicode 0x27DF
  53882 | (kUnicodeCategory_Sm << 27), // "LOZENGE DIVIDED BY HORIZONTAL RULE", unicode 0x27E0
  53892 | (kUnicodeCategory_Sm << 27), // "WHITE CONCAVE-SIDED DIAMOND", unicode 0x27E1
  53900 | (kUnicodeCategory_Sm << 27), // "WHITE CONCAVE-SIDED DIAMOND WITH LEFTWARDS TICK", unicode 0x27E2
  53913 | (kUnicodeCategory_Sm << 27), // "WHITE CONCAVE-SIDED DIAMOND WITH RIGHTWARDS TICK", unicode 0x27E3
  53926 | (kUnicodeCategory_Sm << 27), // "WHITE SQUARE WITH LEFTWARDS TICK", unicode 0x27E4
  53934 | (kUnicodeCategory_Sm << 27), // "WHITE SQUARE WITH RIGHTWARDS TICK", unicode 0x27E5
  53942 | (kUnicodeCategory_Ps << 27), // "MATHEMATICAL LEFT WHITE SQUARE BRACKET", unicode 0x27E6
  53949 | (kUnicodeCategory_Pe << 27), // "MATHEMATICAL RIGHT WHITE SQUARE BRACKET", unicode 0x27E7
  53956 | (kUnicodeCategory_Ps << 27), // "MATHEMATICAL LEFT ANGLE BRACKET", unicode 0x27E8
  53962 | (kUnicodeCategory_Pe << 27), // "MATHEMATICAL RIGHT ANGLE BRACKET", unicode 0x27E9
  53968 | (kUnicodeCategory_Ps << 27), // "MATHEMATICAL LEFT DOUBLE ANGLE BRACKET", unicode 0x27EA
  53975 | (kUnicodeCategory_Pe << 27), // "MATHEMATICAL RIGHT DOUBLE ANGLE BRACKET", unicode 0x27EB
  53982 | (kUnicodeCategory_Ps << 27), // "MATHEMATICAL LEFT WHITE TORTOISE SHELL BRACKET", unicode 0x27EC
  53992 | (kUnicodeCategory_Pe << 27), // "MATHEMATICAL RIGHT WHITE TORTOISE SHELL BRACKET", unicode 0x27ED
  54002 | (kUnicodeCategory_Ps << 27), // "MATHEMATICAL LEFT FLATTENED PARENTHESIS", unicode 0x27EE
  54008 | (kUnicodeCategory_Pe << 27), // "MATHEMATICAL RIGHT FLATTENED PARENTHESIS", unicode 0x27EF
  54014 | (kUnicodeCategory_Sm << 27), // "UPWARDS QUADRUPLE ARROW", unicode 0x27F0
  54019 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS QUADRUPLE ARROW", unicode 0x27F1
  54024 | (kUnicodeCategory_Sm << 27), // "ANTICLOCKWISE GAPPED CIRCLE ARROW", unicode 0x27F2
  54031 | (kUnicodeCategory_Sm << 27), // "CLOCKWISE GAPPED CIRCLE ARROW", unicode 0x27F3
  54038 | (kUnicodeCategory_Sm << 27), // "RIGHT ARROW WITH CIRCLED PLUS", unicode 0x27F4
  54044 | (kUnicodeCategory_Sm << 27), // "LONG LEFTWARDS ARROW", unicode 0x27F5
  54049 | (kUnicodeCategory_Sm << 27), // "LONG RIGHTWARDS ARROW", unicode 0x27F6
  54054 | (kUnicodeCategory_Sm << 27), // "LONG LEFT RIGHT ARROW", unicode 0x27F7
  54059 | (kUnicodeCategory_Sm << 27), // "LONG LEFTWARDS DOUBLE ARROW", unicode 0x27F8
  54065 | (kUnicodeCategory_Sm << 27), // "LONG RIGHTWARDS DOUBLE ARROW", unicode 0x27F9
  54071 | (kUnicodeCategory_Sm << 27), // "LONG LEFT RIGHT DOUBLE ARROW", unicode 0x27FA
  54077 | (kUnicodeCategory_Sm << 27), // "LONG LEFTWARDS ARROW FROM BAR", unicode 0x27FB
  54086 | (kUnicodeCategory_Sm << 27), // "LONG RIGHTWARDS ARROW FROM BAR", unicode 0x27FC
  54095 | (kUnicodeCategory_Sm << 27), // "LONG LEFTWARDS DOUBLE ARROW FROM BAR", unicode 0x27FD
  54105 | (kUnicodeCategory_Sm << 27), // "LONG RIGHTWARDS DOUBLE ARROW FROM BAR", unicode 0x27FE
  54115 | (kUnicodeCategory_Sm << 27), // "LONG RIGHTWARDS SQUIGGLE ARROW", unicode 0x27FF
} ;

static const uint32_t gNamePage40 [256] = {
  54122 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN BLANK", unicode 0x2800
  54126 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1", unicode 0x2801
  54131 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2", unicode 0x2802
  54136 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12", unicode 0x2803
  54141 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3", unicode 0x2804
  54146 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13", unicode 0x2805
  54151 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23", unicode 0x2806
  54156 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123", unicode 0x2807
  54161 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-4", unicode 0x2808
  54166 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-14", unicode 0x2809
  54171 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-24", unicode 0x280A
  54176 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-124", unicode 0x280B
  54181 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-34", unicode 0x280C
  54186 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-134", unicode 0x280D
  54191 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-234", unicode 0x280E
  54196 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1234", unicode 0x280F
  54202 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-5", unicode 0x2810
  54207 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-15", unicode 0x2811
  54212 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-25", unicode 0x2812
  54217 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-125", unicode 0x2813
  54222 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-35", unicode 0x2814
  54227 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-135", unicode 0x2815
  54232 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-235", unicode 0x2816
  54237 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1235", unicode 0x2817
  54242 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-45", unicode 0x2818
  54247 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-145", unicode 0x2819
  54252 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-245", unicode 0x281A
  54257 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1245", unicode 0x281B
  54263 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-345", unicode 0x281C
  54269 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1345", unicode 0x281D
  54274 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2345", unicode 0x281E
  54280 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12345", unicode 0x281F
  54285 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-6", unicode 0x2820
  54290 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-16", unicode 0x2821
  54295 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-26", unicode 0x2822
  54300 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-126", unicode 0x2823
  54305 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-36", unicode 0x2824
  54310 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-136", unicode 0x2825
  54315 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-236", unicode 0x2826
  54320 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1236", unicode 0x2827
  54326 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-46", unicode 0x2828
  54331 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-146", unicode 0x2829
  54336 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-246", unicode 0x282A
  54341 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1246", unicode 0x282B
  54347 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-346", unicode 0x282C
  54353 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1346", unicode 0x282D
  54359 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2346", unicode 0x282E
  54364 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12346", unicode 0x282F
  54370 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-56", unicode 0x2830
  54375 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-156", unicode 0x2831
  54380 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-256", unicode 0x2832
  54385 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1256", unicode 0x2833
  54391 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-356", unicode 0x2834
  54396 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1356", unicode 0x2835
  54402 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2356", unicode 0x2836
  54407 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12356", unicode 0x2837
  54412 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-456", unicode 0x2838
  54418 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1456", unicode 0x2839
  54423 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2456", unicode 0x283A
  54429 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12456", unicode 0x283B
  54435 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3456", unicode 0x283C
  54441 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13456", unicode 0x283D
  54447 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23456", unicode 0x283E
  54452 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123456", unicode 0x283F
  54458 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-7", unicode 0x2840
  54463 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-17", unicode 0x2841
  54468 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-27", unicode 0x2842
  54473 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-127", unicode 0x2843
  54478 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-37", unicode 0x2844
  54483 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-137", unicode 0x2845
  54488 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-237", unicode 0x2846
  54493 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1237", unicode 0x2847
  54498 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-47", unicode 0x2848
  54503 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-147", unicode 0x2849
  54508 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-247", unicode 0x284A
  54513 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1247", unicode 0x284B
  54519 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-347", unicode 0x284C
  54524 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1347", unicode 0x284D
  54530 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2347", unicode 0x284E
  54536 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12347", unicode 0x284F
  54542 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-57", unicode 0x2850
  54547 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-157", unicode 0x2851
  54552 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-257", unicode 0x2852
  54557 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1257", unicode 0x2853
  54562 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-357", unicode 0x2854
  54568 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1357", unicode 0x2855
  54573 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2357", unicode 0x2856
  54578 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12357", unicode 0x2857
  54584 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-457", unicode 0x2858
  54589 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1457", unicode 0x2859
  54595 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2457", unicode 0x285A
  54601 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12457", unicode 0x285B
  54607 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3457", unicode 0x285C
  54613 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13457", unicode 0x285D
  54619 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23457", unicode 0x285E
  54625 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123457", unicode 0x285F
  54631 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-67", unicode 0x2860
  54636 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-167", unicode 0x2861
  54641 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-267", unicode 0x2862
  54647 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1267", unicode 0x2863
  54652 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-367", unicode 0x2864
  54657 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1367", unicode 0x2865
  54663 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2367", unicode 0x2866
  54669 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12367", unicode 0x2867
  54675 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-467", unicode 0x2868
  54681 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1467", unicode 0x2869
  54687 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2467", unicode 0x286A
  54693 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12467", unicode 0x286B
  54698 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3467", unicode 0x286C
  54704 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13467", unicode 0x286D
  54710 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23467", unicode 0x286E
  54716 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123467", unicode 0x286F
  54721 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-567", unicode 0x2870
  54727 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1567", unicode 0x2871
  54732 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2567", unicode 0x2872
  54738 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12567", unicode 0x2873
  54744 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3567", unicode 0x2874
  54750 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13567", unicode 0x2875
  54756 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23567", unicode 0x2876
  54762 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123567", unicode 0x2877
  54768 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-4567", unicode 0x2878
  54774 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-14567", unicode 0x2879
  54779 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-24567", unicode 0x287A
  54785 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-124567", unicode 0x287B
  54791 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-34567", unicode 0x287C
  54797 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-134567", unicode 0x287D
  54803 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-234567", unicode 0x287E
  54808 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1234567", unicode 0x287F
  54813 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-8", unicode 0x2880
  54818 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-18", unicode 0x2881
  54823 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-28", unicode 0x2882
  54828 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-128", unicode 0x2883
  54833 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-38", unicode 0x2884
  54838 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-138", unicode 0x2885
  54843 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-238", unicode 0x2886
  54848 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1238", unicode 0x2887
  54853 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-48", unicode 0x2888
  54858 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-148", unicode 0x2889
  54863 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-248", unicode 0x288A
  54868 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1248", unicode 0x288B
  54873 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-348", unicode 0x288C
  54879 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1348", unicode 0x288D
  54884 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2348", unicode 0x288E
  54889 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12348", unicode 0x288F
  54895 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-58", unicode 0x2890
  54900 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-158", unicode 0x2891
  54905 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-258", unicode 0x2892
  54910 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1258", unicode 0x2893
  54915 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-358", unicode 0x2894
  54921 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1358", unicode 0x2895
  54927 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2358", unicode 0x2896
  54933 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12358", unicode 0x2897
  54939 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-458", unicode 0x2898
  54945 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1458", unicode 0x2899
  54951 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2458", unicode 0x289A
  54957 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12458", unicode 0x289B
  54962 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3458", unicode 0x289C
  54968 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13458", unicode 0x289D
  54974 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23458", unicode 0x289E
  54980 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123458", unicode 0x289F
  54986 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-68", unicode 0x28A0
  54991 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-168", unicode 0x28A1
  54996 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-268", unicode 0x28A2
  55002 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1268", unicode 0x28A3
  55008 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-368", unicode 0x28A4
  55014 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1368", unicode 0x28A5
  55020 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2368", unicode 0x28A6
  55026 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12368", unicode 0x28A7
  55031 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-468", unicode 0x28A8
  55036 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1468", unicode 0x28A9
  55042 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2468", unicode 0x28AA
  55047 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12468", unicode 0x28AB
  55052 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3468", unicode 0x28AC
  55057 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13468", unicode 0x28AD
  55062 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23468", unicode 0x28AE
  55068 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123468", unicode 0x28AF
  55074 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-568", unicode 0x28B0
  55080 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1568", unicode 0x28B1
  55086 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2568", unicode 0x28B2
  55091 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12568", unicode 0x28B3
  55097 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3568", unicode 0x28B4
  55102 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13568", unicode 0x28B5
  55108 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23568", unicode 0x28B6
  55113 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123568", unicode 0x28B7
  55119 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-4568", unicode 0x28B8
  55125 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-14568", unicode 0x28B9
  55130 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-24568", unicode 0x28BA
  55136 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-124568", unicode 0x28BB
  55141 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-34568", unicode 0x28BC
  55147 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-134568", unicode 0x28BD
  55152 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-234568", unicode 0x28BE
  55158 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1234568", unicode 0x28BF
  55164 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-78", unicode 0x28C0
  55169 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-178", unicode 0x28C1
  55174 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-278", unicode 0x28C2
  55179 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1278", unicode 0x28C3
  55185 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-378", unicode 0x28C4
  55191 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1378", unicode 0x28C5
  55197 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2378", unicode 0x28C6
  55203 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12378", unicode 0x28C7
  55209 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-478", unicode 0x28C8
  55214 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1478", unicode 0x28C9
  55220 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2478", unicode 0x28CA
  55225 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12478", unicode 0x28CB
  55230 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3478", unicode 0x28CC
  55236 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13478", unicode 0x28CD
  55242 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23478", unicode 0x28CE
  55247 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123478", unicode 0x28CF
  55252 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-578", unicode 0x28D0
  55258 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1578", unicode 0x28D1
  55263 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2578", unicode 0x28D2
  55268 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12578", unicode 0x28D3
  55274 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3578", unicode 0x28D4
  55280 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13578", unicode 0x28D5
  55286 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23578", unicode 0x28D6
  55291 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123578", unicode 0x28D7
  55297 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-4578", unicode 0x28D8
  55303 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-14578", unicode 0x28D9
  55309 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-24578", unicode 0x28DA
  55315 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-124578", unicode 0x28DB
  55321 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-34578", unicode 0x28DC
  55327 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-134578", unicode 0x28DD
  55333 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-234578", unicode 0x28DE
  55338 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1234578", unicode 0x28DF
  55344 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-678", unicode 0x28E0
  55350 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1678", unicode 0x28E1
  55356 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2678", unicode 0x28E2
  55361 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12678", unicode 0x28E3
  55367 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-3678", unicode 0x28E4
  55373 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-13678", unicode 0x28E5
  55378 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-23678", unicode 0x28E6
  55384 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-123678", unicode 0x28E7
  55389 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-4678", unicode 0x28E8
  55394 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-14678", unicode 0x28E9
  55400 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-24678", unicode 0x28EA
  55406 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-124678", unicode 0x28EB
  55412 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-34678", unicode 0x28EC
  55418 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-134678", unicode 0x28ED
  55424 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-234678", unicode 0x28EE
  55430 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1234678", unicode 0x28EF
  55436 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-5678", unicode 0x28F0
  55442 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-15678", unicode 0x28F1
  55447 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-25678", unicode 0x28F2
  55453 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-125678", unicode 0x28F3
  55458 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-35678", unicode 0x28F4
  55464 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-135678", unicode 0x28F5
  55470 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-235678", unicode 0x28F6
  55476 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1235678", unicode 0x28F7
  55481 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-45678", unicode 0x28F8
  55487 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-145678", unicode 0x28F9
  55492 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-245678", unicode 0x28FA
  55498 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1245678", unicode 0x28FB
  55503 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-345678", unicode 0x28FC
  55509 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-1345678", unicode 0x28FD
  55514 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-2345678", unicode 0x28FE
  55520 | (kUnicodeCategory_So << 27), // "BRAILLE PATTERN DOTS-12345678", unicode 0x28FF
} ;

static const uint32_t gNamePage41 [256] = {
  55526 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED ARROW WITH VERTICAL STROKE", unicode 0x2900
  55537 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED ARROW WITH DOUBLE VERTICAL STROKE", unicode 0x2901
  55549 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS DOUBLE ARROW WITH VERTICAL STROKE", unicode 0x2902
  55557 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS DOUBLE ARROW WITH VERTICAL STROKE", unicode 0x2903
  55565 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT DOUBLE ARROW WITH VERTICAL STROKE", unicode 0x2904
  55573 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED ARROW FROM BAR", unicode 0x2905
  55584 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS DOUBLE ARROW FROM BAR", unicode 0x2906
  55592 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS DOUBLE ARROW FROM BAR", unicode 0x2907
  55600 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS ARROW WITH HORIZONTAL STROKE", unicode 0x2908
  55608 | (kUnicodeCategory_Sm << 27), // "UPWARDS ARROW WITH HORIZONTAL STROKE", unicode 0x2909
  55616 | (kUnicodeCategory_Sm << 27), // "UPWARDS TRIPLE ARROW", unicode 0x290A
  55621 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS TRIPLE ARROW", unicode 0x290B
  55626 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS DOUBLE DASH ARROW", unicode 0x290C
  55632 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS DOUBLE DASH ARROW", unicode 0x290D
  55638 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TRIPLE DASH ARROW", unicode 0x290E
  55645 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TRIPLE DASH ARROW", unicode 0x290F
  55652 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED TRIPLE DASH ARROW", unicode 0x2910
  55663 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH DOTTED STEM", unicode 0x2911
  55671 | (kUnicodeCategory_Sm << 27), // "UPWARDS ARROW TO BAR", unicode 0x2912
  55678 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS ARROW TO BAR", unicode 0x2913
  55685 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH TAIL WITH VERTICAL STROKE", unicode 0x2914
  55695 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE", unicode 0x2915
  55706 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED ARROW WITH TAIL", unicode 0x2916
  55716 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED ARROW WITH TAIL WITH VERTICAL STROKE", unicode 0x2917
  55730 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS TWO-HEADED ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE", unicode 0x2918
  55745 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW-TAIL", unicode 0x2919
  55750 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW-TAIL", unicode 0x291A
  55755 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS DOUBLE ARROW-TAIL", unicode 0x291B
  55761 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS DOUBLE ARROW-TAIL", unicode 0x291C
  55767 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW TO BLACK DIAMOND", unicode 0x291D
  55776 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW TO BLACK DIAMOND", unicode 0x291E
  55785 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW FROM BAR TO BLACK DIAMOND", unicode 0x291F
  55798 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW FROM BAR TO BLACK DIAMOND", unicode 0x2920
  55811 | (kUnicodeCategory_Sm << 27), // "NORTH WEST AND SOUTH EAST ARROW", unicode 0x2921
  55821 | (kUnicodeCategory_Sm << 27), // "NORTH EAST AND SOUTH WEST ARROW", unicode 0x2922
  55831 | (kUnicodeCategory_Sm << 27), // "NORTH WEST ARROW WITH HOOK", unicode 0x2923
  55839 | (kUnicodeCategory_Sm << 27), // "NORTH EAST ARROW WITH HOOK", unicode 0x2924
  55847 | (kUnicodeCategory_Sm << 27), // "SOUTH EAST ARROW WITH HOOK", unicode 0x2925
  55855 | (kUnicodeCategory_Sm << 27), // "SOUTH WEST ARROW WITH HOOK", unicode 0x2926
  55863 | (kUnicodeCategory_Sm << 27), // "NORTH WEST ARROW AND NORTH EAST ARROW", unicode 0x2927
  55874 | (kUnicodeCategory_Sm << 27), // "NORTH EAST ARROW AND SOUTH EAST ARROW", unicode 0x2928
  55885 | (kUnicodeCategory_Sm << 27), // "SOUTH EAST ARROW AND SOUTH WEST ARROW", unicode 0x2929
  55896 | (kUnicodeCategory_Sm << 27), // "SOUTH WEST ARROW AND NORTH WEST ARROW", unicode 0x292A
  55907 | (kUnicodeCategory_Sm << 27), // "RISING DIAGONAL CROSSING FALLING DIAGONAL", unicode 0x292B
  55917 | (kUnicodeCategory_Sm << 27), // "FALLING DIAGONAL CROSSING RISING DIAGONAL", unicode 0x292C
  55927 | (kUnicodeCategory_Sm << 27), // "SOUTH EAST ARROW CROSSING NORTH EAST ARROW", unicode 0x292D
  55939 | (kUnicodeCategory_Sm << 27), // "NORTH EAST ARROW CROSSING SOUTH EAST ARROW", unicode 0x292E
  55951 | (kUnicodeCategory_Sm << 27), // "FALLING DIAGONAL CROSSING NORTH EAST ARROW", unicode 0x292F
  55962 | (kUnicodeCategory_Sm << 27), // "RISING DIAGONAL CROSSING SOUTH EAST ARROW", unicode 0x2930
  55973 | (kUnicodeCategory_Sm << 27), // "NORTH EAST ARROW CROSSING NORTH WEST ARROW", unicode 0x2931
  55985 | (kUnicodeCategory_Sm << 27), // "NORTH WEST ARROW CROSSING NORTH EAST ARROW", unicode 0x2932
  55997 | (kUnicodeCategory_Sm << 27), // "WAVE ARROW POINTING DIRECTLY RIGHT", unicode 0x2933
  56005 | (kUnicodeCategory_Sm << 27), // "ARROW POINTING RIGHTWARDS THEN CURVING UPWARDS", unicode 0x2934
  56016 | (kUnicodeCategory_Sm << 27), // "ARROW POINTING RIGHTWARDS THEN CURVING DOWNWARDS", unicode 0x2935
  56027 | (kUnicodeCategory_Sm << 27), // "ARROW POINTING DOWNWARDS THEN CURVING LEFTWARDS", unicode 0x2936
  56038 | (kUnicodeCategory_Sm << 27), // "ARROW POINTING DOWNWARDS THEN CURVING RIGHTWARDS", unicode 0x2937
  56049 | (kUnicodeCategory_Sm << 27), // "RIGHT-SIDE ARC CLOCKWISE ARROW", unicode 0x2938
  56057 | (kUnicodeCategory_Sm << 27), // "LEFT-SIDE ARC ANTICLOCKWISE ARROW", unicode 0x2939
  56065 | (kUnicodeCategory_Sm << 27), // "TOP ARC ANTICLOCKWISE ARROW", unicode 0x293A
  56072 | (kUnicodeCategory_Sm << 27), // "BOTTOM ARC ANTICLOCKWISE ARROW", unicode 0x293B
  56079 | (kUnicodeCategory_Sm << 27), // "TOP ARC CLOCKWISE ARROW WITH MINUS", unicode 0x293C
  56089 | (kUnicodeCategory_Sm << 27), // "TOP ARC ANTICLOCKWISE ARROW WITH PLUS", unicode 0x293D
  56099 | (kUnicodeCategory_Sm << 27), // "LOWER RIGHT SEMICIRCULAR CLOCKWISE ARROW", unicode 0x293E
  56107 | (kUnicodeCategory_Sm << 27), // "LOWER LEFT SEMICIRCULAR ANTICLOCKWISE ARROW", unicode 0x293F
  56115 | (kUnicodeCategory_Sm << 27), // "ANTICLOCKWISE CLOSED CIRCLE ARROW", unicode 0x2940
  56122 | (kUnicodeCategory_Sm << 27), // "CLOCKWISE CLOSED CIRCLE ARROW", unicode 0x2941
  56129 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW ABOVE SHORT LEFTWARDS ARROW", unicode 0x2942
  56138 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW ABOVE SHORT RIGHTWARDS ARROW", unicode 0x2943
  56147 | (kUnicodeCategory_Sm << 27), // "SHORT RIGHTWARDS ARROW ABOVE LEFTWARDS ARROW", unicode 0x2944
  56156 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW WITH PLUS BELOW", unicode 0x2945
  56163 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH PLUS BELOW", unicode 0x2946
  56170 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW THROUGH X", unicode 0x2947
  56177 | (kUnicodeCategory_Sm << 27), // "LEFT RIGHT ARROW THROUGH SMALL CIRCLE", unicode 0x2948
  56185 | (kUnicodeCategory_Sm << 27), // "UPWARDS TWO-HEADED ARROW FROM SMALL CIRCLE", unicode 0x2949
  56197 | (kUnicodeCategory_Sm << 27), // "LEFT BARB UP RIGHT BARB DOWN HARPOON", unicode 0x294A
  56209 | (kUnicodeCategory_Sm << 27), // "LEFT BARB DOWN RIGHT BARB UP HARPOON", unicode 0x294B
  56221 | (kUnicodeCategory_Sm << 27), // "UP BARB RIGHT DOWN BARB LEFT HARPOON", unicode 0x294C
  56233 | (kUnicodeCategory_Sm << 27), // "UP BARB LEFT DOWN BARB RIGHT HARPOON", unicode 0x294D
  56245 | (kUnicodeCategory_Sm << 27), // "LEFT BARB UP RIGHT BARB UP HARPOON", unicode 0x294E
  56257 | (kUnicodeCategory_Sm << 27), // "UP BARB RIGHT DOWN BARB RIGHT HARPOON", unicode 0x294F
  56269 | (kUnicodeCategory_Sm << 27), // "LEFT BARB DOWN RIGHT BARB DOWN HARPOON", unicode 0x2950
  56281 | (kUnicodeCategory_Sm << 27), // "UP BARB LEFT DOWN BARB LEFT HARPOON", unicode 0x2951
  56293 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB UP TO BAR", unicode 0x2952
  56306 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB UP TO BAR", unicode 0x2953
  56319 | (kUnicodeCategory_Sm << 27), // "UPWARDS HARPOON WITH BARB RIGHT TO BAR", unicode 0x2954
  56331 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS HARPOON WITH BARB RIGHT TO BAR", unicode 0x2955
  56343 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB DOWN TO BAR", unicode 0x2956
  56356 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB DOWN TO BAR", unicode 0x2957
  56369 | (kUnicodeCategory_Sm << 27), // "UPWARDS HARPOON WITH BARB LEFT TO BAR", unicode 0x2958
  56381 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS HARPOON WITH BARB LEFT TO BAR", unicode 0x2959
  56393 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB UP FROM BAR", unicode 0x295A
  56406 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB UP FROM BAR", unicode 0x295B
  56419 | (kUnicodeCategory_Sm << 27), // "UPWARDS HARPOON WITH BARB RIGHT FROM BAR", unicode 0x295C
  56431 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS HARPOON WITH BARB RIGHT FROM BAR", unicode 0x295D
  56443 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB DOWN FROM BAR", unicode 0x295E
  56456 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB DOWN FROM BAR", unicode 0x295F
  56469 | (kUnicodeCategory_Sm << 27), // "UPWARDS HARPOON WITH BARB LEFT FROM BAR", unicode 0x2960
  56481 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS HARPOON WITH BARB LEFT FROM BAR", unicode 0x2961
  56493 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB UP ABOVE LEFTWARDS HARPOON WITH BARB DOWN", unicode 0x2962
  56512 | (kUnicodeCategory_Sm << 27), // "UPWARDS HARPOON WITH BARB LEFT BESIDE UPWARDS HARPOON WITH BARB RIGHT", unicode 0x2963
  56530 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB UP ABOVE RIGHTWARDS HARPOON WITH BARB DOWN", unicode 0x2964
  56549 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS HARPOON WITH BARB LEFT BESIDE DOWNWARDS HARPOON WITH BARB RIGHT", unicode 0x2965
  56567 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB UP ABOVE RIGHTWARDS HARPOON WITH BARB UP", unicode 0x2966
  56586 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB DOWN ABOVE RIGHTWARDS HARPOON WITH BARB DOWN", unicode 0x2967
  56605 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB UP ABOVE LEFTWARDS HARPOON WITH BARB UP", unicode 0x2968
  56624 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB DOWN ABOVE LEFTWARDS HARPOON WITH BARB DOWN", unicode 0x2969
  56643 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB UP ABOVE LONG DASH", unicode 0x296A
  56657 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS HARPOON WITH BARB DOWN BELOW LONG DASH", unicode 0x296B
  56671 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB UP ABOVE LONG DASH", unicode 0x296C
  56685 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS HARPOON WITH BARB DOWN BELOW LONG DASH", unicode 0x296D
  56699 | (kUnicodeCategory_Sm << 27), // "UPWARDS HARPOON WITH BARB LEFT BESIDE DOWNWARDS HARPOON WITH BARB RIGHT", unicode 0x296E
  56717 | (kUnicodeCategory_Sm << 27), // "DOWNWARDS HARPOON WITH BARB LEFT BESIDE UPWARDS HARPOON WITH BARB RIGHT", unicode 0x296F
  56735 | (kUnicodeCategory_Sm << 27), // "RIGHT DOUBLE ARROW WITH ROUNDED HEAD", unicode 0x2970
  56743 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN ABOVE RIGHTWARDS ARROW", unicode 0x2971
  56750 | (kUnicodeCategory_Sm << 27), // "TILDE OPERATOR ABOVE RIGHTWARDS ARROW", unicode 0x2972
  56758 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW ABOVE TILDE OPERATOR", unicode 0x2973
  56766 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW ABOVE TILDE OPERATOR", unicode 0x2974
  56774 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW ABOVE ALMOST EQUAL TO", unicode 0x2975
  56784 | (kUnicodeCategory_Sm << 27), // "LESS-THAN ABOVE LEFTWARDS ARROW", unicode 0x2976
  56792 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW THROUGH LESS-THAN", unicode 0x2977
  56801 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN ABOVE RIGHTWARDS ARROW", unicode 0x2978
  56809 | (kUnicodeCategory_Sm << 27), // "SUBSET ABOVE RIGHTWARDS ARROW", unicode 0x2979
  56815 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW THROUGH SUBSET", unicode 0x297A
  56822 | (kUnicodeCategory_Sm << 27), // "SUPERSET ABOVE LEFTWARDS ARROW", unicode 0x297B
  56828 | (kUnicodeCategory_Sm << 27), // "LEFT FISH TAIL", unicode 0x297C
  56833 | (kUnicodeCategory_Sm << 27), // "RIGHT FISH TAIL", unicode 0x297D
  56838 | (kUnicodeCategory_Sm << 27), // "UP FISH TAIL", unicode 0x297E
  56844 | (kUnicodeCategory_Sm << 27), // "DOWN FISH TAIL", unicode 0x297F
  56850 | (kUnicodeCategory_Sm << 27), // "TRIPLE VERTICAL BAR DELIMITER", unicode 0x2980
  56857 | (kUnicodeCategory_Sm << 27), // "Z NOTATION SPOT", unicode 0x2981
  56864 | (kUnicodeCategory_Sm << 27), // "Z NOTATION TYPE COLON", unicode 0x2982
  56872 | (kUnicodeCategory_Ps << 27), // "LEFT WHITE CURLY BRACKET", unicode 0x2983
  56879 | (kUnicodeCategory_Pe << 27), // "RIGHT WHITE CURLY BRACKET", unicode 0x2984
  56886 | (kUnicodeCategory_Ps << 27), // "LEFT WHITE PARENTHESIS", unicode 0x2985
  56891 | (kUnicodeCategory_Pe << 27), // "RIGHT WHITE PARENTHESIS", unicode 0x2986
  56896 | (kUnicodeCategory_Ps << 27), // "Z NOTATION LEFT IMAGE BRACKET", unicode 0x2987
  56905 | (kUnicodeCategory_Pe << 27), // "Z NOTATION RIGHT IMAGE BRACKET", unicode 0x2988
  56914 | (kUnicodeCategory_Ps << 27), // "Z NOTATION LEFT BINDING BRACKET", unicode 0x2989
  56923 | (kUnicodeCategory_Pe << 27), // "Z NOTATION RIGHT BINDING BRACKET", unicode 0x298A
  56932 | (kUnicodeCategory_Ps << 27), // "LEFT SQUARE BRACKET WITH UNDERBAR", unicode 0x298B
  56939 | (kUnicodeCategory_Pe << 27), // "RIGHT SQUARE BRACKET WITH UNDERBAR", unicode 0x298C
  56946 | (kUnicodeCategory_Ps << 27), // "LEFT SQUARE BRACKET WITH TICK IN TOP CORNER", unicode 0x298D
  56959 | (kUnicodeCategory_Pe << 27), // "RIGHT SQUARE BRACKET WITH TICK IN BOTTOM CORNER", unicode 0x298E
  56972 | (kUnicodeCategory_Ps << 27), // "LEFT SQUARE BRACKET WITH TICK IN BOTTOM CORNER", unicode 0x298F
  56985 | (kUnicodeCategory_Pe << 27), // "RIGHT SQUARE BRACKET WITH TICK IN TOP CORNER", unicode 0x2990
  56998 | (kUnicodeCategory_Ps << 27), // "LEFT ANGLE BRACKET WITH DOT", unicode 0x2991
  57005 | (kUnicodeCategory_Pe << 27), // "RIGHT ANGLE BRACKET WITH DOT", unicode 0x2992
  57012 | (kUnicodeCategory_Ps << 27), // "LEFT ARC LESS-THAN BRACKET", unicode 0x2993
  57021 | (kUnicodeCategory_Pe << 27), // "RIGHT ARC GREATER-THAN BRACKET", unicode 0x2994
  57030 | (kUnicodeCategory_Ps << 27), // "DOUBLE LEFT ARC GREATER-THAN BRACKET", unicode 0x2995
  57040 | (kUnicodeCategory_Pe << 27), // "DOUBLE RIGHT ARC LESS-THAN BRACKET", unicode 0x2996
  57050 | (kUnicodeCategory_Ps << 27), // "LEFT BLACK TORTOISE SHELL BRACKET", unicode 0x2997
  57059 | (kUnicodeCategory_Pe << 27), // "RIGHT BLACK TORTOISE SHELL BRACKET", unicode 0x2998
  57068 | (kUnicodeCategory_Sm << 27), // "DOTTED FENCE", unicode 0x2999
  57072 | (kUnicodeCategory_Sm << 27), // "VERTICAL ZIGZAG LINE", unicode 0x299A
  57077 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE OPENING LEFT", unicode 0x299B
  57084 | (kUnicodeCategory_Sm << 27), // "RIGHT ANGLE VARIANT WITH SQUARE", unicode 0x299C
  57091 | (kUnicodeCategory_Sm << 27), // "MEASURED RIGHT ANGLE WITH DOT", unicode 0x299D
  57098 | (kUnicodeCategory_Sm << 27), // "ANGLE WITH S INSIDE", unicode 0x299E
  57105 | (kUnicodeCategory_Sm << 27), // "ACUTE ANGLE", unicode 0x299F
  57109 | (kUnicodeCategory_Sm << 27), // "SPHERICAL ANGLE OPENING LEFT", unicode 0x29A0
  57116 | (kUnicodeCategory_Sm << 27), // "SPHERICAL ANGLE OPENING UP", unicode 0x29A1
  57124 | (kUnicodeCategory_Sm << 27), // "TURNED ANGLE", unicode 0x29A2
  57128 | (kUnicodeCategory_Sm << 27), // "REVERSED ANGLE", unicode 0x29A3
  57132 | (kUnicodeCategory_Sm << 27), // "ANGLE WITH UNDERBAR", unicode 0x29A4
  57137 | (kUnicodeCategory_Sm << 27), // "REVERSED ANGLE WITH UNDERBAR", unicode 0x29A5
  57144 | (kUnicodeCategory_Sm << 27), // "OBLIQUE ANGLE OPENING UP", unicode 0x29A6
  57152 | (kUnicodeCategory_Sm << 27), // "OBLIQUE ANGLE OPENING DOWN", unicode 0x29A7
  57160 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING UP AND RIGHT", unicode 0x29A8
  57180 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING UP AND LEFT", unicode 0x29A9
  57200 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING DOWN AND RIGHT", unicode 0x29AA
  57220 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING DOWN AND LEFT", unicode 0x29AB
  57240 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING RIGHT AND UP", unicode 0x29AC
  57260 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING LEFT AND UP", unicode 0x29AD
  57280 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING RIGHT AND DOWN", unicode 0x29AE
  57300 | (kUnicodeCategory_Sm << 27), // "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING LEFT AND DOWN", unicode 0x29AF
  57320 | (kUnicodeCategory_Sm << 27), // "REVERSED EMPTY SET", unicode 0x29B0
  57326 | (kUnicodeCategory_Sm << 27), // "EMPTY SET WITH OVERBAR", unicode 0x29B1
  57333 | (kUnicodeCategory_Sm << 27), // "EMPTY SET WITH SMALL CIRCLE ABOVE", unicode 0x29B2
  57342 | (kUnicodeCategory_Sm << 27), // "EMPTY SET WITH RIGHT ARROW ABOVE", unicode 0x29B3
  57350 | (kUnicodeCategory_Sm << 27), // "EMPTY SET WITH LEFT ARROW ABOVE", unicode 0x29B4
  57358 | (kUnicodeCategory_Sm << 27), // "CIRCLE WITH HORIZONTAL BAR", unicode 0x29B5
  57365 | (kUnicodeCategory_Sm << 27), // "CIRCLED VERTICAL BAR", unicode 0x29B6
  57369 | (kUnicodeCategory_Sm << 27), // "CIRCLED PARALLEL", unicode 0x29B7
  57372 | (kUnicodeCategory_Sm << 27), // "CIRCLED REVERSE SOLIDUS", unicode 0x29B8
  57377 | (kUnicodeCategory_Sm << 27), // "CIRCLED PERPENDICULAR", unicode 0x29B9
  57380 | (kUnicodeCategory_Sm << 27), // "CIRCLE DIVIDED BY HORIZONTAL BAR AND TOP HALF DIVIDED BY VERTICAL BAR", unicode 0x29BA
  57402 | (kUnicodeCategory_Sm << 27), // "CIRCLE WITH SUPERIMPOSED X", unicode 0x29BB
  57410 | (kUnicodeCategory_Sm << 27), // "CIRCLED ANTICLOCKWISE-ROTATED DIVISION SIGN", unicode 0x29BC
  57418 | (kUnicodeCategory_Sm << 27), // "UP ARROW THROUGH CIRCLE", unicode 0x29BD
  57425 | (kUnicodeCategory_Sm << 27), // "CIRCLED WHITE BULLET", unicode 0x29BE
  57430 | (kUnicodeCategory_Sm << 27), // "CIRCLED BULLET", unicode 0x29BF
  57433 | (kUnicodeCategory_Sm << 27), // "CIRCLED LESS-THAN", unicode 0x29C0
  57438 | (kUnicodeCategory_Sm << 27), // "CIRCLED GREATER-THAN", unicode 0x29C1
  57443 | (kUnicodeCategory_Sm << 27), // "CIRCLE WITH SMALL CIRCLE TO THE RIGHT", unicode 0x29C2
  57454 | (kUnicodeCategory_Sm << 27), // "CIRCLE WITH TWO HORIZONTAL STROKES TO THE RIGHT", unicode 0x29C3
  57468 | (kUnicodeCategory_Sm << 27), // "SQUARED RISING DIAGONAL SLASH", unicode 0x29C4
  57476 | (kUnicodeCategory_Sm << 27), // "SQUARED FALLING DIAGONAL SLASH", unicode 0x29C5
  57484 | (kUnicodeCategory_Sm << 27), // "SQUARED ASTERISK", unicode 0x29C6
  57488 | (kUnicodeCategory_Sm << 27), // "SQUARED SMALL CIRCLE", unicode 0x29C7
  57493 | (kUnicodeCategory_Sm << 27), // "SQUARED SQUARE", unicode 0x29C8
  57496 | (kUnicodeCategory_Sm << 27), // "TWO JOINED SQUARES", unicode 0x29C9
  57503 | (kUnicodeCategory_Sm << 27), // "TRIANGLE WITH DOT ABOVE", unicode 0x29CA
  57508 | (kUnicodeCategory_Sm << 27), // "TRIANGLE WITH UNDERBAR", unicode 0x29CB
  57513 | (kUnicodeCategory_Sm << 27), // "S IN TRIANGLE", unicode 0x29CC
  57519 | (kUnicodeCategory_Sm << 27), // "TRIANGLE WITH SERIFS AT BOTTOM", unicode 0x29CD
  57528 | (kUnicodeCategory_Sm << 27), // "RIGHT TRIANGLE ABOVE LEFT TRIANGLE", unicode 0x29CE
  57535 | (kUnicodeCategory_Sm << 27), // "LEFT TRIANGLE BESIDE VERTICAL BAR", unicode 0x29CF
  57543 | (kUnicodeCategory_Sm << 27), // "VERTICAL BAR BESIDE RIGHT TRIANGLE", unicode 0x29D0
  57551 | (kUnicodeCategory_Sm << 27), // "BOWTIE WITH LEFT HALF BLACK", unicode 0x29D1
  57559 | (kUnicodeCategory_Sm << 27), // "BOWTIE WITH RIGHT HALF BLACK", unicode 0x29D2
  57567 | (kUnicodeCategory_Sm << 27), // "BLACK BOWTIE", unicode 0x29D3
  57571 | (kUnicodeCategory_Sm << 27), // "TIMES WITH LEFT HALF BLACK", unicode 0x29D4
  57578 | (kUnicodeCategory_Sm << 27), // "TIMES WITH RIGHT HALF BLACK", unicode 0x29D5
  57585 | (kUnicodeCategory_Sm << 27), // "WHITE HOURGLASS", unicode 0x29D6
  57589 | (kUnicodeCategory_Sm << 27), // "BLACK HOURGLASS", unicode 0x29D7
  57593 | (kUnicodeCategory_Ps << 27), // "LEFT WIGGLY FENCE", unicode 0x29D8
  57598 | (kUnicodeCategory_Pe << 27), // "RIGHT WIGGLY FENCE", unicode 0x29D9
  57603 | (kUnicodeCategory_Ps << 27), // "LEFT DOUBLE WIGGLY FENCE", unicode 0x29DA
  57609 | (kUnicodeCategory_Pe << 27), // "RIGHT DOUBLE WIGGLY FENCE", unicode 0x29DB
  57615 | (kUnicodeCategory_Sm << 27), // "INCOMPLETE INFINITY", unicode 0x29DC
  57620 | (kUnicodeCategory_Sm << 27), // "TIE OVER INFINITY", unicode 0x29DD
  57626 | (kUnicodeCategory_Sm << 27), // "INFINITY NEGATED WITH VERTICAL BAR", unicode 0x29DE
  57634 | (kUnicodeCategory_Sm << 27), // "DOUBLE-ENDED MULTIMAP", unicode 0x29DF
  57639 | (kUnicodeCategory_Sm << 27), // "SQUARE WITH CONTOURED OUTLINE", unicode 0x29E0
  57647 | (kUnicodeCategory_Sm << 27), // "INCREASES AS", unicode 0x29E1
  57652 | (kUnicodeCategory_Sm << 27), // "SHUFFLE PRODUCT", unicode 0x29E2
  57656 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN AND SLANTED PARALLEL", unicode 0x29E3
  57664 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN AND SLANTED PARALLEL WITH TILDE ABOVE", unicode 0x29E4
  57676 | (kUnicodeCategory_Sm << 27), // "IDENTICAL TO AND SLANTED PARALLEL", unicode 0x29E5
  57685 | (kUnicodeCategory_Sm << 27), // "GLEICH STARK", unicode 0x29E6
  57690 | (kUnicodeCategory_Sm << 27), // "THERMODYNAMIC", unicode 0x29E7
  57692 | (kUnicodeCategory_Sm << 27), // "DOWN-POINTING TRIANGLE WITH LEFT HALF BLACK", unicode 0x29E8
  57704 | (kUnicodeCategory_Sm << 27), // "DOWN-POINTING TRIANGLE WITH RIGHT HALF BLACK", unicode 0x29E9
  57716 | (kUnicodeCategory_Sm << 27), // "BLACK DIAMOND WITH DOWN ARROW", unicode 0x29EA
  57724 | (kUnicodeCategory_Sm << 27), // "BLACK LOZENGE", unicode 0x29EB
  57728 | (kUnicodeCategory_Sm << 27), // "WHITE CIRCLE WITH DOWN ARROW", unicode 0x29EC
  57736 | (kUnicodeCategory_Sm << 27), // "BLACK CIRCLE WITH DOWN ARROW", unicode 0x29ED
  57744 | (kUnicodeCategory_Sm << 27), // "ERROR-BARRED WHITE SQUARE", unicode 0x29EE
  57751 | (kUnicodeCategory_Sm << 27), // "ERROR-BARRED BLACK SQUARE", unicode 0x29EF
  57758 | (kUnicodeCategory_Sm << 27), // "ERROR-BARRED WHITE DIAMOND", unicode 0x29F0
  57766 | (kUnicodeCategory_Sm << 27), // "ERROR-BARRED BLACK DIAMOND", unicode 0x29F1
  57774 | (kUnicodeCategory_Sm << 27), // "ERROR-BARRED WHITE CIRCLE", unicode 0x29F2
  57782 | (kUnicodeCategory_Sm << 27), // "ERROR-BARRED BLACK CIRCLE", unicode 0x29F3
  57790 | (kUnicodeCategory_Sm << 27), // "RULE-DELAYED", unicode 0x29F4
  57794 | (kUnicodeCategory_Sm << 27), // "REVERSE SOLIDUS OPERATOR", unicode 0x29F5
  57800 | (kUnicodeCategory_Sm << 27), // "SOLIDUS WITH OVERBAR", unicode 0x29F6
  57805 | (kUnicodeCategory_Sm << 27), // "REVERSE SOLIDUS WITH HORIZONTAL STROKE", unicode 0x29F7
  57814 | (kUnicodeCategory_Sm << 27), // "BIG SOLIDUS", unicode 0x29F8
  57818 | (kUnicodeCategory_Sm << 27), // "BIG REVERSE SOLIDUS", unicode 0x29F9
  57824 | (kUnicodeCategory_Sm << 27), // "DOUBLE PLUS", unicode 0x29FA
  57827 | (kUnicodeCategory_Sm << 27), // "TRIPLE PLUS", unicode 0x29FB
  57831 | (kUnicodeCategory_Ps << 27), // "LEFT-POINTING CURVED ANGLE BRACKET", unicode 0x29FC
  57840 | (kUnicodeCategory_Pe << 27), // "RIGHT-POINTING CURVED ANGLE BRACKET", unicode 0x29FD
  57849 | (kUnicodeCategory_Sm << 27), // "TINY", unicode 0x29FE
  57852 | (kUnicodeCategory_Sm << 27), // "MINY", unicode 0x29FF
} ;

static const uint32_t gNamePage42 [256] = {
  57854 | (kUnicodeCategory_Sm << 27), // "N-ARY CIRCLED DOT OPERATOR", unicode 0x2A00
  57862 | (kUnicodeCategory_Sm << 27), // "N-ARY CIRCLED PLUS OPERATOR", unicode 0x2A01
  57871 | (kUnicodeCategory_Sm << 27), // "N-ARY CIRCLED TIMES OPERATOR", unicode 0x2A02
  57879 | (kUnicodeCategory_Sm << 27), // "N-ARY UNION OPERATOR WITH DOT", unicode 0x2A03
  57889 | (kUnicodeCategory_Sm << 27), // "N-ARY UNION OPERATOR WITH PLUS", unicode 0x2A04
  57900 | (kUnicodeCategory_Sm << 27), // "N-ARY SQUARE INTERSECTION OPERATOR", unicode 0x2A05
  57909 | (kUnicodeCategory_Sm << 27), // "N-ARY SQUARE UNION OPERATOR", unicode 0x2A06
  57918 | (kUnicodeCategory_Sm << 27), // "TWO LOGICAL AND OPERATOR", unicode 0x2A07
  57925 | (kUnicodeCategory_Sm << 27), // "TWO LOGICAL OR OPERATOR", unicode 0x2A08
  57933 | (kUnicodeCategory_Sm << 27), // "N-ARY TIMES OPERATOR", unicode 0x2A09
  57940 | (kUnicodeCategory_Sm << 27), // "MODULO TWO SUM", unicode 0x2A0A
  57946 | (kUnicodeCategory_Sm << 27), // "SUMMATION WITH INTEGRAL", unicode 0x2A0B
  57951 | (kUnicodeCategory_Sm << 27), // "QUADRUPLE INTEGRAL OPERATOR", unicode 0x2A0C
  57957 | (kUnicodeCategory_Sm << 27), // "FINITE PART INTEGRAL", unicode 0x2A0D
  57964 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH DOUBLE STROKE", unicode 0x2A0E
  57970 | (kUnicodeCategory_Sm << 27), // "INTEGRAL AVERAGE WITH SLASH", unicode 0x2A0F
  57977 | (kUnicodeCategory_Sm << 27), // "CIRCULATION FUNCTION", unicode 0x2A10
  57981 | (kUnicodeCategory_Sm << 27), // "ANTICLOCKWISE INTEGRATION", unicode 0x2A11
  57985 | (kUnicodeCategory_Sm << 27), // "LINE INTEGRATION WITH RECTANGULAR PATH AROUND POLE", unicode 0x2A12
  57998 | (kUnicodeCategory_Sm << 27), // "LINE INTEGRATION WITH SEMICIRCULAR PATH AROUND POLE", unicode 0x2A13
  58011 | (kUnicodeCategory_Sm << 27), // "LINE INTEGRATION NOT INCLUDING THE POLE", unicode 0x2A14
  58024 | (kUnicodeCategory_Sm << 27), // "INTEGRAL AROUND A POINT OPERATOR", unicode 0x2A15
  58033 | (kUnicodeCategory_Sm << 27), // "QUATERNION INTEGRAL OPERATOR", unicode 0x2A16
  58040 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH LEFTWARDS ARROW WITH HOOK", unicode 0x2A17
  58049 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH TIMES SIGN", unicode 0x2A18
  58054 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH INTERSECTION", unicode 0x2A19
  58059 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH UNION", unicode 0x2A1A
  58064 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH OVERBAR", unicode 0x2A1B
  58069 | (kUnicodeCategory_Sm << 27), // "INTEGRAL WITH UNDERBAR", unicode 0x2A1C
  58074 | (kUnicodeCategory_Sm << 27), // "JOIN", unicode 0x2A1D
  58076 | (kUnicodeCategory_Sm << 27), // "LARGE LEFT TRIANGLE OPERATOR", unicode 0x2A1E
  58083 | (kUnicodeCategory_Sm << 27), // "Z NOTATION SCHEMA COMPOSITION", unicode 0x2A1F
  58091 | (kUnicodeCategory_Sm << 27), // "Z NOTATION SCHEMA PIPING", unicode 0x2A20
  58100 | (kUnicodeCategory_Sm << 27), // "Z NOTATION SCHEMA PROJECTION", unicode 0x2A21
  58109 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH SMALL CIRCLE ABOVE", unicode 0x2A22
  58117 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH CIRCUMFLEX ACCENT ABOVE", unicode 0x2A23
  58126 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH TILDE ABOVE", unicode 0x2A24
  58133 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH DOT BELOW", unicode 0x2A25
  58139 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH TILDE BELOW", unicode 0x2A26
  58146 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH SUBSCRIPT TWO", unicode 0x2A27
  58154 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN WITH BLACK TRIANGLE", unicode 0x2A28
  58162 | (kUnicodeCategory_Sm << 27), // "MINUS SIGN WITH COMMA ABOVE", unicode 0x2A29
  58169 | (kUnicodeCategory_Sm << 27), // "MINUS SIGN WITH DOT BELOW", unicode 0x2A2A
  58175 | (kUnicodeCategory_Sm << 27), // "MINUS SIGN WITH FALLING DOTS", unicode 0x2A2B
  58182 | (kUnicodeCategory_Sm << 27), // "MINUS SIGN WITH RISING DOTS", unicode 0x2A2C
  58189 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN IN LEFT HALF CIRCLE", unicode 0x2A2D
  58199 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN IN RIGHT HALF CIRCLE", unicode 0x2A2E
  58209 | (kUnicodeCategory_Sm << 27), // "VECTOR OR CROSS PRODUCT", unicode 0x2A2F
  58218 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN WITH DOT ABOVE", unicode 0x2A30
  58224 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN WITH UNDERBAR", unicode 0x2A31
  58230 | (kUnicodeCategory_Sm << 27), // "SEMIDIRECT PRODUCT WITH BOTTOM CLOSED", unicode 0x2A32
  58239 | (kUnicodeCategory_Sm << 27), // "SMASH PRODUCT", unicode 0x2A33
  58243 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN IN LEFT HALF CIRCLE", unicode 0x2A34
  58253 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN IN RIGHT HALF CIRCLE", unicode 0x2A35
  58263 | (kUnicodeCategory_Sm << 27), // "CIRCLED MULTIPLICATION SIGN WITH CIRCUMFLEX ACCENT", unicode 0x2A36
  58272 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN IN DOUBLE CIRCLE", unicode 0x2A37
  58280 | (kUnicodeCategory_Sm << 27), // "CIRCLED DIVISION SIGN", unicode 0x2A38
  58284 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN IN TRIANGLE", unicode 0x2A39
  58291 | (kUnicodeCategory_Sm << 27), // "MINUS SIGN IN TRIANGLE", unicode 0x2A3A
  58298 | (kUnicodeCategory_Sm << 27), // "MULTIPLICATION SIGN IN TRIANGLE", unicode 0x2A3B
  58305 | (kUnicodeCategory_Sm << 27), // "INTERIOR PRODUCT", unicode 0x2A3C
  58309 | (kUnicodeCategory_Sm << 27), // "RIGHTHAND INTERIOR PRODUCT", unicode 0x2A3D
  58315 | (kUnicodeCategory_Sm << 27), // "Z NOTATION RELATIONAL COMPOSITION", unicode 0x2A3E
  58323 | (kUnicodeCategory_Sm << 27), // "AMALGAMATION OR COPRODUCT", unicode 0x2A3F
  58330 | (kUnicodeCategory_Sm << 27), // "INTERSECTION WITH DOT", unicode 0x2A40
  58334 | (kUnicodeCategory_Sm << 27), // "UNION WITH MINUS SIGN", unicode 0x2A41
  58340 | (kUnicodeCategory_Sm << 27), // "UNION WITH OVERBAR", unicode 0x2A42
  58345 | (kUnicodeCategory_Sm << 27), // "INTERSECTION WITH OVERBAR", unicode 0x2A43
  58350 | (kUnicodeCategory_Sm << 27), // "INTERSECTION WITH LOGICAL AND", unicode 0x2A44
  58356 | (kUnicodeCategory_Sm << 27), // "UNION WITH LOGICAL OR", unicode 0x2A45
  58363 | (kUnicodeCategory_Sm << 27), // "UNION ABOVE INTERSECTION", unicode 0x2A46
  58368 | (kUnicodeCategory_Sm << 27), // "INTERSECTION ABOVE UNION", unicode 0x2A47
  58373 | (kUnicodeCategory_Sm << 27), // "UNION ABOVE BAR ABOVE INTERSECTION", unicode 0x2A48
  58381 | (kUnicodeCategory_Sm << 27), // "INTERSECTION ABOVE BAR ABOVE UNION", unicode 0x2A49
  58389 | (kUnicodeCategory_Sm << 27), // "UNION BESIDE AND JOINED WITH UNION", unicode 0x2A4A
  58399 | (kUnicodeCategory_Sm << 27), // "INTERSECTION BESIDE AND JOINED WITH INTERSECTION", unicode 0x2A4B
  58409 | (kUnicodeCategory_Sm << 27), // "CLOSED UNION WITH SERIFS", unicode 0x2A4C
  58416 | (kUnicodeCategory_Sm << 27), // "CLOSED INTERSECTION WITH SERIFS", unicode 0x2A4D
  58423 | (kUnicodeCategory_Sm << 27), // "DOUBLE SQUARE INTERSECTION", unicode 0x2A4E
  58427 | (kUnicodeCategory_Sm << 27), // "DOUBLE SQUARE UNION", unicode 0x2A4F
  58431 | (kUnicodeCategory_Sm << 27), // "CLOSED UNION WITH SERIFS AND SMASH PRODUCT", unicode 0x2A50
  58443 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND WITH DOT ABOVE", unicode 0x2A51
  58449 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR WITH DOT ABOVE", unicode 0x2A52
  58456 | (kUnicodeCategory_Sm << 27), // "DOUBLE LOGICAL AND", unicode 0x2A53
  58460 | (kUnicodeCategory_Sm << 27), // "DOUBLE LOGICAL OR", unicode 0x2A54
  58465 | (kUnicodeCategory_Sm << 27), // "TWO INTERSECTING LOGICAL AND", unicode 0x2A55
  58472 | (kUnicodeCategory_Sm << 27), // "TWO INTERSECTING LOGICAL OR", unicode 0x2A56
  58480 | (kUnicodeCategory_Sm << 27), // "SLOPING LARGE OR", unicode 0x2A57
  58486 | (kUnicodeCategory_Sm << 27), // "SLOPING LARGE AND", unicode 0x2A58
  58491 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR OVERLAPPING LOGICAL AND", unicode 0x2A59
  58500 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND WITH MIDDLE STEM", unicode 0x2A5A
  58508 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR WITH MIDDLE STEM", unicode 0x2A5B
  58517 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND WITH HORIZONTAL DASH", unicode 0x2A5C
  58525 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR WITH HORIZONTAL DASH", unicode 0x2A5D
  58534 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND WITH DOUBLE OVERBAR", unicode 0x2A5E
  58541 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND WITH UNDERBAR", unicode 0x2A5F
  58547 | (kUnicodeCategory_Sm << 27), // "LOGICAL AND WITH DOUBLE UNDERBAR", unicode 0x2A60
  58554 | (kUnicodeCategory_Sm << 27), // "SMALL VEE WITH UNDERBAR", unicode 0x2A61
  58560 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR WITH DOUBLE OVERBAR", unicode 0x2A62
  58568 | (kUnicodeCategory_Sm << 27), // "LOGICAL OR WITH DOUBLE UNDERBAR", unicode 0x2A63
  58576 | (kUnicodeCategory_Sm << 27), // "Z NOTATION DOMAIN ANTIRESTRICTION", unicode 0x2A64
  58585 | (kUnicodeCategory_Sm << 27), // "Z NOTATION RANGE ANTIRESTRICTION", unicode 0x2A65
  58594 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN WITH DOT BELOW", unicode 0x2A66
  58600 | (kUnicodeCategory_Sm << 27), // "IDENTICAL WITH DOT ABOVE", unicode 0x2A67
  58605 | (kUnicodeCategory_Sm << 27), // "TRIPLE HORIZONTAL BAR WITH DOUBLE VERTICAL STROKE", unicode 0x2A68
  58616 | (kUnicodeCategory_Sm << 27), // "TRIPLE HORIZONTAL BAR WITH TRIPLE VERTICAL STROKE", unicode 0x2A69
  58628 | (kUnicodeCategory_Sm << 27), // "TILDE OPERATOR WITH DOT ABOVE", unicode 0x2A6A
  58635 | (kUnicodeCategory_Sm << 27), // "TILDE OPERATOR WITH RISING DOTS", unicode 0x2A6B
  58643 | (kUnicodeCategory_Sm << 27), // "SIMILAR MINUS SIMILAR", unicode 0x2A6C
  58649 | (kUnicodeCategory_Sm << 27), // "CONGRUENT WITH DOT ABOVE", unicode 0x2A6D
  58655 | (kUnicodeCategory_Sm << 27), // "EQUALS WITH ASTERISK", unicode 0x2A6E
  58660 | (kUnicodeCategory_Sm << 27), // "ALMOST EQUAL TO WITH CIRCUMFLEX ACCENT", unicode 0x2A6F
  58671 | (kUnicodeCategory_Sm << 27), // "APPROXIMATELY EQUAL OR EQUAL TO", unicode 0x2A70
  58681 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN ABOVE PLUS SIGN", unicode 0x2A71
  58688 | (kUnicodeCategory_Sm << 27), // "PLUS SIGN ABOVE EQUALS SIGN", unicode 0x2A72
  58695 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN ABOVE TILDE OPERATOR", unicode 0x2A73
  58703 | (kUnicodeCategory_Sm << 27), // "DOUBLE COLON EQUAL", unicode 0x2A74
  58708 | (kUnicodeCategory_Sm << 27), // "TWO CONSECUTIVE EQUALS SIGNS", unicode 0x2A75
  58716 | (kUnicodeCategory_Sm << 27), // "THREE CONSECUTIVE EQUALS SIGNS", unicode 0x2A76
  58724 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN WITH TWO DOTS ABOVE AND TWO DOTS BELOW", unicode 0x2A77
  58737 | (kUnicodeCategory_Sm << 27), // "EQUIVALENT WITH FOUR DOTS ABOVE", unicode 0x2A78
  58744 | (kUnicodeCategory_Sm << 27), // "LESS-THAN WITH CIRCLE INSIDE", unicode 0x2A79
  58753 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN WITH CIRCLE INSIDE", unicode 0x2A7A
  58762 | (kUnicodeCategory_Sm << 27), // "LESS-THAN WITH QUESTION MARK ABOVE", unicode 0x2A7B
  58771 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN WITH QUESTION MARK ABOVE", unicode 0x2A7C
  58780 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR SLANTED EQUAL TO", unicode 0x2A7D
  58792 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR SLANTED EQUAL TO", unicode 0x2A7E
  58804 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR SLANTED EQUAL TO WITH DOT INSIDE", unicode 0x2A7F
  58820 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR SLANTED EQUAL TO WITH DOT INSIDE", unicode 0x2A80
  58836 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR SLANTED EQUAL TO WITH DOT ABOVE", unicode 0x2A81
  58851 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR SLANTED EQUAL TO WITH DOT ABOVE", unicode 0x2A82
  58866 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR SLANTED EQUAL TO WITH DOT ABOVE RIGHT", unicode 0x2A83
  58882 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR SLANTED EQUAL TO WITH DOT ABOVE LEFT", unicode 0x2A84
  58898 | (kUnicodeCategory_Sm << 27), // "LESS-THAN OR APPROXIMATE", unicode 0x2A85
  58906 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OR APPROXIMATE", unicode 0x2A86
  58914 | (kUnicodeCategory_Sm << 27), // "LESS-THAN AND SINGLE-LINE NOT EQUAL TO", unicode 0x2A87
  58929 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN AND SINGLE-LINE NOT EQUAL TO", unicode 0x2A88
  58944 | (kUnicodeCategory_Sm << 27), // "LESS-THAN AND NOT APPROXIMATE", unicode 0x2A89
  58953 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN AND NOT APPROXIMATE", unicode 0x2A8A
  58962 | (kUnicodeCategory_Sm << 27), // "LESS-THAN ABOVE DOUBLE-LINE EQUAL ABOVE GREATER-THAN", unicode 0x2A8B
  58977 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN ABOVE DOUBLE-LINE EQUAL ABOVE LESS-THAN", unicode 0x2A8C
  58992 | (kUnicodeCategory_Sm << 27), // "LESS-THAN ABOVE SIMILAR OR EQUAL", unicode 0x2A8D
  59003 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN ABOVE SIMILAR OR EQUAL", unicode 0x2A8E
  59014 | (kUnicodeCategory_Sm << 27), // "LESS-THAN ABOVE SIMILAR ABOVE GREATER-THAN", unicode 0x2A8F
  59026 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN ABOVE SIMILAR ABOVE LESS-THAN", unicode 0x2A90
  59038 | (kUnicodeCategory_Sm << 27), // "LESS-THAN ABOVE GREATER-THAN ABOVE DOUBLE-LINE EQUAL", unicode 0x2A91
  59053 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN ABOVE LESS-THAN ABOVE DOUBLE-LINE EQUAL", unicode 0x2A92
  59068 | (kUnicodeCategory_Sm << 27), // "LESS-THAN ABOVE SLANTED EQUAL ABOVE GREATER-THAN ABOVE SLANTED EQUAL", unicode 0x2A93
  59087 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN ABOVE SLANTED EQUAL ABOVE LESS-THAN ABOVE SLANTED EQUAL", unicode 0x2A94
  59106 | (kUnicodeCategory_Sm << 27), // "SLANTED EQUAL TO OR LESS-THAN", unicode 0x2A95
  59118 | (kUnicodeCategory_Sm << 27), // "SLANTED EQUAL TO OR GREATER-THAN", unicode 0x2A96
  59130 | (kUnicodeCategory_Sm << 27), // "SLANTED EQUAL TO OR LESS-THAN WITH DOT INSIDE", unicode 0x2A97
  59146 | (kUnicodeCategory_Sm << 27), // "SLANTED EQUAL TO OR GREATER-THAN WITH DOT INSIDE", unicode 0x2A98
  59162 | (kUnicodeCategory_Sm << 27), // "DOUBLE-LINE EQUAL TO OR LESS-THAN", unicode 0x2A99
  59175 | (kUnicodeCategory_Sm << 27), // "DOUBLE-LINE EQUAL TO OR GREATER-THAN", unicode 0x2A9A
  59188 | (kUnicodeCategory_Sm << 27), // "DOUBLE-LINE SLANTED EQUAL TO OR LESS-THAN", unicode 0x2A9B
  59203 | (kUnicodeCategory_Sm << 27), // "DOUBLE-LINE SLANTED EQUAL TO OR GREATER-THAN", unicode 0x2A9C
  59218 | (kUnicodeCategory_Sm << 27), // "SIMILAR OR LESS-THAN", unicode 0x2A9D
  59226 | (kUnicodeCategory_Sm << 27), // "SIMILAR OR GREATER-THAN", unicode 0x2A9E
  59234 | (kUnicodeCategory_Sm << 27), // "SIMILAR ABOVE LESS-THAN ABOVE EQUALS SIGN", unicode 0x2A9F
  59245 | (kUnicodeCategory_Sm << 27), // "SIMILAR ABOVE GREATER-THAN ABOVE EQUALS SIGN", unicode 0x2AA0
  59256 | (kUnicodeCategory_Sm << 27), // "DOUBLE NESTED LESS-THAN", unicode 0x2AA1
  59263 | (kUnicodeCategory_Sm << 27), // "DOUBLE NESTED GREATER-THAN", unicode 0x2AA2
  59270 | (kUnicodeCategory_Sm << 27), // "DOUBLE NESTED LESS-THAN WITH UNDERBAR", unicode 0x2AA3
  59280 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN OVERLAPPING LESS-THAN", unicode 0x2AA4
  59290 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN BESIDE LESS-THAN", unicode 0x2AA5
  59300 | (kUnicodeCategory_Sm << 27), // "LESS-THAN CLOSED BY CURVE", unicode 0x2AA6
  59310 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN CLOSED BY CURVE", unicode 0x2AA7
  59320 | (kUnicodeCategory_Sm << 27), // "LESS-THAN CLOSED BY CURVE ABOVE SLANTED EQUAL", unicode 0x2AA8
  59335 | (kUnicodeCategory_Sm << 27), // "GREATER-THAN CLOSED BY CURVE ABOVE SLANTED EQUAL", unicode 0x2AA9
  59350 | (kUnicodeCategory_Sm << 27), // "SMALLER THAN", unicode 0x2AAA
  59354 | (kUnicodeCategory_Sm << 27), // "LARGER THAN", unicode 0x2AAB
  59358 | (kUnicodeCategory_Sm << 27), // "SMALLER THAN OR EQUAL TO", unicode 0x2AAC
  59368 | (kUnicodeCategory_Sm << 27), // "LARGER THAN OR EQUAL TO", unicode 0x2AAD
  59378 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN WITH BUMPY ABOVE", unicode 0x2AAE
  59386 | (kUnicodeCategory_Sm << 27), // "PRECEDES ABOVE SINGLE-LINE EQUALS SIGN", unicode 0x2AAF
  59396 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS ABOVE SINGLE-LINE EQUALS SIGN", unicode 0x2AB0
  59406 | (kUnicodeCategory_Sm << 27), // "PRECEDES ABOVE SINGLE-LINE NOT EQUAL TO", unicode 0x2AB1
  59419 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS ABOVE SINGLE-LINE NOT EQUAL TO", unicode 0x2AB2
  59432 | (kUnicodeCategory_Sm << 27), // "PRECEDES ABOVE EQUALS SIGN", unicode 0x2AB3
  59438 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS ABOVE EQUALS SIGN", unicode 0x2AB4
  59444 | (kUnicodeCategory_Sm << 27), // "PRECEDES ABOVE NOT EQUAL TO", unicode 0x2AB5
  59453 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS ABOVE NOT EQUAL TO", unicode 0x2AB6
  59462 | (kUnicodeCategory_Sm << 27), // "PRECEDES ABOVE ALMOST EQUAL TO", unicode 0x2AB7
  59471 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS ABOVE ALMOST EQUAL TO", unicode 0x2AB8
  59480 | (kUnicodeCategory_Sm << 27), // "PRECEDES ABOVE NOT ALMOST EQUAL TO", unicode 0x2AB9
  59491 | (kUnicodeCategory_Sm << 27), // "SUCCEEDS ABOVE NOT ALMOST EQUAL TO", unicode 0x2ABA
  59502 | (kUnicodeCategory_Sm << 27), // "DOUBLE PRECEDES", unicode 0x2ABB
  59505 | (kUnicodeCategory_Sm << 27), // "DOUBLE SUCCEEDS", unicode 0x2ABC
  59508 | (kUnicodeCategory_Sm << 27), // "SUBSET WITH DOT", unicode 0x2ABD
  59512 | (kUnicodeCategory_Sm << 27), // "SUPERSET WITH DOT", unicode 0x2ABE
  59516 | (kUnicodeCategory_Sm << 27), // "SUBSET WITH PLUS SIGN BELOW", unicode 0x2ABF
  59523 | (kUnicodeCategory_Sm << 27), // "SUPERSET WITH PLUS SIGN BELOW", unicode 0x2AC0
  59530 | (kUnicodeCategory_Sm << 27), // "SUBSET WITH MULTIPLICATION SIGN BELOW", unicode 0x2AC1
  59537 | (kUnicodeCategory_Sm << 27), // "SUPERSET WITH MULTIPLICATION SIGN BELOW", unicode 0x2AC2
  59544 | (kUnicodeCategory_Sm << 27), // "SUBSET OF OR EQUAL TO WITH DOT ABOVE", unicode 0x2AC3
  59557 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF OR EQUAL TO WITH DOT ABOVE", unicode 0x2AC4
  59570 | (kUnicodeCategory_Sm << 27), // "SUBSET OF ABOVE EQUALS SIGN", unicode 0x2AC5
  59578 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF ABOVE EQUALS SIGN", unicode 0x2AC6
  59586 | (kUnicodeCategory_Sm << 27), // "SUBSET OF ABOVE TILDE OPERATOR", unicode 0x2AC7
  59595 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF ABOVE TILDE OPERATOR", unicode 0x2AC8
  59604 | (kUnicodeCategory_Sm << 27), // "SUBSET OF ABOVE ALMOST EQUAL TO", unicode 0x2AC9
  59615 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF ABOVE ALMOST EQUAL TO", unicode 0x2ACA
  59626 | (kUnicodeCategory_Sm << 27), // "SUBSET OF ABOVE NOT EQUAL TO", unicode 0x2ACB
  59637 | (kUnicodeCategory_Sm << 27), // "SUPERSET OF ABOVE NOT EQUAL TO", unicode 0x2ACC
  59648 | (kUnicodeCategory_Sm << 27), // "SQUARE LEFT OPEN BOX OPERATOR", unicode 0x2ACD
  59656 | (kUnicodeCategory_Sm << 27), // "SQUARE RIGHT OPEN BOX OPERATOR", unicode 0x2ACE
  59664 | (kUnicodeCategory_Sm << 27), // "CLOSED SUBSET", unicode 0x2ACF
  59668 | (kUnicodeCategory_Sm << 27), // "CLOSED SUPERSET", unicode 0x2AD0
  59672 | (kUnicodeCategory_Sm << 27), // "CLOSED SUBSET OR EQUAL TO", unicode 0x2AD1
  59682 | (kUnicodeCategory_Sm << 27), // "CLOSED SUPERSET OR EQUAL TO", unicode 0x2AD2
  59692 | (kUnicodeCategory_Sm << 27), // "SUBSET ABOVE SUPERSET", unicode 0x2AD3
  59697 | (kUnicodeCategory_Sm << 27), // "SUPERSET ABOVE SUBSET", unicode 0x2AD4
  59702 | (kUnicodeCategory_Sm << 27), // "SUBSET ABOVE SUBSET", unicode 0x2AD5
  59707 | (kUnicodeCategory_Sm << 27), // "SUPERSET ABOVE SUPERSET", unicode 0x2AD6
  59712 | (kUnicodeCategory_Sm << 27), // "SUPERSET BESIDE SUBSET", unicode 0x2AD7
  59718 | (kUnicodeCategory_Sm << 27), // "SUPERSET BESIDE AND JOINED BY DASH WITH SUBSET", unicode 0x2AD8
  59732 | (kUnicodeCategory_Sm << 27), // "ELEMENT OF OPENING DOWNWARDS", unicode 0x2AD9
  59740 | (kUnicodeCategory_Sm << 27), // "PITCHFORK WITH TEE TOP", unicode 0x2ADA
  59747 | (kUnicodeCategory_Sm << 27), // "TRANSVERSAL INTERSECTION", unicode 0x2ADB
  59752 | (kUnicodeCategory_Sm << 27), // "FORKING", unicode 0x2ADC
  59754 | (kUnicodeCategory_Sm << 27), // "NONFORKING", unicode 0x2ADD
  59756 | (kUnicodeCategory_Sm << 27), // "SHORT LEFT TACK", unicode 0x2ADE
  59761 | (kUnicodeCategory_Sm << 27), // "SHORT DOWN TACK", unicode 0x2ADF
  59767 | (kUnicodeCategory_Sm << 27), // "SHORT UP TACK", unicode 0x2AE0
  59773 | (kUnicodeCategory_Sm << 27), // "PERPENDICULAR WITH S", unicode 0x2AE1
  59778 | (kUnicodeCategory_Sm << 27), // "VERTICAL BAR TRIPLE RIGHT TURNSTILE", unicode 0x2AE2
  59786 | (kUnicodeCategory_Sm << 27), // "DOUBLE VERTICAL BAR LEFT TURNSTILE", unicode 0x2AE3
  59793 | (kUnicodeCategory_Sm << 27), // "VERTICAL BAR DOUBLE LEFT TURNSTILE", unicode 0x2AE4
  59800 | (kUnicodeCategory_Sm << 27), // "DOUBLE VERTICAL BAR DOUBLE LEFT TURNSTILE", unicode 0x2AE5
  59808 | (kUnicodeCategory_Sm << 27), // "LONG DASH FROM LEFT MEMBER OF DOUBLE VERTICAL", unicode 0x2AE6
  59821 | (kUnicodeCategory_Sm << 27), // "SHORT DOWN TACK WITH OVERBAR", unicode 0x2AE7
  59830 | (kUnicodeCategory_Sm << 27), // "SHORT UP TACK WITH UNDERBAR", unicode 0x2AE8
  59839 | (kUnicodeCategory_Sm << 27), // "SHORT UP TACK ABOVE SHORT DOWN TACK", unicode 0x2AE9
  59852 | (kUnicodeCategory_Sm << 27), // "DOUBLE DOWN TACK", unicode 0x2AEA
  59857 | (kUnicodeCategory_Sm << 27), // "DOUBLE UP TACK", unicode 0x2AEB
  59862 | (kUnicodeCategory_Sm << 27), // "DOUBLE STROKE NOT SIGN", unicode 0x2AEC
  59868 | (kUnicodeCategory_Sm << 27), // "REVERSED DOUBLE STROKE NOT SIGN", unicode 0x2AED
  59876 | (kUnicodeCategory_Sm << 27), // "DOES NOT DIVIDE WITH REVERSED NEGATION SLASH", unicode 0x2AEE
  59890 | (kUnicodeCategory_Sm << 27), // "VERTICAL LINE WITH CIRCLE ABOVE", unicode 0x2AEF
  59897 | (kUnicodeCategory_Sm << 27), // "VERTICAL LINE WITH CIRCLE BELOW", unicode 0x2AF0
  59904 | (kUnicodeCategory_Sm << 27), // "DOWN TACK WITH CIRCLE BELOW", unicode 0x2AF1
  59912 | (kUnicodeCategory_Sm << 27), // "PARALLEL WITH HORIZONTAL STROKE", unicode 0x2AF2
  59919 | (kUnicodeCategory_Sm << 27), // "PARALLEL WITH TILDE OPERATOR", unicode 0x2AF3
  59926 | (kUnicodeCategory_Sm << 27), // "TRIPLE VERTICAL BAR BINARY RELATION", unicode 0x2AF4
  59935 | (kUnicodeCategory_Sm << 27), // "TRIPLE VERTICAL BAR WITH HORIZONTAL STROKE", unicode 0x2AF5
  59945 | (kUnicodeCategory_Sm << 27), // "TRIPLE COLON OPERATOR", unicode 0x2AF6
  59951 | (kUnicodeCategory_Sm << 27), // "TRIPLE NESTED LESS-THAN", unicode 0x2AF7
  59959 | (kUnicodeCategory_Sm << 27), // "TRIPLE NESTED GREATER-THAN", unicode 0x2AF8
  59967 | (kUnicodeCategory_Sm << 27), // "DOUBLE-LINE SLANTED LESS-THAN OR EQUAL TO", unicode 0x2AF9
  59982 | (kUnicodeCategory_Sm << 27), // "DOUBLE-LINE SLANTED GREATER-THAN OR EQUAL TO", unicode 0x2AFA
  59997 | (kUnicodeCategory_Sm << 27), // "TRIPLE SOLIDUS BINARY RELATION", unicode 0x2AFB
  60005 | (kUnicodeCategory_Sm << 27), // "LARGE TRIPLE VERTICAL BAR OPERATOR", unicode 0x2AFC
  60014 | (kUnicodeCategory_Sm << 27), // "DOUBLE SOLIDUS OPERATOR", unicode 0x2AFD
  60019 | (kUnicodeCategory_Sm << 27), // "WHITE VERTICAL BAR", unicode 0x2AFE
  60024 | (kUnicodeCategory_Sm << 27), // "N-ARY WHITE VERTICAL BAR", unicode 0x2AFF
} ;

static const uint32_t gNamePage43 [256] = {
  60033 | (kUnicodeCategory_So << 27), // "NORTH EAST WHITE ARROW", unicode 0x2B00
  60040 | (kUnicodeCategory_So << 27), // "NORTH WEST WHITE ARROW", unicode 0x2B01
  60047 | (kUnicodeCategory_So << 27), // "SOUTH EAST WHITE ARROW", unicode 0x2B02
  60054 | (kUnicodeCategory_So << 27), // "SOUTH WEST WHITE ARROW", unicode 0x2B03
  60061 | (kUnicodeCategory_So << 27), // "LEFT RIGHT WHITE ARROW", unicode 0x2B04
  60066 | (kUnicodeCategory_So << 27), // "LEFTWARDS BLACK ARROW", unicode 0x2B05
  60071 | (kUnicodeCategory_So << 27), // "UPWARDS BLACK ARROW", unicode 0x2B06
  60076 | (kUnicodeCategory_So << 27), // "DOWNWARDS BLACK ARROW", unicode 0x2B07
  60081 | (kUnicodeCategory_So << 27), // "NORTH EAST BLACK ARROW", unicode 0x2B08
  60088 | (kUnicodeCategory_So << 27), // "NORTH WEST BLACK ARROW", unicode 0x2B09
  60095 | (kUnicodeCategory_So << 27), // "SOUTH EAST BLACK ARROW", unicode 0x2B0A
  60102 | (kUnicodeCategory_So << 27), // "SOUTH WEST BLACK ARROW", unicode 0x2B0B
  60109 | (kUnicodeCategory_So << 27), // "LEFT RIGHT BLACK ARROW", unicode 0x2B0C
  60114 | (kUnicodeCategory_So << 27), // "UP DOWN BLACK ARROW", unicode 0x2B0D
  60121 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW WITH TIP DOWNWARDS", unicode 0x2B0E
  60129 | (kUnicodeCategory_So << 27), // "RIGHTWARDS ARROW WITH TIP UPWARDS", unicode 0x2B0F
  60137 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW WITH TIP DOWNWARDS", unicode 0x2B10
  60145 | (kUnicodeCategory_So << 27), // "LEFTWARDS ARROW WITH TIP UPWARDS", unicode 0x2B11
  60153 | (kUnicodeCategory_So << 27), // "SQUARE WITH TOP HALF BLACK", unicode 0x2B12
  60161 | (kUnicodeCategory_So << 27), // "SQUARE WITH BOTTOM HALF BLACK", unicode 0x2B13
  60169 | (kUnicodeCategory_So << 27), // "SQUARE WITH UPPER RIGHT DIAGONAL HALF BLACK", unicode 0x2B14
  60180 | (kUnicodeCategory_So << 27), // "SQUARE WITH LOWER LEFT DIAGONAL HALF BLACK", unicode 0x2B15
  60191 | (kUnicodeCategory_So << 27), // "DIAMOND WITH LEFT HALF BLACK", unicode 0x2B16
  60199 | (kUnicodeCategory_So << 27), // "DIAMOND WITH RIGHT HALF BLACK", unicode 0x2B17
  60207 | (kUnicodeCategory_So << 27), // "DIAMOND WITH TOP HALF BLACK", unicode 0x2B18
  60216 | (kUnicodeCategory_So << 27), // "DIAMOND WITH BOTTOM HALF BLACK", unicode 0x2B19
  60225 | (kUnicodeCategory_So << 27), // "DOTTED SQUARE", unicode 0x2B1A
  60228 | (kUnicodeCategory_So << 27), // "BLACK LARGE SQUARE", unicode 0x2B1B
  60233 | (kUnicodeCategory_So << 27), // "WHITE LARGE SQUARE", unicode 0x2B1C
  60238 | (kUnicodeCategory_So << 27), // "BLACK VERY SMALL SQUARE", unicode 0x2B1D
  60244 | (kUnicodeCategory_So << 27), // "WHITE VERY SMALL SQUARE", unicode 0x2B1E
  60250 | (kUnicodeCategory_So << 27), // "BLACK PENTAGON", unicode 0x2B1F
  60254 | (kUnicodeCategory_So << 27), // "WHITE PENTAGON", unicode 0x2B20
  60258 | (kUnicodeCategory_So << 27), // "WHITE HEXAGON", unicode 0x2B21
  60262 | (kUnicodeCategory_So << 27), // "BLACK HEXAGON", unicode 0x2B22
  60266 | (kUnicodeCategory_So << 27), // "HORIZONTAL BLACK HEXAGON", unicode 0x2B23
  60272 | (kUnicodeCategory_So << 27), // "BLACK LARGE CIRCLE", unicode 0x2B24
  60278 | (kUnicodeCategory_So << 27), // "BLACK MEDIUM DIAMOND", unicode 0x2B25
  60284 | (kUnicodeCategory_So << 27), // "WHITE MEDIUM DIAMOND", unicode 0x2B26
  60290 | (kUnicodeCategory_So << 27), // "BLACK MEDIUM LOZENGE", unicode 0x2B27
  60296 | (kUnicodeCategory_So << 27), // "WHITE MEDIUM LOZENGE", unicode 0x2B28
  60302 | (kUnicodeCategory_So << 27), // "BLACK SMALL DIAMOND", unicode 0x2B29
  60307 | (kUnicodeCategory_So << 27), // "BLACK SMALL LOZENGE", unicode 0x2B2A
  60312 | (kUnicodeCategory_So << 27), // "WHITE SMALL LOZENGE", unicode 0x2B2B
  60317 | (kUnicodeCategory_So << 27), // "BLACK HORIZONTAL ELLIPSE", unicode 0x2B2C
  60323 | (kUnicodeCategory_So << 27), // "WHITE HORIZONTAL ELLIPSE", unicode 0x2B2D
  60329 | (kUnicodeCategory_So << 27), // "BLACK VERTICAL ELLIPSE", unicode 0x2B2E
  60334 | (kUnicodeCategory_So << 27), // "WHITE VERTICAL ELLIPSE", unicode 0x2B2F
  60339 | (kUnicodeCategory_Sm << 27), // "LEFT ARROW WITH SMALL CIRCLE", unicode 0x2B30
  60345 | (kUnicodeCategory_Sm << 27), // "THREE LEFTWARDS ARROWS", unicode 0x2B31
  60351 | (kUnicodeCategory_Sm << 27), // "LEFT ARROW WITH CIRCLED PLUS", unicode 0x2B32
  60357 | (kUnicodeCategory_Sm << 27), // "LONG LEFTWARDS SQUIGGLE ARROW", unicode 0x2B33
  60364 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED ARROW WITH VERTICAL STROKE", unicode 0x2B34
  60375 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED ARROW WITH DOUBLE VERTICAL STROKE", unicode 0x2B35
  60387 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED ARROW FROM BAR", unicode 0x2B36
  60398 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED TRIPLE DASH ARROW", unicode 0x2B37
  60409 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH DOTTED STEM", unicode 0x2B38
  60417 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH TAIL WITH VERTICAL STROKE", unicode 0x2B39
  60427 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE", unicode 0x2B3A
  60438 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED ARROW WITH TAIL", unicode 0x2B3B
  60448 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED ARROW WITH TAIL WITH VERTICAL STROKE", unicode 0x2B3C
  60462 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS TWO-HEADED ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE", unicode 0x2B3D
  60477 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW THROUGH X", unicode 0x2B3E
  60484 | (kUnicodeCategory_Sm << 27), // "WAVE ARROW POINTING DIRECTLY LEFT", unicode 0x2B3F
  60492 | (kUnicodeCategory_Sm << 27), // "EQUALS SIGN ABOVE LEFTWARDS ARROW", unicode 0x2B40
  60499 | (kUnicodeCategory_Sm << 27), // "REVERSE TILDE OPERATOR ABOVE LEFTWARDS ARROW", unicode 0x2B41
  60509 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW ABOVE REVERSE ALMOST EQUAL TO", unicode 0x2B42
  60521 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW THROUGH GREATER-THAN", unicode 0x2B43
  60530 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW THROUGH SUPERSET", unicode 0x2B44
  60537 | (kUnicodeCategory_So << 27), // "LEFTWARDS QUADRUPLE ARROW", unicode 0x2B45
  60542 | (kUnicodeCategory_So << 27), // "RIGHTWARDS QUADRUPLE ARROW", unicode 0x2B46
  60547 | (kUnicodeCategory_Sm << 27), // "REVERSE TILDE OPERATOR ABOVE RIGHTWARDS ARROW", unicode 0x2B47
  60557 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW ABOVE REVERSE ALMOST EQUAL TO", unicode 0x2B48
  60569 | (kUnicodeCategory_Sm << 27), // "TILDE OPERATOR ABOVE LEFTWARDS ARROW", unicode 0x2B49
  60577 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW ABOVE ALMOST EQUAL TO", unicode 0x2B4A
  60587 | (kUnicodeCategory_Sm << 27), // "LEFTWARDS ARROW ABOVE REVERSE TILDE OPERATOR", unicode 0x2B4B
  60597 | (kUnicodeCategory_Sm << 27), // "RIGHTWARDS ARROW ABOVE REVERSE TILDE OPERATOR", unicode 0x2B4C
  0, // undefined code 0x2B4D
  0, // undefined code 0x2B4E
  0, // undefined code 0x2B4F
  60607 | (kUnicodeCategory_So << 27), // "WHITE MEDIUM STAR", unicode 0x2B50
  60613 | (kUnicodeCategory_So << 27), // "BLACK SMALL STAR", unicode 0x2B51
  60618 | (kUnicodeCategory_So << 27), // "WHITE SMALL STAR", unicode 0x2B52
  60623 | (kUnicodeCategory_So << 27), // "BLACK RIGHT-POINTING PENTAGON", unicode 0x2B53
  60630 | (kUnicodeCategory_So << 27), // "WHITE RIGHT-POINTING PENTAGON", unicode 0x2B54
  0, // undefined code 0x2B55
  0, // undefined code 0x2B56
  0, // undefined code 0x2B57
  0, // undefined code 0x2B58
  0, // undefined code 0x2B59
  0, // undefined code 0x2B5A
  0, // undefined code 0x2B5B
  0, // undefined code 0x2B5C
  0, // undefined code 0x2B5D
  0, // undefined code 0x2B5E
  0, // undefined code 0x2B5F
  0, // undefined code 0x2B60
  0, // undefined code 0x2B61
  0, // undefined code 0x2B62
  0, // undefined code 0x2B63
  0, // undefined code 0x2B64
  0, // undefined code 0x2B65
  0, // undefined code 0x2B66
  0, // undefined code 0x2B67
  0, // undefined code 0x2B68
  0, // undefined code 0x2B69
  0, // undefined code 0x2B6A
  0, // undefined code 0x2B6B
  0, // undefined code 0x2B6C
  0, // undefined code 0x2B6D
  0, // undefined code 0x2B6E
  0, // undefined code 0x2B6F
  0, // undefined code 0x2B70
  0, // undefined code 0x2B71
  0, // undefined code 0x2B72
  0, // undefined code 0x2B73
  0, // undefined code 0x2B74
  0, // undefined code 0x2B75
  0, // undefined code 0x2B76
  0, // undefined code 0x2B77
  0, // undefined code 0x2B78
  0, // undefined code 0x2B79
  0, // undefined code 0x2B7A
  0, // undefined code 0x2B7B
  0, // undefined code 0x2B7C
  0, // undefined code 0x2B7D
  0, // undefined code 0x2B7E
  0, // undefined code 0x2B7F
  0, // undefined code 0x2B80
  0, // undefined code 0x2B81
  0, // undefined code 0x2B82
  0, // undefined code 0x2B83
  0, // undefined code 0x2B84
  0, // undefined code 0x2B85
  0, // undefined code 0x2B86
  0, // undefined code 0x2B87
  0, // undefined code 0x2B88
  0, // undefined code 0x2B89
  0, // undefined code 0x2B8A
  0, // undefined code 0x2B8B
  0, // undefined code 0x2B8C
  0, // undefined code 0x2B8D
  0, // undefined code 0x2B8E
  0, // undefined code 0x2B8F
  0, // undefined code 0x2B90
  0, // undefined code 0x2B91
  0, // undefined code 0x2B92
  0, // undefined code 0x2B93
  0, // undefined code 0x2B94
  0, // undefined code 0x2B95
  0, // undefined code 0x2B96
  0, // undefined code 0x2B97
  0, // undefined code 0x2B98
  0, // undefined code 0x2B99
  0, // undefined code 0x2B9A
  0, // undefined code 0x2B9B
  0, // undefined code 0x2B9C
  0, // undefined code 0x2B9D
  0, // undefined code 0x2B9E
  0, // undefined code 0x2B9F
  0, // undefined code 0x2BA0
  0, // undefined code 0x2BA1
  0, // undefined code 0x2BA2
  0, // undefined code 0x2BA3
  0, // undefined code 0x2BA4
  0, // undefined code 0x2BA5
  0, // undefined code 0x2BA6
  0, // undefined code 0x2BA7
  0, // undefined code 0x2BA8
  0, // undefined code 0x2BA9
  0, // undefined code 0x2BAA
  0, // undefined code 0x2BAB
  0, // undefined code 0x2BAC
  0, // undefined code 0x2BAD
  0, // undefined code 0x2BAE
  0, // undefined code 0x2BAF
  0, // undefined code 0x2BB0
  0, // undefined code 0x2BB1
  0, // undefined code 0x2BB2
  0, // undefined code 0x2BB3
  0, // undefined code 0x2BB4
  0, // undefined code 0x2BB5
  0, // undefined code 0x2BB6
  0, // undefined code 0x2BB7
  0, // undefined code 0x2BB8
  0, // undefined code 0x2BB9
  0, // undefined code 0x2BBA
  0, // undefined code 0x2BBB
  0, // undefined code 0x2BBC
  0, // undefined code 0x2BBD
  0, // undefined code 0x2BBE
  0, // undefined code 0x2BBF
  0, // undefined code 0x2BC0
  0, // undefined code 0x2BC1
  0, // undefined code 0x2BC2
  0, // undefined code 0x2BC3
  0, // undefined code 0x2BC4
  0, // undefined code 0x2BC5
  0, // undefined code 0x2BC6
  0, // undefined code 0x2BC7
  0, // undefined code 0x2BC8
  0, // undefined code 0x2BC9
  0, // undefined code 0x2BCA
  0, // undefined code 0x2BCB
  0, // undefined code 0x2BCC
  0, // undefined code 0x2BCD
  0, // undefined code 0x2BCE
  0, // undefined code 0x2BCF
  0, // undefined code 0x2BD0
  0, // undefined code 0x2BD1
  0, // undefined code 0x2BD2
  0, // undefined code 0x2BD3
  0, // undefined code 0x2BD4
  0, // undefined code 0x2BD5
  0, // undefined code 0x2BD6
  0, // undefined code 0x2BD7
  0, // undefined code 0x2BD8
  0, // undefined code 0x2BD9
  0, // undefined code 0x2BDA
  0, // undefined code 0x2BDB
  0, // undefined code 0x2BDC
  0, // undefined code 0x2BDD
  0, // undefined code 0x2BDE
  0, // undefined code 0x2BDF
  0, // undefined code 0x2BE0
  0, // undefined code 0x2BE1
  0, // undefined code 0x2BE2
  0, // undefined code 0x2BE3
  0, // undefined code 0x2BE4
  0, // undefined code 0x2BE5
  0, // undefined code 0x2BE6
  0, // undefined code 0x2BE7
  0, // undefined code 0x2BE8
  0, // undefined code 0x2BE9
  0, // undefined code 0x2BEA
  0, // undefined code 0x2BEB
  0, // undefined code 0x2BEC
  0, // undefined code 0x2BED
  0, // undefined code 0x2BEE
  0, // undefined code 0x2BEF
  0, // undefined code 0x2BF0
  0, // undefined code 0x2BF1
  0, // undefined code 0x2BF2
  0, // undefined code 0x2BF3
  0, // undefined code 0x2BF4
  0, // undefined code 0x2BF5
  0, // undefined code 0x2BF6
  0, // undefined code 0x2BF7
  0, // undefined code 0x2BF8
  0, // undefined code 0x2BF9
  0, // undefined code 0x2BFA
  0, // undefined code 0x2BFB
  0, // undefined code 0x2BFC
  0, // undefined code 0x2BFD
  0, // undefined code 0x2BFE
  0, // undefined code 0x2BFF
} ;

static const uint32_t gNamePage44 [256] = {
  60637 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER AZU", unicode 0x2C00
  60643 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER BUKY", unicode 0x2C01
  60649 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER VEDE", unicode 0x2C02
  60655 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER GLAGOLI", unicode 0x2C03
  60661 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER DOBRO", unicode 0x2C04
  60667 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER YESTU", unicode 0x2C05
  60673 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER ZHIVETE", unicode 0x2C06
  60679 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER DZELO", unicode 0x2C07
  60685 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER ZEMLJA", unicode 0x2C08
  60691 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER IZHE", unicode 0x2C09
  60697 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER INITIAL IZHE", unicode 0x2C0A
  60705 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER I", unicode 0x2C0B
  60711 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER DJERVI", unicode 0x2C0C
  60717 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER KAKO", unicode 0x2C0D
  60723 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER LJUDIJE", unicode 0x2C0E
  60729 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER MYSLITE", unicode 0x2C0F
  60735 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER NASHI", unicode 0x2C10
  60741 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER ONU", unicode 0x2C11
  60747 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER POKOJI", unicode 0x2C12
  60753 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER RITSI", unicode 0x2C13
  60759 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SLOVO", unicode 0x2C14
  60765 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER TVRIDO", unicode 0x2C15
  60771 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER UKU", unicode 0x2C16
  60777 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER FRITU", unicode 0x2C17
  60783 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER HERU", unicode 0x2C18
  60789 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER OTU", unicode 0x2C19
  60795 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER PE", unicode 0x2C1A
  60801 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SHTA", unicode 0x2C1B
  60807 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER TSI", unicode 0x2C1C
  60813 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER CHRIVI", unicode 0x2C1D
  60819 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SHA", unicode 0x2C1E
  60825 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER YERU", unicode 0x2C1F
  60831 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER YERI", unicode 0x2C20
  60837 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER YATI", unicode 0x2C21
  60843 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SPIDERY HA", unicode 0x2C22
  60851 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER YU", unicode 0x2C23
  60857 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SMALL YUS", unicode 0x2C24
  60864 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SMALL YUS WITH TAIL", unicode 0x2C25
  60874 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER YO", unicode 0x2C26
  60880 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER IOTATED SMALL YUS", unicode 0x2C27
  60889 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER BIG YUS", unicode 0x2C28
  60897 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER IOTATED BIG YUS", unicode 0x2C29
  60907 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER FITA", unicode 0x2C2A
  60913 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER IZHITSA", unicode 0x2C2B
  60919 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER SHTAPIC", unicode 0x2C2C
  60925 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER TROKUTASTI A", unicode 0x2C2D
  60932 | (kUnicodeCategory_Lu << 27), // "GLAGOLITIC CAPITAL LETTER LATINATE MYSLITE", unicode 0x2C2E
  0, // undefined code 0x2C2F
  60940 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER AZU", unicode 0x2C30
  60946 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER BUKY", unicode 0x2C31
  60952 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER VEDE", unicode 0x2C32
  60958 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER GLAGOLI", unicode 0x2C33
  60964 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER DOBRO", unicode 0x2C34
  60970 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER YESTU", unicode 0x2C35
  60976 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER ZHIVETE", unicode 0x2C36
  60982 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER DZELO", unicode 0x2C37
  60988 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER ZEMLJA", unicode 0x2C38
  60994 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER IZHE", unicode 0x2C39
  61000 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER INITIAL IZHE", unicode 0x2C3A
  61008 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER I", unicode 0x2C3B
  61014 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER DJERVI", unicode 0x2C3C
  61020 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER KAKO", unicode 0x2C3D
  61026 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER LJUDIJE", unicode 0x2C3E
  61032 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER MYSLITE", unicode 0x2C3F
  61038 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER NASHI", unicode 0x2C40
  61044 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER ONU", unicode 0x2C41
  61050 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER POKOJI", unicode 0x2C42
  61056 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER RITSI", unicode 0x2C43
  61062 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SLOVO", unicode 0x2C44
  61068 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER TVRIDO", unicode 0x2C45
  61074 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER UKU", unicode 0x2C46
  61080 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER FRITU", unicode 0x2C47
  61086 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER HERU", unicode 0x2C48
  61092 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER OTU", unicode 0x2C49
  61098 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER PE", unicode 0x2C4A
  61104 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SHTA", unicode 0x2C4B
  61110 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER TSI", unicode 0x2C4C
  61116 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER CHRIVI", unicode 0x2C4D
  61122 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SHA", unicode 0x2C4E
  61128 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER YERU", unicode 0x2C4F
  61134 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER YERI", unicode 0x2C50
  61140 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER YATI", unicode 0x2C51
  61146 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SPIDERY HA", unicode 0x2C52
  61154 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER YU", unicode 0x2C53
  61160 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SMALL YUS", unicode 0x2C54
  61167 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SMALL YUS WITH TAIL", unicode 0x2C55
  61177 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER YO", unicode 0x2C56
  61183 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER IOTATED SMALL YUS", unicode 0x2C57
  61192 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER BIG YUS", unicode 0x2C58
  61200 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER IOTATED BIG YUS", unicode 0x2C59
  61210 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER FITA", unicode 0x2C5A
  61216 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER IZHITSA", unicode 0x2C5B
  61222 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER SHTAPIC", unicode 0x2C5C
  61228 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER TROKUTASTI A", unicode 0x2C5D
  61235 | (kUnicodeCategory_Ll << 27), // "GLAGOLITIC SMALL LETTER LATINATE MYSLITE", unicode 0x2C5E
  0, // undefined code 0x2C5F
  61243 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH DOUBLE BAR", unicode 0x2C60
  61252 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER L WITH DOUBLE BAR", unicode 0x2C61
  61261 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER L WITH MIDDLE TILDE", unicode 0x2C62
  61271 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER P WITH STROKE", unicode 0x2C63
  61279 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER R WITH TAIL", unicode 0x2C64
  61287 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER A WITH STROKE", unicode 0x2C65
  61294 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER T WITH DIAGONAL STROKE", unicode 0x2C66
  61304 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER H WITH DESCENDER", unicode 0x2C67
  61312 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER H WITH DESCENDER", unicode 0x2C68
  61320 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER K WITH DESCENDER", unicode 0x2C69
  61328 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER K WITH DESCENDER", unicode 0x2C6A
  61336 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER Z WITH DESCENDER", unicode 0x2C6B
  61344 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER Z WITH DESCENDER", unicode 0x2C6C
  61352 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER ALPHA", unicode 0x2C6D
  61357 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER M WITH HOOK", unicode 0x2C6E
  61365 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER TURNED A", unicode 0x2C6F
  0, // undefined code 0x2C70
  61371 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V WITH RIGHT HOOK", unicode 0x2C71
  61380 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER W WITH HOOK", unicode 0x2C72
  61388 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER W WITH HOOK", unicode 0x2C73
  61396 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER V WITH CURL", unicode 0x2C74
  61404 | (kUnicodeCategory_Lu << 27), // "LATIN CAPITAL LETTER HALF H", unicode 0x2C75
  61411 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER HALF H", unicode 0x2C76
  61418 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TAILLESS PHI", unicode 0x2C77
  61426 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER E WITH NOTCH", unicode 0x2C78
  61433 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER TURNED R WITH TAIL", unicode 0x2C79
  61443 | (kUnicodeCategory_Ll << 27), // "LATIN SMALL LETTER O WITH LOW RING INSIDE", unicode 0x2C7A
  61454 | (kUnicodeCategory_Ll << 27), // "LATIN LETTER SMALL CAPITAL TURNED E", unicode 0x2C7B
  61461 | (kUnicodeCategory_Ll << 27), // "LATIN SUBSCRIPT SMALL LETTER J", unicode 0x2C7C
  61468 | (kUnicodeCategory_Lm << 27), // "MODIFIER LETTER CAPITAL V", unicode 0x2C7D
  0, // undefined code 0x2C7E
  0, // undefined code 0x2C7F
  61473 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER ALFA", unicode 0x2C80
  61479 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER ALFA", unicode 0x2C81
  61485 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER VIDA", unicode 0x2C82
  61491 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER VIDA", unicode 0x2C83
  61497 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER GAMMA", unicode 0x2C84
  61503 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER GAMMA", unicode 0x2C85
  61509 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER DALDA", unicode 0x2C86
  61515 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER DALDA", unicode 0x2C87
  61521 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER EIE", unicode 0x2C88
  61527 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER EIE", unicode 0x2C89
  61533 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER SOU", unicode 0x2C8A
  61539 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER SOU", unicode 0x2C8B
  61545 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER ZATA", unicode 0x2C8C
  61551 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER ZATA", unicode 0x2C8D
  61557 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER HATE", unicode 0x2C8E
  61563 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER HATE", unicode 0x2C8F
  61569 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER THETHE", unicode 0x2C90
  61575 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER THETHE", unicode 0x2C91
  61581 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER IAUDA", unicode 0x2C92
  61587 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER IAUDA", unicode 0x2C93
  61593 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER KAPA", unicode 0x2C94
  61599 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER KAPA", unicode 0x2C95
  61605 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER LAULA", unicode 0x2C96
  61611 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER LAULA", unicode 0x2C97
  61617 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER MI", unicode 0x2C98
  61623 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER MI", unicode 0x2C99
  61629 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER NI", unicode 0x2C9A
  61635 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER NI", unicode 0x2C9B
  61641 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER KSI", unicode 0x2C9C
  61647 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER KSI", unicode 0x2C9D
  61653 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER O", unicode 0x2C9E
  61658 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER O", unicode 0x2C9F
  61663 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER PI", unicode 0x2CA0
  61669 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER PI", unicode 0x2CA1
  61675 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER RO", unicode 0x2CA2
  61681 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER RO", unicode 0x2CA3
  61687 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER SIMA", unicode 0x2CA4
  61693 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER SIMA", unicode 0x2CA5
  61699 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER TAU", unicode 0x2CA6
  61705 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER TAU", unicode 0x2CA7
  61711 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER UA", unicode 0x2CA8
  61717 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER UA", unicode 0x2CA9
  61723 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER FI", unicode 0x2CAA
  61729 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER FI", unicode 0x2CAB
  61735 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER KHI", unicode 0x2CAC
  61741 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER KHI", unicode 0x2CAD
  61747 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER PSI", unicode 0x2CAE
  61753 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER PSI", unicode 0x2CAF
  61759 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OOU", unicode 0x2CB0
  61765 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OOU", unicode 0x2CB1
  61771 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER DIALECT-P ALEF", unicode 0x2CB2
  61781 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER DIALECT-P ALEF", unicode 0x2CB3
  61791 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC AIN", unicode 0x2CB4
  61801 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC AIN", unicode 0x2CB5
  61811 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER CRYPTOGRAMMIC EIE", unicode 0x2CB6
  61819 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER CRYPTOGRAMMIC EIE", unicode 0x2CB7
  61827 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER DIALECT-P KAPA", unicode 0x2CB8
  61837 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER DIALECT-P KAPA", unicode 0x2CB9
  61847 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER DIALECT-P NI", unicode 0x2CBA
  61857 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER DIALECT-P NI", unicode 0x2CBB
  61867 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER CRYPTOGRAMMIC NI", unicode 0x2CBC
  61875 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER CRYPTOGRAMMIC NI", unicode 0x2CBD
  61883 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC OOU", unicode 0x2CBE
  61893 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC OOU", unicode 0x2CBF
  61903 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER SAMPI", unicode 0x2CC0
  61909 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER SAMPI", unicode 0x2CC1
  61915 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER CROSSED SHEI", unicode 0x2CC2
  61923 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER CROSSED SHEI", unicode 0x2CC3
  61931 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC SHEI", unicode 0x2CC4
  61941 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC SHEI", unicode 0x2CC5
  61951 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC ESH", unicode 0x2CC6
  61961 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC ESH", unicode 0x2CC7
  61971 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER AKHMIMIC KHEI", unicode 0x2CC8
  61979 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER AKHMIMIC KHEI", unicode 0x2CC9
  61987 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER DIALECT-P HORI", unicode 0x2CCA
  61997 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER DIALECT-P HORI", unicode 0x2CCB
  62007 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC HORI", unicode 0x2CCC
  62017 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC HORI", unicode 0x2CCD
  62027 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC HA", unicode 0x2CCE
  62037 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC HA", unicode 0x2CCF
  62047 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER L-SHAPED HA", unicode 0x2CD0
  62057 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER L-SHAPED HA", unicode 0x2CD1
  62067 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC HEI", unicode 0x2CD2
  62077 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC HEI", unicode 0x2CD3
  62087 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC HAT", unicode 0x2CD4
  62097 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC HAT", unicode 0x2CD5
  62107 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC GANGIA", unicode 0x2CD6
  62117 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC GANGIA", unicode 0x2CD7
  62127 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC DJA", unicode 0x2CD8
  62137 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC DJA", unicode 0x2CD9
  62147 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD COPTIC SHIMA", unicode 0x2CDA
  62157 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD COPTIC SHIMA", unicode 0x2CDB
  62167 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD NUBIAN SHIMA", unicode 0x2CDC
  62177 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD NUBIAN SHIMA", unicode 0x2CDD
  62187 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD NUBIAN NGI", unicode 0x2CDE
  62197 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD NUBIAN NGI", unicode 0x2CDF
  62207 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD NUBIAN NYI", unicode 0x2CE0
  62217 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD NUBIAN NYI", unicode 0x2CE1
  62227 | (kUnicodeCategory_Lu << 27), // "COPTIC CAPITAL LETTER OLD NUBIAN WAU", unicode 0x2CE2
  62237 | (kUnicodeCategory_Ll << 27), // "COPTIC SMALL LETTER OLD NUBIAN WAU", unicode 0x2CE3
  62247 | (kUnicodeCategory_Ll << 27), // "COPTIC SYMBOL KAI", unicode 0x2CE4
  62252 | (kUnicodeCategory_So << 27), // "COPTIC SYMBOL MI RO", unicode 0x2CE5
  62259 | (kUnicodeCategory_So << 27), // "COPTIC SYMBOL PI RO", unicode 0x2CE6
  62266 | (kUnicodeCategory_So << 27), // "COPTIC SYMBOL STAUROS", unicode 0x2CE7
  62272 | (kUnicodeCategory_So << 27), // "COPTIC SYMBOL TAU RO", unicode 0x2CE8
  62279 | (kUnicodeCategory_So << 27), // "COPTIC SYMBOL KHI RO", unicode 0x2CE9
  62286 | (kUnicodeCategory_So << 27), // "COPTIC SYMBOL SHIMA SIMA", unicode 0x2CEA
  0, // undefined code 0x2CEB
  0, // undefined code 0x2CEC
  0, // undefined code 0x2CED
  0, // undefined code 0x2CEE
  0, // undefined code 0x2CEF
  0, // undefined code 0x2CF0
  0, // undefined code 0x2CF1
  0, // undefined code 0x2CF2
  0, // undefined code 0x2CF3
  0, // undefined code 0x2CF4
  0, // undefined code 0x2CF5
  0, // undefined code 0x2CF6
  0, // undefined code 0x2CF7
  0, // undefined code 0x2CF8
  62293 | (kUnicodeCategory_Po << 27), // "COPTIC OLD NUBIAN FULL STOP", unicode 0x2CF9
  62303 | (kUnicodeCategory_Po << 27), // "COPTIC OLD NUBIAN DIRECT QUESTION MARK", unicode 0x2CFA
  62314 | (kUnicodeCategory_Po << 27), // "COPTIC OLD NUBIAN INDIRECT QUESTION MARK", unicode 0x2CFB
  62326 | (kUnicodeCategory_Po << 27), // "COPTIC OLD NUBIAN VERSE DIVIDER", unicode 0x2CFC
  62336 | (kUnicodeCategory_No << 27), // "COPTIC FRACTION ONE HALF", unicode 0x2CFD
  62344 | (kUnicodeCategory_Po << 27), // "COPTIC FULL STOP", unicode 0x2CFE
  62350 | (kUnicodeCategory_Po << 27), // "COPTIC MORPHOLOGICAL DIVIDER", unicode 0x2CFF
} ;

static const uint32_t gNamePage45 [256] = {
  62356 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER AN", unicode 0x2D00
  62362 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER BAN", unicode 0x2D01
  62368 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER GAN", unicode 0x2D02
  62374 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER DON", unicode 0x2D03
  62380 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER EN", unicode 0x2D04
  62386 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER VIN", unicode 0x2D05
  62392 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER ZEN", unicode 0x2D06
  62398 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER TAN", unicode 0x2D07
  62404 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER IN", unicode 0x2D08
  62410 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER KAN", unicode 0x2D09
  62416 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER LAS", unicode 0x2D0A
  62422 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER MAN", unicode 0x2D0B
  62428 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER NAR", unicode 0x2D0C
  62434 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER ON", unicode 0x2D0D
  62440 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER PAR", unicode 0x2D0E
  62446 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER ZHAR", unicode 0x2D0F
  62452 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER RAE", unicode 0x2D10
  62458 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER SAN", unicode 0x2D11
  62464 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER TAR", unicode 0x2D12
  62470 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER UN", unicode 0x2D13
  62476 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER PHAR", unicode 0x2D14
  62482 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER KHAR", unicode 0x2D15
  62488 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER GHAN", unicode 0x2D16
  62494 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER QAR", unicode 0x2D17
  62500 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER SHIN", unicode 0x2D18
  62506 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER CHIN", unicode 0x2D19
  62512 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER CAN", unicode 0x2D1A
  62518 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER JIL", unicode 0x2D1B
  62524 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER CIL", unicode 0x2D1C
  62530 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER CHAR", unicode 0x2D1D
  62536 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER XAN", unicode 0x2D1E
  62542 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER JHAN", unicode 0x2D1F
  62548 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER HAE", unicode 0x2D20
  62554 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER HE", unicode 0x2D21
  62560 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER HIE", unicode 0x2D22
  62566 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER WE", unicode 0x2D23
  62572 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER HAR", unicode 0x2D24
  62578 | (kUnicodeCategory_Ll << 27), // "GEORGIAN SMALL LETTER HOE", unicode 0x2D25
  0, // undefined code 0x2D26
  0, // undefined code 0x2D27
  0, // undefined code 0x2D28
  0, // undefined code 0x2D29
  0, // undefined code 0x2D2A
  0, // undefined code 0x2D2B
  0, // undefined code 0x2D2C
  0, // undefined code 0x2D2D
  0, // undefined code 0x2D2E
  0, // undefined code 0x2D2F
  62584 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YA", unicode 0x2D30
  62589 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAB", unicode 0x2D31
  62595 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YABH", unicode 0x2D32
  62600 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAG", unicode 0x2D33
  62606 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAGHH", unicode 0x2D34
  62612 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER BERBER ACADEMY YAJ", unicode 0x2D35
  62621 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAJ", unicode 0x2D36
  62626 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAD", unicode 0x2D37
  62631 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YADH", unicode 0x2D38
  62636 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YADD", unicode 0x2D39
  62641 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YADDH", unicode 0x2D3A
  62646 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YEY", unicode 0x2D3B
  62652 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAF", unicode 0x2D3C
  62658 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAK", unicode 0x2D3D
  62663 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAK", unicode 0x2D3E
  62670 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAKHH", unicode 0x2D3F
  62676 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAH", unicode 0x2D40
  62681 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER BERBER ACADEMY YAH", unicode 0x2D41
  62690 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAH", unicode 0x2D42
  62697 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAHH", unicode 0x2D43
  62703 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAA", unicode 0x2D44
  62708 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAKH", unicode 0x2D45
  62713 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAKH", unicode 0x2D46
  62720 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAQ", unicode 0x2D47
  62725 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAQ", unicode 0x2D48
  62732 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YI", unicode 0x2D49
  62736 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAZH", unicode 0x2D4A
  62741 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER AHAGGAR YAZH", unicode 0x2D4B
  62749 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAZH", unicode 0x2D4C
  62756 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAL", unicode 0x2D4D
  62762 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAM", unicode 0x2D4E
  62768 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAN", unicode 0x2D4F
  62773 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAGN", unicode 0x2D50
  62780 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YANG", unicode 0x2D51
  62787 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAP", unicode 0x2D52
  62793 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YU", unicode 0x2D53
  62798 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAR", unicode 0x2D54
  62803 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YARR", unicode 0x2D55
  62809 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAGH", unicode 0x2D56
  62814 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TUAREG YAGH", unicode 0x2D57
  62821 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER AYER YAGH", unicode 0x2D58
  62828 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAS", unicode 0x2D59
  62834 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YASS", unicode 0x2D5A
  62840 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YASH", unicode 0x2D5B
  62846 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAT", unicode 0x2D5C
  62851 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YATH", unicode 0x2D5D
  62857 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YACH", unicode 0x2D5E
  62863 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YATT", unicode 0x2D5F
  62869 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAV", unicode 0x2D60
  62875 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAW", unicode 0x2D61
  62881 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAY", unicode 0x2D62
  62887 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAZ", unicode 0x2D63
  62892 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER TAWELLEMET YAZ", unicode 0x2D64
  62899 | (kUnicodeCategory_Lo << 27), // "TIFINAGH LETTER YAZZ", unicode 0x2D65
  0, // undefined code 0x2D66
  0, // undefined code 0x2D67
  0, // undefined code 0x2D68
  0, // undefined code 0x2D69
  0, // undefined code 0x2D6A
  0, // undefined code 0x2D6B
  0, // undefined code 0x2D6C
  0, // undefined code 0x2D6D
  0, // undefined code 0x2D6E
  62905 | (kUnicodeCategory_Lm << 27), // "TIFINAGH MODIFIER LETTER LABIALIZATION MARK", unicode 0x2D6F
  0, // undefined code 0x2D70
  0, // undefined code 0x2D71
  0, // undefined code 0x2D72
  0, // undefined code 0x2D73
  0, // undefined code 0x2D74
  0, // undefined code 0x2D75
  0, // undefined code 0x2D76
  0, // undefined code 0x2D77
  0, // undefined code 0x2D78
  0, // undefined code 0x2D79
  0, // undefined code 0x2D7A
  0, // undefined code 0x2D7B
  0, // undefined code 0x2D7C
  0, // undefined code 0x2D7D
  0, // undefined code 0x2D7E
  0, // undefined code 0x2D7F
  62913 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE LOA", unicode 0x2D80
  62918 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE MOA", unicode 0x2D81
  62923 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ROA", unicode 0x2D82
  62927 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SOA", unicode 0x2D83
  62932 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SHOA", unicode 0x2D84
  62937 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE BOA", unicode 0x2D85
  62941 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE TOA", unicode 0x2D86
  62946 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE COA", unicode 0x2D87
  62950 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NOA", unicode 0x2D88
  62955 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE NYOA", unicode 0x2D89
  62960 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GLOTTAL OA", unicode 0x2D8A
  62966 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZOA", unicode 0x2D8B
  62970 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DOA", unicode 0x2D8C
  62975 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE DDOA", unicode 0x2D8D
  62980 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE JOA", unicode 0x2D8E
  62985 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE THOA", unicode 0x2D8F
  62990 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CHOA", unicode 0x2D90
  62994 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE PHOA", unicode 0x2D91
  62998 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE POA", unicode 0x2D92
  63003 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGWA", unicode 0x2D93
  63007 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGWI", unicode 0x2D94
  63012 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGWEE", unicode 0x2D95
  63017 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GGWE", unicode 0x2D96
  0, // undefined code 0x2D97
  0, // undefined code 0x2D98
  0, // undefined code 0x2D99
  0, // undefined code 0x2D9A
  0, // undefined code 0x2D9B
  0, // undefined code 0x2D9C
  0, // undefined code 0x2D9D
  0, // undefined code 0x2D9E
  0, // undefined code 0x2D9F
  63021 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSA", unicode 0x2DA0
  63025 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSU", unicode 0x2DA1
  63029 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSI", unicode 0x2DA2
  63033 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSAA", unicode 0x2DA3
  63037 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSEE", unicode 0x2DA4
  63041 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSE", unicode 0x2DA5
  63045 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE SSO", unicode 0x2DA6
  0, // undefined code 0x2DA7
  63049 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCA", unicode 0x2DA8
  63053 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCU", unicode 0x2DA9
  63058 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCI", unicode 0x2DAA
  63062 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCAA", unicode 0x2DAB
  63067 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCEE", unicode 0x2DAC
  63072 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCE", unicode 0x2DAD
  63077 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCO", unicode 0x2DAE
  0, // undefined code 0x2DAF
  63081 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZA", unicode 0x2DB0
  63085 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZU", unicode 0x2DB1
  63089 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZI", unicode 0x2DB2
  63093 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZAA", unicode 0x2DB3
  63097 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZEE", unicode 0x2DB4
  63101 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZE", unicode 0x2DB5
  63105 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE ZZO", unicode 0x2DB6
  0, // undefined code 0x2DB7
  63109 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHA", unicode 0x2DB8
  63114 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHU", unicode 0x2DB9
  63119 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHI", unicode 0x2DBA
  63124 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHAA", unicode 0x2DBB
  63129 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHEE", unicode 0x2DBC
  63133 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHE", unicode 0x2DBD
  63137 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE CCHO", unicode 0x2DBE
  0, // undefined code 0x2DBF
  63141 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYA", unicode 0x2DC0
  63146 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYU", unicode 0x2DC1
  63151 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYI", unicode 0x2DC2
  63155 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYAA", unicode 0x2DC3
  63160 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYEE", unicode 0x2DC4
  63165 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYE", unicode 0x2DC5
  63170 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE QYO", unicode 0x2DC6
  0, // undefined code 0x2DC7
  63174 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYA", unicode 0x2DC8
  63179 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYU", unicode 0x2DC9
  63184 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYI", unicode 0x2DCA
  63189 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYAA", unicode 0x2DCB
  63193 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYEE", unicode 0x2DCC
  63198 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYE", unicode 0x2DCD
  63203 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE KYO", unicode 0x2DCE
  0, // undefined code 0x2DCF
  63207 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYA", unicode 0x2DD0
  63212 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYU", unicode 0x2DD1
  63217 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYI", unicode 0x2DD2
  63222 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYAA", unicode 0x2DD3
  63226 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYEE", unicode 0x2DD4
  63231 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYE", unicode 0x2DD5
  63235 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE XYO", unicode 0x2DD6
  0, // undefined code 0x2DD7
  63240 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYA", unicode 0x2DD8
  63244 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYU", unicode 0x2DD9
  63248 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYI", unicode 0x2DDA
  63253 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYAA", unicode 0x2DDB
  63257 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYEE", unicode 0x2DDC
  63261 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYE", unicode 0x2DDD
  63265 | (kUnicodeCategory_Lo << 27), // "ETHIOPIC SYLLABLE GYO", unicode 0x2DDE
  0, // undefined code 0x2DDF
  63269 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER BE", unicode 0x2DE0
  63274 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER VE", unicode 0x2DE1
  63279 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER GHE", unicode 0x2DE2
  63284 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER DE", unicode 0x2DE3
  63289 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER ZHE", unicode 0x2DE4
  63294 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER ZE", unicode 0x2DE5
  63299 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER KA", unicode 0x2DE6
  63304 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER EL", unicode 0x2DE7
  63309 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER EM", unicode 0x2DE8
  63314 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER EN", unicode 0x2DE9
  63319 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER O", unicode 0x2DEA
  63323 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER PE", unicode 0x2DEB
  63328 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER ER", unicode 0x2DEC
  63333 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER ES", unicode 0x2DED
  63338 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER TE", unicode 0x2DEE
  63343 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER HA", unicode 0x2DEF
  63348 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER TSE", unicode 0x2DF0
  63353 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER CHE", unicode 0x2DF1
  63358 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER SHA", unicode 0x2DF2
  63363 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER SHCHA", unicode 0x2DF3
  63368 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER FITA", unicode 0x2DF4
  63373 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER ES-TE", unicode 0x2DF5
  63380 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER A", unicode 0x2DF6
  63384 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER IE", unicode 0x2DF7
  63389 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER DJERV", unicode 0x2DF8
  63394 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER MONOGRAPH UK", unicode 0x2DF9
  63401 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER YAT", unicode 0x2DFA
  63406 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER YU", unicode 0x2DFB
  63411 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER IOTIFIED A", unicode 0x2DFC
  63417 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER LITTLE YUS", unicode 0x2DFD
  63424 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER BIG YUS", unicode 0x2DFE
  63431 | (kUnicodeCategory_Mn << 27), // "COMBINING CYRILLIC LETTER IOTIFIED BIG YUS", unicode 0x2DFF
} ;

static const uint32_t gNamePage46 [256] = {
  63440 | (kUnicodeCategory_Po << 27), // "RIGHT ANGLE SUBSTITUTION MARKER", unicode 0x2E00
  63447 | (kUnicodeCategory_Po << 27), // "RIGHT ANGLE DOTTED SUBSTITUTION MARKER", unicode 0x2E01
  63456 | (kUnicodeCategory_Pi << 27), // "LEFT SUBSTITUTION BRACKET", unicode 0x2E02
  63461 | (kUnicodeCategory_Pf << 27), // "RIGHT SUBSTITUTION BRACKET", unicode 0x2E03
  63466 | (kUnicodeCategory_Pi << 27), // "LEFT DOTTED SUBSTITUTION BRACKET", unicode 0x2E04
  63473 | (kUnicodeCategory_Pf << 27), // "RIGHT DOTTED SUBSTITUTION BRACKET", unicode 0x2E05
  63480 | (kUnicodeCategory_Po << 27), // "RAISED INTERPOLATION MARKER", unicode 0x2E06
  63486 | (kUnicodeCategory_Po << 27), // "RAISED DOTTED INTERPOLATION MARKER", unicode 0x2E07
  63494 | (kUnicodeCategory_Po << 27), // "DOTTED TRANSPOSITION MARKER", unicode 0x2E08
  63500 | (kUnicodeCategory_Pi << 27), // "LEFT TRANSPOSITION BRACKET", unicode 0x2E09
  63505 | (kUnicodeCategory_Pf << 27), // "RIGHT TRANSPOSITION BRACKET", unicode 0x2E0A
  63510 | (kUnicodeCategory_Po << 27), // "RAISED SQUARE", unicode 0x2E0B
  63513 | (kUnicodeCategory_Pi << 27), // "LEFT RAISED OMISSION BRACKET", unicode 0x2E0C
  63520 | (kUnicodeCategory_Pf << 27), // "RIGHT RAISED OMISSION BRACKET", unicode 0x2E0D
  63527 | (kUnicodeCategory_Po << 27), // "EDITORIAL CORONIS", unicode 0x2E0E
  63533 | (kUnicodeCategory_Po << 27), // "PARAGRAPHOS", unicode 0x2E0F
  63535 | (kUnicodeCategory_Po << 27), // "FORKED PARAGRAPHOS", unicode 0x2E10
  63539 | (kUnicodeCategory_Po << 27), // "REVERSED FORKED PARAGRAPHOS", unicode 0x2E11
  63545 | (kUnicodeCategory_Po << 27), // "HYPODIASTOLE", unicode 0x2E12
  63548 | (kUnicodeCategory_Po << 27), // "DOTTED OBELOS", unicode 0x2E13
  63552 | (kUnicodeCategory_Po << 27), // "DOWNWARDS ANCORA", unicode 0x2E14
  63556 | (kUnicodeCategory_Po << 27), // "UPWARDS ANCORA", unicode 0x2E15
  63560 | (kUnicodeCategory_Po << 27), // "DOTTED RIGHT-POINTING ANGLE", unicode 0x2E16
  63567 | (kUnicodeCategory_Pd << 27), // "DOUBLE OBLIQUE HYPHEN", unicode 0x2E17
  63572 | (kUnicodeCategory_Po << 27), // "INVERTED INTERROBANG", unicode 0x2E18
  63576 | (kUnicodeCategory_Po << 27), // "PALM BRANCH", unicode 0x2E19
  63581 | (kUnicodeCategory_Pd << 27), // "HYPHEN WITH DIAERESIS", unicode 0x2E1A
  63586 | (kUnicodeCategory_Po << 27), // "TILDE WITH RING ABOVE", unicode 0x2E1B
  63592 | (kUnicodeCategory_Pi << 27), // "LEFT LOW PARAPHRASE BRACKET", unicode 0x2E1C
  63599 | (kUnicodeCategory_Pf << 27), // "RIGHT LOW PARAPHRASE BRACKET", unicode 0x2E1D
  63606 | (kUnicodeCategory_Po << 27), // "TILDE WITH DOT ABOVE", unicode 0x2E1E
  63611 | (kUnicodeCategory_Po << 27), // "TILDE WITH DOT BELOW", unicode 0x2E1F
  63616 | (kUnicodeCategory_Pi << 27), // "LEFT VERTICAL BAR WITH QUILL", unicode 0x2E20
  63623 | (kUnicodeCategory_Pf << 27), // "RIGHT VERTICAL BAR WITH QUILL", unicode 0x2E21
  63630 | (kUnicodeCategory_Ps << 27), // "TOP LEFT HALF BRACKET", unicode 0x2E22
  63637 | (kUnicodeCategory_Pe << 27), // "TOP RIGHT HALF BRACKET", unicode 0x2E23
  63644 | (kUnicodeCategory_Ps << 27), // "BOTTOM LEFT HALF BRACKET", unicode 0x2E24
  63651 | (kUnicodeCategory_Pe << 27), // "BOTTOM RIGHT HALF BRACKET", unicode 0x2E25
  63658 | (kUnicodeCategory_Ps << 27), // "LEFT SIDEWAYS U BRACKET", unicode 0x2E26
  63664 | (kUnicodeCategory_Pe << 27), // "RIGHT SIDEWAYS U BRACKET", unicode 0x2E27
  63670 | (kUnicodeCategory_Ps << 27), // "LEFT DOUBLE PARENTHESIS", unicode 0x2E28
  63674 | (kUnicodeCategory_Pe << 27), // "RIGHT DOUBLE PARENTHESIS", unicode 0x2E29
  63678 | (kUnicodeCategory_Po << 27), // "TWO DOTS OVER ONE DOT PUNCTUATION", unicode 0x2E2A
  63688 | (kUnicodeCategory_Po << 27), // "ONE DOT OVER TWO DOTS PUNCTUATION", unicode 0x2E2B
  63698 | (kUnicodeCategory_Po << 27), // "SQUARED FOUR DOT PUNCTUATION", unicode 0x2E2C
  63705 | (kUnicodeCategory_Po << 27), // "FIVE DOT MARK", unicode 0x2E2D
  63709 | (kUnicodeCategory_Po << 27), // "REVERSED QUESTION MARK", unicode 0x2E2E
  63714 | (kUnicodeCategory_Lm << 27), // "VERTICAL TILDE", unicode 0x2E2F
  63717 | (kUnicodeCategory_Po << 27), // "RING POINT", unicode 0x2E30
  0, // undefined code 0x2E31
  0, // undefined code 0x2E32
  0, // undefined code 0x2E33
  0, // undefined code 0x2E34
  0, // undefined code 0x2E35
  0, // undefined code 0x2E36
  0, // undefined code 0x2E37
  0, // undefined code 0x2E38
  0, // undefined code 0x2E39
  0, // undefined code 0x2E3A
  0, // undefined code 0x2E3B
  0, // undefined code 0x2E3C
  0, // undefined code 0x2E3D
  0, // undefined code 0x2E3E
  0, // undefined code 0x2E3F
  0, // undefined code 0x2E40
  0, // undefined code 0x2E41
  0, // undefined code 0x2E42
  0, // undefined code 0x2E43
  0, // undefined code 0x2E44
  0, // undefined code 0x2E45
  0, // undefined code 0x2E46
  0, // undefined code 0x2E47
  0, // undefined code 0x2E48
  0, // undefined code 0x2E49
  0, // undefined code 0x2E4A
  0, // undefined code 0x2E4B
  0, // undefined code 0x2E4C
  0, // undefined code 0x2E4D
  0, // undefined code 0x2E4E
  0, // undefined code 0x2E4F
  0, // undefined code 0x2E50
  0, // undefined code 0x2E51
  0, // undefined code 0x2E52
  0, // undefined code 0x2E53
  0, // undefined code 0x2E54
  0, // undefined code 0x2E55
  0, // undefined code 0x2E56
  0, // undefined code 0x2E57
  0, // undefined code 0x2E58
  0, // undefined code 0x2E59
  0, // undefined code 0x2E5A
  0, // undefined code 0x2E5B
  0, // undefined code 0x2E5C
  0, // undefined code 0x2E5D
  0, // undefined code 0x2E5E
  0, // undefined code 0x2E5F
  0, // undefined code 0x2E60
  0, // undefined code 0x2E61
  0, // undefined code 0x2E62
  0, // undefined code 0x2E63
  0, // undefined code 0x2E64
  0, // undefined code 0x2E65
  0, // undefined code 0x2E66
  0, // undefined code 0x2E67
  0, // undefined code 0x2E68
  0, // undefined code 0x2E69
  0, // undefined code 0x2E6A
  0, // undefined code 0x2E6B
  0, // undefined code 0x2E6C
  0, // undefined code 0x2E6D
  0, // undefined code 0x2E6E
  0, // undefined code 0x2E6F
  0, // undefined code 0x2E70
  0, // undefined code 0x2E71
  0, // undefined code 0x2E72
  0, // undefined code 0x2E73
  0, // undefined code 0x2E74
  0, // undefined code 0x2E75
  0, // undefined code 0x2E76
  0, // undefined code 0x2E77
  0, // undefined code 0x2E78
  0, // undefined code 0x2E79
  0, // undefined code 0x2E7A
  0, // undefined code 0x2E7B
  0, // undefined code 0x2E7C
  0, // undefined code 0x2E7D
  0, // undefined code 0x2E7E
  0, // undefined code 0x2E7F
  63721 | (kUnicodeCategory_So << 27), // "CJK RADICAL REPEAT", unicode 0x2E80
  63725 | (kUnicodeCategory_So << 27), // "CJK RADICAL CLIFF", unicode 0x2E81
  63729 | (kUnicodeCategory_So << 27), // "CJK RADICAL SECOND ONE", unicode 0x2E82
  63735 | (kUnicodeCategory_So << 27), // "CJK RADICAL SECOND TWO", unicode 0x2E83
  63741 | (kUnicodeCategory_So << 27), // "CJK RADICAL SECOND THREE", unicode 0x2E84
  63747 | (kUnicodeCategory_So << 27), // "CJK RADICAL PERSON", unicode 0x2E85
  63752 | (kUnicodeCategory_So << 27), // "CJK RADICAL BOX", unicode 0x2E86
  63756 | (kUnicodeCategory_So << 27), // "CJK RADICAL TABLE", unicode 0x2E87
  63760 | (kUnicodeCategory_So << 27), // "CJK RADICAL KNIFE ONE", unicode 0x2E88
  63766 | (kUnicodeCategory_So << 27), // "CJK RADICAL KNIFE TWO", unicode 0x2E89
  63772 | (kUnicodeCategory_So << 27), // "CJK RADICAL DIVINATION", unicode 0x2E8A
  63776 | (kUnicodeCategory_So << 27), // "CJK RADICAL SEAL", unicode 0x2E8B
  63780 | (kUnicodeCategory_So << 27), // "CJK RADICAL SMALL ONE", unicode 0x2E8C
  63785 | (kUnicodeCategory_So << 27), // "CJK RADICAL SMALL TWO", unicode 0x2E8D
  63790 | (kUnicodeCategory_So << 27), // "CJK RADICAL LAME ONE", unicode 0x2E8E
  63796 | (kUnicodeCategory_So << 27), // "CJK RADICAL LAME TWO", unicode 0x2E8F
  63802 | (kUnicodeCategory_So << 27), // "CJK RADICAL LAME THREE", unicode 0x2E90
  63808 | (kUnicodeCategory_So << 27), // "CJK RADICAL LAME FOUR", unicode 0x2E91
  63814 | (kUnicodeCategory_So << 27), // "CJK RADICAL SNAKE", unicode 0x2E92
  63818 | (kUnicodeCategory_So << 27), // "CJK RADICAL THREAD", unicode 0x2E93
  63822 | (kUnicodeCategory_So << 27), // "CJK RADICAL SNOUT ONE", unicode 0x2E94
  63828 | (kUnicodeCategory_So << 27), // "CJK RADICAL SNOUT TWO", unicode 0x2E95
  63834 | (kUnicodeCategory_So << 27), // "CJK RADICAL HEART ONE", unicode 0x2E96
  63840 | (kUnicodeCategory_So << 27), // "CJK RADICAL HEART TWO", unicode 0x2E97
  63846 | (kUnicodeCategory_So << 27), // "CJK RADICAL HAND", unicode 0x2E98
  63850 | (kUnicodeCategory_So << 27), // "CJK RADICAL RAP", unicode 0x2E99
  0, // undefined code 0x2E9A
  63854 | (kUnicodeCategory_So << 27), // "CJK RADICAL CHOKE", unicode 0x2E9B
  63858 | (kUnicodeCategory_So << 27), // "CJK RADICAL SUN", unicode 0x2E9C
  63862 | (kUnicodeCategory_So << 27), // "CJK RADICAL MOON", unicode 0x2E9D
  63866 | (kUnicodeCategory_So << 27), // "CJK RADICAL DEATH", unicode 0x2E9E
  63870 | (kUnicodeCategory_So << 27), // "CJK RADICAL MOTHER", unicode 0x2E9F
  63875 | (kUnicodeCategory_So << 27), // "CJK RADICAL CIVILIAN", unicode 0x2EA0
  63880 | (kUnicodeCategory_So << 27), // "CJK RADICAL WATER ONE", unicode 0x2EA1
  63886 | (kUnicodeCategory_So << 27), // "CJK RADICAL WATER TWO", unicode 0x2EA2
  63892 | (kUnicodeCategory_So << 27), // "CJK RADICAL FIRE", unicode 0x2EA3
  63896 | (kUnicodeCategory_So << 27), // "CJK RADICAL PAW ONE", unicode 0x2EA4
  63902 | (kUnicodeCategory_So << 27), // "CJK RADICAL PAW TWO", unicode 0x2EA5
  63908 | (kUnicodeCategory_So << 27), // "CJK RADICAL SIMPLIFIED HALF TREE TRUNK", unicode 0x2EA6
  63918 | (kUnicodeCategory_So << 27), // "CJK RADICAL COW", unicode 0x2EA7
  63922 | (kUnicodeCategory_So << 27), // "CJK RADICAL DOG", unicode 0x2EA8
  63926 | (kUnicodeCategory_So << 27), // "CJK RADICAL JADE", unicode 0x2EA9
  63930 | (kUnicodeCategory_So << 27), // "CJK RADICAL BOLT OF CLOTH", unicode 0x2EAA
  63938 | (kUnicodeCategory_So << 27), // "CJK RADICAL EYE", unicode 0x2EAB
  63942 | (kUnicodeCategory_So << 27), // "CJK RADICAL SPIRIT ONE", unicode 0x2EAC
  63948 | (kUnicodeCategory_So << 27), // "CJK RADICAL SPIRIT TWO", unicode 0x2EAD
  63954 | (kUnicodeCategory_So << 27), // "CJK RADICAL BAMBOO", unicode 0x2EAE
  63958 | (kUnicodeCategory_So << 27), // "CJK RADICAL SILK", unicode 0x2EAF
  63962 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED SILK", unicode 0x2EB0
  63970 | (kUnicodeCategory_So << 27), // "CJK RADICAL NET ONE", unicode 0x2EB1
  63976 | (kUnicodeCategory_So << 27), // "CJK RADICAL NET TWO", unicode 0x2EB2
  63982 | (kUnicodeCategory_So << 27), // "CJK RADICAL NET THREE", unicode 0x2EB3
  63988 | (kUnicodeCategory_So << 27), // "CJK RADICAL NET FOUR", unicode 0x2EB4
  63994 | (kUnicodeCategory_So << 27), // "CJK RADICAL MESH", unicode 0x2EB5
  63999 | (kUnicodeCategory_So << 27), // "CJK RADICAL SHEEP", unicode 0x2EB6
  64003 | (kUnicodeCategory_So << 27), // "CJK RADICAL RAM", unicode 0x2EB7
  64007 | (kUnicodeCategory_So << 27), // "CJK RADICAL EWE", unicode 0x2EB8
  64011 | (kUnicodeCategory_So << 27), // "CJK RADICAL OLD", unicode 0x2EB9
  64015 | (kUnicodeCategory_So << 27), // "CJK RADICAL BRUSH ONE", unicode 0x2EBA
  64021 | (kUnicodeCategory_So << 27), // "CJK RADICAL BRUSH TWO", unicode 0x2EBB
  64027 | (kUnicodeCategory_So << 27), // "CJK RADICAL MEAT", unicode 0x2EBC
  64031 | (kUnicodeCategory_So << 27), // "CJK RADICAL MORTAR", unicode 0x2EBD
  64035 | (kUnicodeCategory_So << 27), // "CJK RADICAL GRASS ONE", unicode 0x2EBE
  64041 | (kUnicodeCategory_So << 27), // "CJK RADICAL GRASS TWO", unicode 0x2EBF
  64047 | (kUnicodeCategory_So << 27), // "CJK RADICAL GRASS THREE", unicode 0x2EC0
  64053 | (kUnicodeCategory_So << 27), // "CJK RADICAL TIGER", unicode 0x2EC1
  64057 | (kUnicodeCategory_So << 27), // "CJK RADICAL CLOTHES", unicode 0x2EC2
  64061 | (kUnicodeCategory_So << 27), // "CJK RADICAL WEST ONE", unicode 0x2EC3
  64067 | (kUnicodeCategory_So << 27), // "CJK RADICAL WEST TWO", unicode 0x2EC4
  64073 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED SEE", unicode 0x2EC5
  64081 | (kUnicodeCategory_So << 27), // "CJK RADICAL SIMPLIFIED HORN", unicode 0x2EC6
  64087 | (kUnicodeCategory_So << 27), // "CJK RADICAL HORN", unicode 0x2EC7
  64091 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED SPEECH", unicode 0x2EC8
  64099 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED SHELL", unicode 0x2EC9
  64107 | (kUnicodeCategory_So << 27), // "CJK RADICAL FOOT", unicode 0x2ECA
  64111 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED CART", unicode 0x2ECB
  64119 | (kUnicodeCategory_So << 27), // "CJK RADICAL SIMPLIFIED WALK", unicode 0x2ECC
  64125 | (kUnicodeCategory_So << 27), // "CJK RADICAL WALK ONE", unicode 0x2ECD
  64131 | (kUnicodeCategory_So << 27), // "CJK RADICAL WALK TWO", unicode 0x2ECE
  64137 | (kUnicodeCategory_So << 27), // "CJK RADICAL CITY", unicode 0x2ECF
  64141 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED GOLD", unicode 0x2ED0
  64149 | (kUnicodeCategory_So << 27), // "CJK RADICAL LONG ONE", unicode 0x2ED1
  64155 | (kUnicodeCategory_So << 27), // "CJK RADICAL LONG TWO", unicode 0x2ED2
  64161 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED LONG", unicode 0x2ED3
  64169 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED GATE", unicode 0x2ED4
  64177 | (kUnicodeCategory_So << 27), // "CJK RADICAL MOUND ONE", unicode 0x2ED5
  64183 | (kUnicodeCategory_So << 27), // "CJK RADICAL MOUND TWO", unicode 0x2ED6
  64189 | (kUnicodeCategory_So << 27), // "CJK RADICAL RAIN", unicode 0x2ED7
  64193 | (kUnicodeCategory_So << 27), // "CJK RADICAL BLUE", unicode 0x2ED8
  64197 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED TANNED LEATHER", unicode 0x2ED9
  64207 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED LEAF", unicode 0x2EDA
  64215 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED WIND", unicode 0x2EDB
  64223 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED FLY", unicode 0x2EDC
  64231 | (kUnicodeCategory_So << 27), // "CJK RADICAL EAT ONE", unicode 0x2EDD
  64237 | (kUnicodeCategory_So << 27), // "CJK RADICAL EAT TWO", unicode 0x2EDE
  64243 | (kUnicodeCategory_So << 27), // "CJK RADICAL EAT THREE", unicode 0x2EDF
  64249 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED EAT", unicode 0x2EE0
  64257 | (kUnicodeCategory_So << 27), // "CJK RADICAL HEAD", unicode 0x2EE1
  64261 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED HORSE", unicode 0x2EE2
  64269 | (kUnicodeCategory_So << 27), // "CJK RADICAL BONE", unicode 0x2EE3
  64273 | (kUnicodeCategory_So << 27), // "CJK RADICAL GHOST", unicode 0x2EE4
  64277 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED FISH", unicode 0x2EE5
  64285 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED BIRD", unicode 0x2EE6
  64293 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED SALT", unicode 0x2EE7
  64301 | (kUnicodeCategory_So << 27), // "CJK RADICAL SIMPLIFIED WHEAT", unicode 0x2EE8
  64307 | (kUnicodeCategory_So << 27), // "CJK RADICAL SIMPLIFIED YELLOW", unicode 0x2EE9
  64313 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED FROG", unicode 0x2EEA
  64321 | (kUnicodeCategory_So << 27), // "CJK RADICAL J-SIMPLIFIED EVEN", unicode 0x2EEB
  64329 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED EVEN", unicode 0x2EEC
  64337 | (kUnicodeCategory_So << 27), // "CJK RADICAL J-SIMPLIFIED TOOTH", unicode 0x2EED
  64345 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED TOOTH", unicode 0x2EEE
  64353 | (kUnicodeCategory_So << 27), // "CJK RADICAL J-SIMPLIFIED DRAGON", unicode 0x2EEF
  64361 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED DRAGON", unicode 0x2EF0
  64369 | (kUnicodeCategory_So << 27), // "CJK RADICAL TURTLE", unicode 0x2EF1
  64373 | (kUnicodeCategory_So << 27), // "CJK RADICAL J-SIMPLIFIED TURTLE", unicode 0x2EF2
  64381 | (kUnicodeCategory_So << 27), // "CJK RADICAL C-SIMPLIFIED TURTLE", unicode 0x2EF3
  0, // undefined code 0x2EF4
  0, // undefined code 0x2EF5
  0, // undefined code 0x2EF6
  0, // undefined code 0x2EF7
  0, // undefined code 0x2EF8
  0, // undefined code 0x2EF9
  0, // undefined code 0x2EFA
  0, // undefined code 0x2EFB
  0, // undefined code 0x2EFC
  0, // undefined code 0x2EFD
  0, // undefined code 0x2EFE
  0, // undefined code 0x2EFF
} ;

static const uint32_t gNamePage47 [256] = {
  64389 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ONE", unicode 0x2F00
  64393 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LINE", unicode 0x2F01
  64397 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOT", unicode 0x2F02
  64400 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SLASH", unicode 0x2F03
  64404 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SECOND", unicode 0x2F04
  64408 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HOOK", unicode 0x2F05
  64412 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TWO", unicode 0x2F06
  64416 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LID", unicode 0x2F07
  64420 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MAN", unicode 0x2F08
  64424 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LEGS", unicode 0x2F09
  64429 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ENTER", unicode 0x2F0A
  64433 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EIGHT", unicode 0x2F0B
  64437 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOWN BOX", unicode 0x2F0C
  64443 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL COVER", unicode 0x2F0D
  64448 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ICE", unicode 0x2F0E
  64452 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TABLE", unicode 0x2F0F
  64456 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL OPEN BOX", unicode 0x2F10
  64462 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL KNIFE", unicode 0x2F11
  64466 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL POWER", unicode 0x2F12
  64470 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WRAP", unicode 0x2F13
  64475 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SPOON", unicode 0x2F14
  64480 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RIGHT OPEN BOX", unicode 0x2F15
  64487 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HIDING ENCLOSURE", unicode 0x2F16
  64493 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TEN", unicode 0x2F17
  64497 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DIVINATION", unicode 0x2F18
  64501 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SEAL", unicode 0x2F19
  64505 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CLIFF", unicode 0x2F1A
  64509 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL PRIVATE", unicode 0x2F1B
  64513 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL AGAIN", unicode 0x2F1C
  64518 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MOUTH", unicode 0x2F1D
  64522 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ENCLOSURE", unicode 0x2F1E
  64526 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EARTH", unicode 0x2F1F
  64530 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SCHOLAR", unicode 0x2F20
  64534 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GO", unicode 0x2F21
  64538 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GO SLOWLY", unicode 0x2F22
  64545 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EVENING", unicode 0x2F23
  64550 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BIG", unicode 0x2F24
  64554 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WOMAN", unicode 0x2F25
  64558 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CHILD", unicode 0x2F26
  64562 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ROOF", unicode 0x2F27
  64567 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL INCH", unicode 0x2F28
  64572 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SMALL", unicode 0x2F29
  64575 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LAME", unicode 0x2F2A
  64579 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CORPSE", unicode 0x2F2B
  64583 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SPROUT", unicode 0x2F2C
  64588 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MOUNTAIN", unicode 0x2F2D
  64592 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RIVER", unicode 0x2F2E
  64597 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WORK", unicode 0x2F2F
  64601 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ONESELF", unicode 0x2F30
  64606 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TURBAN", unicode 0x2F31
  64611 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DRY", unicode 0x2F32
  64615 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SHORT THREAD", unicode 0x2F33
  64621 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOTTED CLIFF", unicode 0x2F34
  64627 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LONG STRIDE", unicode 0x2F35
  64634 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TWO HANDS", unicode 0x2F36
  64641 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SHOOT", unicode 0x2F37
  64646 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BOW", unicode 0x2F38
  64650 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SNOUT", unicode 0x2F39
  64654 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BRISTLE", unicode 0x2F3A
  64658 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL STEP", unicode 0x2F3B
  64662 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HEART", unicode 0x2F3C
  64666 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HALBERD", unicode 0x2F3D
  64671 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOOR", unicode 0x2F3E
  64676 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HAND", unicode 0x2F3F
  64680 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BRANCH", unicode 0x2F40
  64684 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RAP", unicode 0x2F41
  64688 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SCRIPT", unicode 0x2F42
  64692 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DIPPER", unicode 0x2F43
  64697 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL AXE", unicode 0x2F44
  64701 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SQUARE", unicode 0x2F45
  64704 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL NOT", unicode 0x2F46
  64708 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SUN", unicode 0x2F47
  64712 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SAY", unicode 0x2F48
  64717 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MOON", unicode 0x2F49
  64721 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TREE", unicode 0x2F4A
  64725 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LACK", unicode 0x2F4B
  64730 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL STOP", unicode 0x2F4C
  64734 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DEATH", unicode 0x2F4D
  64738 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WEAPON", unicode 0x2F4E
  64743 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DO NOT", unicode 0x2F4F
  64749 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL COMPARE", unicode 0x2F50
  64753 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FUR", unicode 0x2F51
  64757 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CLAN", unicode 0x2F52
  64762 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL STEAM", unicode 0x2F53
  64767 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WATER", unicode 0x2F54
  64771 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FIRE", unicode 0x2F55
  64775 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CLAW", unicode 0x2F56
  64780 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FATHER", unicode 0x2F57
  64785 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOUBLE X", unicode 0x2F58
  64790 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HALF TREE TRUNK", unicode 0x2F59
  64798 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SLICE", unicode 0x2F5A
  64802 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FANG", unicode 0x2F5B
  64807 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL COW", unicode 0x2F5C
  64811 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOG", unicode 0x2F5D
  64815 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL PROFOUND", unicode 0x2F5E
  64820 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL JADE", unicode 0x2F5F
  64824 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MELON", unicode 0x2F60
  64829 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TILE", unicode 0x2F61
  64833 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SWEET", unicode 0x2F62
  64838 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LIFE", unicode 0x2F63
  64843 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL USE", unicode 0x2F64
  64847 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FIELD", unicode 0x2F65
  64851 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BOLT OF CLOTH", unicode 0x2F66
  64859 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SICKNESS", unicode 0x2F67
  64864 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DOTTED TENT", unicode 0x2F68
  64871 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WHITE", unicode 0x2F69
  64875 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SKIN", unicode 0x2F6A
  64879 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DISH", unicode 0x2F6B
  64883 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EYE", unicode 0x2F6C
  64887 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SPEAR", unicode 0x2F6D
  64891 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ARROW", unicode 0x2F6E
  64894 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL STONE", unicode 0x2F6F
  64899 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SPIRIT", unicode 0x2F70
  64903 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TRACK", unicode 0x2F71
  64907 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GRAIN", unicode 0x2F72
  64911 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CAVE", unicode 0x2F73
  64916 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL STAND", unicode 0x2F74
  64921 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BAMBOO", unicode 0x2F75
  64925 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RICE", unicode 0x2F76
  64930 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SILK", unicode 0x2F77
  64934 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL JAR", unicode 0x2F78
  64938 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL NET", unicode 0x2F79
  64942 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SHEEP", unicode 0x2F7A
  64946 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FEATHER", unicode 0x2F7B
  64950 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL OLD", unicode 0x2F7C
  64954 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL AND", unicode 0x2F7D
  64957 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL PLOW", unicode 0x2F7E
  64962 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EAR", unicode 0x2F7F
  64966 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BRUSH", unicode 0x2F80
  64970 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MEAT", unicode 0x2F81
  64974 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MINISTER", unicode 0x2F82
  64978 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SELF", unicode 0x2F83
  64982 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL ARRIVE", unicode 0x2F84
  64987 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MORTAR", unicode 0x2F85
  64991 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TONGUE", unicode 0x2F86
  64995 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL OPPOSE", unicode 0x2F87
  65000 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BOAT", unicode 0x2F88
  65005 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL STOPPING", unicode 0x2F89
  65010 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL COLOR", unicode 0x2F8A
  65014 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GRASS", unicode 0x2F8B
  65018 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TIGER", unicode 0x2F8C
  65022 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL INSECT", unicode 0x2F8D
  65027 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BLOOD", unicode 0x2F8E
  65031 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WALK ENCLOSURE", unicode 0x2F8F
  65037 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CLOTHES", unicode 0x2F90
  65041 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WEST", unicode 0x2F91
  65045 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SEE", unicode 0x2F92
  65049 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HORN", unicode 0x2F93
  65053 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SPEECH", unicode 0x2F94
  65057 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL VALLEY", unicode 0x2F95
  65062 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BEAN", unicode 0x2F96
  65066 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL PIG", unicode 0x2F97
  65071 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BADGER", unicode 0x2F98
  65076 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SHELL", unicode 0x2F99
  65080 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RED", unicode 0x2F9A
  65084 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RUN", unicode 0x2F9B
  65088 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FOOT", unicode 0x2F9C
  65092 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BODY", unicode 0x2F9D
  65096 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CART", unicode 0x2F9E
  65100 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BITTER", unicode 0x2F9F
  65105 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MORNING", unicode 0x2FA0
  65109 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WALK", unicode 0x2FA1
  65113 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CITY", unicode 0x2FA2
  65117 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WINE", unicode 0x2FA3
  65121 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DISTINGUISH", unicode 0x2FA4
  65126 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL VILLAGE", unicode 0x2FA5
  65130 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GOLD", unicode 0x2FA6
  65134 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LONG", unicode 0x2FA7
  65138 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GATE", unicode 0x2FA8
  65142 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MOUND", unicode 0x2FA9
  65146 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SLAVE", unicode 0x2FAA
  65151 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SHORT TAILED BIRD", unicode 0x2FAB
  65159 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RAIN", unicode 0x2FAC
  65163 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BLUE", unicode 0x2FAD
  65167 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WRONG", unicode 0x2FAE
  65172 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FACE", unicode 0x2FAF
  65176 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LEATHER", unicode 0x2FB0
  65180 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TANNED LEATHER", unicode 0x2FB1
  65186 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LEEK", unicode 0x2FB2
  65191 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SOUND", unicode 0x2FB3
  65195 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL LEAF", unicode 0x2FB4
  65199 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WIND", unicode 0x2FB5
  65203 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FLY", unicode 0x2FB6
  65207 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EAT", unicode 0x2FB7
  65211 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HEAD", unicode 0x2FB8
  65215 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FRAGRANT", unicode 0x2FB9
  65220 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HORSE", unicode 0x2FBA
  65224 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BONE", unicode 0x2FBB
  65228 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TALL", unicode 0x2FBC
  65232 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HAIR", unicode 0x2FBD
  65236 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FIGHT", unicode 0x2FBE
  65240 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SACRIFICIAL WINE", unicode 0x2FBF
  65247 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL CAULDRON", unicode 0x2FC0
  65251 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL GHOST", unicode 0x2FC1
  65255 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FISH", unicode 0x2FC2
  65259 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BIRD", unicode 0x2FC3
  65263 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL SALT", unicode 0x2FC4
  65267 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DEER", unicode 0x2FC5
  65271 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL WHEAT", unicode 0x2FC6
  65275 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL HEMP", unicode 0x2FC7
  65280 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL YELLOW", unicode 0x2FC8
  65284 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL MILLET", unicode 0x2FC9
  65288 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL BLACK", unicode 0x2FCA
  65292 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EMBROIDERY", unicode 0x2FCB
  65296 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FROG", unicode 0x2FCC
  65300 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TRIPOD", unicode 0x2FCD
  65304 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DRUM", unicode 0x2FCE
  65308 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL RAT", unicode 0x2FCF
  65312 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL NOSE", unicode 0x2FD0
  65317 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL EVEN", unicode 0x2FD1
  65321 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TOOTH", unicode 0x2FD2
  65325 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL DRAGON", unicode 0x2FD3
  65329 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL TURTLE", unicode 0x2FD4
  65333 | (kUnicodeCategory_So << 27), // "KANGXI RADICAL FLUTE", unicode 0x2FD5
  0, // undefined code 0x2FD6
  0, // undefined code 0x2FD7
  0, // undefined code 0x2FD8
  0, // undefined code 0x2FD9
  0, // undefined code 0x2FDA
  0, // undefined code 0x2FDB
  0, // undefined code 0x2FDC
  0, // undefined code 0x2FDD
  0, // undefined code 0x2FDE
  0, // undefined code 0x2FDF
  0, // undefined code 0x2FE0
  0, // undefined code 0x2FE1
  0, // undefined code 0x2FE2
  0, // undefined code 0x2FE3
  0, // undefined code 0x2FE4
  0, // undefined code 0x2FE5
  0, // undefined code 0x2FE6
  0, // undefined code 0x2FE7
  0, // undefined code 0x2FE8
  0, // undefined code 0x2FE9
  0, // undefined code 0x2FEA
  0, // undefined code 0x2FEB
  0, // undefined code 0x2FEC
  0, // undefined code 0x2FED
  0, // undefined code 0x2FEE
  0, // undefined code 0x2FEF
  65337 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER LEFT TO RIGHT", unicode 0x2FF0
  65347 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER ABOVE TO BELOW", unicode 0x2FF1
  65357 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER LEFT TO MIDDLE AND RIGHT", unicode 0x2FF2
  65370 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER ABOVE TO MIDDLE AND BELOW", unicode 0x2FF3
  65383 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER FULL SURROUND", unicode 0x2FF4
  65393 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER SURROUND FROM ABOVE", unicode 0x2FF5
  65404 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER SURROUND FROM BELOW", unicode 0x2FF6
  65415 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER SURROUND FROM LEFT", unicode 0x2FF7
  65426 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER SURROUND FROM UPPER LEFT", unicode 0x2FF8
  65439 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER SURROUND FROM UPPER RIGHT", unicode 0x2FF9
  65452 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER SURROUND FROM LOWER LEFT", unicode 0x2FFA
  65465 | (kUnicodeCategory_So << 27), // "IDEOGRAPHIC DESCRIPTION CHARACTER OVERLAID", unicode 0x2FFB
  0, // undefined code 0x2FFC
  0, // undefined code 0x2FFD
  0, // undefined code 0x2FFE
  0, // undefined code 0x2FFF
} ;

//--------------------------------------------------------------------------------------------------
