#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - hi
 * @ht: hi
 * Return: hi
 **/
void hash_table_print(const hash_table_t *ht)
{
	int i, first = 1;
	hash_node_t *ptr;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			if (!first)
				printf(", ");
			else
				first = 0;
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
