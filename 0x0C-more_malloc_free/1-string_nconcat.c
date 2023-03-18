#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - hi
 * @s1 : yo
 * @s2 : aa
 * @n : sz
 * Return: hi
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ln1 = strlen(s1);
	int ln2 = n, i;
	char *s3;

	if ((int)strlen(s2) < ln2)
		ln2 = strlen(s2);
	s3 = malloc(ln1 + ln2 + 1);
	if (!s3)
		return (0);
	for (i = 0; i < ln1 + ln2; i++)
	{
		if (i < ln1)
			s3[i] = s1[i];
		if (i > ln1)
			s3[i] = s2[i - ln1];
	}
	s3[ln1 + ln2] = '\0';
	return (s3);
}
