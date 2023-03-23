#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - hi
 * @sep : hi
 * @n : hi
 * @... : yo
 * Return: hi
*/
void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list ls;
	int i = 0;

	va_start(ls, n);
	for (i = 0; i < (int) n; i++)
	{
		if (sep && i < (int)(n - 1))
		{
			char *c = va_arg(ls, char *);
			if (c)
				printf("%s%s", c, sep);
			else
				printf("(nil)%s", sep);
		}
		else{
			char *c = va_arg(ls, char *);
			if (c)
				printf("%s", c);
			else
				printf("(nil)");
			
		}
	}
	va_end(ls);
	printf("\n");
}
