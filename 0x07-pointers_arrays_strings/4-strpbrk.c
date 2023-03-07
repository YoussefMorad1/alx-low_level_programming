#include "main.h"
#include <stdbool.h>
/**
 * _strpbrk - hi
 * @s : hi
 * @a : yo
 * Return: hi
*/
char *_strpbrk(char *s, char *a)
{
	int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[i])
				return (s + i);
		}
	}
	return (0);
}
