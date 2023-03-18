#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - hi
 * @sz : aa
 * @n : sz
 * Return: hi
*/
void *_calloc(unsigned int n, unsigned int sz)
{
	void *ptr;

	if (!n || !sz)
		return (0);
	ptr = malloc(n * sz);
	if (!ptr)
		return (0);
	memset(ptr, 0, n * sz);
	return (ptr);
}
