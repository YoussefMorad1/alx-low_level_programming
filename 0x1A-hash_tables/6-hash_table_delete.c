#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - hi
 * @ht: hi
 * Return: hi
 */
void hash_table_delete(const hash_table_t *ht)
{
	int i;
	hash_node_t *ptr, *nxt;

	if (!ht)
		return;
	for (i = 0; i < (int)ht->size; i++)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			nxt = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = nxt;
		}
	}
	free(ht->array);
	free(ht);
}

