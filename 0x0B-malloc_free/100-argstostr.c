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
	int i = 0, j = 0, ln = 0;
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
		ln++;
	}
	s = malloc((ln + 1) * sizeof(char));
	if (!s)
		return (0);
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
		s[ln] = '\n';
		ln++;
		i++;
	}
	s[ln] = '\0';
	return (s);
}
