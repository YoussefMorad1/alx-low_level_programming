#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - hi
 * @ht: hi
 * @key: hi
 * Return: hi
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *node;

	if(!ht || !key)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
