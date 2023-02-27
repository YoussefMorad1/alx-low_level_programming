#include "main.h"
/**
 * _puts2 - hi
 * @str : hi
 * Return : hi
*/
void _puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
