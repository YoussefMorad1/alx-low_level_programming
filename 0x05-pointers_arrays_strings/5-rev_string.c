#include "main.h"
/**
 * rev_string - hi
 * @s : hi
 * Return : hi
*/
void rev_string(char *s)
{
	int ln = 0, i = 0, j;

	for (; s[ln] != '\0'; ++ln)
		;

	j = ln - 1;

	for (; i < j; i++, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
}
