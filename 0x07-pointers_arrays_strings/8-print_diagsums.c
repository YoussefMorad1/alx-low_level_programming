#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - hi
 * @a : hi
 * @size : ss
 * Return: hi
 */
void print_diagsums(int *a, int size)
{
	int sm1 = 0, sm2 = 0;
	int i;

	for (; i < size * size; i += size + 1)
	{
		sm1 += a[i];
	}

	for (i = size - 1; i < size * size; i += size - 1)
	{
		sm2 += a[i];
	}
	printf("%d, %d", sm1, sm2);
}
