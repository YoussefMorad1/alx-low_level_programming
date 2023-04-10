#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * hbd - hi
 * @n : hi
 * @i : hi
 * Return: hi
 */
void hbd(unsigned long int n, unsigned long int i)
{
	if ((1ul << i) > n)
		return;
	if (i && ((1ul << i) < (1ul << (i-1))))
		return;
	hbd(n, i + 1);
	_putchar('0' + ((n & (1ul << i)) ? 1ul : 0ul));
}
/**
 * print_binary - hi
 * @n : hi
 * Return: hi
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
		hbd(n, 0);
}
