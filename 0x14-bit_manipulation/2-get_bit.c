#include "main.h"

/**
 * get_bit - function that gets the bit at given index
 * @n: input decimal integer
 * @index: index of bit we are finding
 * Return: bit at index or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && n < 64)
		return (0);

	for (i = 0; i <= 63; n = n >> 1, i++)
	{
		if (i == index)
		{
			return (i & 1);
		}
	}
	return (-1);
}
