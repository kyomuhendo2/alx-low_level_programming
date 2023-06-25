#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @x: is the variable being evaluated
*
* Return: 0 always a success!
*/

int print_last_digit(int x)
{
	int y;

	y = (x % 10);
	if (y < 0)
	{
		y = y * -1;
	}
	_putchar(y + '0');
	return (y);
}
