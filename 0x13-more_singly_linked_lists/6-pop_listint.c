#include "lists.h"

/**
 * pop_listint - delete the first node (head) function
 * @head: Pointer to a pointer of the first node
 * Return: the data in the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
