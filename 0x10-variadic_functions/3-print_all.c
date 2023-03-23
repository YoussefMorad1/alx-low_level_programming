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
	int ln = strlen(s), i = 0;

	va_start(ls, s);
	for (; i < ln; ++i)
	{
		char c = p[i];
		char *sep = ", ";

		if (i == ln - 1)
			sep = "";
		if (c == 'i')
			printf("%d%s", va_arg(ls, int), sep);
		else if (c == 'c')
			printf("%c%s", va_arg(ls, int), sep);
		else if (c == 'f')
			printf("%f%s", va_arg(ls, double), sep);
		else if (c == 's'){
			char *ss = va_arg(ls, char *);
			if (ss)
				printf("%s%s", ss, sep);
			else
				printf("(nil)%s", sep);
		}
	}
	va_end(ls);
	printf("\n");
}
