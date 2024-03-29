#include "hash_tables.h"
/**
 * key_index - hi
 * @key: hi
 * @size: size
 * Return: hi
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
