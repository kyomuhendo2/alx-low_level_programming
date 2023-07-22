#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - executes a function given as a parameter on
* each element of an array
* @array: array
* @size: array size
* @action: pointer to the function
*
* Return: 0 and is a success
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}