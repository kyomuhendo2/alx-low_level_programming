#ifndef main_h
#define main_h

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>

/**
 * struct print - struct print
 * @symbol: symbol rep a datatype
 * @print_func: a function pointer that prints a datatype
 * according to the symbol
 *
 */

typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

#endif
