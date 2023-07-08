#include "main.h"
#include <stdio.h>

/**
* print_to_98 -  prints all natural numbers from n to 98
* @n: input number
*
* Return: void and is a success!
*/

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
