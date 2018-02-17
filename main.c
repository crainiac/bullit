#include <stdio.h>
#include "bullit.h"

int main(void)
{
	int x = -10;
	int i, z;
	for (i = x; i<=18; ++i)
	{
		z= nextpow2(i);
		printf("Abs of %i is %i\n", i, litabs(i));
		printf("Next power of 2 >= %i is %i \n", i, z);
		printf("Their int average is %i\n", litave(i,z));
		printf("Log base 2 of %i is %i \n", i, floorlg(i));
	}
	printf("x is %i and z is %i\n", x, z);
	printf("Max of %i and %i is %i\n", x, z, litmax(x,z));
	return(0);
}
