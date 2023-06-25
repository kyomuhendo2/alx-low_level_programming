#include "main.h"

/**
* _isalpha - checks for a letter, lower case or upper case
* @c: is the variable being evaluated
*
* Return: 1 if c is a lower case or upper case and 0 if otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
