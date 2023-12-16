#pragma once

//----------------------------------------------------------------------------------------------------------------------

//#define CHUNK_8_BITS
//#define CHUNK_16_BITS
//#define CHUNK_32_BITS
#define CHUNK_64_BITS

//----------------------------------------------------------------------------------------------------------------------

#ifdef CHUNK_8_BITS
  #include "chunk-U8.h"
#endif

#ifdef CHUNK_16_BITS
 #include "chunk-U16.h"
#endif

#ifdef CHUNK_32_BITS
 #include "chunk-U32.h"
#endif

#ifdef CHUNK_64_BITS
 #include "chunk-U64.h"
#endif

//----------------------------------------------------------------------------------------------------------------------
