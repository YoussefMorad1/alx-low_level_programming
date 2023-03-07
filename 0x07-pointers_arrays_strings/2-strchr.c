#include "main.h"
/**
 * _strchr - hi
 * @s : hi
 * @c : yo
 * Return: hi
*/
char *_strchr(char *s, char c)
{
	unsigned int i = -1;

	while (i++)
	{
		if (s[i] == c)
			return (s + i);
		else if (s[i] == '\0')
			break;
	}
	return (0);
}
