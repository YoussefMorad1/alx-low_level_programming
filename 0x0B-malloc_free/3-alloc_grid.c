#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid  - hi
 * @w : yo
 * @h : zz
 * Return: hi
*/
int **alloc_grid(int w, int h)
{
	int i = 0, **s, j = 0;

	if (w <= 0 || h <= 0)
		return (0);
	s = malloc(h * sizeof(int *));
	while (i < h)
	{
		s[i] = malloc(w * sizeof(int));
		j = 0;
		while (j < w)
		{
			s[i][j] = 0;
			j++;
		}
	}
	return (s);
}
