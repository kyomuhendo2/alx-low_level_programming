#include <stdio.h>
#include "main.h"

/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: 0 and is a success!
*/

int main(void)
{
	unsigned long int x, y, fibb_sum, limit, sum;

	x = 1;
	y = 2;
	limit = 4000000;
	sum = 0;
	while (y <= limit)
	{
		if (y % 2 == 0)
		{
			sum += y;
		}
		fibb_sum = x + y;
		x = y;
		y = fibb_sum;
	}
	printf("%lu\n", sum);
	return (0);
}
