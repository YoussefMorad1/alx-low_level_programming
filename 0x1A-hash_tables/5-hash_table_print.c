#include "hash_tables.h"
/**
 * hash_table_print - hi
 * @ht: hi
 * Return: hi
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, first = 1;
	hash_node_t *ptr;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->arry[i];

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

