#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "enum-xml+node+type.h"

//--------------------------------------------------------------------------------------------------
//  Enum xmlNodeType
//--------------------------------------------------------------------------------------------------

GGS_xmlNodeType::GGS_xmlNodeType (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_xmlNodeType GGS_xmlNodeType::class_func_element (UNUSED_LOCATION_ARGS) {
  GGS_xmlNodeType result ;
  result.mEnum = Enumeration::enum_element ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeType GGS_xmlNodeType::class_func_text (UNUSED_LOCATION_ARGS) {
  GGS_xmlNodeType result ;
  result.mEnum = Enumeration::enum_text ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeType GGS_xmlNodeType::class_func_comment (UNUSED_LOCATION_ARGS) {
  GGS_xmlNodeType result ;
  result.mEnum = Enumeration::enum_comment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_xmlNodeType [4] = {
  "(not built)",
  "element",
  "text",
  "comment"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xmlNodeType::getter_isElement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_element == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xmlNodeType::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_text == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_xmlNodeType::getter_isComment (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_comment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_xmlNodeType::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @xmlNodeType: ") ;
  ioString.appendCString (gEnumNameArrayFor_xmlNodeType [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @xmlNodeType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xmlNodeType ("xmlNodeType",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xmlNodeType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xmlNodeType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xmlNodeType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xmlNodeType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xmlNodeType GGS_xmlNodeType::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_xmlNodeType result ;
  const GGS_xmlNodeType * p = (const GGS_xmlNodeType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xmlNodeType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xmlNodeType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

