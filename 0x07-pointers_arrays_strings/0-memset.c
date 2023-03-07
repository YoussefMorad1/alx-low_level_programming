#include "main.h"
/**
 * _memset - hi
 * @s : hi
 * @b : yo
 * @n : yo
 * Return: hi
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	}
	return (s);
}
