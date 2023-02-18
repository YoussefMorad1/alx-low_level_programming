#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main func
 * Description: hi hi hi
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (; i <= 15; i++)
	{
		if (i <= 9)
			putchar('0' + i);
		else
			putchar('a' + i - 10);
	}
	putchar('\n');
	return (0);
}
