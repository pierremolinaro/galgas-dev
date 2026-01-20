#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+h.h"
#include "optional-classe+h-3F.h"
#include "weak-reference-classe+h-2Eweak.h"

//--------------------------------------------------------------------------------------------------
//Optional @classeH_3F_
//--------------------------------------------------------------------------------------------------

GGS_classeH_3F_::GGS_classeH_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_3F_::GGS_classeH_3F_ (const GGS_classeH & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_3F_::GGS_classeH_3F_ (const GGS_classeH_2E_weak & inSource) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
  if (inSource.isValid ()) {
    const acStrongPtr_class * p = inSource.ptr () ;
    if (p == nullptr) {
      mState = OptionalState::isNil ;
    }else{
      mValue = * ((GGS_classeH *) p) ;
      mState = OptionalState::valuated ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_3F_ GGS_classeH_3F_::init_nil (void) {
  GGS_classeH_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classeH_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classeH_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classeH_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classeH () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeH_3F_::objectCompare (const GGS_classeH_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_classeH_3F_::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classeH? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeH_3F_ ("classeH?",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeH_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeH_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeH_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeH_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_3F_ GGS_classeH_3F_::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_classeH_3F_ result ;
  const GGS_classeH_3F_ * p = (const GGS_classeH_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeH_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeH?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

