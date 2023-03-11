#include <stdio.h>
/**
 * main - hi
 * @argc : hi
 * @argv : hi
 * Return: dd
*/
int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (**argv[1]) * (**argv[2]));
	return (0);
}
