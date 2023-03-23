#include <stdarg.h>
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
	va_list ls = va_start(n);
	int i = 0;

	for (i = 0; i < (int) n; i++)
	{
		if (sep && i < int(n - 1))
			printf("%d%s ", va_arg(ls, int), sep);
		else if (!sep)
			printf("%d ", va_arg(ls, int));
		else
			printf("%d", va_arg(ls, int));
	}
	printf("\n");
}
