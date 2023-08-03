#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: decimal number to maniplate
 * @index: index of the bit to convert
 * Return: 1 for succes or -1 for failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	*n = (*n | i);

	return (1);
}
