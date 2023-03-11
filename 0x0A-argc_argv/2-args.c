#include <stdio.h>
/**
 * main - hi
 * @argc : hi
 * @argv : hi
 * Return: dd
*/
int main(int argc, char **argv)
{
	int i = 0, j = argc;

	while (i < j)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
