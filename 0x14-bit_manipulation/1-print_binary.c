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
void hbd(unsigned long int n, int i)
{
	if ((1 << i) > (int)n) 
		return;
	hbd(n, i + 1);
	printf("%d", (n & (1 << i)) ? 1 : 0);
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
