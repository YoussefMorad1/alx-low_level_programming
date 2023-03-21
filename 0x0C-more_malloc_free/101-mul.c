#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - hi
 * @argv : aa
 * @argc : sz
 * Return: hi
*/
int main(int argv, char** argc)
{
	int i = 0, x, y, ln1 = 0, ln2 = 0, rlen;
	char *s;

	if (argv != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (argc[1][i])
	{
		if (argc[1][i] < '0' && arg1[1][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		ln1++;
	}
	i = 0;
	while (argc[2][i])
	{
		if (argc[2][i] < '0' && argc[2][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		ln2++;
	}
	x = atoi(argc[1]);
	y = atoi(argc[2]);
	if (ln1 > ln2)
		rlen = ln1 + 1;
	else 
		rlen = ln2 + 1;
	s = malloc(rlen * sizeof(*s));
	printf("%s\n", itoa(x * y, s, 10));
i	return (0);
}
