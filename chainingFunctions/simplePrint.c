/*
 * simplePrint.c
 * 
 * Copyright 2016 Franz Habison <habison.franz@gmx.at>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include "simplePrint.h"


// we need to declare prototypes so that we can include them in the structure below.
static const PrintDef *my_Str(char *stringToPrint);
static const PrintDef *my_i(int iToPrint);
// ... any other print related functions should also be defined

// now, lets define our structurre with the print functions we have declared.
// This could be seen almost like a "Namespace" variable and gets exposed
static const PrintDef ourPrintDef =
{
	my_Str,
	my_i,
	// ... any other print related functions should also be added ...
};


// now lets define some expample print functions
static const PrintDef *my_Str(char *stringToPrint)
{
	fputs(stringToPrint, stdout);
	return (&ourPrintDef);
}

static const PrintDef *my_i(int iToPrint)
{
	printf("%i", iToPrint);
	return(&ourPrintDef);
}


// add a public function to kick off the chaining action:
const PrintDef *ourPrint(void)
{
	return(&ourPrintDef);
}

// ... and any other print-related funcitons ...
