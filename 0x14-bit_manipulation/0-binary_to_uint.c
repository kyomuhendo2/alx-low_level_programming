#include "main.h"

/**
 * binary_to_uint - function converts from base 2 to decimal
 * @b: string to be converted
 * Return: Return the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decval = 1, total = 0;

	int i;

	int stlen = strlen(b);

	if (b == NULL)
		return (0);

	for (i = (stlen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{

			total += decval;
		}

		decval *= 2;
	}
	return (total);
}
