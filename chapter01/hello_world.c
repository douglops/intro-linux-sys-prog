/******************************************************************************
  Title          : hello_world.c
  Author         : Kernighan and Ritchie
  Created on     : ~ 1978
  Description    : A program that prints "hello, world."
  Usage          : hello_world
  Build with     : gcc -o hello_world hello_world.c

  Note:  
    In the original program, main() did not have a return type.
    The compiler will generate a warning when this is compiled.

******************************************************************************
* Copyright (C) 2025 - Stewart Weiss                                         *
*                                                                            *
* This code is free software; you can use, modify, and redistribute it       *
* under the terms of the GNU General Public License as published by the      *
* Free Software Foundation; either version 3 of the License, or (at your     *
* option) any later version. This code is distributed WITHOUT ANY WARRANTY;  *
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A      *
* PARTICULAR PURPOSE. See the file COPYING.gplv3 for details.                *
*****************************************************************************/
#include <stdio.h>

main()
{
    printf("hello, world.\n");
}
