#include "main.h"
/**
 * _memcpy - hi
 * @d : hi
 * @s : yo
 * @n : yo
 * Return: hi
*/
char *_memcpy(char *d, char *s, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
