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
	int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[idx];

	if (!ht)
		return (0);
	if (!key)
		return (0);
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
