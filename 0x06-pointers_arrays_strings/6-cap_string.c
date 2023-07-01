#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @f: string to capitalize
*
* Return: char
*/

char *cap_string(char *f)
{
	int x;

	x = 0;
	while (f[x] != '\0')
	{
		while (!(x == 0 && f[x] != '\0'))
		{
			x++;
		}
		if (f[x - 1] == ' ' ||
		f[x - 1] == '\t' ||
		f[x - 1] == '\n' ||
		f[x - 1] == ',' ||
		f[x - 1] == ';' ||
		f[x - 1] == '.' ||
		f[x - 1] == '!' ||
		f[x - 1] == '?' ||
		f[x - 1] == '"' ||
		f[x - 1] == '(' ||
		f[x - 1] == ')' ||
		f[x - 1] == '{' ||
		f[x - 1] == '}')
		{
			f[x] -= 32;
		}
		x++;
	}
	return (f);
}
