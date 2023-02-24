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
		{
			if (i == 100)		
				printf("Buzz");
			else	
				printf("Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
