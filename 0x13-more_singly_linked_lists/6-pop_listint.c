#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the linked list
 *
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n = 0;

	if (*head != NULL)
	{
		new_node = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_node;
		return (n);
	}
	else
	{
		return (0);
	}
}
