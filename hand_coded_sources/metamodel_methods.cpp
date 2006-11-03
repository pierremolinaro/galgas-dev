/*
 *  metamodel_methods.cpp
 *  galgas
 *
 *  Created by Pierre MOLINARO on 26/10/06.
 *  Copyright 2006 __MyCompanyName__. All rights reserved.
 *
 */
//---------------------------------------------------------------------------*

#include "common_semantics.h"
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
  inHFile << "  macroMyDelete (" << inPropertyName
          << ", GGM_" << mReferenceEntityName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateAttributeInConstraint
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateAttributeInConstraint (AC_OutputStream & /* inHFile */,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile ,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGS_" << mAttributeTypeName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile ,
                               const C_String & inConstraintComponentName,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM__" << inConstraintComponentName << "_ConstraintOn_" << mReferenceEntityName
          << " * " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile ,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM__listOfConstraint_" << mReferenceEntityName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile ,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM_" << mMapTypeName
          << " * " << inPropertyName << " ;\n" ;
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
generateAttributeInMetamodel (AC_OutputStream & inHFile ,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGS_" << mAttributeTypeName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile ,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGM_" << mReferenceEntityName
          << " * " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile ,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGM__listOf_" << mReferenceEntityName
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
  inHFile << "const GGS_" << mAttributeTypeName
          << " & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "GGM__listOf_" << mReferenceEntityName
          << " & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateFormalParameter (AC_OutputStream & inHFile,
                         const C_String & inPropertyName) const {
  inHFile << "GGM_" << mReferenceEntityName
          << " * & _in_" << inPropertyName ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateCallInstruction
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateCallInstruction (AC_OutputStream & /* ioCppFile */,
                         const C_String & /* inCalledPropertyName */,
                         const C_String & /* inTargetFileName */,
                         const GGS_L_lstringList & /* inParameterList */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateCallInstruction (AC_OutputStream & ioCppFile,
                         const C_String & inCalledPropertyName,
                         const C_String & /* inTargetFileName */,
                         const GGS_L_lstringList & inParameterList) const {
  ioCppFile << "macroValidPointer (" << inCalledPropertyName << ") ;\n"
            << inCalledPropertyName << "->_performTreeWalking (_inLexique" ;
  GGS_L_lstringList::element_type * currentParameter = inParameterList.firstObject () ;
  while (currentParameter != NULL) {
    macroValidPointer (currentParameter) ;
    ioCppFile  << ", " << currentParameter->mString ;
    currentParameter = currentParameter->nextObject () ;
  }
  ioCppFile << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateCallInstruction (AC_OutputStream & ioCppFile,
                         const C_String & inCalledPropertyName,
                         const C_String & inTargetFileName,
                         const GGS_L_lstringList & inParameterList) const {
  ioCppFile << "{ GGS__" << inTargetFileName << "_ConstraintOn_" << inCalledPropertyName
            << " * _ptr = " << inCalledPropertyName << ".mFirstObject ;\n"
            << "  while (_ptr != NULL) {\n"
               "    macroValidPointer (_ptr) ;\n"
               "    _ptr->_performTreeWalking (_inLexique" ;
  GGS_L_lstringList::element_type * currentParameter = inParameterList.firstObject () ;
  while (currentParameter != NULL) {
    macroValidPointer (currentParameter) ;
    ioCppFile  << ", "<< currentParameter->mString ;
    currentParameter = currentParameter->nextObject () ;
  }
  ioCppFile << ") ;\n"
               "    _ptr = _ptr->_mNextObject ;\n"
               "  }\n"
               "}\n" ;
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
  #pragma mark generateInitInConstraintConstructor
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateInitInConstraintConstructor (AC_OutputStream & /* inHFile */,
                                     const C_String & /* inConstraintComponentName */,
                                     const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateInitInConstraintConstructor (AC_OutputStream & inHFile,
                                     const C_String & /* inConstraintComponentName */,
                                     const C_String & inPropertyName) const {
  inHFile << ",\n" << inPropertyName << " (NULL)" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateCreateInConstraintConstructor
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateCreateInConstraintConstructor (AC_OutputStream & /* inHFile */,
                                       const C_String & /* inConstraintComponentName */,
                                       const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateCreateInConstraintConstructor (AC_OutputStream & inHFile,
                                       const C_String & /* inConstraintComponentName */,
                                       const C_String & inPropertyName) const {
  inHFile << "  GGM_" << mMapTypeName << " * _p_" << inPropertyName << " = NULL ;\n"
             "  macroMyNew (_p_" << inPropertyName << ", GGM_" << mMapTypeName << " (HERE)) ;\n"
             "  macroAttachPointer ("
          << inPropertyName
          << ", _p_" << inPropertyName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark generateDeleteInConstraintDestructor
#endif

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateDeleteInConstraintDestructor (AC_OutputStream & /* inHFile */,
                                      const C_String & /* inConstraintComponentName */,
                                      const C_String & /* inPropertyName */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateDeleteInConstraintDestructor (AC_OutputStream & inHFile,
                                      const C_String & /* inConstraintComponentName */,
                                      const C_String & inPropertyName) const {
  inHFile << "  macroDetachPointer (" << inPropertyName << ", GGM_" << mMapTypeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*
