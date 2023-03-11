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
	
	while (*s)
		s++;
	printf("%d\n", argc);
	return (0);
}
