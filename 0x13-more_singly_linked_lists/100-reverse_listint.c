#include "lists.h"

/**
 * reverse_listint - pointer to function that returns first
 * node of reverssed list
 * @head: first node
 * Return: first node of a reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;

	listint_t *temp2 = NULL;


	while (*head != NULL)
	{
		temp2 = (*head)->next;

		(*head)->next = temp;

		temp = *head;

		*head = temp2;
	}

	*head = temp;

	return (*head);
}
