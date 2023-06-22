#include"main.h"
/**
* print_line - prints line in terminal
* @n: number of times the char is printed
*
* Return: void
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = n; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
