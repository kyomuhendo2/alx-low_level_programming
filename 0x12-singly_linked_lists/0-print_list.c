#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - printsall elements in list
 * @h: pointer to memory of linked list
 * Return: count  of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");

		}
		count++;
		h = h->next;
	}
	return (count);
}
