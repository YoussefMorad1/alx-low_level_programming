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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned int ct = 0;

	while (i < sizeof(n) * 8ul)
	{
		if ((n & (1ul << i)) != (m & (1ul << i)))
			ct++;
		i++;
	}
	return (ct);
}
