#include "main.h"

/**
 * flip_bits - flip bits
 * @n: number one
 * @m: number 2
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += (diff & 1);
		diff >>= 1;
	}

	return (count);
}
