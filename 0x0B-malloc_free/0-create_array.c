#include "main.h"
#include <stdlib.h>
/**
 * create_array - hi
 * @s : yo
 * @c : yo
 * Return: hi
*/
char *create_array(unsigned int s, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(s * sizeof(char));
	if (!ptr)
		return (0);
	while (i < s)
	{
		ptr[i++] = c;
	}
	return (ptr);
}
