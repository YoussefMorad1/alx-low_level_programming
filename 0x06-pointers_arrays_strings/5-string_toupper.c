#include "main.h"
/**
 * string_toupper - hi
 * @s : hi
 * Return: hi
*/
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; ++i)
		s[i] -= (s[i] >= 'a' ? 32 : 0);
	return (s);
}
