#include"main.h"
#include <stdio.h>

/**
* print_array - elements of an array of integers
* @a: The array to print
* @n: number of elements of the array to be printed
*
* Return: null
*/

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
