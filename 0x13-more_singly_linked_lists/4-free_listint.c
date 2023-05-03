#include "lists.h"

/**
  * free_listint - frees a linked list
  * @head: head of the linked list
  *
  * Return: nothing
  */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}

	free(head);
}
