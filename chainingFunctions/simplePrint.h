/*
 * simplePrint.h
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

#ifndef SIMPLEPRINT_H_
#define SIMPLEPRINT_H_

// Mainly to make it less verbose to use, let's have a struct definition
typedef struct PrintDefStruct PrintDef;

// now define the actual structure
typedef struct PrintDefStruct
{
	// lets define function pointers to do some work
	const PrintDef *(* str)(char *);
	// note these function pointers always return a pointer to a structure of the same type they reside in.
	const PrintDef *(*intgr)(int);
};

// now, expose the public functions so it can be used in a natural sort of way
const PrintDef *ourPrint(void);


#endif /* SIMPLEPRINT_H_ */
