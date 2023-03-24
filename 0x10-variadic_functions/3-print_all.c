#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * m - hi
 * @s : hi
 * @ls : bye
 * Return: hi
 */
void m(const char * const s, va_list ls)i
{
	int i = 0;

	while (s && i < ln)
	{
		c = s[i];

		switch (c)
		{
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			case 'c':
				printf("%c", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 's':
				t = va_arg(ls, char *);
				if (!t)
					t = "(nil)";
				printf("%s", t);
				break;
			default:
				i++;
				continue;
		}
		i++;
		break;
	}
}
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
	char c, *t;

	va_start(ls, s);
	m(s, ls);
	while (s && i < ln)
	{
		char *sep = ", ";

		c = s[i];
		switch (c)
		{
			case 'i':
				printf("%s%d", sep, va_arg(ls, int));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ls, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ls, double));
				break;
			case 's':
				t = va_arg(ls, char *);
				if (!t)
					t = "(nil)";
				printf("%s%s", sep, t);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ls);
	printf("\n");
}
