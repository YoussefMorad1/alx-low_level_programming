#include "main.h"
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

	for (; i < size; i++)
	{
		sm1 += a[i][j];
	}

	for (i = 0; i < size; i++)
	{
		sm2 += a[i][size - i - 1];
	}
	printf("%d, %d", sm1, sm2);
}
