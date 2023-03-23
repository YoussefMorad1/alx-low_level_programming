#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - hi
 * @sep : hi
 * @n : hi
 * @... : yo
 * Return: hi
*/
void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list ls;
	int i = 0;

	if (!n) 
		return;
	va_start(ls, n);
	for (i = 0; i < (int) n; i++)
	{
		if (sep && i < (int)(n - 1))
			printf("%d%s ", va_arg(ls, int), sep);
		else if (!sep)
			printf("%d ", va_arg(ls, int));
		else
			printf("%d", va_arg(ls, int));
	}
	printf("\n");
}
