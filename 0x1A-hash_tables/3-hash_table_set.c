#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - hi
 * @ht: hi
 * @key: hi
 * @value: hi
 * Return: hi
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *firstNode = ht->array[idx];
	hash_node_t *newNode = malloc(sizeof(newNode));

	if (!newNode)
		return (0);
	newNode->key = (char *)key;
	newNode->value = (char *)value;
	newNode->next = 0;
	ht->array[idx] = newNode;
	if (firstNode)
		ht->array[idx]->next = firstNode;
	return (1);
}
