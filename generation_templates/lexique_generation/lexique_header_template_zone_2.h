
#ifndef %LEXIQUE_CLASS_NAME%_0_DEFINED
#define %LEXIQUE_CLASS_NAME%_0_DEFINED

//---------------------------------------------------------------------------*

#include "galgas/GGS_lstring.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_lbool.h"
#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                          Lexical scanner class                            *
//                                                                           *
//---------------------------------------------------------------------------*

class cTokenFor_%LEXIQUE_CLASS_NAME% : public cToken {
  %USER_DEFINED_ATTRIBUTE_DECLARATION%

  public : cTokenFor_%LEXIQUE_CLASS_NAME% (void) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                          Lexical scanner class                            *
//                                                                           *
//---------------------------------------------------------------------------*

class %LEXIQUE_CLASS_NAME% : public C_Lexique {
//--- Constructors
  public : %LEXIQUE_CLASS_NAME% (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       C_galgas_io * inParametersPtr,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : %LEXIQUE_CLASS_NAME% (C_Compiler * inCallerCompiler,
                       C_galgas_io * inParametersPtr,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~%LEXIQUE_CLASS_NAME% (void) {}
  #endif
