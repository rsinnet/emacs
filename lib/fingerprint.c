/* Placeholder fingerprint for Emacs

Copyright 2019 Free Software Foundation, Inc.

This file is part of GNU Emacs.

GNU Emacs is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

GNU Emacs is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

#include "fingerprint.h"

/* This random fingerprint was generated by the shell command:

   shuf -i 0-255 -n 32 -r | awk '{printf "   0x%.02X,\n", $0}'

   In the final Emacs executable, this random fingerprint is replaced
   by a fingerprint of the temporary Emacs executable that was built
   along the way.  */

unsigned char const fingerprint[] =
  {
   0xDE,
   0x86,
   0xBB,
   0x99,
   0xFF,
   0xF5,
   0x46,
   0x9A,
   0x9E,
   0x3F,
   0x9F,
   0x5D,
   0x9A,
   0xDF,
   0xF0,
   0x91,
   0xBD,
   0xCD,
   0xC1,
   0xE8,
   0x0C,
   0x16,
   0x1E,
   0xAF,
   0xB8,
   0x6C,
   0xE2,
   0x2B,
   0xB1,
   0x24,
   0xCE,
   0xB0,
  };
