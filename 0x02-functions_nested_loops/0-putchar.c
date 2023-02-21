#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
/**
 * main - main func
 * Description: hi hi hi
 * Return: 0
 */
int main(void)
{
	char *s = ("_putchar\n");
	int i;

	for (i = 0; i < (int)strlen(s); i++)
		_putchar(s[i]);
	return (0);
}
