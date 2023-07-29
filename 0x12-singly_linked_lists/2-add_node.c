#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: heaad of alinked list
 * @str: string to store in the list
 * Return: return address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
