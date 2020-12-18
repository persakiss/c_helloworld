#include <stdio.h>

void main (void)
{
	float a;
	float b = 3.641;
	int c;

	a = 2;
	c = a+b;

	/* Seeing float + int addition behaviour */
	printf("The sum of adding %f and %f is %d\n", a, b, c);
}
