#include "main.h"
#include <stdarg.h>
/**
 * sum_them_all - hi
 * @n : hi
 * @... : yo
 * Return: hi
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
		s += va_arg(ls, int);
	va_end(ls);
	return (s);
}
