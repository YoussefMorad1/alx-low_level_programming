#include "main.h"
#include <stdlib.h>
/**
 _strdup  - hi
 * @s : yo
 * Return: hi
*/
char *_strdup(char *s)
{
	char *ptr;
	unsigned int i = 0, j = 0;
	
	if (!s || !s[j]) 
		return (0);
	while (s[j])
		j++;
	j++;
	ptr = malloc(j * sizeof(char));
	if (!ptr)
		return (0);
	while (i < j)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
