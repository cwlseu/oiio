/*
  Copyright 2008 Larry Gritz and the other authors and contributors.
  All Rights Reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are
  met:
  * Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
  * Neither the name of the software's owners nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

  (This is the Modified BSD License)
*/


/////////////////////////////////////////////////////////////////////////
/// \file
///
/// Various system utilities.
///
/////////////////////////////////////////////////////////////////////////


#ifndef OPENIMAGEIO_SYSUTIL_H
#define OPENIMAGEIO_SYSUTIL_H

#include "export.h"

/// allocates memory, equivalent of C99 type var_name[size]
#define ALLOCA(type, size) ((type*)alloca((size) * sizeof (type)))

#ifdef OPENIMAGEIO_NAMESPACE
namespace OPENIMAGEIO_NAMESPACE {
#endif

namespace Sysutil {

/// The amount of memory currently being used by this process, in bytes.
/// By default, returns the full virtual arena, but if resident=true,
/// it will report just the resident set in RAM.
DLLPUBLIC size_t memory_used (bool resident=false);


// Convert calendar time pointed by 'time' into local time and save it in
// 'converted_time' variable
DLLPUBLIC void get_local_time (const time_t *time, struct tm *converted_time);


};  // namespace Sysutils

#ifdef OPENIMAGEIO_NAMESPACE
}; // end namespace OPENIMAGEIO_NAMESPACE
using namespace OPENIMAGEIO_NAMESPACE;
#endif

#endif // OPENIMAGEIO_SYSUTIL_H
