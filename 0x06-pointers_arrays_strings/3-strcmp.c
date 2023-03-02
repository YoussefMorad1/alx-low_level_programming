#include "main.h"
/**
 * _strcmp - hi
 * @s : hi
 * @ss : yo
 * Return: hi
*/
int _strcmp(char *s, char *ss)
{
	int i = 0;

	for (i = 0; s[i] != '\0' && ss[i] != '\0'; ++i)
		if (s[i] != ss[i])
			return (s[i] - ss[i]);
	if (s[i] == '\0' && ss[i] == '\0')
		return (0);
	else if (s[i] == '\0')
		return (s[i] - ss[i]);
	else
		return (s[i] - ss[i]);
	return (0);
}
