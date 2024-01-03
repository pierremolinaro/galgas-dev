//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           

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
