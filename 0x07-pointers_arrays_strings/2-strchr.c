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

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	return (s + i);
}
