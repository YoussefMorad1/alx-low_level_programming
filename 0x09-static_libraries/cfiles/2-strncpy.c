#include "main.h"
/**
 * _strncpy - hi
 * @s : hi
 * @ss : yo
 * @n : hh
 * Return: hi
*/
char *_strncpy(char *s, char *ss, int n)
{
	int i = 0;

	for (i = 0; i < n && ss[i] != '\0'; ++i)
		s[i] = ss[i];
	for (; i < n; ++i)
		s[i] = '\0';
	return (s);
}
