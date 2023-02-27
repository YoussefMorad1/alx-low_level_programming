#include "main.h"
#include <stdio.h>
/**
 * print_arry - hi
 * @a : hi
 * @n : hi
 * Return : hi
*/
void print_array(int *a, int n)
{
	int ln = n, i = 0;

	for (; i < ln - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[ln - 1]);
}
