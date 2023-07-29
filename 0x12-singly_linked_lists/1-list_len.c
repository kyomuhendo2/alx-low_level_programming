#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - prints list length
 * @h: points to linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;

		count++;
	}

	return (count);
}
