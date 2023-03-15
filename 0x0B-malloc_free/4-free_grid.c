#include "main.h"
#include <stdlib.h>
/**
 * free_grid  - hi
 * @g : yo
 * @h : zz
 * Return: hi
*/
void free_grid(int **g, int h)
{
	int i = 0;

	while (i < h)
	{
		free(g[i]);
		i++;
	}
	free(g);
}
