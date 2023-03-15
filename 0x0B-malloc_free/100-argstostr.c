#include "main.h"
#include <stdlib.h>
/**
 * argstostr  - hi
 * @ac : yo
 * @av : zz
 * Return: hi
*/
char *argstostr(int ac, int **av)
{
	int idx = 0, i = 0, j = 0, ln = 0;
	char *s;

	if (!ac || !av)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ln++;
			j++;
		}
		i++;
	}
	s = malloc(ln * sizeof(char) + 1);
	i = 0, ln = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s[ln] = av[i][j];
			j++;
			ln++;
		}
		i++;
	}
	s[ln] = '\0';
	return (s);
}
