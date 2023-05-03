#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at
  * index index of a listint_t linked list
  * @head: head of the linked list
  * @index: index of the node that should be deleted
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 1;
	listint_t *new_node = *head, *temp_node;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = new_node->next;
		free(new_node);
		return (1);
	}
	temp_node = *head;
	while (temp_node)
	{
		if (counter == index)
		{
			new_node = temp_node->next;
			temp_node->next = new_node->next;
			free(new_node);
			return (1);
		}
		temp_node = temp_node->next;
		counter++;
	}
	return (-1);
}
