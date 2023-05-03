#include "lists.h"


/**
  * print_listint - prints all the elements of a linked list
  * @h: head of the linked list
  *
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			nodes++;
		}
	}

	return (nodes);
}
