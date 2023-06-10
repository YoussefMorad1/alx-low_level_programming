#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - hello
 * @size: hi
 * Return: hi
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arr = malloc(sizeof(*arr) * size);
	hash_table_t *tbl;

	if (!arr)
		return (0);
	tbl = malloc(sizeof(hash_table_t));
	tbl->size = size;
	tbl->array = arr;
	return (tbl);
}
