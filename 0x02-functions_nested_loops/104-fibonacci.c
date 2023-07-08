
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

	x = 0;
	y = 1;
	for (count = 0; count <= 98; count++)
	{
		fibb_sum = x + y;
		x = y;
		y = fibb_sum;
		printf("%lu", fibb_sum);
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
