/*
 *  metamodel_methods.cpp
 *  galgas
 *
 *  Created by Pierre MOLINARO on 26/10/06.
 *  Copyright 2006 __MyCompanyName__. All rights reserved.
 *
 */
//---------------------------------------------------------------------------*

#include "semantics_semantics.h"
#include "utilities/MF_MemoryControl.h"

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark descriptionReaderCall
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
descriptionReaderCall (AC_OutputStream & inHFile,
                       const C_String & inPropertyName) const {
  inHFile << "    << " << inPropertyName << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1)\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
descriptionReaderCall (AC_OutputStream & inHFile,
                       const C_String & inPropertyName) const {
  inHFile << "    << " << inPropertyName << "->reader_description  (_inLexique COMMA_THERE, inIndentation + 1)\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
descriptionReaderCall (AC_OutputStream & inHFile,
                       const C_String & inPropertyName) const {
  inHFile << "    << " << inPropertyName << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1)\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark releasePropertyInDestructor
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
releasePropertyInDestructor (AC_OutputStream & /* inHFile */,
                             const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
releasePropertyInDestructor (AC_OutputStream & inHFile,
                             const C_String & inPropertyName) const {
  inHFile << "  macroDetachPointer (" << inPropertyName
          << ", GGS_" << mEntityTypeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateAttributeInMetamodel
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : " ;
  generateCppClassName (inHFile) ;
  inHFile << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGS_" << mEntityTypeName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGS__list_" << mEntityTypeName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateFormalParameter
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "const " ;
  generateCppClassName (inHFile) ;
  inHFile << " & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "GGS__list_" << mEntityTypeName
          << " & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "GGS_" << mEntityTypeName
          << " * & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateMultiplicityConstraintChecking
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateMultiplicityConstraintChecking (AC_OutputStream & /* ioCppFile */,
                                        const C_String & /* inCalledPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateMultiplicityConstraintChecking (AC_OutputStream & ioCppFile,
                                        const C_String & inCalledPropertyName) const {
  ioCppFile << "//--- Checking multiplicity of '" << inCalledPropertyName
            << "': [" << mLowerBound.uintValue () << ", " ;
  if (mUpperBound.uintValue () == 0) {
    ioCppFile << "*" ;
  }else{
    ioCppFile << mUpperBound.uintValue () ;
  }
  ioCppFile << "]\n"
            << " _inLexique.metamodelMultiplicityChecking (\"" << inCalledPropertyName << "\", "
            << inCalledPropertyName << ".count (), "
            << mLowerBound.uintValue () << ", "
            << mUpperBound.uintValue () << " COMMA_THERE) ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateDescription
#endif

//---------------------------------------------------------------------------*

void cPtr_AC_galgasType::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": \" << "
          << inPropertyName << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": \" << "
          << inPropertyName << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": \" << ((" << inPropertyName
          << " == NULL) ? C_String (\"null\") : " << inPropertyName
          << "->reader_description (_inLexique COMMA_THERE, inIndentation + 1)) << \"\\n\" ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_typeGalgas_singleReferenceEntity
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateAttributeDeclaration (const GGS_lstring & /* nom */,
                              AC_OutputStream & inHfile) const {
  inHfile << "?*?" ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateAttributeInitialization (const GGS_lstring & /* nom */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateCppClassName (AC_OutputStream & fichier) const {
  fichier << "GGS_" << mEntityTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_singleReferenceEntity::
generateAttributeGetLexicalValue (const C_String & /* inAttributeName */,
                                  AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cPtr_typeGalgas_multipleReferenceEntity
#endif

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateAttributeDeclaration (const GGS_lstring & /* nom */,
                              AC_OutputStream & /* inHfile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateAttributeInitialization (const GGS_lstring & /* nom */,
                                 AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateCppClassName (AC_OutputStream & fichier) const {
  fichier << "GGS__list_" << mEntityTypeName << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateAttributeGetLexicalValue (const C_String & /* inAttributeName */,
                                  AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
