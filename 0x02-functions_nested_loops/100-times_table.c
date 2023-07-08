#include "main.h"

/**
* print_times_table -  prints all natural numbers from n to 98
* @n: input
*
* Return: void and is a success!
*/

void print_times_table(int n)
{
	int i, j, res;

	if (n > 15 || n < 0)
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
				{
					_putchar(res + '0');
				} else if (res <= 9 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				} else if (res >= 10 && res <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				} else if (res > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar(((res % 100) / 10) + '0');
					_putchar(((res % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
