#include "hash_tables.h"
/**
 * hash_table_get - hi
 * @ht: hi
 * @key: hi
 * Return: hi
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx = key_index(key, ht->size);
	hash_node_t *node = ht->array[idx];

	while(node)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
	}
	return NULL;
}
