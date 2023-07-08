#include <stdio.h>
#include "main.h"

/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: 0 and is a success!
*/

int main(void)
{
	unsigned long x, y, fibb_sum, sum;
	
	x = 1;
	y = 2;
	fibb_sum = x + y;
	while (fibb_sum < 4000000)
	{
		if (fibb_sum % 2 == 0)
		{
			fibb_sum = x + y;
			x = y;
			y = fibb_sum;
			printf("%lu", fibb_sum);
		}
		sum += fibb_sum;
	}
	printf("%lu", sum);
	return (0);
}
