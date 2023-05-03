#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: @head: head of the linked list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (!head)
		return;

	temp_node = *head;
	while (*head)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}
	*head = NULL;
}
