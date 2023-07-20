#include "function_pointers.h"

/**
* print_name - prints a name
* @name: The name to print
* @f: Function of the name
*
* Return: 0 and is a success
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
