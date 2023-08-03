#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes while
 *                      looping through listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of unique nodes in the list, or 0 if none exits
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *right, *left;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	right = head->next;
	left = (head->next)->next;

	while (left)
	{
		if (right == left)
		{
			right = head;
			while (right != left)
			{
				nodes++;
				right = right->next;
				left = left->next;
			}
			right = right->next;
			while (right != left)
			{
				nodes++;
				right = right->next;
			}
			return (nodes);
		}
		right = right->next;
		left = (left->next)->next;
	}

	return (0);
}
