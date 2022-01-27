/* Support for SH running KallistiOS using ELF
   Copyright (C) 2002-2019 Free Software Foundation, Inc.
   Contributed by Hayden Kowalchukl <hayden@hkowsoftware.com>

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#undef  LIB_SPEC
#define LIB_SPEC " \
    -lm \
    --start-group \
    -lcglue \
    %{g:-lg} %{!g:-lc} \
    --end-group \
    -lkallisti"

/* Override the startfile spec to include crt0.o. */
#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s crti.o%s crtbegin.o%s"

#undef SUBTARGET_CPP_SPEC
#define SUBTARGET_CPP_SPEC "-DDREAMCAST=1 -D__DREAMCAST__=1 -D_DREAMCAST=1 -D__dreamcast__=1 -D_arch_dreamcast=1 -D_arch_sub_pristine=1"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtend.o%s crtn.o%s"