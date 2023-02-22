#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * ln - hi hi
 * Description: samerr
 * @x: sh
 * Return: bye bye
 */
int ln(int x)
{
	int i = 1;
	int	j;
	int ct = 0;
	
	if (!x)
		return (1);
	for (j = 1; j <= i; j *= 10)
	{
		ct++;
	}
	return (ct);
}
/**
 * print_to_98 - hi hi
 * Description: samerr
 * @n: sh
 * Return: bye bye
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; ++n)
		{
			int x = abs(n), l = ln(abs(n));

			if (n < 0)
				_putchar('-');
			while (l)
			{
				_putchar('0' + (x / l) % 10);
				l /= 10;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; --n)
		{
			int x = n, l = ln(n);

			while (l)
			{
				_putchar('0' + (x / l) % 10);
				l /= 10;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
