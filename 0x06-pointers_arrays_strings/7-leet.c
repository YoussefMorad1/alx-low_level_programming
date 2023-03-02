#include "main.h"
/**
 * leet - hi
 * @s : hi
 * Return: hi
*/
char *leet(char *s)
{
	char i = 'A';
	char arr[300];
	int j = 0;

	for (; i <= 'z'; i++)
		arr[(int)i] = i;

	arr[(int)'a'] = arr[(int)'A'] = '4';
	arr[(int)'E'] = arr[(int)'e'] = '3';
	arr[(int)'T'] = arr[(int)'t'] = '7';
	arr[(int)'O'] = arr[(int)'o'] = '0';
	arr[(int)'L'] = arr[(int)'l'] = '1';

	for (; s[j] != '\0'; j++)
	{
		if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
			s[j] = arr[(int)s[j]];
	}
	return (s);
}
