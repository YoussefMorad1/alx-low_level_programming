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
	_putchar('0' + abs(n - 10) % 10);
	return (abs(n - 10) % 10);
}
