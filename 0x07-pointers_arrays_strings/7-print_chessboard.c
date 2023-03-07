#include "main.h"
#include <stdbool.h>
/**
 * print_chessboard - hi
 * @a : hi
 * Return: hi
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; a[i][j] != '\0'; ++j)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
