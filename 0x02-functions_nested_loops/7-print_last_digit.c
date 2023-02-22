#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include "main.h"
/**
 * print_last_digit - hi hi
 * Description: samerr
 * @n: hi hi
 * Return: bye bye
 */
int print_last_digit(int n)
{
	if (n > 0)
		n -= 10;
	if (n < 0)
		n += 10;
	_putchar('0' + abs(n) % 10);
	return (abs(n) % 10);
}
