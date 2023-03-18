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
	char *ptr2;
	unsigned int i = 0;

	if (!n || !sz)
		return (0);
	ptr = malloc(n * sz);
	if (!ptr)
		return (0);
	ptr2 = ptr;
	while (i < n * sz)
	{
		ptr2[i] = 0;
	}
	return (ptr);
}
