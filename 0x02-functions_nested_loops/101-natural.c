#include <stdio.h>
#include "main.h"

/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: 0 and is a success!
*/

int main(void)
{
	int i, limit, sum;

	limit = 1024;
	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
