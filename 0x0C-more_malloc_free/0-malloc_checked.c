#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - hi
 * @b : yo
 * Return: hi
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
