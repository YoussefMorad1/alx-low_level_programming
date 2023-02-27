#include "main.h"
/**
 * puts2 - hi
 * @str : hi
 * Return : hi
*/
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
