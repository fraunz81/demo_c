/*
 * main.c
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

/*
 * Infos dazu auf der folgenden Webseite:
 * https://fwprogramming.wordpress.com/2016/04/04/chaining-c-functions-together/?_utm_source=1-2-2
*/

#include <stdio.h>
#include <stdlib.h>

#include "simplePrint.h"

int main(int argc, char **argv)
{
	// define a few things we want to print
	int year = 2016;
	char moreTalking[] = "bla, bla ....";
	
	// now lets try stringing the elements together
	//ourPrint->str("Hello world, this is year ")->intgr(year)->str(moreTalking);
	ourPrint->intgr(year);
	
	// and we ar done ...
	return EXIT_SUCCESS;
}

