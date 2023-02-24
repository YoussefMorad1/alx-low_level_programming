#include "main.h"
#include <stdio.h>
/**
 * print_triangle - hi
 * @n: s
 * Return: 0
 */
void print_triangle(int n)
{
	int i = 1;

	for (; i <= n; i++)
	{
		int j;
		for (j = 0; j < n-i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
