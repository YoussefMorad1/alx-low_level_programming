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
	int i = 0;

	while (*s++ && i++)
		;
	printf("%d\n", argc);
	return (0);
}
