#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - returns the sum of all its parameters
*
* @separator: separator of arguments
* @n: number of arguments
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(par, int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(par);
	printf("\n");
}
