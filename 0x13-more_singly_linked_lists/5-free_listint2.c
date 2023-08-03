#include "lists.h"

/**
 * free_listint2 - free listint_t and sets head to null
 * @head: pointer to a pointer of first node in list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	listint_t *next_node;

	if (!head)
		return;
	node = *head;

	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
