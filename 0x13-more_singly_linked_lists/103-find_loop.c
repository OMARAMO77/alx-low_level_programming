#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the linked list
 *
 * Return: address of the node where the loop start,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nod_add1 = head;
	listint_t *nod_add2 = head;

	if (head == NULL)
		return (NULL);
	while (nod_add2 && nod_add1 && nod_add1->next)
	{
		nod_add1 = nod_add1->next->next;
		nod_add2 = nod_add2->next;
		if (nod_add1 == nod_add2)
		{
			nod_add2 = head;
			while (nod_add2 != nod_add1)
			{
				nod_add2 = nod_add2->next;
				nod_add1 = nod_add1->next;
			}
			return (nod_add1);
		}
	}
	return (NULL);
}
