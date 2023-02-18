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

	for (; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
