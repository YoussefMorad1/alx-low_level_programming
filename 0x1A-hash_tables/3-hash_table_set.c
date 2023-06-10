#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
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

	if (!newNode || !ht || !value)
		return (0);
	newNode->key = malloc(strlen(key) + 1);
	if (!newNode->key)
	{
		free(newNode);
		return (0);
	}
	newNode->value = malloc(strlen(value) + 1);
	if (!newNode->value)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	strcpy(newNode->key, key);
	strcpy(newNode->value, value);
	newNode->next = 0;
	ht->array[idx] = newNode;
	if (firstNode)
		ht->array[idx]->next = firstNode;
	return (1);
}
