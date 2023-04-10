#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * flip_bits - hi
 * @n : hi
 * @m : hi
 * Return: hi
 */
int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = -1;
	int ct = 0;

	while (++i < 32)
	{
		if ((n & (1ul << i)) != (m & (1ul << i)))
			ct++;
	}
	return (ct);
}
