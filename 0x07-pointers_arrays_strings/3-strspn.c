#include "main.h"
/**
 * _strspn - hi
 * @s : hi
 * @a : yo
 * Return: hi
*/
unsigned int _strspn(char *s, char *a)
{
	int i = 0, j = 0;
	bool found;

	for (; s[i] != '\0'; i++)
	{
		found = false;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
				found = true;
		}
		if (!found)
			break;

	}
	return ((unsigned int)i);
}
