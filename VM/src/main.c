/*
 * vmMain.c
 * 
 * Copyright 2015 Franz Habison <habison.franz@gmx.at>
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
 * Infos von Seite:
 * http://felixangell.com/virtual-machine-in-c/
 * 
 * PSH 5       ; pushes 5 to the stack
 * PSH 10      ; pushes 10 to the stack
 * ADD         ; pops two values on top of the stack, adds them pushes to stack
 * POP         ; pops the value on the stack, will also print it for debugging
 * SET A 0     ; sets register A to 0
 * HLT         ; stop the program
 * 
 * give a try to
 * MOV A, B
 */


#include <stdio.h>
#include <stdbool.h>



typedef enum
{
	PSH,
	ADD,
	POP,
	SET,
	HLT
} InstructionSet;


typedef enum
{
	A, B, C, D, E, F, IP, SP,
	NUM_OF_REGISTERS		// only a trick to know the number of registers
} Registers;


int registers[NUM_OF_REGISTERS];
// printf("%d\n", registers[A]);		// prints the value at the register A

const int program[] =
{
	PSH, 5,
	PSH, 6,
	ADD,
	POP,
	HLT
};

//int ip = 0;
//int sp = -1;
#define sp (registers[SP])
#define ip (registers[IP])


int stack[256];	// use a define or somethin here preferably
bool running = true;


int fetch()
{
	return program[ip];
}


void eval(int instr)
{
	switch (instr)
	{
		case HLT:
		{	// brackes only to have a scope for the variables
			running = false;
			break;
		}
		
		case PSH:
		{
			//sp++;
			//stack[sp] = program[++ip];
			stack[++sp] = program[++ip];
			break;
		}
		
		case POP:
		{
			int val_popped = stack[sp--];
			printf("popped %d\n", val_popped);
			break;
		}
		
		case ADD:
		{
			// first we pop the stack and store it as a
			int a = stack[sp--];
			// then we pop the top of the stack and store it as b
			int b= stack[sp--];
			
			// we the add the result and push it to the stack
			int result = b + a;
			//sp++;	// increment stack pointer **before**
			//stack[sp] = result;	// set the value to the top of the stack
			stack[++sp] = result;	// set the value to the top of the stack
			
			// all done
			break;
		}
	}
}



int main(int argc, char **argv)
{
	while (running)
	{
		eval(fetch());
		ip++;		// increment the ip every iteration
	}
	
	// weiter bei Bonus Exercises
	
	return 0;
}





















