#include "lists.h"

/**
 * free_listint_safe - frees a linked  list
 * @h: head of the linked list
 *
 * Return:  size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int dif;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
