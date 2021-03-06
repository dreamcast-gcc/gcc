/* AArch64 Non-NEON ACLE intrinsics include file.

   Copyright (C) 2014-2019 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _GCC_ARM_ACLE_H
#define _GCC_ARM_ACLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#pragma GCC push_options
#pragma GCC target ("arch=armv8.3-a")
__extension__ static __inline int32_t __attribute__ ((__always_inline__))
__jcvt (double __a)
{
  return __builtin_aarch64_jcvtzs (__a);
}

#pragma GCC push_options
#pragma GCC target ("arch=armv8.5-a")
__extension__ static __inline float __attribute__ ((__always_inline__))
__rint32zf (float __a)
{
  return __builtin_aarch64_frint32zsf (__a);
}

__extension__ static __inline double __attribute__ ((__always_inline__))
__rint32z (double __a)
{
  return __builtin_aarch64_frint32zdf (__a);
}

__extension__ static __inline float __attribute__ ((__always_inline__))
__rint64zf (float __a)
{
  return __builtin_aarch64_frint64zsf (__a);
}

__extension__ static __inline double __attribute__ ((__always_inline__))
__rint64z (double __a)
{
  return __builtin_aarch64_frint64zdf (__a);
}

__extension__ static __inline float __attribute__ ((__always_inline__))
__rint32xf (float __a)
{
  return __builtin_aarch64_frint32xsf (__a);
}

__extension__ static __inline double __attribute__ ((__always_inline__))
__rint32x (double __a)
{
  return __builtin_aarch64_frint32xdf (__a);
}

__extension__ static __inline float __attribute__ ((__always_inline__))
__rint64xf (float __a)
{
  return __builtin_aarch64_frint64xsf (__a);
}

__extension__ static __inline double __attribute__ ((__always_inline__))
__rint64x (double __a)
{
  return __builtin_aarch64_frint64xdf (__a);
}
#pragma GCC pop_options

#pragma GCC pop_options

#pragma GCC push_options

#pragma GCC target ("+nothing+crc")

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32b (uint32_t __a, uint8_t __b)
{
  return __builtin_aarch64_crc32b (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32cb (uint32_t __a, uint8_t __b)
{
  return __builtin_aarch64_crc32cb (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32ch (uint32_t __a, uint16_t __b)
{
  return __builtin_aarch64_crc32ch (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32cw (uint32_t __a, uint32_t __b)
{
  return __builtin_aarch64_crc32cw (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32cd (uint32_t __a, uint64_t __b)
{
  return __builtin_aarch64_crc32cx (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32h (uint32_t __a, uint16_t __b)
{
  return __builtin_aarch64_crc32h (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32w (uint32_t __a, uint32_t __b)
{
  return __builtin_aarch64_crc32w (__a, __b);
}

__extension__ static __inline uint32_t __attribute__ ((__always_inline__))
__crc32d (uint32_t __a, uint64_t __b)
{
  return __builtin_aarch64_crc32x (__a, __b);
}

#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC target ("+nothing+rng")
__extension__ static __inline int __attribute__ ((__always_inline__))
__rndr (uint64_t *__res)
{
  return __builtin_aarch64_rndr (__res);
}

__extension__ static __inline int __attribute__ ((__always_inline__))
__rndrrs (uint64_t *__res)
{
  return __builtin_aarch64_rndrrs (__res);
}

#pragma GCC pop_options

#ifdef __cplusplus
}
#endif

#pragma GCC pop_options

#endif
