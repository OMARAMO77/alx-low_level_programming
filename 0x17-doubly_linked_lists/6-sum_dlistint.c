#include "lists.h"

/**
 * sum_dlistint - sums all of the data (n) of a dlistint_t linked list
 * @head: head of the dlistint_t list
 *
 * Return: The sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
