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
	char i = 'a', j = 'A';

	for (; i <= 'z'; i++)
		putchar(i);
	for (; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
