
#include <stdio.h>
#include "main.h"

/**
* main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
*
* Return: 0 and is a success!
*/

int main(void)
{
	int count;
	unsigned long int x, y, fibb_sum;
	
	x = 1;
	y = 2;

	printf("%lu, ", x);
	printf("%lu, ", y);
	for (count = 1; count <= 86; count++)
	{
		fibb_sum = x + y;
		x = y;
		y = fibb_sum;
		printf("%lu", fibb_sum);
		if (count == 86)
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
