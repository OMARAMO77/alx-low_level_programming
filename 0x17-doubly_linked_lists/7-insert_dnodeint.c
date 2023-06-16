#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: integer to add into the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_node = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		temp_node = temp_node->next;
		if (temp_node == NULL)
			return (NULL);
		idx--;
	}
	if (temp_node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = temp_node;
	new_node->next = temp_node->next;
	temp_node->next->prev = new_node;
	temp_node->next = new_node;
	return (new_node);
}
