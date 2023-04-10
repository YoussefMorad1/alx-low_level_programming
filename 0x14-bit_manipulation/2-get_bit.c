#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * get_bit - hi
 * @n : hi
 * @idx : hi
 * Return: hi
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	if (idx <= 31)
		return (n & (1ul << idx)) ? 1 : 0;
	else
		return (-1);
}
