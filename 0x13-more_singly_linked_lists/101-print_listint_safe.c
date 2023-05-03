#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the linked list
 *
 * Return: number of nodes in the list.
 * If the function fails exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_counter = 0;
	newlist_t *temp_node, *new_node, *sum;

	temp_node = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(newlist_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = temp_node;
		temp_node = new_node;

		sum = temp_node;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_newlist(&temp_node);
				return (node_counter);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_counter++;
	}

	free_newlist(&temp_node);
	return (node_counter);
}

/**
 * free_newlist - function that frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_newlist(newlist_t **head)
{
	newlist_t *temp_node, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp_node = curr) != NULL)
		{
			curr = curr->next;
			free(temp_node);
		}
		*head = NULL;
	}
}
