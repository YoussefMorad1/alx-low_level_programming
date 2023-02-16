#include <stdio.h>
/**
 * main - our main function
 * Description: prints sentence
 * Return: returns 0
 */
int main(void)
{
	char ch;
	int x;
	long y;
	long long z;
	float f;

	printf("Size of a char: ");
	printf("%d", sizeof(ch));
	printf(" byte(s)\n");
	printf("Size of an int: ");
	printf("%d", sizeof(x));
	printf(" byte(s)\n");
	printf("Size of a long int: ");
	printf("%d", sizeof(y));
	printf(" byte(s)\n");
	printf("Size of a long long int: ");
	printf("%d", sizeof(z));
	printf(" byte(s)\n");
	printf("Size of a float: ");
	printf("%d", sizeof(f));
	printf(" byte(s)\n");
	return (0);
}
