#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the dlistint_t list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
