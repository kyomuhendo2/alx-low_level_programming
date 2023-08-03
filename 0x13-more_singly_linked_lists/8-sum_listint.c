#include "lists.h"

/**
 * sum_listint - function that adds linke list data
 * @head: first node
 * Return: sum of data in linked list;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *node;

	node = head;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{

		sum += node->n;

		node = node->next;
	}

	return (sum);
}
