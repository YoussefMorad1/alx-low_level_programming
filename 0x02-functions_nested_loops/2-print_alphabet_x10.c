#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet_x10 - main func
 * Description: hi hi hi
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int t = 1;
	
	for(; t <= 10; ++t)
	{
		i = 'a';
		for (; i <= 'z'; ++i)
			_putchar(i);
		_putchar('\n');
	}
}
