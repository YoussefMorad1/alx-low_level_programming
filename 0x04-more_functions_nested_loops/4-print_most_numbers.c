#include "main.h"
#include <stdio.h>
/**
 * print_numbers - hi
 * Return: 0
 */
void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; ++i)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
