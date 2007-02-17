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
          << ", GGM_" << mReferenceEntityName << ") ;\n" ;
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
  inHFile << "  public : GGS_" << mAttributeTypeName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
                              const C_String & inPropertyName) const {
  inHFile << "  public : GGM_" << mReferenceEntityName
          << " * " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateAttributeInMetamodel (AC_OutputStream & inHFile,
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
  ioCppFile << "{ GGM__" << inTargetFileName << "_ConstraintOn_" << mReferenceEntityName
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

void cPtr_metamodelMapProperty::
generateInitInConstraintConstructor (AC_OutputStream & inHFile,
                                     const C_String & /* inConstraintComponentName */,
                                     const C_String & inPropertyName) const {
  inHFile << ",\n" << inPropertyName << " (NULL)" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSharedMapProperty::
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

static void
generate_constraint_object_creation (const GGS_representativeEntityMap & inRepresentativeEntityMap,
                                     const GGS_entityToImplementMap & inConstrainedEntityMap,
                                     const C_String & inBaseEntityName,
                                     const C_String & inCurrentVariableName,
                                     const C_String & inDestinationVar,
                                     const GGS_lstring & inConstraintComponentName,
                                     AC_OutputStream & inCppFile) {
  // co << "inBaseEntityName: " << inBaseEntityName << "\n" ;
  bool first = true ;
  GGS_representativeEntityMap::element_type * currentRepresentantEntity = inRepresentativeEntityMap.firstObject () ;
  while (currentRepresentantEntity != NULL) {
    macroValidPointer (currentRepresentantEntity) ;
    if (currentRepresentantEntity->mInfo.mSuperEntitySet.hasKey (inBaseEntityName)
     && (currentRepresentantEntity->mInfo.mRepresentativeEntityName.length () > 0)
     && (inConstrainedEntityMap.IDOfKey (currentRepresentantEntity->mKey) >= 0)) {
      // co << "Key: " << currentRepresentantEntity->mKey << ", INFO: " << currentRepresentantEntity->mInfo.mRepresentativeEntityName << "\n" ;
      if (first) {
        first = false ;
        inCppFile << "    if" ;
      }else{
        inCppFile << "    }else if" ;
      }
      inCppFile << " (typeid (GGM_" << currentRepresentantEntity->mKey << ") == typeid (* "
                << inCurrentVariableName << ")) {\n"
                   "      macroMyNew (" << inDestinationVar << ", GGM__"
                << inConstraintComponentName << "_ConstraintOn_"  << currentRepresentantEntity->mInfo.mRepresentativeEntityName
                << " ((GGM_" << currentRepresentantEntity->mKey << " *) " << inCurrentVariableName
                << " COMMA_HERE)) ;\n" ;
    }
    currentRepresentantEntity = currentRepresentantEntity->nextObject () ;
  }
  if (! first) {
    inCppFile << "    }\n" ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_metamodelProperty::
generateCreateInConstraintConstructor (AC_OutputStream & /* inHFile */,
                                       const GGS_lstring & /* inConstraintComponentName */,
                                       const GGS_lstring & /* inPropertyName */,
                                       const GGS_representativeEntityMap & /* inRepresentativeEntityMap */,
                                       const GGS_entityToImplementMap & /* inConstrainedEntityMap */) const {
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateCreateInConstraintConstructor (AC_OutputStream & inHFile,
                                       const GGS_lstring & /* inConstraintComponentName */,
                                       const GGS_lstring & inPropertyName,
                                       const GGS_representativeEntityMap & /* inRepresentativeEntityMap */,
                                       const GGS_entityToImplementMap & /* inConstrainedEntityMap */) const {
  inHFile << "  macroMyNew (" << inPropertyName << ", GGM_" << mMapTypeName << " (HERE)) ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
generateCreateInConstraintConstructor (AC_OutputStream & inHFile,
                                       const GGS_lstring & /* inConstraintComponentName */,
                                       const GGS_lstring & inPropertyName,
                                       const GGS_representativeEntityMap & /* inRepresentativeEntityMap */,
                                       const GGS_entityToImplementMap & /* inConstrainedEntityMap */) const {
  inHFile << "  " << inPropertyName << " = _inMetamodelObject->" << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateCreateInConstraintConstructor (AC_OutputStream & inHFile,
                                       const GGS_lstring & inConstraintComponentName,
                                       const GGS_lstring & inPropertyName,
                                       const GGS_representativeEntityMap & inRepresentativeEntityMap,
                                       const GGS_entityToImplementMap & inConstrainedEntityMap) const {
  C_String currentVarName = C_String ("_p_") ;
  currentVarName << inPropertyName.currentLocation () ;
  const C_String destinationVar ("_p") ;
  inHFile << "  GGM_" << mReferenceEntityName << " * " << currentVarName
          << " = _inMetamodelObject->" << inPropertyName << "._mFirstObject ;\n"
          << "  while (" << currentVarName << " != NULL) {\n"
             "    GGM__" << inConstraintComponentName << "_ConstraintOn_"
          << mReferenceEntityName << " * " << destinationVar << " = NULL ;\n" ;
  generate_constraint_object_creation (inRepresentativeEntityMap,
                                       inConstrainedEntityMap,
                                       mReferenceEntityName,
                                       currentVarName,
                                       destinationVar,
                                       inConstraintComponentName,
                                       inHFile) ;
  inHFile << "    " << inPropertyName << ".add (" << destinationVar << ") ;\n"
             "    " << currentVarName << " = " << currentVarName << "->_mNextObject ;\n"
             "  }\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateCreateInConstraintConstructor (AC_OutputStream & inHFile,
                                       const GGS_lstring & inConstraintComponentName,
                                       const GGS_lstring & inPropertyName,
                                       const GGS_representativeEntityMap & /* inRepresentativeEntityMap */,
                                       const GGS_entityToImplementMap & /* inConstrainedEntityMap */) const {
  inHFile << "  macroMyNew (" << inPropertyName
          << ", GGM__" << inConstraintComponentName << "_ConstraintOn_"
          << mReferenceEntityName << " (_inMetamodelObject->"
          << inPropertyName << " COMMA_HERE)) ;\n" ;
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

void cPtr_mapIndexProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : C_GGS_MapIndex " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelAttributeProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGS_" << mAttributeTypeName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSingleReferenceProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile,
                               const C_String & inConstraintComponentName,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM__" << inConstraintComponentName << "_ConstraintOn_" << mReferenceEntityName
          << " * " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMultipleReferenceProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM__listOfConstraint_" << mReferenceEntityName
          << " " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM_" << mMapTypeName
          << " * " << inPropertyName << " ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSharedMapProperty::
generateAttributeInConstraint (AC_OutputStream & inHFile,
                               const C_String & /* inConstraintComponentName */,
                               const C_String & inPropertyName) const {
  inHFile << "  public : GGM_" << mMapTypeName
          << " * " << inPropertyName << " ;\n" ;
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

void cPtr_metamodelSingleReferenceProperty::
generateDeleteInConstraintDestructor (AC_OutputStream & inHFile,
                                      const C_String & inConstraintComponentName,
                                      const C_String & inPropertyName) const {
  inHFile << "  macroDetachPointer (" << inPropertyName
          << ", GGM__" << inConstraintComponentName << "_ConstraintOn_"
          << mReferenceEntityName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelMapProperty::
generateDeleteInConstraintDestructor (AC_OutputStream & inHFile,
                                      const C_String & /* inConstraintComponentName */,
                                      const C_String & inPropertyName) const {
  inHFile << "  macroDetachPointer (" << inPropertyName << ", GGM_" << mMapTypeName << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_metamodelSharedMapProperty::
generateDeleteInConstraintDestructor (AC_OutputStream & inHFile,
                                      const C_String & /* inConstraintComponentName */,
                                      const C_String & inPropertyName) const {
  inHFile << "  macroDetachPointer (" << inPropertyName << ", GGM_" << mMapTypeName << ") ;\n" ;
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

void cPtr_metamodelSharedMapProperty::
generateTreeWalkingFormalParameter (AC_OutputStream & inHFile,
                                    const C_String & /* inConstraintComponentName */,
                                    const C_String & inPropertyName) const {
 inHFile << ",\n"
            "                     GGM_"
         << mMapTypeName << " * _inParameter_" << inPropertyName ;
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

void cPtr_metamodelSharedMapProperty::
generateTreeWalkingEffectiveArgument (AC_OutputStream & inHFile,
                                      const C_String & /* inConstraintComponentName */,
                                      const C_String & inPropertyName) const {
 inHFile << ", _inParameter_" << inPropertyName ;
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

void cPtr_metamodelSharedMapProperty::
generateTreeWalkingAttributAttachment (AC_OutputStream & inHFile,
                                       const C_String & /* inConstraintComponentName */,
                                       const C_String & inPropertyName) const {
 inHFile << "  macroAssignPointer (" << inPropertyName
         << ", _inParameter_" << inPropertyName << ") ;\n" ;
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

void cPtr_metamodelSharedMapProperty::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & /* inConstraintComponentName */,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": shared map %" << mMapTypeName << " object \" ;\n"
             "  if (" << inPropertyName << " == NULL) {\n"
             "    s << \"NULL\\n\" ;\n"
             "  }else{\n"
             "    s << \"#\" << " << inPropertyName << "->mCreationIndex << \"\\n\" ;\n"
             "  }\n" ;
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

void cPtr_metamodelMapProperty::
generateDescription (AC_OutputStream & inHFile,
                     const C_String & /* inConstraintComponentName */,
                     const C_String & inPropertyName) const {
  inHFile << "  s.writeStringMultiple (\"| \", inIndentation) ;\n"
             "  s << \"|-" << inPropertyName << ": map %" << mMapTypeName << " object \" ;\n"
             "  if (" << inPropertyName << " == NULL) {\n"
             "    s << \"NULL\\n\" ;\n"
             "  }else{\n"
             "    s << \"#\" << " << inPropertyName << "->mCreationIndex << \"\\n\" ;\n"
             "  }\n" ;
//             "  s << \"|-" << inPropertyName << ": \" << "
//          << inPropertyName << ".reader_description (_inLexique COMMA_THERE, inIndentation + 1) << \"\\n\" ;\n" ;
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
