#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
* @x: is the first variable being evaluated
* @y: is the second variable being evaluated
*
* Return: void and is a success!
*/

void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	while (x <= 23)
	{
		y = 0;
		while (y <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y += 1;
		}
		x += 1;
	}
}
