#include "main.h"

/**
* leet - encodes a string into 1337
* @f: string to encode
*
* Return: char
*/

char *leet(char *f)
{
	int x, y;
	char f1[] = "aAeEoOtTlL";
	char f2[] = "4433007711";

	for (x = 0; f[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (f[x] == f1[y])
			{
				f[x] = f2[y];
			}
		}
	}
	return (f);
}
