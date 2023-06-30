#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: the pointer to an array
* @n: number of integers in an array
*
* Return: null
*/

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
