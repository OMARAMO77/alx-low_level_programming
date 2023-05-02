#include <stdio.h>
#include "lists.h"

/**
  * print_listint - returns the number of elements in a linked list
  * @h: The head of the linked list
  *
  * Return: number of elements of the linked list
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
