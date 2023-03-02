#include "main.h"
/**
 * cap_string - hi
 * @s : hi
 * Return: hi
*/
char *cap_string(char *s)
{
	int i = 0;

	s[0] -= ((s[0] <= 'z' && s[0] >= 'a') ? 32 : 0);
	for (i = 1; s[i] != '\0'; ++i)
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',' ||
		s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '.' || 
		s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
			s[i - 1] -= ((s[i - 1] <= 'z' && s[i - 1] >= 'a') ? 32 : 0);
	return (s);
}
