#include "lists.h"

/**
 * listint_len - function that returns number of elements(nodes)
 * @h: pointer to the head node
 * Return: returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h =  h->next;
	}
	return (count);
}
