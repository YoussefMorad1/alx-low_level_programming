#include "main.h"
/**
 * _strncat - hi
 * @s : hi
 * @ss : yo
 * @n : hh
 * Return: hi
*/
char *_strncat(char *s, char *ss, int n)
{
	int i = 0, j;

	while (s[i] != '\0')
		++i;
	for (j = i; j - i < n && ss[j = i] != '\0'; ++j)
		s[j] = ss[j - i];
	s[j] = '\0';
	return (s);
}
