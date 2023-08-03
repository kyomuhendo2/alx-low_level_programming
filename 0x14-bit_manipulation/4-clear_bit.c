#include "main.h"

/**
 * clear_bit - set bit to 0
 * @n: number to maniplate
 * @index: bit index
 * Return: 1 for success -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n = *n ^ i;

	return (1);
}
