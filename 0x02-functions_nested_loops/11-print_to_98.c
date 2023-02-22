#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - hi hi
 * Description: samerr
 * @n: sh
 * Return: bye bye
 */
void print_to_98(int n)
{
	int l = 0, x = abs(n);
	if (!x)
	{
		l = 1;
	}
	else
	{
		int i = 1, j, ct = 0;
		for (j = 1; j <= i; j *= 10)
			ct++;
		l = ct;
	}
	if (n <= 98)
	{
		for (; n < 98; ++n)
		{			
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
