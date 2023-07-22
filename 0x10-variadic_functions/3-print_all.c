#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - prints char
*
* @arg: list of args pointing to the char to be printed
* Return: void
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
* print_int - prints int
*
* @arg: list of args pointing to the int to be printed
* Return: void
*/

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
* print_float - prints int
*
* @arg: list of args pointing to the int to be printed
* Return: void
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);

}

/**
* print_string - prints string
*
* @arg: list of args pointing to the string to be printed
* Return: void
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
* print_all - prints all
*
* @format: String char representing
* the arguments
* Description: if the srgument is not 
* char, int, str or float, is ignored
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list par;
	unsigned int i = 0, j = 0;
	char *separator;

	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_start(par, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(par);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(par);
}
