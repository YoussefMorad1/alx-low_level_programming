#include "hash_tables.h"
/**
 * hash_table_set - hi
 * @ht: hi
 * @key: hi
 * @value: hi
 * Return: hi
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx = key_index(key, ht.size);
	hash_node_s *firstNode = ht.array[idx];
	hash_node_s *newNode = malloc(sizeof(newNode));

	if (!newNode)
		return (0);
	newNode->key = key;
	newNode->value = value;
	newNode->next = 0;
	ht.array[idx] = newNode;
	if (firstNode)
		newNode->next = firstNode;
	return (1);
}
