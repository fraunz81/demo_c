/*
 * primenumber.c
 *
 *  Created on: 06.12.2016
 *      Author: Franz Habison
 */

#include "primenumber.h"


bool primenumber_int(int num)
{
	int i;

	i = num / 2;
	while (i >= 2)
	{
		if (num % i == 0)
			return false;

		i--;
	}

	return true;
}

bool primenumber_long(long num)
{
	long i;

	i = num / 2;
	while (i >= 2)
	{
		if (num % i == 0)
			return false;

		i--;
	}

	return true;
}



bool primenumber_long_long(long long num)
{
	long long i;

	i = num / 2;
	while (i >= 2)
	{
		if (num % i == 0)
			return false;

		i--;
	}

	return true;
}

