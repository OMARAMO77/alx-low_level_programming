#include "lists.h"

/**
 * print_listint_safe - prints linked  list
 * @head: head of the linked list
 * Return: number of nodes in the list
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *first = head, *seconde = head;

	if (!head)
		exit(98);

	while (first && seconde && seconde->next && head)
	{
		first = first->next;
		seconde = seconde->next->next;
		if (first == seconde)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
