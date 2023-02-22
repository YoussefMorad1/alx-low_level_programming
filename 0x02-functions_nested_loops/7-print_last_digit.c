#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * print_last_digit - hi hi
 * Description: samerr
 * @n: hi hi
 * Return: bye bye
 */
int print_last_digit(int n)
{	
	if (n == INT_MIN)
	{
		_putchar((abs(INT_MIN + 1) % 10 + 1) % 10 + '0')
		return ((abs(INT_MIN + 1) % 10 + 1) % 10);
	}
	_putchar('0' + abs(n) % 10);
	return (abs(n) % 10);
}
