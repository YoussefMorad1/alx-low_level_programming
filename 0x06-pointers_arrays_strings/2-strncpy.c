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
	int i = 0, j;

	for (i = 0; i < n && ss[i] != '\0'; ++j)
		s[j] = ss[i];
	if (i != n)
		s[j] = '\0';
	return (s);
}
