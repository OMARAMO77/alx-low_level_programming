#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: head of the linked list
  *
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		*head = prev;
		return (*head);
	}
	else
	{
		return (NULL);
	}
}
