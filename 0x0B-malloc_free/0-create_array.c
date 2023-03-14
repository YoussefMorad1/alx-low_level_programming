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
	int i = 0;

	if (s == 0)
		return (0);
	ptr = malloc(s * sizeof(char));
	while (i < s)
	{
		ptr[i++] = c;
	}
	return (ptr);
}
