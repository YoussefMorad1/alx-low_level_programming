#include "main.h"
#include <stdio.h>
/**
 * print_square - hi
 * @n: s
 * Return: 0
 */
void print_sqaure(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		int j = 0;

		for (; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
