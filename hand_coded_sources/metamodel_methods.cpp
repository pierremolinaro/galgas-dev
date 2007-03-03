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

void cPtr_metamodelProperty::
descriptionReaderCall (AC_OutputStream & /* inHFile */,
                       const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
descriptionReaderCall (AC_OutputStream & inHFile,
                       const C_String & inPropertyName) const {
  inHFile << "    << " << inPropertyName << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1)\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
descriptionReaderCall (AC_OutputStream & inHFile,
                       const C_String & inPropertyName) const {
  inHFile << "    << " << inPropertyName << "->reader_description  (_inLexique COMMA_THERE, inIndentation + 1)\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
descriptionReaderCall (AC_OutputStream & inHFile,
                       const C_String & inPropertyName) const {
  inHFile << "    << " << inPropertyName << ".reader_description  (_inLexique COMMA_THERE, inIndentation + 1)\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark releasePropertyInDestructor
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
releasePropertyInDestructor (AC_OutputStream & /* inHFile */,
                             const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
releasePropertyInDestructor (AC_OutputStream & inHFile,
                             const C_String & inPropertyName) const {
  inHFile << "  macroDetachPointer (" << inPropertyName
          << ", GGS_" << mReferenceEntityName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateAttributeInMetamodel
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateAttributeInMetamodel (AC_OutputStream & /* inHFile */,
                              const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : " ;
  mAttributeType (HERE)->generateCppClassName (inHFile) ;
  inHFile << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGS_" << mReferenceEntityName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGS_listOf" << mReferenceEntityName.stringWithUpperCaseFirstLetter ()
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateFormalParameter
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateFormalParameter (AC_OutputStream & /* inHFile */,
                         const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "const " ;
  mAttributeType (HERE)->generateCppClassName (inHFile) ;
  inHFile << " & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "GGS_listOf" << mReferenceEntityName.stringWithUpperCaseFirstLetter ()
          << " & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "GGS_" << mReferenceEntityName
          << " * & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateMultiplicityConstraintChecking
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateMultiplicityConstraintChecking (AC_OutputStream & /* ioCppFile */,
                                        const C_String & /* inCalledPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateMultiplicityConstraintChecking (AC_OutputStream & ioCppFile,
                                        const C_String & inCalledPropertyName) const {
  ioCppFile << "//--- Checking multiplicity of '" << inCalledPropertyName
            << "': [" << mLowerBound.uintValue () << ", " ;
  if (mHigherBound.uintValue () == 0) {
    ioCppFile << "*" ;
  }else{
    ioCppFile << mHigherBound.uintValue () ;
  }
  ioCppFile << "]\n"
            << " _inLexique.metamodelMultiplicityChecking (\"" << inCalledPropertyName << "\", "
            << inCalledPropertyName << ".count (), "
            << mLowerBound.uintValue () << ", "
            << mHigherBound.uintValue () << " COMMA_THERE) ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark metamodelObjectIsNeeded
#endif

//---------------------------------------------------------------------------*

bool cPtr_metamodelProperty::
metamodelObjectIsNeeded (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelAttributeProperty::
metamodelObjectIsNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelSingleReferenceProperty::
metamodelObjectIsNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelMultipleReferenceProperty::
metamodelObjectIsNeeded (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateInitInConstraintConstructor
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateInitInConstraintConstructor (AC_OutputStream & /* inHFile */,
                                     const C_String & /* inConstraintComponentName */,
                                     const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateTreeWalkingFormalParameter
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateTreeWalkingFormalParameter (AC_OutputStream & /* inHFile */,
                                    const C_String & /* inConstraintComponentName */,
                                    const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateTreeWalkingEffectiveArgument
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateTreeWalkingEffectiveArgument (AC_OutputStream & /* inHFile */,
                                      const C_String & /* inConstraintComponentName */,
                                      const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateTreeWalkingAttributAttachment
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateTreeWalkingAttributAttachment (AC_OutputStream & /* inHFile */,
                                       const C_String & /* inConstraintComponentName */,
                                       const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark metamodelObjectIsNeeded
#endif

//---------------------------------------------------------------------------*

bool cPtr_metamodelProperty::
readerDescriptionNeedsLexique (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelAttributeProperty::
readerDescriptionNeedsLexique (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelMultipleReferenceProperty::
readerDescriptionNeedsLexique (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelSingleReferenceProperty::
readerDescriptionNeedsLexique (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark descriptionReaderCallImplementationNeedsLexique
#endif

//---------------------------------------------------------------------------*

bool cPtr_metamodelProperty::
descriptionReaderCallImplementationNeedsLexique (void) const {
  return false ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelAttributeProperty::
descriptionReaderCallImplementationNeedsLexique (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelMultipleReferenceProperty::
descriptionReaderCallImplementationNeedsLexique (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

bool cPtr_metamodelSingleReferenceProperty::
descriptionReaderCallImplementationNeedsLexique (void) const {
  return true ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateDescription
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateDescription (AC_OutputStream & /* inHFile */,
                     const C_String & /* inConstraintComponentName */,
                     const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & /* inConstraintComponentName */,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": \" << "
          << inPropertyName << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & /* inConstraintComponentName */,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": \" << "
          << inPropertyName << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & /* inConstraintComponentName */,
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
  fichier << "GGS_listOf" << mEntityTypeName.stringWithUpperCaseFirstLetter () << " " ;
}

//---------------------------------------------------------------------------*

void cPtr_typeGalgas_multipleReferenceEntity::
generateAttributeGetLexicalValue (const C_String & /* inAttributeName */,
                                  AC_OutputStream & /* inCppFile */) const {
}

//---------------------------------------------------------------------------*
