#include "lists.h"

/**
 * add_node_end - unction that adds new node at end
 * @head: pointer to a pointer of the link head
 * @str: constant pointer to a character string
 * Return: returns pointer to the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *temp = *head;

	if (!new)
		return (NULL);

	new->str = strdup(str);

	for (new->len = 0; str[new->len]; new->len++)
		;
	new->next = NULL;

	if (!temp)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
