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
	int i = 0;
	char c = 0, *t = 0, *sep = "";

	va_start(ls, s);
	while (s && s[i])
	{
		c = s[i];
		switch (c)
		{
			case 'i':
				printf("%s%d", sep, va_arg(ls, int));
				sep = ", ";
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ls, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ls, double));
				sep = ", ";
				break;
			case 's':
				t = va_arg(ls, char *);
				if (!t)
					t = "(nil)";
				printf("%s%s", sep, t);
				sep = ", ";
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ls);
	printf("\n");
}
