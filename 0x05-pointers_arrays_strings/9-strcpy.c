#include "main.h"
/**
 * _strcpy - hi
 * @s : hi
 * @ss : hi
 * Return : hi
*/
char *_strcpy(char *s, char *ss)
{
	int i = 0, j = 0;

	while (1)
	{
		s[i++] = ss[j++];
		if (s[j] == '\0')
		{
			s[i] = s[j];
			break;
		}	
	}
	return (s);
}
