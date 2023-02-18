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
	char i = 'a';

	for (; i <= 'z'; i++)
		if (i == 'q' || i == 'e') 
			continue;
		putchar(i);
	putchar('\n');
	return (0);
}
