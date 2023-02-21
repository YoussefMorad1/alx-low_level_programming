#include <math.h>
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
	if (n <= 98)
	{
		for (; n < 98; ++n)
		{
			int x = n, l = log10(n);

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
			int x = n, l = log10(n);	
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
