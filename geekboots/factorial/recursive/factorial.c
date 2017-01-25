/*
 * factorial.c
 *
 *  Created on: 25.01.2017
 *      Author: franz
 */

#include "factorial.h"

int factorial(int n)
{
	if (n == 1)
		return 1;

	return n * factorial(n-1);
}
