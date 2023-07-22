#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
*
* @n: number of arguments
* 
* Return: Sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, sum = 0;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}
	va_end(par);
	return (sum);
}
