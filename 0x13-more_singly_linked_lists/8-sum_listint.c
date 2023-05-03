#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a linked list
  * @head: head of the linked list
  *
  * Return: sum of all the data (n) of a linked list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
