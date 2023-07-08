#include <stdio.h>
#include "main.h"

/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: 0 and is a success!
*/

int main(void)
{
	int count;
	unsigned long x, y, fibb_sum;

	x = 1;
	y = 2;
	for (count = 0; count < 50; count++)
	{
		fibb_sum = x + y;
		x = y;
		y = fibb_sum;
		printf("%lu", fibb_sum);
		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
