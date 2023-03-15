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
	if (!s)
		return (0);
	while (i < h)
	{
		s[i] = malloc(w * sizeof(int));
		if (!s[i])
		{
			j = 0;
			while (j < i)
			{
				free(s[j]);
				j++;
			}
			free(s);
			return (0);
		}
		j = 0;
		while (j < w)
		{
			s[i][j] = 0;
			j++;
		}
		i++;
	}
	return (s);
}
