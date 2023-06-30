#include "main.h"

/**
* _strncat - concatenates two strings
* using n more bytes
* @dest: input value
* @src: input value
* @n: input value
*
* Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
