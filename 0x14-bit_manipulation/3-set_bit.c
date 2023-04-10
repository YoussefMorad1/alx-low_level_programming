#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * set_bit - hi
 * @n : hi
 * @idx : hi
 * Return: hi
 */
int set_bit(unsigned long int *n, unsigned int idx)
{
	if (idx <= 31)
		(*n) = (*n) | (1ul << idx);
	else
		return (-1);
	return (1);
}
