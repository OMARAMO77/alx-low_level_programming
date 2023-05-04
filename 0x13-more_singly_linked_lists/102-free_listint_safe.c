#include "lists.h"

/**
 * free_listint_safe - frees a linked  list
 * @h: head of the linked list
 * Return:  size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp_node;

	temp_node = *h;
	while (temp_node)
	{
		temp_node = *h;
		temp_node = temp_node->next;
		free_temp_list(temp_node);
		count++;
	}
	*h = NULL;
	return (count);
}

/**
 * free_temp_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_temp_list(listint_t *head)
{
	listint_t *temp_node;

	if (head)
	{
		temp_node = head;
		temp_node = temp_node->next;
		free(temp_node);
		free_temp_list(temp_node);
	}
	free(head);
}
