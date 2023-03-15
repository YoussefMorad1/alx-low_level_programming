#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid  - hi
 * @s1 : yo
 * @s2 : zz
 * Return: hi
*/
int **alloc_grid(int w, int h)
{
	int i = 0, **s;

	if (w <= 0 || h <= 0) 
		return (0);
	s = malloc(w * sizeof(int *));
	while (i < w)
	{
		s[i] = malloc(h * sizeof(int));
	}
	return (s);
}
