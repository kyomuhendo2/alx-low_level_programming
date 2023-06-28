#include"main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character
* @str: string
*
* Return: null
*/

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *x = str;
	int length;

	while (*x != '\0')
	{
		x++;
		i++;
	}
	j = i - 1;
	for (length = 0; length <= j; length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
