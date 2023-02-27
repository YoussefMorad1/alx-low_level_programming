#include "main.h"
/**
 * rev_string - hi
 * @s : hi
 * Return : hi
*/
void rev_string(char *s)
{
	int ln = 0;
	int i = 0;
	int j = ln - 1;

	for (; s[ln] != '\0'; ++ln)
		;


	for (; i < j; i++, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
}
