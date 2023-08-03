#include "lists.h"

/**
 * get_nodeint_at_index - gets node at input index (start from 0)
 * @head: first node
 * @index: index of node to return
 * Return: node of given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;

	if (node == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (node != NULL)
			node = node->next;
	}
	return (node);
}
