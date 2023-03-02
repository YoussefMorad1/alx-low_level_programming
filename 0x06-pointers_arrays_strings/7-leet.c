#include "main.h"
/**
 * leet - hi
 * @s : hi
 * Return: hi
*/
char *leet(char *s)
{
	char i = 'A';
//	char arr[200];
	int j = 0;

//	for (; i <= 'Z'; i++)
//		arr[i] = i;
//	for (i = 'a'; i <= 'z'; i++)
//		arr[i] = i;

//	arr['a'] = arr['A'] = '4';
//	arr['E'] = arr['e'] = '3';
//	arr['T'] = arr['t'] = '7';
//	arr['O'] = arr['o'] = '0';
//	arr['L'] = arr['l'] = '1';

	for (; s[j] != '\0'; j++)
	{
		if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'));
//			s[j] = arr[s[j]];
	}
	return (s);
}
