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
		if (s[i] < ss[i]) 
			return -1;
		else if (s[i] > ss[i]) 
			return 1;
	if (s[i] == ss[i])
		return 0;
	else if (s[i] == '\0')
		return -1;
	else
		return 1;
	return (0);
}
