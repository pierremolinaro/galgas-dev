#pragma once

//--------------------------------------------------------------------------------------------------

#if (!defined (USE_8_BITS_CHUNKS)) && (!defined (USE_16_BITS_CHUNKS)) && (!defined (USE_32_BITS_CHUNKS))
  #define USE_64_BITS_CHUNKS
#endif

//--------------------------------------------------------------------------------------------------

#ifdef USE_8_BITS_CHUNKS
  #include "chunk-U8.h"
#endif

#ifdef USE_16_BITS_CHUNKS
 #include "chunk-U16.h"
#endif

#ifdef USE_32_BITS_CHUNKS
 #include "chunk-U32.h"
#endif

#ifdef USE_64_BITS_CHUNKS
 #include "chunk-U64.h"
#endif

//--------------------------------------------------------------------------------------------------
