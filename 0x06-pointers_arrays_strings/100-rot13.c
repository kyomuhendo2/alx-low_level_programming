#include "main.h"

/**
* rot13 - encodes a string to rot13
* @str: string to encode
*
* Return: char
*/

char *rot13(char *str)
{
	int x, y;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == alphabet[y])
			{
				str[x] = rot13[y];
				break;
			}
		}
	}
	return (str);
}
