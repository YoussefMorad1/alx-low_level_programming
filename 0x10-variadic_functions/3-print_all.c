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
	int ln = strlen(s), i = 0;

	va_start(ls, s);
	while (i < ln)
	{
		char c = s[i];
		char *sep = ", ";
		char *t = "(nil)";

		if (i == ln - 1)
			sep = "";
		switch (c)
		{
			case 'i':
				printf("%d%s", va_arg(ls, int), sep);
				break;
			case 'c':
				printf("%c%s", va_arg(ls, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ls, double), sep);
				break;
			case 's':
				t = va_arg(ls, char *);
				if (!t)
					t = "(nil)";
				printf("%s%s", t, sep);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ls);
	printf("\n");
}
