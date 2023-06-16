#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the dlistint_t list.
 * @index: index of the node
 *
 * Return: nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);
}
