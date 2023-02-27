#include "main.h"
/**
 * print_rev - hi
 * @str : hi
 * Return : hi
*/
void print_rev(char *str)
{
	int i = 0, j;

	for (; str[i] != '\0'; ++i)
		;

	j = i - 1;
	for (; j >= 0; --j)
		_putchar(str[j]);

	_putchar('\n');
}
