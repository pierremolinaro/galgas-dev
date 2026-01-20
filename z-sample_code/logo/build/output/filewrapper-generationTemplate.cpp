#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "filewrapper-generationTemplate.h"

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'generationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_generationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_generationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_generationTemplate (
  "",
  0,
  gWrapperAllFiles_generationTemplate_0,
  0,
  gWrapperAllDirectories_generationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'generationTemplate svg'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_generationTemplate_svg (Compiler * /* inCompiler */,
                                                       const GGS_string & in_TITLE,
                                                       const GGS_string & in_DRAWINGS
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" standalone=\"no\"\?>\n<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\"\n\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n<svg width=\"100%\" height=\"100%\" version=\"1.1\"\nxmlns=\"http://www.w3.org/2000/svg\">\n<title>") ;
  result.appendString (in_TITLE.stringValue ()) ;
  result.appendString ("</title>\n") ;
  result.appendString (in_DRAWINGS.stringValue ()) ;
  result.appendString ("</svg>") ;
  return GGS_string (result) ;
}

