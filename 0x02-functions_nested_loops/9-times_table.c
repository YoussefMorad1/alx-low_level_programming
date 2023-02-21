#include <stdio.h>
#include "main.h"
/**
 * times_table - hi hi
 * Description: samerr
 * Return: bye bye
 */
void times_table(void)
{
	int i, j, ct;

	for (i = 0; i < 10; ++i)
	{
		for (j = i, ct = 0; ct < 10; j += i, ct++)
		{
			if (j < 10)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			_putchar(',');
			if (ct != 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('$');
				_putchar('\n');
			}
		}
	}
}
