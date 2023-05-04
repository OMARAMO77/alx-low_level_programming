#include "lists.h"

/**
 * print_listint_safe - prints linked  list
 * @head: head of the linked list
 *
 * Return: number of nodes in the list
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int dif;

	if (head == NULL)
		exit(98);
	while (head)
	{
		dif = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
