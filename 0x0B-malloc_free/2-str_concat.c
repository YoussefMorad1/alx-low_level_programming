#include "main.h"
#include <stdlib.h>
/**
 * str_concat  - hi
 * @s1 : yo
 * @s2 : zz
 * Return: hi
*/
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0;
	char *s;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	s = malloc((l1 + l2 + 1) * sizeof(char));
	if (!s)
		return (0);
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		s[i] = s2[i - l1];
		i++;
	}
	s[i] = '\0';
	return (s);
}
