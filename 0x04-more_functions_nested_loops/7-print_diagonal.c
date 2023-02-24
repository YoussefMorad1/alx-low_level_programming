#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - hi
 * @n: s
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		int j = 0;

		for (; j < i; j++)
			_putchar(' ');
		_putchar('\');
		_putchar('\n');
	}
	if ( n <= 0)
		_puthcar('\n');
}
