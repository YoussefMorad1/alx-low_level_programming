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
	if ((1u << i) > n) 
		return;
	hbd(n, i + 1);
	_putchar('0' + ((n & (1 << i)) ? 1 : 0));
}
/**
 * binary_to_uint - hi
 * @n : hi
 * Return: hi
 */
void print_binary(unsigned long int n)
{
	hbd(n, 0);
}
