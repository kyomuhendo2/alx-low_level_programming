#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
*
* @separator: separator of arguments
* @n: number of arguments
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	char *str;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(par, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(par);
	printf("\n");
}
