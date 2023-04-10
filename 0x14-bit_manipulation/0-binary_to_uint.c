#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - hi
 * @b : hi
 * Return: hi
 */
unsigned int binary_to_uint(const char *b)
{
	int i, ln;
	unsigned int ans = 0;

	if (!b)
		return (0);
	i = strlen(b) - 1;
	ln = strlen(b);
	for (; i >= 0; --i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		ans += (b[i] - '0') * (1 << (ln - i - 1));
	}
	return (ans);
}
