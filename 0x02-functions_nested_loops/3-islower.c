#include "main.h"

/**
* _islower - checks for lower case
* @c: is the variable being evaluated
*
* Return: 1 if c is a lower case and 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
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
