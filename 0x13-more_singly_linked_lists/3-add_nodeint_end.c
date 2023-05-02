#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a linked list
  * @head: head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return: The address of the new element, or NULL it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (!*head)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			temp_node = *head;
			while (temp_node->next)
				temp_node = temp_node->next;

			temp_node->next = new_node;
			return (temp_node);
		}
	}
	return (NULL);
}
