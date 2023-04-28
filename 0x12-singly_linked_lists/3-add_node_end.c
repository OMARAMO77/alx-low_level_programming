#include "lists.h"

/**
 * add_node_end - adds a new node to the end of list
 * @head: linked list
 * @str: string to add to the node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head  = new_node;
			return (*head);
		}
		else
		{
			temp_node = *head;
			while (temp_node->next)
			{
				temp_node = temp_node->next;
			}
			temp_node->next = new_node;
			return (temp_node);
		}
	}
	return (NULL);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}
