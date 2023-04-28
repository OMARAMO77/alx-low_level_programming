#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: pointer to first node of linked list
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
		free(temp_node->str);
		free(temp_node);
	}

	free(head);
}
