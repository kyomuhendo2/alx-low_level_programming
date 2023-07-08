#include <stdio.h>
#include "main.h"

/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: 0 and is a success!
*/

int main(void)
{
	int x, y, fibb_sum, sum;
	
	x = 1;
	y = 2;
	fibb_sum = x + y;
	for (fibb_sum = 0; fibb_sum <= 4000000; fibb_sum++)
	{
		if (fibb_sum % 2 == 0)
		{
			sum += fibb_sum;
		}
		fibb_sum = x + y;
		x = y;
		y = fibb_sum;
		printf("%d", fibb_sum);
	}
	printf("%d", sum);
	return (0);
}
