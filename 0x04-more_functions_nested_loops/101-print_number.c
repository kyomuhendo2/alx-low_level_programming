#include"main.h"
/**
* print_number - prints integer
* @n: number to be printed
*
* Return: void
*/
void print_number(int n)
{
	unsigned int n_new;

	if (n < 0)
	{
		n_new = -n;
		_putchar('-');
	}
	else
	{
		n_new = n;
	}
	if (n_new / 10)
	{
		print_number(n_new / 10);
	}
	_putchar((n_new % 10) + '0');
}
