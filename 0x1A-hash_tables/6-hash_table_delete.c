#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp_node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (!node)
			continue;
		while (node)
		{
			free(node->value);
			free(node->key);
			tmp_node = node->next;
			free(node);
			node = tmp_node;
		}
	}
	free(ht->array);
	free(ht);
}
