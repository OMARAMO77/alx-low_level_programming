#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
	free(head);
}
