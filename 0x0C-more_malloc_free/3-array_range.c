#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - hi
 * @min : aa
 * @max : sz
 * Return: hi
*/
int *array_range(int min, int max)
{
	int *ptr, i = min;

	if (min > max)
		return (0);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (!ptr)
		return (0);
	while (i <= max)
	{
		ptr[i - min] = i;
		i++;
	}
	return (ptr);
}
