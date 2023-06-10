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
	hash_node_t *firstNode = ht->array[idx], *ptr = ht->array[idx];
	hash_node_t *newNode = malloc(sizeof(hash_node_t));
	char *tmp;

	if (!newNode || !ht)
		return (0);
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			tmp = malloc(strlen(value) + 1);
			if (!tmp)
				free(newNode);
			if (!tmp)
				return (0);
			free(ptr->value);
			ptr->value = tmp;
			strcpy(ptr->value, value);
			return (1);
		}
		ptr = ptr->next;
	}
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
	newNode->next = firstNode, ht->array[idx] = newNode;
	return (1);
}
