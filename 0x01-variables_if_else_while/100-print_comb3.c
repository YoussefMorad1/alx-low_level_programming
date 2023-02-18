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
	int i = 0, j;

	for (; i <= 9; i++)
	{
		for(j = i+1; j <= 9; j++) 
        {
            putchar(i);
            putchar(j);
            if (i != 8 || j != 9) 
            {
                putchar(',');
                putchar(' ');
            }
        }
	}
	putchar('\n');
	return (0);
}
