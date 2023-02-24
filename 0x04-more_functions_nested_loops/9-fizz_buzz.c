#include <stdio.h>
/**
 * main - hi
 * Return: 0
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if(i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", i);
	}
	return (0);
}
