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
	char* p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
