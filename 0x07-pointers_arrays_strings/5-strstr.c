#include "main.h"
#include <stdbool.h>
/**
 * _strpbrk - hi
 * @s : hi
 * @a : yo
 * Return: hi
*/
char *_strstr(char *s, char *a)
{
	int i = 0, j = 0, found;

	for (; s[i] != '\0'; i++)
	{
		found = 1;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i + j] != a[j])
				found = 0;
		}
		if (found) 
			return (s + i);
	}
	return (0);
}
