#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head of the linked list
  * @idx: index of the list where the new node should be added
  * @n: integer data for the new node
  *
  * Return: address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int counter = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		if (idx > 0)
		{
			temp_node = *head;
			while (temp_node)
			{
				if (counter == idx)
				{
					new_node->next = temp_node->next;
					temp_node->next = new_node;
					return (new_node);
				}
				temp_node = temp_node->next;
				counter++;
			}
			if (idx > counter)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
