#include "main.h"
/**
 * _strchr - hi
 * @s : hi
 * @c : yo
 * Return: hi
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (1)
	{
		if (s[i] == c)
			return (s + i);
		else if (s[i] == '\0')
			break;
		i++;
	}
	return (0);
}
