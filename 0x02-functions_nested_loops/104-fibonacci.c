
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
	printf("%lu, %lu, ", x, y);
	for (count = 3; count <= 98; count++)
	{
		fibb_sum = y;
		y = x + y;
		x = fibb_sum;
		printf("%lu", y);
		if (count == 98)
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
