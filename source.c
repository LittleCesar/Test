/*
Cesar Oropeza
CSC 251
02/26/2020
Test
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 0;
	int value;
	int i = 0;
	for(; i < 11; i++)
	{
		x = x + 2;
	}
	value =  x / 20;
	printf(" %.3d\n", value);
	return EXIT_SUCCESS;
}
