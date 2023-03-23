#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - hi
 * @s : hi
 * @... : yo
 * Return: hi
*/
void print_all(const char * const s, ...)
{
	va_list ls;
	const char * const p = s;
	int ln = strlen(s), i = -1;

	va_start(ls, s);
	while (i < ln - 1)
	{
		i++;
		char c = p[i];
		char *sep = ", ";
		char *t;

		if (i == ln - 1)
			sep = "";
		if (c != 'i' && c != 'c' && c != 'f' && c != 's') 
			continue;
		else if (c == 'i')
			printf("%d%s", va_arg(ls, int), sep);
		else if (c == 'c')
			printf("%c%s", va_arg(ls, int), sep);
		else if (c == 'f')
			printf("%f%s", va_arg(ls, double), sep);
		else if (t = va_arg(ls, char *))
			printf("%s%s", t, sep);
		else
			printf("%s%s", "(nil)", sep);
	}
	va_end(ls);
	printf("\n");
}
