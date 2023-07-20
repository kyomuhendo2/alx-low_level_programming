#include "function_pointers.h"

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
	size_t i;

	if (array && action)
	{
		i = 0;
		while(i < size)
		{
			action(array[i]);
			i++;
		}
	}
	
}
