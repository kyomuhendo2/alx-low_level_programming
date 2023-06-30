#include "main.h"

/**
* string_toupper - changes all lowercase letters of
* a string to uppercase
* @f: string to change
*
* Return: char
*/

char *string_toupper(char *f)
{
	int x;

	x = 0;
	while (f[x] != '\0')
	{
		if (f[x] >= 'a' && f[x] <= 'z')
		{
			f[x] = f[x] - 32;
		}
		x++;
	}
	return (f);
}
