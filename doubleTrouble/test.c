#include <stdio.h>
#include <math.h>

void doubleProblem()
{
	double s = 2880*9.8/168/168;
	printf("s = %.10f\n", s);
	printf("a = %f b = %f\n", asin(s), asin(1.0) );
}


int main()
{
	//doubleProblem();

	return 0;
}