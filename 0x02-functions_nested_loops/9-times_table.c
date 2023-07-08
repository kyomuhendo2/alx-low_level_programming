#include "main.h"

/**
* times_table - prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
*
* Return: void and is a success!
*/

void times_table(void)
{
	int x = 0;
	int y = 0;
	int res;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			res = x * y;
			if (res == 0)
			{
				_putchar(res + '0');
			}
			else if (res < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
