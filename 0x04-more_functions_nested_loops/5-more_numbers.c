#include "main.h"
#include <stdio.h>
/**
 * more_numbers - hi
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;

	for (; i <= 14; ++i)
		if (i < 10)
			_putchar(i + '0');
		else
		{
			_putchar(i/10 + '0');
			_puthcar(i%10 + '0');
		}
	_putchar('\n');
}
