#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
* @nb: buffer
* @nsize: buffer size
*
* Return: void
*/

void print_buffer(char *b, int size)
{
	int h, j, i;

	h = 0;
	if (size <= 0)
	{
		printf("\n");
		return (0);
	}
	while (h < size)
	{
		j = size - h < 10 ? size - 0 : 10;
		printf("%08x: ", h);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			{
				printf("*02x: ", *(b + h + i));
			}
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < 10; i++)
		{
			int c 
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
	}
}
