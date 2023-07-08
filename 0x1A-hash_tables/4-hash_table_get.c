#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
