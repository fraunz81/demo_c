/*
 * primenumberTest.c
 *
 *  Created on: 06.12.2016
 *      Author: franz
 */

#include <stdio.h>
#include "../primenumber/primenumber.h"

int main(int argc, char **argv)
{
	int zahl;
	zahl = 1;
	printf("%d ist eine Primzahl: %d\n", zahl, primenumber(zahl));

	zahl = 2;
	printf("%d ist eine Primzahl: %d\n", zahl, primenumber(zahl));

	zahl = 3;
	printf("%d ist eine Primzahl: %d\n", zahl, primenumber(zahl));

	zahl = 4;
	printf("%d ist eine Primzahl: %d\n", zahl, primenumber(zahl));

	zahl = 5;
	printf("%d ist eine Primzahl: %d\n", zahl, primenumber(zahl));

	/* long */
	long lZahl;
	lZahl = 10;
	printf("%ld ist eine Primzahl: %d\n", lZahl, primenumber(lZahl));

	lZahl = 11;
	printf("%ld ist eine Primzahl: %d\n", lZahl, primenumber(lZahl));

	lZahl = 12;
	printf("%ld ist eine Primzahl: %d\n", lZahl, primenumber(lZahl));

	lZahl = 13;
	printf("%ld ist eine Primzahl: %d\n", lZahl, primenumber(lZahl));

	lZahl = 14;
	printf("%ld ist eine Primzahl: %d\n", lZahl, primenumber(lZahl));

	lZahl = 15;
	printf("%ld ist eine Primzahl: %d\n", lZahl, primenumber(lZahl));

	/* long long */
	long long llZahl;
	llZahl = 20;
	printf("%lld ist eine Primzahl: %d\n", llZahl, primenumber(llZahl));

	llZahl = 21;
	printf("%lld ist eine Primzahl: %d\n", llZahl, primenumber(llZahl));

	llZahl = 22;
	printf("%lld ist eine Primzahl: %d\n", llZahl, primenumber(llZahl));

	llZahl = 23;
	printf("%lld ist eine Primzahl: %d\n", llZahl, primenumber(llZahl));

	llZahl = 24;
	printf("%lld ist eine Primzahl: %d\n", llZahl, primenumber(llZahl));

	llZahl = 25;
	printf("%lld ist eine Primzahl: %d\n", llZahl, primenumber(llZahl));

	return 0;
}

