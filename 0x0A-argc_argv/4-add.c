#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - hi
 * @argc : hi
 * @argv : hi
 * Return: dd
*/
int main(int argc, char **argv)
{
	int ans = 0, i, j, good;
	char *s;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		good = 1;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (!isdigit(s[j]))
					good = 0;
		}
		if (!good)
		{
			printf("Error\n");
			return (1);
		}
		ans += atoi(s);
	}
	printf("%d\n", ans);
	return (0);
}
