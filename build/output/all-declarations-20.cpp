#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-20.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXBuildFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXBuildFile * p = (const cPtr_Xcode_5F_PBXBuildFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXBuildFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFile.objectCompare (p->mAttribute_mSourceFile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXBuildFile::objectCompare (const GALGAS_Xcode_5F_PBXBuildFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile::GALGAS_Xcode_5F_PBXBuildFile (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile::GALGAS_Xcode_5F_PBXBuildFile (const cPtr_Xcode_5F_PBXBuildFile * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXBuildFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile GALGAS_Xcode_5F_PBXBuildFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                            const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inAttribute_mSourceFile
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXBuildFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mSourceFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXBuildFile (inAttribute_mSequenceNumber, inAttribute_mSourceFile COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXBuildFile::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXBuildFile * p = (const cPtr_Xcode_5F_PBXBuildFile *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXBuildFile) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXBuildFile::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_abstract GALGAS_Xcode_5F_PBXBuildFile::reader_mSourceFile (UNUSED_LOCATION_ARGS) const {
  GALGAS_Xcode_5F_PBXFileReference_5F_abstract result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXBuildFile * p = (const cPtr_Xcode_5F_PBXBuildFile *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXBuildFile) ;
    result = p->mAttribute_mSourceFile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_abstract cPtr_Xcode_5F_PBXBuildFile::reader_mSourceFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @Xcode_PBXBuildFile class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXBuildFile::cPtr_Xcode_5F_PBXBuildFile (const GALGAS_uint & in_mSequenceNumber,
                                                        const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & in_mSourceFile
                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mSourceFile (in_mSourceFile) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXBuildFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile ;
}

void cPtr_Xcode_5F_PBXBuildFile::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXBuildFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXBuildFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXBuildFile (mAttribute_mSequenceNumber, mAttribute_mSourceFile COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @Xcode_PBXBuildFile type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile ("Xcode_PBXBuildFile",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXBuildFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXBuildFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXBuildFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXBuildFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile GALGAS_Xcode_5F_PBXBuildFile::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXBuildFile result ;
  const GALGAS_Xcode_5F_PBXBuildFile * p = (const GALGAS_Xcode_5F_PBXBuildFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXBuildFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXBuildFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXCopyBuildPhase::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXCopyBuildPhase * p = (const cPtr_Xcode_5F_PBXCopyBuildPhase *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForComment.objectCompare (p->mAttribute_mNameForComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDestinationSubfolder.objectCompare (p->mAttribute_mDestinationSubfolder) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDestinationPath.objectCompare (p->mAttribute_mDestinationPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileReferenceList.objectCompare (p->mAttribute_mFileReferenceList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXCopyBuildPhase::objectCompare (const GALGAS_Xcode_5F_PBXCopyBuildPhase & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXCopyBuildPhase::GALGAS_Xcode_5F_PBXCopyBuildPhase (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXCopyBuildPhase GALGAS_Xcode_5F_PBXCopyBuildPhase::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXCopyBuildPhase::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_uint::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_Xcode_5F_PBXBuildFile_5F_list::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXCopyBuildPhase::GALGAS_Xcode_5F_PBXCopyBuildPhase (const cPtr_Xcode_5F_PBXCopyBuildPhase * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXCopyBuildPhase GALGAS_Xcode_5F_PBXCopyBuildPhase::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                      const GALGAS_string & inAttribute_mNameForComment,
                                                                                      const GALGAS_uint & inAttribute_mDestinationSubfolder,
                                                                                      const GALGAS_string & inAttribute_mDestinationPath,
                                                                                      const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inAttribute_mFileReferenceList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXCopyBuildPhase result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mNameForComment.isValid () && inAttribute_mDestinationSubfolder.isValid () && inAttribute_mDestinationPath.isValid () && inAttribute_mFileReferenceList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXCopyBuildPhase (inAttribute_mSequenceNumber, inAttribute_mNameForComment, inAttribute_mDestinationSubfolder, inAttribute_mDestinationPath, inAttribute_mFileReferenceList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXCopyBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXCopyBuildPhase * p = (const cPtr_Xcode_5F_PBXCopyBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXCopyBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXCopyBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXCopyBuildPhase * p = (const cPtr_Xcode_5F_PBXCopyBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
    result = p->mAttribute_mNameForComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXCopyBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXCopyBuildPhase::reader_mDestinationSubfolder (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXCopyBuildPhase * p = (const cPtr_Xcode_5F_PBXCopyBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
    result = p->mAttribute_mDestinationSubfolder ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXCopyBuildPhase::reader_mDestinationSubfolder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationSubfolder ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXCopyBuildPhase::reader_mDestinationPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXCopyBuildPhase * p = (const cPtr_Xcode_5F_PBXCopyBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
    result = p->mAttribute_mDestinationPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXCopyBuildPhase::reader_mDestinationPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list GALGAS_Xcode_5F_PBXCopyBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_Xcode_5F_PBXBuildFile_5F_list result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXCopyBuildPhase * p = (const cPtr_Xcode_5F_PBXCopyBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXCopyBuildPhase) ;
    result = p->mAttribute_mFileReferenceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list cPtr_Xcode_5F_PBXCopyBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReferenceList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @Xcode_PBXCopyBuildPhase class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXCopyBuildPhase::cPtr_Xcode_5F_PBXCopyBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                                                  const GALGAS_string & in_mNameForComment,
                                                                  const GALGAS_uint & in_mDestinationSubfolder,
                                                                  const GALGAS_string & in_mDestinationPath,
                                                                  const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mNameForComment (in_mNameForComment),
mAttribute_mDestinationSubfolder (in_mDestinationSubfolder),
mAttribute_mDestinationPath (in_mDestinationPath),
mAttribute_mFileReferenceList (in_mFileReferenceList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXCopyBuildPhase::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXCopyBuildPhase ;
}

void cPtr_Xcode_5F_PBXCopyBuildPhase::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXCopyBuildPhase:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForComment.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDestinationSubfolder.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDestinationPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileReferenceList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXCopyBuildPhase::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXCopyBuildPhase (mAttribute_mSequenceNumber, mAttribute_mNameForComment, mAttribute_mDestinationSubfolder, mAttribute_mDestinationPath, mAttribute_mFileReferenceList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @Xcode_PBXCopyBuildPhase type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXCopyBuildPhase ("Xcode_PBXCopyBuildPhase",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXCopyBuildPhase::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXCopyBuildPhase ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXCopyBuildPhase::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXCopyBuildPhase (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXCopyBuildPhase GALGAS_Xcode_5F_PBXCopyBuildPhase::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXCopyBuildPhase result ;
  const GALGAS_Xcode_5F_PBXCopyBuildPhase * p = (const GALGAS_Xcode_5F_PBXCopyBuildPhase *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXCopyBuildPhase *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXCopyBuildPhase", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_abstract::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_abstract & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_abstract::GALGAS_Xcode_5F_PBXFileReference_5F_abstract (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_abstract::GALGAS_Xcode_5F_PBXFileReference_5F_abstract (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_abstract) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXFileReference_5F_abstract::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFileReference_5F_abstract * p = (const cPtr_Xcode_5F_PBXFileReference_5F_abstract *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_abstract) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXFileReference_5F_abstract::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXFileReference_5F_abstract::reader_mFileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFileReference_5F_abstract * p = (const cPtr_Xcode_5F_PBXFileReference_5F_abstract *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_abstract) ;
    result = p->mAttribute_mFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXFileReference_5F_abstract::reader_mFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @Xcode_PBXFileReference_abstract class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_abstract::cPtr_Xcode_5F_PBXFileReference_5F_abstract (const GALGAS_uint & in_mSequenceNumber,
                                                                                        const GALGAS_string & in_mFileName
                                                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mFileName (in_mFileName) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXFileReference_abstract type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract ("Xcode_PBXFileReference_abstract",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_abstract::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_abstract::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_abstract (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_abstract GALGAS_Xcode_5F_PBXFileReference_5F_abstract::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_abstract result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_abstract * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_abstract *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_abstract *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_abstract", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_string::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                      const GALGAS_string & inAttribute_mFileName
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @Xcode_PBXFileReference_cppSourceFile class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile::cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                                  const GALGAS_string & in_mFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_cppSourceFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @Xcode_PBXFileReference_cppSourceFile type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile ("Xcode_PBXFileReference_cppSourceFile",
                                                                   & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_cppSourceFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_string::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile (const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                      const GALGAS_string & inAttribute_mFileName
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @Xcode_PBXFileReference_frameworkFile class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile::cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                                  const GALGAS_string & in_mFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_frameworkFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @Xcode_PBXFileReference_frameworkFile type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile ("Xcode_PBXFileReference_frameworkFile",
                                                                   & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_frameworkFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_gifFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_gifFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_gifFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_gifFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_gifFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::GALGAS_Xcode_5F_PBXFileReference_5F_gifFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_gifFile GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::GALGAS_Xcode_5F_PBXFileReference_5F_gifFile (const cPtr_Xcode_5F_PBXFileReference_5F_gifFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_gifFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_gifFile GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                          const GALGAS_string & inAttribute_mFileName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_gifFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_gifFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @Xcode_PBXFileReference_gifFile class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_gifFile::cPtr_Xcode_5F_PBXFileReference_5F_gifFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                      const GALGAS_string & in_mFileName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_gifFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_gifFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_gifFile::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_gifFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_gifFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_gifFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXFileReference_gifFile type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_gifFile ("Xcode_PBXFileReference_gifFile",
                                                             & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_gifFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_gifFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_gifFile GALGAS_Xcode_5F_PBXFileReference_5F_gifFile::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_gifFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_gifFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_gifFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_gifFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_gifFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                  const GALGAS_string & inAttribute_mFileName
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @Xcode_PBXFileReference_hSourceFile class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile::cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                              const GALGAS_string & in_mFileName
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_hSourceFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFileReference_hSourceFile type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile ("Xcode_PBXFileReference_hSourceFile",
                                                                 & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_hSourceFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_icnsFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile (const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                            const GALGAS_string & inAttribute_mFileName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @Xcode_PBXFileReference_icnsFile class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_icnsFile::cPtr_Xcode_5F_PBXFileReference_5F_icnsFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                        const GALGAS_string & in_mFileName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_icnsFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_icnsFile::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_icnsFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_icnsFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXFileReference_icnsFile type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile ("Xcode_PBXFileReference_icnsFile",
                                                              & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_icnsFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                  const GALGAS_string & inAttribute_mFileName
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @Xcode_PBXFileReference_mSourceFile class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile::cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                              const GALGAS_string & in_mFileName
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_mSourceFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFileReference_mSourceFile type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile ("Xcode_PBXFileReference_mSourceFile",
                                                                 & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_mSourceFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE)
                                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                    const GALGAS_string & inAttribute_mFileName
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @Xcode_PBXFileReference_mmSourceFile class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile::cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                                const GALGAS_string & in_mFileName
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_mmSourceFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFileReference_mmSourceFile type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile ("Xcode_PBXFileReference_mmSourceFile",
                                                                  & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_mmSourceFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_string::constructor_default (HERE)
                                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile (const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                      const GALGAS_string & inAttribute_mFileName
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @Xcode_PBXFileReference_pchSourceFile class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile::cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                                  const GALGAS_string & in_mFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_pchSourceFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @Xcode_PBXFileReference_pchSourceFile type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile ("Xcode_PBXFileReference_pchSourceFile",
                                                                   & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_pchSourceFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_plistFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_plistFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_plistFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_plistFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_plistFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::GALGAS_Xcode_5F_PBXFileReference_5F_plistFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistFile GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::GALGAS_Xcode_5F_PBXFileReference_5F_plistFile (const cPtr_Xcode_5F_PBXFileReference_5F_plistFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_plistFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistFile GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                              const GALGAS_string & inAttribute_mFileName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_plistFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_plistFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @Xcode_PBXFileReference_plistFile class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_plistFile::cPtr_Xcode_5F_PBXFileReference_5F_plistFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                          const GALGAS_string & in_mFileName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_plistFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_plistFile::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_plistFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_plistFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_plistFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @Xcode_PBXFileReference_plistFile type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistFile ("Xcode_PBXFileReference_plistFile",
                                                               & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_plistFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistFile GALGAS_Xcode_5F_PBXFileReference_5F_plistFile::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_plistFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_plistFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_plistFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_plistFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_plistFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilePath.objectCompare (p->mAttribute_mFilePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                               GALGAS_string::constructor_default (HERE),
                                                                               GALGAS_string::constructor_default (HERE)
                                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile (const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                          const GALGAS_string & inAttribute_mFileName,
                                                                                                                          const GALGAS_string & inAttribute_mFilePath
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid () && inAttribute_mFilePath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile (inAttribute_mSequenceNumber, inAttribute_mFileName, inAttribute_mFilePath COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::reader_mFilePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile) ;
    result = p->mAttribute_mFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile::reader_mFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @Xcode_PBXFileReference_plistStringFile class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile::cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                                      const GALGAS_string & in_mFileName,
                                                                                                      const GALGAS_string & in_mFilePath
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE),
mAttribute_mFilePath (in_mFilePath) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_plistStringFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilePath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile (mAttribute_mSequenceNumber, mAttribute_mFileName, mAttribute_mFilePath COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @Xcode_PBXFileReference_plistStringFile type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile ("Xcode_PBXFileReference_plistStringFile",
                                                                     & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_plistStringFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_pngFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_pngFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_pngFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_pngFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_pngFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::GALGAS_Xcode_5F_PBXFileReference_5F_pngFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pngFile GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::GALGAS_Xcode_5F_PBXFileReference_5F_pngFile (const cPtr_Xcode_5F_PBXFileReference_5F_pngFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_pngFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pngFile GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                          const GALGAS_string & inAttribute_mFileName
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_pngFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_pngFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @Xcode_PBXFileReference_pngFile class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_pngFile::cPtr_Xcode_5F_PBXFileReference_5F_pngFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                      const GALGAS_string & in_mFileName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_pngFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pngFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_pngFile::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_pngFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_pngFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_pngFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXFileReference_pngFile type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pngFile ("Xcode_PBXFileReference_pngFile",
                                                             & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pngFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_pngFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_pngFile GALGAS_Xcode_5F_PBXFileReference_5F_pngFile::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_pngFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_pngFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_pngFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_pngFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_pngFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_tiffFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile (const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                            const GALGAS_string & inAttribute_mFileName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @Xcode_PBXFileReference_tiffFile class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_tiffFile::cPtr_Xcode_5F_PBXFileReference_5F_tiffFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                        const GALGAS_string & in_mFileName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_tiffFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_tiffFile::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_tiffFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_tiffFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXFileReference_tiffFile type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile ("Xcode_PBXFileReference_tiffFile",
                                                              & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_tiffFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_xibFile::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_xibFile) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilePath.objectCompare (p->mAttribute_mFilePath) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_xibFile & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::GALGAS_Xcode_5F_PBXFileReference_5F_xibFile (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_xibFile GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::GALGAS_Xcode_5F_PBXFileReference_5F_xibFile (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_xibFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_xibFile GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                          const GALGAS_string & inAttribute_mFileName,
                                                                                                          const GALGAS_string & inAttribute_mFilePath
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_xibFile result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid () && inAttribute_mFilePath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_xibFile (inAttribute_mSequenceNumber, inAttribute_mFileName, inAttribute_mFilePath COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::reader_mFilePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * p = (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_xibFile) ;
    result = p->mAttribute_mFilePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXFileReference_5F_xibFile::reader_mFilePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilePath ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @Xcode_PBXFileReference_xibFile class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_xibFile::cPtr_Xcode_5F_PBXFileReference_5F_xibFile (const GALGAS_uint & in_mSequenceNumber,
                                                                                      const GALGAS_string & in_mFileName,
                                                                                      const GALGAS_string & in_mFilePath
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE),
mAttribute_mFilePath (in_mFilePath) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_xibFile::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_xibFile::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_xibFile:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilePath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_xibFile::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_xibFile (mAttribute_mSequenceNumber, mAttribute_mFileName, mAttribute_mFilePath COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @Xcode_PBXFileReference_xibFile type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile ("Xcode_PBXFileReference_xibFile",
                                                             & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_xibFile (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_xibFile GALGAS_Xcode_5F_PBXFileReference_5F_xibFile::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_xibFile result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_xibFile * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_xibFile *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_xibFile *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_xibFile", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_Xcode_5F_productFileReference::objectCompare (const GALGAS_Xcode_5F_productFileReference & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_productFileReference::GALGAS_Xcode_5F_productFileReference (void) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_productFileReference::GALGAS_Xcode_5F_productFileReference (const cPtr_Xcode_5F_productFileReference * inSourcePtr) :
GALGAS_Xcode_5F_PBXFileReference_5F_abstract (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_productFileReference) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @Xcode_productFileReference class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_productFileReference::cPtr_Xcode_5F_productFileReference (const GALGAS_uint & in_mSequenceNumber,
                                                                        const GALGAS_string & in_mFileName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_PBXFileReference_5F_abstract (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @Xcode_productFileReference type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_productFileReference ("Xcode_productFileReference",
                                                      & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_abstract) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_productFileReference::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_productFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_productFileReference::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_productFileReference (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_productFileReference GALGAS_Xcode_5F_productFileReference::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_productFileReference result ;
  const GALGAS_Xcode_5F_productFileReference * p = (const GALGAS_Xcode_5F_productFileReference *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_productFileReference *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_productFileReference", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_Application::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_Application * p = (const cPtr_Xcode_5F_PBXFileReference_5F_Application *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_Application) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_Application::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_Application & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_Application::GALGAS_Xcode_5F_PBXFileReference_5F_Application (void) :
GALGAS_Xcode_5F_productFileReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_Application GALGAS_Xcode_5F_PBXFileReference_5F_Application::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_Application::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                           GALGAS_string::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_Application::GALGAS_Xcode_5F_PBXFileReference_5F_Application (const cPtr_Xcode_5F_PBXFileReference_5F_Application * inSourcePtr) :
GALGAS_Xcode_5F_productFileReference (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_Application) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_Application GALGAS_Xcode_5F_PBXFileReference_5F_Application::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                  const GALGAS_string & inAttribute_mFileName
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_Application result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_Application (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @Xcode_PBXFileReference_Application class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_Application::cPtr_Xcode_5F_PBXFileReference_5F_Application (const GALGAS_uint & in_mSequenceNumber,
                                                                                              const GALGAS_string & in_mFileName
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_productFileReference (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_Application::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_Application::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_Application:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_Application::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_Application (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFileReference_Application type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application ("Xcode_PBXFileReference_Application",
                                                                 & kTypeDescriptor_GALGAS_Xcode_5F_productFileReference) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_Application::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_Application::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_Application (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_Application GALGAS_Xcode_5F_PBXFileReference_5F_Application::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_Application result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_Application * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_Application *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_Application *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_Application", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable * p = (const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileName.objectCompare (p->mAttribute_mFileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::objectCompare (const GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable (void) :
GALGAS_Xcode_5F_productFileReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                                       GALGAS_string::constructor_default (HERE)
                                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable (const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable * inSourcePtr) :
GALGAS_Xcode_5F_productFileReference (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                                                          const GALGAS_string & inAttribute_mFileName
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mFileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable (inAttribute_mSequenceNumber, inAttribute_mFileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @Xcode_PBXFileReference_CompiledMachOExecutable class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable (const GALGAS_uint & in_mSequenceNumber,
                                                                                                                      const GALGAS_string & in_mFileName
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_Xcode_5F_productFileReference (in_mSequenceNumber, in_mFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable ;
}

void cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFileReference_CompiledMachOExecutable:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable (mAttribute_mSequenceNumber, mAttribute_mFileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @Xcode_PBXFileReference_CompiledMachOExecutable type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable ("Xcode_PBXFileReference_CompiledMachOExecutable",
                                                                             & kTypeDescriptor_GALGAS_Xcode_5F_productFileReference) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable result ;
  const GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable * p = (const GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFileReference_CompiledMachOExecutable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXFrameworksBuildPhase::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXFrameworksBuildPhase * p = (const cPtr_Xcode_5F_PBXFrameworksBuildPhase *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXFrameworksBuildPhase) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForComment.objectCompare (p->mAttribute_mNameForComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileReferenceList.objectCompare (p->mAttribute_mFileReferenceList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXFrameworksBuildPhase::objectCompare (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFrameworksBuildPhase::GALGAS_Xcode_5F_PBXFrameworksBuildPhase (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFrameworksBuildPhase GALGAS_Xcode_5F_PBXFrameworksBuildPhase::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXFrameworksBuildPhase::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_Xcode_5F_PBXBuildFile_5F_list::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFrameworksBuildPhase::GALGAS_Xcode_5F_PBXFrameworksBuildPhase (const cPtr_Xcode_5F_PBXFrameworksBuildPhase * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXFrameworksBuildPhase) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFrameworksBuildPhase GALGAS_Xcode_5F_PBXFrameworksBuildPhase::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                  const GALGAS_string & inAttribute_mNameForComment,
                                                                                                  const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inAttribute_mFileReferenceList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFrameworksBuildPhase result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mNameForComment.isValid () && inAttribute_mFileReferenceList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXFrameworksBuildPhase (inAttribute_mSequenceNumber, inAttribute_mNameForComment, inAttribute_mFileReferenceList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXFrameworksBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFrameworksBuildPhase * p = (const cPtr_Xcode_5F_PBXFrameworksBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFrameworksBuildPhase) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXFrameworksBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXFrameworksBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFrameworksBuildPhase * p = (const cPtr_Xcode_5F_PBXFrameworksBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFrameworksBuildPhase) ;
    result = p->mAttribute_mNameForComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXFrameworksBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list GALGAS_Xcode_5F_PBXFrameworksBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_Xcode_5F_PBXBuildFile_5F_list result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXFrameworksBuildPhase * p = (const cPtr_Xcode_5F_PBXFrameworksBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXFrameworksBuildPhase) ;
    result = p->mAttribute_mFileReferenceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list cPtr_Xcode_5F_PBXFrameworksBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReferenceList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @Xcode_PBXFrameworksBuildPhase class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXFrameworksBuildPhase::cPtr_Xcode_5F_PBXFrameworksBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                                                              const GALGAS_string & in_mNameForComment,
                                                                              const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mNameForComment (in_mNameForComment),
mAttribute_mFileReferenceList (in_mFileReferenceList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXFrameworksBuildPhase::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase ;
}

void cPtr_Xcode_5F_PBXFrameworksBuildPhase::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXFrameworksBuildPhase:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForComment.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileReferenceList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXFrameworksBuildPhase::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXFrameworksBuildPhase (mAttribute_mSequenceNumber, mAttribute_mNameForComment, mAttribute_mFileReferenceList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @Xcode_PBXFrameworksBuildPhase type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase ("Xcode_PBXFrameworksBuildPhase",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXFrameworksBuildPhase::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXFrameworksBuildPhase::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXFrameworksBuildPhase (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXFrameworksBuildPhase GALGAS_Xcode_5F_PBXFrameworksBuildPhase::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXFrameworksBuildPhase result ;
  const GALGAS_Xcode_5F_PBXFrameworksBuildPhase * p = (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXFrameworksBuildPhase *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXFrameworksBuildPhase", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXGroup::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXGroup * p = (const cPtr_Xcode_5F_PBXGroup *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXGroup) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGroupName.objectCompare (p->mAttribute_mGroupName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGroupPath.objectCompare (p->mAttribute_mGroupPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mChildrenGroupList.objectCompare (p->mAttribute_mChildrenGroupList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXGroup::objectCompare (const GALGAS_Xcode_5F_PBXGroup & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXGroup::GALGAS_Xcode_5F_PBXGroup (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXGroup GALGAS_Xcode_5F_PBXGroup::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXGroup::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE),
                                                    GALGAS_XcodeObjectReferenceList::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXGroup::GALGAS_Xcode_5F_PBXGroup (const cPtr_Xcode_5F_PBXGroup * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXGroup) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXGroup GALGAS_Xcode_5F_PBXGroup::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                    const GALGAS_string & inAttribute_mGroupName,
                                                                    const GALGAS_string & inAttribute_mGroupPath,
                                                                    const GALGAS_XcodeObjectReferenceList & inAttribute_mChildrenGroupList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXGroup result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mGroupName.isValid () && inAttribute_mGroupPath.isValid () && inAttribute_mChildrenGroupList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXGroup (inAttribute_mSequenceNumber, inAttribute_mGroupName, inAttribute_mGroupPath, inAttribute_mChildrenGroupList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXGroup::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXGroup * p = (const cPtr_Xcode_5F_PBXGroup *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXGroup) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXGroup::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXGroup::reader_mGroupName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXGroup * p = (const cPtr_Xcode_5F_PBXGroup *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXGroup) ;
    result = p->mAttribute_mGroupName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXGroup::reader_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXGroup::reader_mGroupPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXGroup * p = (const cPtr_Xcode_5F_PBXGroup *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXGroup) ;
    result = p->mAttribute_mGroupPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXGroup::reader_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeObjectReferenceList GALGAS_Xcode_5F_PBXGroup::reader_mChildrenGroupList (UNUSED_LOCATION_ARGS) const {
  GALGAS_XcodeObjectReferenceList result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXGroup * p = (const cPtr_Xcode_5F_PBXGroup *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXGroup) ;
    result = p->mAttribute_mChildrenGroupList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeObjectReferenceList cPtr_Xcode_5F_PBXGroup::reader_mChildrenGroupList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mChildrenGroupList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @Xcode_PBXGroup class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXGroup::cPtr_Xcode_5F_PBXGroup (const GALGAS_uint & in_mSequenceNumber,
                                                const GALGAS_string & in_mGroupName,
                                                const GALGAS_string & in_mGroupPath,
                                                const GALGAS_XcodeObjectReferenceList & in_mChildrenGroupList
                                                COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mGroupName (in_mGroupName),
mAttribute_mGroupPath (in_mGroupPath),
mAttribute_mChildrenGroupList (in_mChildrenGroupList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXGroup::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXGroup ;
}

void cPtr_Xcode_5F_PBXGroup::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXGroup:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGroupName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGroupPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mChildrenGroupList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXGroup::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXGroup (mAttribute_mSequenceNumber, mAttribute_mGroupName, mAttribute_mGroupPath, mAttribute_mChildrenGroupList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @Xcode_PBXGroup type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXGroup ("Xcode_PBXGroup",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXGroup::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXGroup ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXGroup::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXGroup (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXGroup GALGAS_Xcode_5F_PBXGroup::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXGroup result ;
  const GALGAS_Xcode_5F_PBXGroup * p = (const GALGAS_Xcode_5F_PBXGroup *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXGroup *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXGroup", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXResourcesBuildPhase::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXResourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXResourcesBuildPhase *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXResourcesBuildPhase) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForComment.objectCompare (p->mAttribute_mNameForComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileReferenceList.objectCompare (p->mAttribute_mFileReferenceList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXResourcesBuildPhase::objectCompare (const GALGAS_Xcode_5F_PBXResourcesBuildPhase & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXResourcesBuildPhase::GALGAS_Xcode_5F_PBXResourcesBuildPhase (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXResourcesBuildPhase GALGAS_Xcode_5F_PBXResourcesBuildPhase::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXResourcesBuildPhase::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_Xcode_5F_PBXBuildFile_5F_list::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXResourcesBuildPhase::GALGAS_Xcode_5F_PBXResourcesBuildPhase (const cPtr_Xcode_5F_PBXResourcesBuildPhase * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXResourcesBuildPhase) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXResourcesBuildPhase GALGAS_Xcode_5F_PBXResourcesBuildPhase::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                const GALGAS_string & inAttribute_mNameForComment,
                                                                                                const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inAttribute_mFileReferenceList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXResourcesBuildPhase result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mNameForComment.isValid () && inAttribute_mFileReferenceList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXResourcesBuildPhase (inAttribute_mSequenceNumber, inAttribute_mNameForComment, inAttribute_mFileReferenceList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXResourcesBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXResourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXResourcesBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXResourcesBuildPhase) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXResourcesBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXResourcesBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXResourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXResourcesBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXResourcesBuildPhase) ;
    result = p->mAttribute_mNameForComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXResourcesBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list GALGAS_Xcode_5F_PBXResourcesBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_Xcode_5F_PBXBuildFile_5F_list result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXResourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXResourcesBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXResourcesBuildPhase) ;
    result = p->mAttribute_mFileReferenceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list cPtr_Xcode_5F_PBXResourcesBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReferenceList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @Xcode_PBXResourcesBuildPhase class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXResourcesBuildPhase::cPtr_Xcode_5F_PBXResourcesBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                                                            const GALGAS_string & in_mNameForComment,
                                                                            const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mNameForComment (in_mNameForComment),
mAttribute_mFileReferenceList (in_mFileReferenceList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXResourcesBuildPhase::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXResourcesBuildPhase ;
}

void cPtr_Xcode_5F_PBXResourcesBuildPhase::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXResourcesBuildPhase:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForComment.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileReferenceList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXResourcesBuildPhase::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXResourcesBuildPhase (mAttribute_mSequenceNumber, mAttribute_mNameForComment, mAttribute_mFileReferenceList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @Xcode_PBXResourcesBuildPhase type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXResourcesBuildPhase ("Xcode_PBXResourcesBuildPhase",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXResourcesBuildPhase::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXResourcesBuildPhase ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXResourcesBuildPhase::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXResourcesBuildPhase (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXResourcesBuildPhase GALGAS_Xcode_5F_PBXResourcesBuildPhase::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXResourcesBuildPhase result ;
  const GALGAS_Xcode_5F_PBXResourcesBuildPhase * p = (const GALGAS_Xcode_5F_PBXResourcesBuildPhase *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXResourcesBuildPhase *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXResourcesBuildPhase", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_PBXSourcesBuildPhase::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_PBXSourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXSourcesBuildPhase *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_PBXSourcesBuildPhase) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNameForComment.objectCompare (p->mAttribute_mNameForComment) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFileReferenceList.objectCompare (p->mAttribute_mFileReferenceList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_PBXSourcesBuildPhase::objectCompare (const GALGAS_Xcode_5F_PBXSourcesBuildPhase & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXSourcesBuildPhase::GALGAS_Xcode_5F_PBXSourcesBuildPhase (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXSourcesBuildPhase GALGAS_Xcode_5F_PBXSourcesBuildPhase::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_PBXSourcesBuildPhase::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_Xcode_5F_PBXBuildFile_5F_list::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXSourcesBuildPhase::GALGAS_Xcode_5F_PBXSourcesBuildPhase (const cPtr_Xcode_5F_PBXSourcesBuildPhase * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_PBXSourcesBuildPhase) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXSourcesBuildPhase GALGAS_Xcode_5F_PBXSourcesBuildPhase::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                            const GALGAS_string & inAttribute_mNameForComment,
                                                                                            const GALGAS_Xcode_5F_PBXBuildFile_5F_list & inAttribute_mFileReferenceList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXSourcesBuildPhase result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mNameForComment.isValid () && inAttribute_mFileReferenceList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_PBXSourcesBuildPhase (inAttribute_mSequenceNumber, inAttribute_mNameForComment, inAttribute_mFileReferenceList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_PBXSourcesBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXSourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXSourcesBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXSourcesBuildPhase) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_PBXSourcesBuildPhase::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_PBXSourcesBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXSourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXSourcesBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXSourcesBuildPhase) ;
    result = p->mAttribute_mNameForComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_PBXSourcesBuildPhase::reader_mNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNameForComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list GALGAS_Xcode_5F_PBXSourcesBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_Xcode_5F_PBXBuildFile_5F_list result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_PBXSourcesBuildPhase * p = (const cPtr_Xcode_5F_PBXSourcesBuildPhase *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_PBXSourcesBuildPhase) ;
    result = p->mAttribute_mFileReferenceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXBuildFile_5F_list cPtr_Xcode_5F_PBXSourcesBuildPhase::reader_mFileReferenceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReferenceList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @Xcode_PBXSourcesBuildPhase class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_PBXSourcesBuildPhase::cPtr_Xcode_5F_PBXSourcesBuildPhase (const GALGAS_uint & in_mSequenceNumber,
                                                                        const GALGAS_string & in_mNameForComment,
                                                                        const GALGAS_Xcode_5F_PBXBuildFile_5F_list & in_mFileReferenceList
                                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mNameForComment (in_mNameForComment),
mAttribute_mFileReferenceList (in_mFileReferenceList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_PBXSourcesBuildPhase::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXSourcesBuildPhase ;
}

void cPtr_Xcode_5F_PBXSourcesBuildPhase::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@Xcode_PBXSourcesBuildPhase:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNameForComment.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFileReferenceList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_PBXSourcesBuildPhase::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_PBXSourcesBuildPhase (mAttribute_mSequenceNumber, mAttribute_mNameForComment, mAttribute_mFileReferenceList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @Xcode_PBXSourcesBuildPhase type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_PBXSourcesBuildPhase ("Xcode_PBXSourcesBuildPhase",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_PBXSourcesBuildPhase::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_PBXSourcesBuildPhase ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_PBXSourcesBuildPhase::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_PBXSourcesBuildPhase (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_PBXSourcesBuildPhase GALGAS_Xcode_5F_PBXSourcesBuildPhase::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_PBXSourcesBuildPhase result ;
  const GALGAS_Xcode_5F_PBXSourcesBuildPhase * p = (const GALGAS_Xcode_5F_PBXSourcesBuildPhase *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_PBXSourcesBuildPhase *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_PBXSourcesBuildPhase", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_XCBuildConfiguration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_XCBuildConfiguration * p = (const cPtr_Xcode_5F_XCBuildConfiguration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_XCBuildConfiguration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber_31_.objectCompare (p->mAttribute_mSequenceNumber_31_) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber_32_.objectCompare (p->mAttribute_mSequenceNumber_32_) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSettings.objectCompare (p->mAttribute_mSettings) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_XCBuildConfiguration::objectCompare (const GALGAS_Xcode_5F_XCBuildConfiguration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_XCBuildConfiguration::GALGAS_Xcode_5F_XCBuildConfiguration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_XCBuildConfiguration GALGAS_Xcode_5F_XCBuildConfiguration::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_XCBuildConfiguration::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                GALGAS_uint::constructor_default (HERE),
                                                                GALGAS_stringlist::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_XCBuildConfiguration::GALGAS_Xcode_5F_XCBuildConfiguration (const cPtr_Xcode_5F_XCBuildConfiguration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_XCBuildConfiguration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_XCBuildConfiguration GALGAS_Xcode_5F_XCBuildConfiguration::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber_31_,
                                                                                            const GALGAS_uint & inAttribute_mSequenceNumber_32_,
                                                                                            const GALGAS_stringlist & inAttribute_mSettings
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_XCBuildConfiguration result ;
  if (inAttribute_mSequenceNumber_31_.isValid () && inAttribute_mSequenceNumber_32_.isValid () && inAttribute_mSettings.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_XCBuildConfiguration (inAttribute_mSequenceNumber_31_, inAttribute_mSequenceNumber_32_, inAttribute_mSettings COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_XCBuildConfiguration::reader_mSequenceNumber_31_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_XCBuildConfiguration * p = (const cPtr_Xcode_5F_XCBuildConfiguration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_XCBuildConfiguration) ;
    result = p->mAttribute_mSequenceNumber_31_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_XCBuildConfiguration::reader_mSequenceNumber_31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber_31_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_XCBuildConfiguration::reader_mSequenceNumber_32_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_XCBuildConfiguration * p = (const cPtr_Xcode_5F_XCBuildConfiguration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_XCBuildConfiguration) ;
    result = p->mAttribute_mSequenceNumber_32_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_XCBuildConfiguration::reader_mSequenceNumber_32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber_32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_Xcode_5F_XCBuildConfiguration::reader_mSettings (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_XCBuildConfiguration * p = (const cPtr_Xcode_5F_XCBuildConfiguration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_XCBuildConfiguration) ;
    result = p->mAttribute_mSettings ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_Xcode_5F_XCBuildConfiguration::reader_mSettings (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSettings ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @Xcode_XCBuildConfiguration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_XCBuildConfiguration::cPtr_Xcode_5F_XCBuildConfiguration (const GALGAS_uint & in_mSequenceNumber_31_,
                                                                        const GALGAS_uint & in_mSequenceNumber_32_,
                                                                        const GALGAS_stringlist & in_mSettings
                                                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber_31_ (in_mSequenceNumber_31_),
mAttribute_mSequenceNumber_32_ (in_mSequenceNumber_32_),
mAttribute_mSettings (in_mSettings) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_XCBuildConfiguration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration ;
}

void cPtr_Xcode_5F_XCBuildConfiguration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@Xcode_XCBuildConfiguration:" ;
  mAttribute_mSequenceNumber_31_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSequenceNumber_32_.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSettings.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_XCBuildConfiguration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_XCBuildConfiguration (mAttribute_mSequenceNumber_31_, mAttribute_mSequenceNumber_32_, mAttribute_mSettings COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @Xcode_XCBuildConfiguration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration ("Xcode_XCBuildConfiguration",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_XCBuildConfiguration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_XCBuildConfiguration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_XCBuildConfiguration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_XCBuildConfiguration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_XCBuildConfiguration GALGAS_Xcode_5F_XCBuildConfiguration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_XCBuildConfiguration result ;
  const GALGAS_Xcode_5F_XCBuildConfiguration * p = (const GALGAS_Xcode_5F_XCBuildConfiguration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_XCBuildConfiguration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_XCBuildConfiguration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_Xcode_5F_targetDependencyDescription::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_Xcode_5F_targetDependencyDescription * p = (const cPtr_Xcode_5F_targetDependencyDescription *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_Xcode_5F_targetDependencyDescription) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSequenceNumber.objectCompare (p->mAttribute_mSequenceNumber) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDependencyTarget.objectCompare (p->mAttribute_mDependencyTarget) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_Xcode_5F_targetDependencyDescription::objectCompare (const GALGAS_Xcode_5F_targetDependencyDescription & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_targetDependencyDescription::GALGAS_Xcode_5F_targetDependencyDescription (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_targetDependencyDescription GALGAS_Xcode_5F_targetDependencyDescription::constructor_default (LOCATION_ARGS) {
  return GALGAS_Xcode_5F_targetDependencyDescription::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_targetDependencyDescription::GALGAS_Xcode_5F_targetDependencyDescription (const cPtr_Xcode_5F_targetDependencyDescription * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_Xcode_5F_targetDependencyDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_targetDependencyDescription GALGAS_Xcode_5F_targetDependencyDescription::constructor_new (const GALGAS_uint & inAttribute_mSequenceNumber,
                                                                                                          const GALGAS_string & inAttribute_mDependencyTarget
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_targetDependencyDescription result ;
  if (inAttribute_mSequenceNumber.isValid () && inAttribute_mDependencyTarget.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_Xcode_5F_targetDependencyDescription (inAttribute_mSequenceNumber, inAttribute_mDependencyTarget COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_Xcode_5F_targetDependencyDescription::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_targetDependencyDescription * p = (const cPtr_Xcode_5F_targetDependencyDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_targetDependencyDescription) ;
    result = p->mAttribute_mSequenceNumber ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_Xcode_5F_targetDependencyDescription::reader_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_Xcode_5F_targetDependencyDescription::reader_mDependencyTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_Xcode_5F_targetDependencyDescription * p = (const cPtr_Xcode_5F_targetDependencyDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_Xcode_5F_targetDependencyDescription) ;
    result = p->mAttribute_mDependencyTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_Xcode_5F_targetDependencyDescription::reader_mDependencyTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependencyTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @Xcode_targetDependencyDescription class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_Xcode_5F_targetDependencyDescription::cPtr_Xcode_5F_targetDependencyDescription (const GALGAS_uint & in_mSequenceNumber,
                                                                                      const GALGAS_string & in_mDependencyTarget
                                                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mSequenceNumber (in_mSequenceNumber),
mAttribute_mDependencyTarget (in_mDependencyTarget) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_Xcode_5F_targetDependencyDescription::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_targetDependencyDescription ;
}

void cPtr_Xcode_5F_targetDependencyDescription::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@Xcode_targetDependencyDescription:" ;
  mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDependencyTarget.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_Xcode_5F_targetDependencyDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_Xcode_5F_targetDependencyDescription (mAttribute_mSequenceNumber, mAttribute_mDependencyTarget COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @Xcode_targetDependencyDescription type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Xcode_5F_targetDependencyDescription ("Xcode_targetDependencyDescription",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_Xcode_5F_targetDependencyDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Xcode_5F_targetDependencyDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_Xcode_5F_targetDependencyDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Xcode_5F_targetDependencyDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_Xcode_5F_targetDependencyDescription GALGAS_Xcode_5F_targetDependencyDescription::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_Xcode_5F_targetDependencyDescription result ;
  const GALGAS_Xcode_5F_targetDependencyDescription * p = (const GALGAS_Xcode_5F_targetDependencyDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Xcode_5F_targetDependencyDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Xcode_targetDependencyDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractCollectionValueElement::objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement::GALGAS_abstractCollectionValueElement (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement::GALGAS_abstractCollectionValueElement (const cPtr_abstractCollectionValueElement * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @abstractCollectionValueElement class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractCollectionValueElement::cPtr_abstractCollectionValueElement (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @abstractCollectionValueElement type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElement ("abstractCollectionValueElement",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElement ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractCollectionValueElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElement (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement GALGAS_abstractCollectionValueElement::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElement result ;
  const GALGAS_abstractCollectionValueElement * p = (const GALGAS_abstractCollectionValueElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_expressionCollectionValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionLocation.objectCompare (p->mAttribute_mExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_expressionCollectionValue::objectCompare (const GALGAS_expressionCollectionValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValue::GALGAS_expressionCollectionValue (void) :
GALGAS_abstractCollectionValueElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValue::GALGAS_expressionCollectionValue (const cPtr_expressionCollectionValue * inSourcePtr) :
GALGAS_abstractCollectionValueElement (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mExpression,
                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionValue (inAttribute_mExpression, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_expressionCollectionValue::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_expressionCollectionValue::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_expressionCollectionValue::reader_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    result = p->mAttribute_mExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_expressionCollectionValue::reader_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @expressionCollectionValue class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expressionCollectionValue::cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                const GALGAS_location & in_mExpressionLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElement (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mExpressionLocation (in_mExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_expressionCollectionValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue ;
}

void cPtr_expressionCollectionValue::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@expressionCollectionValue:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_expressionCollectionValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionValue (mAttribute_mExpression, mAttribute_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @expressionCollectionValue type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValue ("expressionCollectionValue",
                                                  & kTypeDescriptor_GALGAS_abstractCollectionValueElement) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionCollectionValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionCollectionValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue result ;
  const GALGAS_expressionCollectionValue * p = (const GALGAS_expressionCollectionValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_expressionListCollectionValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (p->mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_expressionListCollectionValue::objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionValue::GALGAS_expressionListCollectionValue (void) :
GALGAS_abstractCollectionValueElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionValue::constructor_new (GALGAS_actualOutputExpressionList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionValue::GALGAS_expressionListCollectionValue (const cPtr_expressionListCollectionValue * inSourcePtr) :
GALGAS_abstractCollectionValueElement (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::constructor_new (const GALGAS_actualOutputExpressionList & inAttribute_mExpressionList,
                                                                                            const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue result ;
  if (inAttribute_mExpressionList.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionValue (inAttribute_mExpressionList, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList GALGAS_expressionListCollectionValue::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualOutputExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualOutputExpressionList cPtr_expressionListCollectionValue::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_expressionListCollectionValue::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    result = p->mAttribute_mEndOfExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_expressionListCollectionValue::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @expressionListCollectionValue class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expressionListCollectionValue::cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                                                        const GALGAS_location & in_mEndOfExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElement (THERE),
mAttribute_mExpressionList (in_mExpressionList),
mAttribute_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_expressionListCollectionValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue ;
}

void cPtr_expressionListCollectionValue::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionValue:" ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_expressionListCollectionValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionValue (mAttribute_mExpressionList, mAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @expressionListCollectionValue type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionValue ("expressionListCollectionValue",
                                                      & kTypeDescriptor_GALGAS_abstractCollectionValueElement) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionListCollectionValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionListCollectionValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue result ;
  const GALGAS_expressionListCollectionValue * p = (const GALGAS_expressionListCollectionValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractCollectionValueElementForGeneration::objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (const cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElementForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_abstractCollectionValueElementForGeneration::reader_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCollectionValueElementForGeneration * p = (const cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCollectionValueElementForGeneration) ;
    result = p->mAttribute_mExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_abstractCollectionValueElementForGeneration::reader_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @abstractCollectionValueElementForGeneration class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractCollectionValueElementForGeneration::cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mExpressionLocation (in_mExpressionLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @abstractCollectionValueElementForGeneration type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ("abstractCollectionValueElementForGeneration",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractCollectionValueElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElementForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration GALGAS_abstractCollectionValueElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElementForGeneration result ;
  const GALGAS_abstractCollectionValueElementForGeneration * p = (const GALGAS_abstractCollectionValueElementForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_expressionCollectionValueForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionCollectionValueForGeneration * p = (const cPtr_expressionCollectionValueForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionLocation.objectCompare (p->mAttribute_mExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_expressionCollectionValueForGeneration::objectCompare (const GALGAS_expressionCollectionValueForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValueForGeneration::GALGAS_expressionCollectionValueForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValueForGeneration::GALGAS_expressionCollectionValueForGeneration (const cPtr_expressionCollectionValueForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionValueForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValueForGeneration GALGAS_expressionCollectionValueForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                              const GALGAS_semanticExpressionForGeneration & inAttribute_mExpression
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValueForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionValueForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_expressionCollectionValueForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionCollectionValueForGeneration * p = (const cPtr_expressionCollectionValueForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValueForGeneration) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_expressionCollectionValueForGeneration::reader_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @expressionCollectionValueForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expressionCollectionValueForGeneration::cPtr_expressionCollectionValueForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_expressionCollectionValueForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;
}

void cPtr_expressionCollectionValueForGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@expressionCollectionValueForGeneration:" ;
  mAttribute_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_expressionCollectionValueForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionValueForGeneration (mAttribute_mExpressionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @expressionCollectionValueForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ("expressionCollectionValueForGeneration",
                                                               & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionCollectionValueForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionCollectionValueForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValueForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionCollectionValueForGeneration GALGAS_expressionCollectionValueForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValueForGeneration result ;
  const GALGAS_expressionCollectionValueForGeneration * p = (const GALGAS_expressionCollectionValueForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionValueForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionValueForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_expressionListCollectionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionLocation.objectCompare (p->mAttribute_mExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_expressionListCollectionForGeneration::objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                            const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration GALGAS_expressionListCollectionForGeneration::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListForGeneration cPtr_expressionListCollectionForGeneration::reader_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @expressionListCollectionForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expressionListCollectionForGeneration::cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                        const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_expressionListCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

void cPtr_expressionListCollectionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionForGeneration:" ;
  mAttribute_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_expressionListCollectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionForGeneration (mAttribute_mExpressionLocation, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @expressionListCollectionForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ("expressionListCollectionForGeneration",
                                                              & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionListCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionListCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  const GALGAS_expressionListCollectionForGeneration * p = (const GALGAS_expressionListCollectionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractEnumeratedCollectionAST::objectCompare (const GALGAS_abstractEnumeratedCollectionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST::GALGAS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST::GALGAS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @abstractEnumeratedCollectionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @abstractEnumeratedCollectionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST GALGAS_abstractEnumeratedCollectionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractEnumeratedCollectionAST result ;
  const GALGAS_abstractEnumeratedCollectionAST * p = (const GALGAS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumeratedCollectionCstListInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mElementList.objectCompare (p->mAttribute_mElementList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndsWithEllipsis.objectCompare (p->mAttribute_mEndsWithEllipsis) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedExpression.objectCompare (p->mAttribute_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfEnumerationExpression.objectCompare (p->mAttribute_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumeratedCollectionCstListInExpAST::objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionCstListInExpAST::GALGAS_enumeratedCollectionCstListInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionCstListInExpAST::GALGAS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (const GALGAS_foreachInstructionEnumeratedObjectElementListAST & inAttribute_mElementList,
                                                                                                        const GALGAS_bool & inAttribute_mEndsWithEllipsis,
                                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                        const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  if (inAttribute_mElementList.isValid () && inAttribute_mEndsWithEllipsis.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionCstListInExpAST (inAttribute_mElementList, inAttribute_mEndsWithEllipsis, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST GALGAS_enumeratedCollectionCstListInExpAST::reader_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_foreachInstructionEnumeratedObjectElementListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mAttribute_mElementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_foreachInstructionEnumeratedObjectElementListAST cPtr_enumeratedCollectionCstListInExpAST::reader_mElementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_enumeratedCollectionCstListInExpAST::reader_mEndsWithEllipsis (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mAttribute_mEndsWithEllipsis ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_enumeratedCollectionCstListInExpAST::reader_mEndsWithEllipsis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndsWithEllipsis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionCstListInExpAST::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mAttribute_mEnumeratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionCstListInExpAST::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_enumeratedCollectionCstListInExpAST::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (const cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    result = p->mAttribute_mEndOfEnumerationExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_enumeratedCollectionCstListInExpAST::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfEnumerationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @enumeratedCollectionCstListInExpAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_foreachInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                    const GALGAS_bool & in_mEndsWithEllipsis,
                                                                                    const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GALGAS_location & in_mEndOfEnumerationExpression
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mAttribute_mElementList (in_mElementList),
mAttribute_mEndsWithEllipsis (in_mEndsWithEllipsis),
mAttribute_mEnumeratedExpression (in_mEnumeratedExpression),
mAttribute_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionCstListInExpAST:" ;
  mAttribute_mElementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndsWithEllipsis.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumeratedCollectionCstListInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mAttribute_mElementList, mAttribute_mEndsWithEllipsis, mAttribute_mEnumeratedExpression, mAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @enumeratedCollectionCstListInExpAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                            & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionCstListInExpAST GALGAS_enumeratedCollectionCstListInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionCstListInExpAST result ;
  const GALGAS_enumeratedCollectionCstListInExpAST * p = (const GALGAS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumeratedCollectionImplicitVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPrefix.objectCompare (p->mAttribute_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedExpression.objectCompare (p->mAttribute_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfEnumerationExpression.objectCompare (p->mAttribute_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumeratedCollectionImplicitVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST::GALGAS_enumeratedCollectionImplicitVarInExpAST (const cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mPrefix,
                                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  if (inAttribute_mPrefix.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionImplicitVarInExpAST (inAttribute_mPrefix, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumeratedCollectionImplicitVarInExpAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mAttribute_mPrefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumeratedCollectionImplicitVarInExpAST::reader_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionImplicitVarInExpAST::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mAttribute_mEnumeratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionImplicitVarInExpAST::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_enumeratedCollectionImplicitVarInExpAST::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
    result = p->mAttribute_mEndOfEnumerationExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_enumeratedCollectionImplicitVarInExpAST::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfEnumerationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @enumeratedCollectionImplicitVarInExpAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumeratedCollectionImplicitVarInExpAST::cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mAttribute_mPrefix (in_mPrefix),
mAttribute_mEnumeratedExpression (in_mEnumeratedExpression),
mAttribute_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionImplicitVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

void cPtr_enumeratedCollectionImplicitVarInExpAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionImplicitVarInExpAST:" ;
  mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumeratedCollectionImplicitVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionImplicitVarInExpAST (mAttribute_mPrefix, mAttribute_mEnumeratedExpression, mAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @enumeratedCollectionImplicitVarInExpAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ("enumeratedCollectionImplicitVarInExpAST",
                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionImplicitVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumeratedCollectionImplicitVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionImplicitVarInExpAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionImplicitVarInExpAST GALGAS_enumeratedCollectionImplicitVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionImplicitVarInExpAST result ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST * p = (const GALGAS_enumeratedCollectionImplicitVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionImplicitVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumeratedCollectionVarInExpAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationOptionalTypeName.objectCompare (p->mAttribute_mEnumerationOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationVariable.objectCompare (p->mAttribute_mEnumerationVariable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedExpression.objectCompare (p->mAttribute_mEnumeratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfEnumerationExpression.objectCompare (p->mAttribute_mEndOfEnumerationExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumeratedCollectionVarInExpAST::objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (void) :
GALGAS_abstractEnumeratedCollectionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST::GALGAS_enumeratedCollectionVarInExpAST (const cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) :
GALGAS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionVarInExpAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationOptionalTypeName,
                                                                                                const GALGAS_lstring & inAttribute_mEnumerationVariable,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mEnumeratedExpression,
                                                                                                const GALGAS_location & inAttribute_mEndOfEnumerationExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  if (inAttribute_mEnumerationOptionalTypeName.isValid () && inAttribute_mEnumerationVariable.isValid () && inAttribute_mEnumeratedExpression.isValid () && inAttribute_mEndOfEnumerationExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionVarInExpAST (inAttribute_mEnumerationOptionalTypeName, inAttribute_mEnumerationVariable, inAttribute_mEnumeratedExpression, inAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::reader_mEnumerationOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEnumerationOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumeratedCollectionVarInExpAST::reader_mEnumerationOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumeratedCollectionVarInExpAST::reader_mEnumerationVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEnumerationVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumeratedCollectionVarInExpAST::reader_mEnumerationVariable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_enumeratedCollectionVarInExpAST::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEnumeratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_enumeratedCollectionVarInExpAST::reader_mEnumeratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_enumeratedCollectionVarInExpAST::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (const cPtr_enumeratedCollectionVarInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionVarInExpAST) ;
    result = p->mAttribute_mEndOfEnumerationExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_enumeratedCollectionVarInExpAST::reader_mEndOfEnumerationExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfEnumerationExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @enumeratedCollectionVarInExpAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumeratedCollectionVarInExpAST::cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                                            const GALGAS_lstring & in_mEnumerationVariable,
                                                                            const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                            const GALGAS_location & in_mEndOfEnumerationExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (THERE),
mAttribute_mEnumerationOptionalTypeName (in_mEnumerationOptionalTypeName),
mAttribute_mEnumerationVariable (in_mEnumerationVariable),
mAttribute_mEnumeratedExpression (in_mEnumeratedExpression),
mAttribute_mEndOfEnumerationExpression (in_mEndOfEnumerationExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumeratedCollectionVarInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

void cPtr_enumeratedCollectionVarInExpAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@enumeratedCollectionVarInExpAST:" ;
  mAttribute_mEnumerationOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumerationVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumeratedCollectionVarInExpAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumeratedCollectionVarInExpAST (mAttribute_mEnumerationOptionalTypeName, mAttribute_mEnumerationVariable, mAttribute_mEnumeratedExpression, mAttribute_mEndOfEnumerationExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @enumeratedCollectionVarInExpAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ("enumeratedCollectionVarInExpAST",
                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumeratedCollectionVarInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumeratedCollectionVarInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumeratedCollectionVarInExpAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumeratedCollectionVarInExpAST GALGAS_enumeratedCollectionVarInExpAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumeratedCollectionVarInExpAST result ;
  const GALGAS_enumeratedCollectionVarInExpAST * p = (const GALGAS_enumeratedCollectionVarInExpAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumeratedCollectionVarInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                 Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @abstractGrammarInstructionSyntaxDirectedTranslationResult type                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::reader_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationDropResult:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @grammarInstructionSyntaxDirectedTranslationDropResult type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                                  const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//              Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                              const GALGAS_lstring & in_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::description (C_String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst type                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst",
                                                                                         & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar type                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar",
                                                                                       & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultInVar:" ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @grammarInstructionSyntaxDirectedTranslationResultInVar type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ("grammarInstructionSyntaxDirectedTranslationResultInVar",
                                                                               & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                   Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (C_String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString << "[@grammarInstructionSyntaxDirectedTranslationResultNone]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @grammarInstructionSyntaxDirectedTranslationResultNone type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractInputParameter::objectCompare (const GALGAS_abstractInputParameter & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter::GALGAS_abstractInputParameter (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter::GALGAS_abstractInputParameter (const cPtr_abstractInputParameter * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @abstractInputParameter class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractInputParameter::cPtr_abstractInputParameter (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractInputParameter type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractInputParameter ("abstractInputParameter",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractInputParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractInputParameter::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInputParameter (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInputParameter GALGAS_abstractInputParameter::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractInputParameter result ;
  const GALGAS_abstractInputParameter * p = (const GALGAS_abstractInputParameter *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractInputParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterAnonymousVariable::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterAnonymousVariable::objectCompare (const GALGAS_inputParameterAnonymousVariable & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterAnonymousVariable::GALGAS_inputParameterAnonymousVariable (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterAnonymousVariable::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterAnonymousVariable::GALGAS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterAnonymousVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::constructor_new (LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterAnonymousVariable (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @inputParameterAnonymousVariable class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterAnonymousVariable::cPtr_inputParameterAnonymousVariable (LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterAnonymousVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

void cPtr_inputParameterAnonymousVariable::description (C_String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString << "[@inputParameterAnonymousVariable]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterAnonymousVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterAnonymousVariable (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterAnonymousVariable type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ("inputParameterAnonymousVariable",
                                                        & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterAnonymousVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterAnonymousVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterAnonymousVariable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable result ;
  const GALGAS_inputParameterAnonymousVariable * p = (const GALGAS_inputParameterAnonymousVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterAnonymousVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterDeclaredConstant::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterDeclaredConstant::objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterDeclaredConstant::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredConstant (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredConstant::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredConstant * p = (const cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredConstant::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @inputParameterDeclaredConstant class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@inputParameterDeclaredConstant:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterDeclaredConstant::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterDeclaredConstant type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  const GALGAS_inputParameterDeclaredConstant * p = (const GALGAS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterDeclaredConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterDeclaredVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterTypeName.objectCompare (p->mAttribute_mActualParameterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterDeclaredVariable::objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterDeclaredVariable::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mActualParameterName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  if (inAttribute_mActualParameterTypeName.isValid () && inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredVariable (inAttribute_mActualParameterTypeName, inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    result = p->mAttribute_mActualParameterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredVariable::reader_mActualParameterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterDeclaredVariable * p = (const cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterDeclaredVariable::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @inputParameterDeclaredVariable class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterTypeName (in_mActualParameterTypeName),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@inputParameterDeclaredVariable:" ;
  mAttribute_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterDeclaredVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mAttribute_mActualParameterTypeName, mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @inputParameterDeclaredVariable type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  const GALGAS_inputParameterDeclaredVariable * p = (const GALGAS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterDeclaredVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputParameterVariable::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputParameterVariable) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualParameterName.objectCompare (p->mAttribute_mActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputParameterVariable::objectCompare (const GALGAS_inputParameterVariable & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (void) :
GALGAS_abstractInputParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputParameterVariable::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::constructor_new (const GALGAS_lstring & inAttribute_mActualParameterName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  if (inAttribute_mActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (inAttribute_mActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputParameterVariable::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputParameterVariable * p = (const cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    result = p->mAttribute_mActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputParameterVariable::reader_mActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @inputParameterVariable class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mAttribute_mActualParameterName (in_mActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@inputParameterVariable:" ;
  mAttribute_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputParameterVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mAttribute_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @inputParameterVariable type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                               & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  const GALGAS_inputParameterVariable * p = (const GALGAS_inputParameterVariable *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractLexicalRoutineActualArgumentAST::objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_abstractLexicalRoutineActualArgumentAST::reader_mActualPassingModeLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractLexicalRoutineActualArgumentAST * p = (const cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    result = p->mAttribute_mActualPassingModeLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_abstractLexicalRoutineActualArgumentAST::reader_mActualPassingModeLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualPassingModeLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @abstractLexicalRoutineActualArgumentAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GALGAS_location & in_mActualPassingModeLocation
                                                                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mActualPassingModeLocation (in_mActualPassingModeLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @abstractLexicalRoutineActualArgumentAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_abstractLexicalRoutineActualArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRoutineActualArgumentAST result ;
  const GALGAS_abstractLexicalRoutineActualArgumentAST * p = (const GALGAS_abstractLexicalRoutineActualArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLexicalRoutineActualArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalAttributeInputOutputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualPassingModeLocation.objectCompare (p->mAttribute_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeName.objectCompare (p->mAttribute_mAttributeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                         GALGAS_lstring::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                                              const GALGAS_lstring & inAttribute_mAttributeName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mAttributeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputOutputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mAttributeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalAttributeInputOutputArgumentAST::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalAttributeInputOutputArgumentAST * p = (const cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    result = p->mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalAttributeInputOutputArgumentAST::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @lexicalAttributeInputOutputArgumentAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                          const GALGAS_lstring & in_mAttributeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mAttribute_mAttributeName (in_mAttributeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@lexicalAttributeInputOutputArgumentAST:" ;
  mAttribute_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mAttribute_mActualPassingModeLocation, mAttribute_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalAttributeInputOutputArgumentAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                               & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalFormalInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFormalInputArgumentAST * p = (const cPtr_lexicalFormalInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualPassingModeLocation.objectCompare (p->mAttribute_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineOrFunctionFormalInputArgument.objectCompare (p->mAttribute_mRoutineOrFunctionFormalInputArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalFormalInputArgumentAST::objectCompare (const GALGAS_lexicalFormalInputArgumentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                            const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inAttribute_mRoutineOrFunctionFormalInputArgument
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mRoutineOrFunctionFormalInputArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFormalInputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::reader_mRoutineOrFunctionFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFormalInputArgumentAST * p = (const cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    result = p->mAttribute_mRoutineOrFunctionFormalInputArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cPtr_lexicalFormalInputArgumentAST::reader_mRoutineOrFunctionFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineOrFunctionFormalInputArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @lexicalFormalInputArgumentAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                        const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mAttribute_mRoutineOrFunctionFormalInputArgument (in_mRoutineOrFunctionFormalInputArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

void cPtr_lexicalFormalInputArgumentAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@lexicalFormalInputArgumentAST:" ;
  mAttribute_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineOrFunctionFormalInputArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalFormalInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mAttribute_mActualPassingModeLocation, mAttribute_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalFormalInputArgumentAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                      & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  const GALGAS_lexicalFormalInputArgumentAST * p = (const GALGAS_lexicalFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractLexicalRuleAST::objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRuleAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @abstractLexicalRuleAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractLexicalRuleAST::cPtr_abstractLexicalRuleAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractLexicalRuleAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST ("abstractLexicalRuleAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST GALGAS_abstractLexicalRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST result ;
  const GALGAS_abstractLexicalRuleAST * p = (const GALGAS_abstractLexicalRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLexicalRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalExplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalRuleExpression.objectCompare (p->mAttribute_mLexicalRuleExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalExplicitRuleAST::objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLexicalRuleExpression,
                                                                              const GALGAS_lexicalInstructionListAST & inAttribute_mInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  if (inAttribute_mLexicalRuleExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalExplicitRuleAST (inAttribute_mLexicalRuleExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalExplicitRuleAST::reader_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mAttribute_mLexicalRuleExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cPtr_lexicalExplicitRuleAST::reader_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRuleExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalExplicitRuleAST::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cPtr_lexicalExplicitRuleAST::reader_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalExplicitRuleAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mAttribute_mLexicalRuleExpression (in_mLexicalRuleExpression),
mAttribute_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalExplicitRuleAST:" ;
  mAttribute_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalExplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mAttribute_mLexicalRuleExpression, mAttribute_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalExplicitRuleAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  const GALGAS_lexicalExplicitRuleAST * p = (const GALGAS_lexicalExplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalImplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mListName.objectCompare (p->mAttribute_mListName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalImplicitRuleAST::objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalImplicitRuleAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::constructor_new (const GALGAS_lstring & inAttribute_mListName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  if (inAttribute_mListName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalImplicitRuleAST (inAttribute_mListName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalImplicitRuleAST::reader_mListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalImplicitRuleAST * p = (const cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    result = p->mAttribute_mListName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalImplicitRuleAST::reader_mListName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalImplicitRuleAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mAttribute_mListName (in_mListName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalImplicitRuleAST:" ;
  mAttribute_mListName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mAttribute_mListName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalImplicitRuleAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  const GALGAS_lexicalImplicitRuleAST * p = (const GALGAS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSyntaxInstructionForGrammarAnalysis::GALGAS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSyntaxInstructionForGrammarAnalysis::GALGAS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_abstractSyntaxInstructionForGrammarAnalysis::reader_mStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mStartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_abstractSyntaxInstructionForGrammarAnalysis::reader_mStartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mStartLocation (in_mStartLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @abstractSyntaxInstructionForGrammarAnalysis type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GALGAS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_nonTerminalInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_nonTerminalInstructionForGrammarAnalysis * p = (const cPtr_nonTerminalInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStartLocation.objectCompare (p->mAttribute_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalSymbolName.objectCompare (p->mAttribute_mNonterminalSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalSymbolIndex.objectCompare (p->mAttribute_mNonterminalSymbolIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_nonTerminalInstructionForGrammarAnalysis::objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalInstructionForGrammarAnalysis::GALGAS_nonTerminalInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalInstructionForGrammarAnalysis GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_default (LOCATION_ARGS) {
  return GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                           GALGAS_lstring::constructor_default (HERE),
                                                                           GALGAS_uint::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalInstructionForGrammarAnalysis::GALGAS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalInstructionForGrammarAnalysis GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                                  const GALGAS_lstring & inAttribute_mNonterminalSymbolName,
                                                                                                                  const GALGAS_uint & inAttribute_mNonterminalSymbolIndex
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mNonterminalSymbolName.isValid () && inAttribute_mNonterminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_nonTerminalInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mNonterminalSymbolName, inAttribute_mNonterminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_nonTerminalInstructionForGrammarAnalysis::reader_mNonterminalSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonTerminalInstructionForGrammarAnalysis * p = (const cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mNonterminalSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_nonTerminalInstructionForGrammarAnalysis::reader_mNonterminalSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalInstructionForGrammarAnalysis::reader_mNonterminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonTerminalInstructionForGrammarAnalysis * p = (const cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mNonterminalSymbolIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_nonTerminalInstructionForGrammarAnalysis::reader_mNonterminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @nonTerminalInstructionForGrammarAnalysis class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                              const GALGAS_lstring & in_mNonterminalSymbolName,
                                                                                              const GALGAS_uint & in_mNonterminalSymbolIndex
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mAttribute_mNonterminalSymbolName (in_mNonterminalSymbolName),
mAttribute_mNonterminalSymbolIndex (in_mNonterminalSymbolIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_nonTerminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

void cPtr_nonTerminalInstructionForGrammarAnalysis::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@nonTerminalInstructionForGrammarAnalysis:" ;
  mAttribute_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonterminalSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_nonTerminalInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_nonTerminalInstructionForGrammarAnalysis (mAttribute_mStartLocation, mAttribute_mNonterminalSymbolName, mAttribute_mNonterminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @nonTerminalInstructionForGrammarAnalysis type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ("nonTerminalInstructionForGrammarAnalysis",
                                                                 & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalInstructionForGrammarAnalysis GALGAS_nonTerminalInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalInstructionForGrammarAnalysis result ;
  const GALGAS_nonTerminalInstructionForGrammarAnalysis * p = (const GALGAS_nonTerminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_repeatInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStartLocation.objectCompare (p->mAttribute_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatBranchList.objectCompare (p->mAttribute_mRepeatBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddedNonTerminalSymbolIndex.objectCompare (p->mAttribute_mAddedNonTerminalSymbolIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_repeatInstructionForGrammarAnalysis::objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGrammarAnalysis::GALGAS_repeatInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::constructor_default (LOCATION_ARGS) {
  return GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_branchListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                      GALGAS_uint::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGrammarAnalysis::GALGAS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGrammarAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                        const GALGAS_branchListForGrammarAnalysis & inAttribute_mRepeatBranchList,
                                                                                                        const GALGAS_uint & inAttribute_mAddedNonTerminalSymbolIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mRepeatBranchList.isValid () && inAttribute_mAddedNonTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mRepeatBranchList, inAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::reader_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mRepeatBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis cPtr_repeatInstructionForGrammarAnalysis::reader_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_repeatInstructionForGrammarAnalysis::reader_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mAddedNonTerminalSymbolIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_repeatInstructionForGrammarAnalysis::reader_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddedNonTerminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @repeatInstructionForGrammarAnalysis class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                    const GALGAS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                                                    const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mAttribute_mRepeatBranchList (in_mRepeatBranchList),
mAttribute_mAddedNonTerminalSymbolIndex (in_mAddedNonTerminalSymbolIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_repeatInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

void cPtr_repeatInstructionForGrammarAnalysis::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@repeatInstructionForGrammarAnalysis:" ;
  mAttribute_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_repeatInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mAttribute_mStartLocation, mAttribute_mRepeatBranchList, mAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @repeatInstructionForGrammarAnalysis type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ("repeatInstructionForGrammarAnalysis",
                                                            & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_repeatInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  const GALGAS_repeatInstructionForGrammarAnalysis * p = (const GALGAS_repeatInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_repeatInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selectInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStartLocation.objectCompare (p->mAttribute_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSelectBranchList.objectCompare (p->mAttribute_mSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddedNonTerminalSymbolIndex.objectCompare (p->mAttribute_mAddedNonTerminalSymbolIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selectInstructionForGrammarAnalysis::objectCompare (const GALGAS_selectInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGrammarAnalysis::GALGAS_selectInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectInstructionForGrammarAnalysis::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_branchListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                      GALGAS_uint::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGrammarAnalysis::GALGAS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGrammarAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                        const GALGAS_branchListForGrammarAnalysis & inAttribute_mSelectBranchList,
                                                                                                        const GALGAS_uint & inAttribute_mAddedNonTerminalSymbolIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mSelectBranchList.isValid () && inAttribute_mAddedNonTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mSelectBranchList, inAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::reader_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mSelectBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis cPtr_selectInstructionForGrammarAnalysis::reader_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_selectInstructionForGrammarAnalysis::reader_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mAddedNonTerminalSymbolIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_selectInstructionForGrammarAnalysis::reader_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddedNonTerminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @selectInstructionForGrammarAnalysis class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                    const GALGAS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                                                    const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mAttribute_mSelectBranchList (in_mSelectBranchList),
mAttribute_mAddedNonTerminalSymbolIndex (in_mAddedNonTerminalSymbolIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selectInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

void cPtr_selectInstructionForGrammarAnalysis::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@selectInstructionForGrammarAnalysis:" ;
  mAttribute_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selectInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mAttribute_mStartLocation, mAttribute_mSelectBranchList, mAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @selectInstructionForGrammarAnalysis type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ("selectInstructionForGrammarAnalysis",
                                                            & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  const GALGAS_selectInstructionForGrammarAnalysis * p = (const GALGAS_selectInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_terminalInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_terminalInstructionForGrammarAnalysis * p = (const cPtr_terminalInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStartLocation.objectCompare (p->mAttribute_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalSymbolName.objectCompare (p->mAttribute_mTerminalSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalSymbolIndex.objectCompare (p->mAttribute_mTerminalSymbolIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_terminalInstructionForGrammarAnalysis::objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalInstructionForGrammarAnalysis::GALGAS_terminalInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalInstructionForGrammarAnalysis GALGAS_terminalInstructionForGrammarAnalysis::constructor_default (LOCATION_ARGS) {
  return GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_uint::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalInstructionForGrammarAnalysis::GALGAS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalInstructionForGrammarAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalInstructionForGrammarAnalysis GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                            const GALGAS_lstring & inAttribute_mTerminalSymbolName,
                                                                                                            const GALGAS_uint & inAttribute_mTerminalSymbolIndex
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_terminalInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mTerminalSymbolName.isValid () && inAttribute_mTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_terminalInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mTerminalSymbolName, inAttribute_mTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalInstructionForGrammarAnalysis::reader_mTerminalSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalInstructionForGrammarAnalysis * p = (const cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mTerminalSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_terminalInstructionForGrammarAnalysis::reader_mTerminalSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_terminalInstructionForGrammarAnalysis::reader_mTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_terminalInstructionForGrammarAnalysis * p = (const cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    result = p->mAttribute_mTerminalSymbolIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_terminalInstructionForGrammarAnalysis::reader_mTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalSymbolIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @terminalInstructionForGrammarAnalysis class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                        const GALGAS_lstring & in_mTerminalSymbolName,
                                                                                        const GALGAS_uint & in_mTerminalSymbolIndex
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mAttribute_mTerminalSymbolName (in_mTerminalSymbolName),
mAttribute_mTerminalSymbolIndex (in_mTerminalSymbolIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_terminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

void cPtr_terminalInstructionForGrammarAnalysis::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@terminalInstructionForGrammarAnalysis:" ;
  mAttribute_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_terminalInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_terminalInstructionForGrammarAnalysis (mAttribute_mStartLocation, mAttribute_mTerminalSymbolName, mAttribute_mTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @terminalInstructionForGrammarAnalysis type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ("terminalInstructionForGrammarAnalysis",
                                                              & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalInstructionForGrammarAnalysis GALGAS_terminalInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalInstructionForGrammarAnalysis result ;
  const GALGAS_terminalInstructionForGrammarAnalysis * p = (const GALGAS_terminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_actualParameterAST::objectCompare (const GALGAS_actualParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST::GALGAS_actualParameterAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST::GALGAS_actualParameterAST (const cPtr_actualParameterAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @actualParameterAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_actualParameterAST::cPtr_actualParameterAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @actualParameterAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterAST ("actualParameterAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST GALGAS_actualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterAST result ;
  const GALGAS_actualParameterAST * p = (const GALGAS_actualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualExistingVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualExistingVariableParameterAST::objectCompare (const GALGAS_inputActualExistingVariableParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualExistingVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                          GALGAS_lstring::constructor_default (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST::GALGAS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualExistingVariableParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                                const GALGAS_lstring & inAttribute_mInputActualParameterName
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualExistingVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualExistingVariableParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualExistingVariableParameterAST::reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualExistingVariableParameterAST * p = (const cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualExistingVariableParameterAST::reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @inputActualExistingVariableParameterAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                            const GALGAS_lstring & in_mInputActualParameterName
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputActualParameterName (in_mInputActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualExistingVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

void cPtr_inputActualExistingVariableParameterAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@inputActualExistingVariableParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualExistingVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualExistingVariableParameterAST (mAttribute_mActualSelector, mAttribute_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @inputActualExistingVariableParameterAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ("inputActualExistingVariableParameterAST",
                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualExistingVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualExistingVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualExistingVariableParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST result ;
  const GALGAS_inputActualExistingVariableParameterAST * p = (const GALGAS_inputActualExistingVariableParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualExistingVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualNewConstantParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputOptionalActualTypeName.objectCompare (p->mAttribute_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMarkedAsUnused.objectCompare (p->mAttribute_mMarkedAsUnused) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualNewConstantParameterAST::objectCompare (const GALGAS_inputActualNewConstantParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewConstantParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST::GALGAS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                      const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mInputActualParameterName,
                                                                                                      const GALGAS_bool & inAttribute_mMarkedAsUnused
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid () && inAttribute_mMarkedAsUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewConstantParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName, inAttribute_mMarkedAsUnused COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::reader_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mInputOptionalActualTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::reader_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputOptionalActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewConstantParameterAST::reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewConstantParameterAST::reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_inputActualNewConstantParameterAST::reader_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewConstantParameterAST * p = (const cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    result = p->mAttribute_mMarkedAsUnused ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_inputActualNewConstantParameterAST::reader_mMarkedAsUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMarkedAsUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualNewConstantParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName,
                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mAttribute_mInputActualParameterName (in_mInputActualParameterName),
mAttribute_mMarkedAsUnused (in_mMarkedAsUnused) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewConstantParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualNewConstantParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mAttribute_mActualSelector, mAttribute_mInputOptionalActualTypeName, mAttribute_mInputActualParameterName, mAttribute_mMarkedAsUnused COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewConstantParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST result ;
  const GALGAS_inputActualNewConstantParameterAST * p = (const GALGAS_inputActualNewConstantParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewConstantParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualNewVariableParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputOptionalActualTypeName.objectCompare (p->mAttribute_mInputOptionalActualTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualParameterName.objectCompare (p->mAttribute_mInputActualParameterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualNewVariableParameterAST::objectCompare (const GALGAS_inputActualNewVariableParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualNewVariableParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST::GALGAS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                                      const GALGAS_lstring & inAttribute_mInputOptionalActualTypeName,
                                                                                                      const GALGAS_lstring & inAttribute_mInputActualParameterName
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mInputOptionalActualTypeName.isValid () && inAttribute_mInputActualParameterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualNewVariableParameterAST (inAttribute_mActualSelector, inAttribute_mInputOptionalActualTypeName, inAttribute_mInputActualParameterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::reader_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mInputOptionalActualTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::reader_mInputOptionalActualTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputOptionalActualTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputActualNewVariableParameterAST::reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualNewVariableParameterAST * p = (const cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    result = p->mAttribute_mInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputActualNewVariableParameterAST::reader_mInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualNewVariableParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GALGAS_lstring & in_mInputActualParameterName
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mInputOptionalActualTypeName (in_mInputOptionalActualTypeName),
mAttribute_mInputActualParameterName (in_mInputActualParameterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputActualNewVariableParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualNewVariableParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mAttribute_mActualSelector, mAttribute_mInputOptionalActualTypeName, mAttribute_mInputActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputActualNewVariableParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST result ;
  const GALGAS_inputActualNewVariableParameterAST * p = (const GALGAS_inputActualNewVariableParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualNewVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mQualifierLocation.objectCompare (p->mAttribute_mQualifierLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mJokerIndex.objectCompare (p->mAttribute_mJokerIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputJokerActualParameterAST::objectCompare (const GALGAS_inputJokerActualParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerActualParameterAST::GALGAS_inputJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputJokerActualParameterAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_uint::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerActualParameterAST::GALGAS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::constructor_new (const GALGAS_location & inAttribute_mQualifierLocation,
                                                                                          const GALGAS_uint & inAttribute_mJokerIndex
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST result ;
  if (inAttribute_mQualifierLocation.isValid () && inAttribute_mJokerIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputJokerActualParameterAST (inAttribute_mQualifierLocation, inAttribute_mJokerIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_inputJokerActualParameterAST::reader_mQualifierLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    result = p->mAttribute_mQualifierLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_inputJokerActualParameterAST::reader_mQualifierLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifierLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_inputJokerActualParameterAST::reader_mJokerIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    result = p->mAttribute_mJokerIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_inputJokerActualParameterAST::reader_mJokerIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJokerIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @inputJokerActualParameterAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                                      const GALGAS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mQualifierLocation (in_mQualifierLocation),
mAttribute_mJokerIndex (in_mJokerIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

void cPtr_inputJokerActualParameterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@inputJokerActualParameterAST:" ;
  mAttribute_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputJokerActualParameterAST (mAttribute_mQualifierLocation, mAttribute_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @inputJokerActualParameterAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerActualParameterAST ("inputJokerActualParameterAST",
                                                     & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST result ;
  const GALGAS_inputJokerActualParameterAST * p = (const GALGAS_inputJokerActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputSingleJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputSingleJokerActualParameterAST::objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputSingleJokerActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputSingleJokerActualParameterAST * p = (const cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_inputSingleJokerActualParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputSingleJokerActualParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@inputSingleJokerActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mAttribute_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @inputSingleJokerActualParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  const GALGAS_inputSingleJokerActualParameterAST * p = (const GALGAS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputActualParameterExpression.objectCompare (p->mAttribute_mOutputActualParameterExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (p->mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputActualParameterAST::objectCompare (const GALGAS_outputActualParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST::GALGAS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mOutputActualParameterExpression,
                                                                                  const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputActualParameterExpression.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputActualParameterExpression, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputActualParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputActualParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_outputActualParameterAST::reader_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mAttribute_mOutputActualParameterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST cPtr_outputActualParameterAST::reader_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputActualParameterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outputActualParameterAST::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterAST * p = (const cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    result = p->mAttribute_mEndOfExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_outputActualParameterAST::reader_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @outputActualParameterAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                              const GALGAS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                              const GALGAS_location & in_mEndOfExpressionLocation
                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mOutputActualParameterExpression (in_mOutputActualParameterExpression),
mAttribute_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

void cPtr_outputActualParameterAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@outputActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputActualParameterAST (mAttribute_mActualSelector, mAttribute_mOutputActualParameterExpression, mAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @outputActualParameterAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterAST ("outputActualParameterAST",
                                                 & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST result ;
  const GALGAS_outputActualParameterAST * p = (const GALGAS_outputActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputInputActualParameterName.objectCompare (p->mAttribute_mOutputInputActualParameterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputActualParameterAST::objectCompare (const GALGAS_outputInputActualParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST::GALGAS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector,
                                                                                            const GALGAS_lstring & inAttribute_mOutputInputActualParameterName,
                                                                                            const GALGAS_lstringlist & inAttribute_mStructAttributeList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  if (inAttribute_mActualSelector.isValid () && inAttribute_mOutputInputActualParameterName.isValid () && inAttribute_mStructAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterAST (inAttribute_mActualSelector, inAttribute_mOutputInputActualParameterName, inAttribute_mStructAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputInputActualParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputInputActualParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputInputActualParameterAST::reader_mOutputInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mAttribute_mOutputInputActualParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputInputActualParameterAST::reader_mOutputInputActualParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputInputActualParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_outputInputActualParameterAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterAST * p = (const cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_outputInputActualParameterAST::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @outputInputActualParameterAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                        const GALGAS_lstring & in_mOutputInputActualParameterName,
                                                                        const GALGAS_lstringlist & in_mStructAttributeList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector),
mAttribute_mOutputInputActualParameterName (in_mOutputInputActualParameterName),
mAttribute_mStructAttributeList (in_mStructAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

void cPtr_outputInputActualParameterAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterAST (mAttribute_mActualSelector, mAttribute_mOutputInputActualParameterName, mAttribute_mStructAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outputInputActualParameterAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterAST ("outputInputActualParameterAST",
                                                      & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST result ;
  const GALGAS_outputInputActualParameterAST * p = (const GALGAS_outputInputActualParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mQualifierLocation.objectCompare (p->mAttribute_mQualifierLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mJokerIndex.objectCompare (p->mAttribute_mJokerIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputJokerParameterAST::objectCompare (const GALGAS_outputInputJokerParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputJokerParameterAST::GALGAS_outputInputJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputJokerParameterAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_uint::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputJokerParameterAST::GALGAS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputJokerParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::constructor_new (const GALGAS_location & inAttribute_mQualifierLocation,
                                                                                          const GALGAS_uint & inAttribute_mJokerIndex
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST result ;
  if (inAttribute_mQualifierLocation.isValid () && inAttribute_mJokerIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputJokerParameterAST (inAttribute_mQualifierLocation, inAttribute_mJokerIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outputInputJokerParameterAST::reader_mQualifierLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    result = p->mAttribute_mQualifierLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_outputInputJokerParameterAST::reader_mQualifierLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mQualifierLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_outputInputJokerParameterAST::reader_mJokerIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    result = p->mAttribute_mJokerIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_outputInputJokerParameterAST::reader_mJokerIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mJokerIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @outputInputJokerParameterAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                                      const GALGAS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mQualifierLocation (in_mQualifierLocation),
mAttribute_mJokerIndex (in_mJokerIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

void cPtr_outputInputJokerParameterAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@outputInputJokerParameterAST:" ;
  mAttribute_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputJokerParameterAST (mAttribute_mQualifierLocation, mAttribute_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outputInputJokerParameterAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputJokerParameterAST ("outputInputJokerParameterAST",
                                                     & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputJokerParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST result ;
  const GALGAS_outputInputJokerParameterAST * p = (const GALGAS_outputInputJokerParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputSingleJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualSelector.objectCompare (p->mAttribute_mActualSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputSingleJokerParameterAST::objectCompare (const GALGAS_outputInputSingleJokerParameterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputSingleJokerParameterAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST::GALGAS_outputInputSingleJokerParameterAST (const cPtr_outputInputSingleJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSingleJokerParameterAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::constructor_new (const GALGAS_lstring & inAttribute_mActualSelector
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  if (inAttribute_mActualSelector.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputSingleJokerParameterAST (inAttribute_mActualSelector COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outputInputSingleJokerParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputSingleJokerParameterAST * p = (const cPtr_outputInputSingleJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSingleJokerParameterAST) ;
    result = p->mAttribute_mActualSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_outputInputSingleJokerParameterAST::reader_mActualSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @outputInputSingleJokerParameterAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputSingleJokerParameterAST::cPtr_outputInputSingleJokerParameterAST (const GALGAS_lstring & in_mActualSelector
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mAttribute_mActualSelector (in_mActualSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputSingleJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

void cPtr_outputInputSingleJokerParameterAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@outputInputSingleJokerParameterAST:" ;
  mAttribute_mActualSelector.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputSingleJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputSingleJokerParameterAST (mAttribute_mActualSelector COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outputInputSingleJokerParameterAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ("outputInputSingleJokerParameterAST",
                                                           & kTypeDescriptor_GALGAS_actualParameterAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputSingleJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputSingleJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSingleJokerParameterAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST result ;
  const GALGAS_outputInputSingleJokerParameterAST * p = (const GALGAS_outputInputSingleJokerParameterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputSingleJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSingleJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_actualParameterForGeneration::objectCompare (const GALGAS_actualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration::GALGAS_actualParameterForGeneration (const cPtr_actualParameterForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_actualParameterForGeneration::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_actualParameterForGeneration * p = (const cPtr_actualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actualParameterForGeneration) ;
    result = p->mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_actualParameterForGeneration::reader_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @actualParameterForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_actualParameterForGeneration::cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType
                                                                      COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mFormalArgumentType (in_mFormalArgumentType) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @actualParameterForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterForGeneration ("actualParameterForGeneration",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterForGeneration GALGAS_actualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterForGeneration result ;
  const GALGAS_actualParameterForGeneration * p = (const GALGAS_actualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualCppName.objectCompare (p->mAttribute_mInputActualCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputActualParameterForGeneration::objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                    const GALGAS_string & inAttribute_mInputActualCppName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_inputActualParameterForGeneration::reader_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputActualParameterForGeneration * p = (const cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    result = p->mAttribute_mInputActualCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_inputActualParameterForGeneration::reader_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @inputActualParameterForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                const GALGAS_string & in_mInputActualCppName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mInputActualCppName (in_mInputActualCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@inputActualParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mInputActualCppName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputActualParameterForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                          & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  const GALGAS_inputActualParameterForGeneration * p = (const GALGAS_inputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_inputJokerParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inputJokerParameterForGeneration * p = (const cPtr_inputJokerParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInputActualCppName.objectCompare (p->mAttribute_mInputActualCppName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_inputJokerParameterForGeneration::objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_inputJokerParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                   GALGAS_string::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration::GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                  const GALGAS_string & inAttribute_mInputActualCppName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mInputActualCppName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputJokerParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mInputActualCppName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_inputJokerParameterForGeneration::reader_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_inputJokerParameterForGeneration * p = (const cPtr_inputJokerParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerParameterForGeneration) ;
    result = p->mAttribute_mInputActualCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_inputJokerParameterForGeneration::reader_mInputActualCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInputActualCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @inputJokerParameterForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_inputJokerParameterForGeneration::cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                              const GALGAS_string & in_mInputActualCppName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mInputActualCppName (in_mInputActualCppName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_inputJokerParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

void cPtr_inputJokerParameterForGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@inputJokerParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_inputJokerParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_inputJokerParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mInputActualCppName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputJokerParameterForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ("inputJokerParameterForGeneration",
                                                         & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_inputJokerParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_inputJokerParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_inputJokerParameterForGeneration GALGAS_inputJokerParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerParameterForGeneration result ;
  const GALGAS_inputJokerParameterForGeneration * p = (const GALGAS_inputJokerParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_inputJokerParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputActualParameterForGeneration * p = (const cPtr_outputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputActualParameterExpression.objectCompare (p->mAttribute_mOutputActualParameterExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputActualParameterForGeneration::objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                      const GALGAS_semanticExpressionForGeneration & inAttribute_mOutputActualParameterExpression
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputActualParameterExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputActualParameterExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration GALGAS_outputActualParameterForGeneration::reader_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputActualParameterForGeneration * p = (const cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    result = p->mAttribute_mOutputActualParameterExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionForGeneration cPtr_outputActualParameterForGeneration::reader_mOutputActualParameterExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputActualParameterExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @outputActualParameterForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mOutputActualParameterExpression (in_mOutputActualParameterExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@outputActualParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mOutputActualParameterExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outputActualParameterForGeneration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                           & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  const GALGAS_outputActualParameterForGeneration * p = (const GALGAS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_outputInputActualParameterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentType.objectCompare (p->mAttribute_mFormalArgumentType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutputInputVariableCppName.objectCompare (p->mAttribute_mOutputInputVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructAttributeList.objectCompare (p->mAttribute_mStructAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeList.objectCompare (p->mAttribute_mTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_outputInputActualParameterForGeneration::objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_outputInputActualParameterForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                          GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration::GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mFormalArgumentType,
                                                                                                                const GALGAS_string & inAttribute_mOutputInputVariableCppName,
                                                                                                                const GALGAS_lstringlist & inAttribute_mStructAttributeList,
                                                                                                                const GALGAS_unifiedTypeMapProxyList & inAttribute_mTypeList
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  if (inAttribute_mFormalArgumentType.isValid () && inAttribute_mOutputInputVariableCppName.isValid () && inAttribute_mStructAttributeList.isValid () && inAttribute_mTypeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputActualParameterForGeneration (inAttribute_mFormalArgumentType, inAttribute_mOutputInputVariableCppName, inAttribute_mStructAttributeList, inAttribute_mTypeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_outputInputActualParameterForGeneration::reader_mOutputInputVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mAttribute_mOutputInputVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_outputInputActualParameterForGeneration::reader_mOutputInputVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutputInputVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_outputInputActualParameterForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mAttribute_mStructAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_outputInputActualParameterForGeneration::reader_mStructAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_outputInputActualParameterForGeneration::reader_mTypeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapProxyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_outputInputActualParameterForGeneration * p = (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    result = p->mAttribute_mTypeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList cPtr_outputInputActualParameterForGeneration::reader_mTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @outputInputActualParameterForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                            const GALGAS_string & in_mOutputInputVariableCppName,
                                                                                            const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                            const GALGAS_unifiedTypeMapProxyList & in_mTypeList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mAttribute_mOutputInputVariableCppName (in_mOutputInputVariableCppName),
mAttribute_mStructAttributeList (in_mStructAttributeList),
mAttribute_mTypeList (in_mTypeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@outputInputActualParameterForGeneration:" ;
  mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_outputInputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mAttribute_mFormalArgumentType, mAttribute_mOutputInputVariableCppName, mAttribute_mStructAttributeList, mAttribute_mTypeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @outputInputActualParameterForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outputInputActualParameterForGeneration GALGAS_outputInputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterForGeneration result ;
  const GALGAS_outputInputActualParameterForGeneration * p = (const GALGAS_outputInputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outputInputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_lexicalExpressionAST::objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @lexicalExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST result ;
  const GALGAS_lexicalExpressionAST * p = (const GALGAS_lexicalExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLowerBound.objectCompare (p->mAttribute_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUpperBound.objectCompare (p->mAttribute_mUpperBound) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                   GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::reader_mLowerBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    result = p->mAttribute_mLowerBound ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cPtr_lexicalCharacterIntervalMatchAST::reader_mLowerBound (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLowerBound ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::reader_mUpperBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (const cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    result = p->mAttribute_mUpperBound ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cPtr_lexicalCharacterIntervalMatchAST::reader_mUpperBound (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUpperBound ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @lexicalCharacterIntervalMatchAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                              const GALGAS_lchar & in_mUpperBound
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mLowerBound (in_mLowerBound),
mAttribute_mUpperBound (in_mUpperBound) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterIntervalMatchAST:" ;
  mAttribute_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mAttribute_mLowerBound, mAttribute_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalCharacterIntervalMatchAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  const GALGAS_lexicalCharacterIntervalMatchAST * p = (const GALGAS_lexicalCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCharacter.objectCompare (p->mAttribute_mCharacter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalCharacterMatchAST::objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lexicalCharacterMatchAST::reader_mCharacter (UNUSED_LOCATION_ARGS) const {
  GALGAS_lchar result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterMatchAST * p = (const cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    result = p->mAttribute_mCharacter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar cPtr_lexicalCharacterMatchAST::reader_mCharacter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCharacter ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @lexicalCharacterMatchAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mCharacter (in_mCharacter) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterMatchAST:" ;
  mAttribute_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mAttribute_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalCharacterMatchAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  const GALGAS_lexicalCharacterMatchAST * p = (const GALGAS_lexicalCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalCharacterSetMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCharacterSetName.objectCompare (p->mAttribute_mCharacterSetName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalCharacterSetMatchAST::objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCharacterSetMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mCharacterSetName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  if (inAttribute_mCharacterSetName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterSetMatchAST (inAttribute_mCharacterSetName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalCharacterSetMatchAST::reader_mCharacterSetName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCharacterSetMatchAST * p = (const cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    result = p->mAttribute_mCharacterSetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalCharacterSetMatchAST::reader_mCharacterSetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCharacterSetName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalCharacterSetMatchAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mCharacterSetName (in_mCharacterSetName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalCharacterSetMatchAST:" ;
  mAttribute_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mAttribute_mCharacterSetName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalCharacterSetMatchAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                    & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  const GALGAS_lexicalCharacterSetMatchAST * p = (const GALGAS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalOrExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalOrExpressionAST::objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLeftOperand,
                                                                              const GALGAS_lexicalExpressionAST & inAttribute_mRightOperand
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalOrExpressionAST (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::reader_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cPtr_lexicalOrExpressionAST::reader_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::reader_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cPtr_lexicalOrExpressionAST::reader_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalOrExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GALGAS_lexicalExpressionAST & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalOrExpressionAST:" ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalOrExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mAttribute_mLeftOperand, mAttribute_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalOrExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                               & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalOrExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  const GALGAS_lexicalOrExpressionAST * p = (const GALGAS_lexicalOrExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalOrExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalStringMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mString.objectCompare (p->mAttribute_mString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalStringMatchAST::objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  if (inAttribute_mString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringMatchAST (inAttribute_mString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalStringMatchAST::reader_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringMatchAST * p = (const cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    result = p->mAttribute_mString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalStringMatchAST::reader_mString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalStringMatchAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mString (in_mString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@lexicalStringMatchAST:" ;
  mAttribute_mString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mAttribute_mString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalStringMatchAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                              & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  const GALGAS_lexicalStringMatchAST * p = (const GALGAS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalStringNotMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mString.objectCompare (p->mAttribute_mString) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessage.objectCompare (p->mAttribute_mErrorMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalStringNotMatchAST::objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalStringNotMatchAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::constructor_new (const GALGAS_lstring & inAttribute_mString,
                                                                                  const GALGAS_lstring & inAttribute_mErrorMessage
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  if (inAttribute_mString.isValid () && inAttribute_mErrorMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStringNotMatchAST (inAttribute_mString, inAttribute_mErrorMessage COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::reader_mString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    result = p->mAttribute_mString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalStringNotMatchAST::reader_mString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::reader_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStringNotMatchAST * p = (const cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    result = p->mAttribute_mErrorMessage ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalStringNotMatchAST::reader_mErrorMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @lexicalStringNotMatchAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                                              const GALGAS_lstring & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mString (in_mString),
mAttribute_mErrorMessage (in_mErrorMessage) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalStringNotMatchAST:" ;
  mAttribute_mString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mAttribute_mString, mAttribute_mErrorMessage COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalStringNotMatchAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                 & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  const GALGAS_lexicalStringNotMatchAST * p = (const GALGAS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_lexicalInstructionAST::objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalInstructionAST::cPtr_lexicalInstructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST ("lexicalInstructionAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST result ;
  const GALGAS_lexicalInstructionAST * p = (const GALGAS_lexicalInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalDropInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalDropInstructionAST * p = (const cPtr_lexicalDropInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalName.objectCompare (p->mAttribute_mTerminalName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalDropInstructionAST::objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalDropInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTerminalName
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  if (inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalDropInstructionAST (inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalDropInstructionAST::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalDropInstructionAST * p = (const cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    result = p->mAttribute_mTerminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalDropInstructionAST::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @lexicalDropInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mTerminalName (in_mTerminalName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@lexicalDropInstructionAST:" ;
  mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalDropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mAttribute_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalDropInstructionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                  & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  const GALGAS_lexicalDropInstructionAST * p = (const GALGAS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalErrorInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalErrorInstructionAST * p = (const cPtr_lexicalErrorInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessageName.objectCompare (p->mAttribute_mErrorMessageName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalErrorInstructionAST::objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalErrorInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mErrorMessageName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  if (inAttribute_mErrorMessageName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalErrorInstructionAST (inAttribute_mErrorMessageName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalErrorInstructionAST::reader_mErrorMessageName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalErrorInstructionAST * p = (const cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    result = p->mAttribute_mErrorMessageName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalErrorInstructionAST::reader_mErrorMessageName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessageName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @lexicalErrorInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mErrorMessageName (in_mErrorMessageName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalErrorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

void cPtr_lexicalErrorInstructionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@lexicalErrorInstructionAST:" ;
  mAttribute_mErrorMessageName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalErrorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalErrorInstructionAST (mAttribute_mErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalErrorInstructionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ("lexicalErrorInstructionAST",
                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalErrorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalErrorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  const GALGAS_lexicalErrorInstructionAST * p = (const GALGAS_lexicalErrorInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalErrorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalLogInstructionAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalLogInstructionAST::objectCompare (const GALGAS_lexicalLogInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalLogInstructionAST::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::constructor_new (LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @lexicalLogInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "[@lexicalLogInstructionAST]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalLogInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  const GALGAS_lexicalLogInstructionAST * p = (const GALGAS_lexicalLogInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalLogInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalRepeatInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatedInstructionList.objectCompare (p->mAttribute_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalWhileBranchList.objectCompare (p->mAttribute_mLexicalWhileBranchList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalRepeatInstructionAST::objectCompare (const GALGAS_lexicalRepeatInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRepeatInstructionAST::constructor_new (GALGAS_lexicalInstructionListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalWhileBranchListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::constructor_new (const GALGAS_lexicalInstructionListAST & inAttribute_mRepeatedInstructionList,
                                                                                        const GALGAS_lexicalWhileBranchListAST & inAttribute_mLexicalWhileBranchList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  if (inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mLexicalWhileBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRepeatInstructionAST (inAttribute_mRepeatedInstructionList, inAttribute_mLexicalWhileBranchList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalRepeatInstructionAST::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    result = p->mAttribute_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cPtr_lexicalRepeatInstructionAST::reader_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalRepeatInstructionAST::reader_mLexicalWhileBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    result = p->mAttribute_mLexicalWhileBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST cPtr_lexicalRepeatInstructionAST::reader_mLexicalWhileBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalWhileBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalRepeatInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mRepeatedInstructionList (in_mRepeatedInstructionList),
mAttribute_mLexicalWhileBranchList (in_mLexicalWhileBranchList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRepeatInstructionAST:" ;
  mAttribute_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mAttribute_mRepeatedInstructionList, mAttribute_mLexicalWhileBranchList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalRepeatInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  const GALGAS_lexicalRepeatInstructionAST * p = (const GALGAS_lexicalRepeatInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRepeatInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalRewindInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalTagName.objectCompare (p->mAttribute_mLexicalTagName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalName.objectCompare (p->mAttribute_mTerminalName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalRewindInstructionAST::objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRewindInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName,
                                                                                        const GALGAS_lstring & inAttribute_mTerminalName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid () && inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRewindInstructionAST (inAttribute_mLexicalTagName, inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::reader_mLexicalTagName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    result = p->mAttribute_mLexicalTagName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalRewindInstructionAST::reader_mLexicalTagName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalTagName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    result = p->mAttribute_mTerminalName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalRewindInstructionAST::reader_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalRewindInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                                                    const GALGAS_lstring & in_mTerminalName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mLexicalTagName (in_mLexicalTagName),
mAttribute_mTerminalName (in_mTerminalName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRewindInstructionAST:" ;
  mAttribute_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalRewindInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mAttribute_mLexicalTagName, mAttribute_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalRewindInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  const GALGAS_lexicalRewindInstructionAST * p = (const GALGAS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalRoutineInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActualArgumentList.objectCompare (p->mAttribute_mActualArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorMessageList.objectCompare (p->mAttribute_mErrorMessageList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalRoutineInstructionAST::objectCompare (const GALGAS_lexicalRoutineInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRoutineInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (HERE),
                                                               GALGAS_lstringlist::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineInstructionAST::GALGAS_lexicalRoutineInstructionAST (const cPtr_lexicalRoutineInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                          const GALGAS_lexicalRoutineCallActualArgumentListAST & inAttribute_mActualArgumentList,
                                                                                          const GALGAS_lstringlist & inAttribute_mErrorMessageList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  if (inAttribute_mRoutineName.isValid () && inAttribute_mActualArgumentList.isValid () && inAttribute_mErrorMessageList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRoutineInstructionAST (inAttribute_mRoutineName, inAttribute_mActualArgumentList, inAttribute_mErrorMessageList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalRoutineInstructionAST::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalRoutineInstructionAST::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineInstructionAST::reader_mActualArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mAttribute_mActualArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST cPtr_lexicalRoutineInstructionAST::reader_mActualArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lexicalRoutineInstructionAST::reader_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRoutineInstructionAST * p = (const cPtr_lexicalRoutineInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineInstructionAST) ;
    result = p->mAttribute_mErrorMessageList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_lexicalRoutineInstructionAST::reader_mErrorMessageList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorMessageList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalRoutineInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalRoutineInstructionAST::cPtr_lexicalRoutineInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                                                      const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                      const GALGAS_lstringlist & in_mErrorMessageList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mActualArgumentList (in_mActualArgumentList),
mAttribute_mErrorMessageList (in_mErrorMessageList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalRoutineInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

void cPtr_lexicalRoutineInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@lexicalRoutineInstructionAST:" ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalRoutineInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRoutineInstructionAST (mAttribute_mRoutineName, mAttribute_mActualArgumentList, mAttribute_mErrorMessageList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalRoutineInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ("lexicalRoutineInstructionAST",
                                                     & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineInstructionAST GALGAS_lexicalRoutineInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineInstructionAST result ;
  const GALGAS_lexicalRoutineInstructionAST * p = (const GALGAS_lexicalRoutineInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalSelectInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalSelectBranchList.objectCompare (p->mAttribute_mLexicalSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultInstructionList.objectCompare (p->mAttribute_mDefaultInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalSelectInstructionAST::objectCompare (const GALGAS_lexicalSelectInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSelectInstructionAST::constructor_new (GALGAS_lexicalSelectBranchListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalInstructionListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::constructor_new (const GALGAS_lexicalSelectBranchListAST & inAttribute_mLexicalSelectBranchList,
                                                                                        const GALGAS_lexicalInstructionListAST & inAttribute_mDefaultInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  if (inAttribute_mLexicalSelectBranchList.isValid () && inAttribute_mDefaultInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSelectInstructionAST (inAttribute_mLexicalSelectBranchList, inAttribute_mDefaultInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectInstructionAST::reader_mLexicalSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    result = p->mAttribute_mLexicalSelectBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST cPtr_lexicalSelectInstructionAST::reader_mLexicalSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalSelectBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectInstructionAST::reader_mDefaultInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    result = p->mAttribute_mDefaultInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cPtr_lexicalSelectInstructionAST::reader_mDefaultInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalSelectInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mLexicalSelectBranchList (in_mLexicalSelectBranchList),
mAttribute_mDefaultInstructionList (in_mDefaultInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalSelectInstructionAST:" ;
  mAttribute_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalSelectInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mAttribute_mLexicalSelectBranchList, mAttribute_mDefaultInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  const GALGAS_lexicalSelectInstructionAST * p = (const GALGAS_lexicalSelectInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalSimpleSendInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSentTerminal.objectCompare (p->mAttribute_mSentTerminal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalSimpleSendInstructionAST::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSimpleSendInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mSentTerminal
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (inAttribute_mSentTerminal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSimpleSendInstructionAST (inAttribute_mSentTerminal COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSimpleSendInstructionAST::reader_mSentTerminal (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSimpleSendInstructionAST * p = (const cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    result = p->mAttribute_mSentTerminal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexicalSimpleSendInstructionAST::reader_mSentTerminal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSentTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @lexicalSimpleSendInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mSentTerminal (in_mSentTerminal) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexicalSimpleSendInstructionAST:" ;
  mAttribute_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalSimpleSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mAttribute_mSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexicalSimpleSendInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  const GALGAS_lexicalSimpleSendInstructionAST * p = (const GALGAS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

