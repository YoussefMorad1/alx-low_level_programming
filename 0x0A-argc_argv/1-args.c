#include <stdio.h>
/**
 * main - hi
 * @argc : hi
 * @argv : hi
 * Return: dd
*/
int main(int argc, char **argv)
{
	char **s = argv;
	int i = 0, j = argc;

	while (*s)
	{
		i++;
		j++, s++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
