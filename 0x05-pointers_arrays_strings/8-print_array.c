#include "main.h"
#include <stdio.h>
/**
 * print_array - hi
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
	if (ln >= 1)
		printf("%d", a[ln - 1]);
	printf("\n");
}
