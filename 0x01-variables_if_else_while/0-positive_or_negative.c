#include <stdio.h>
/**
 * Description: hi hi hi
 * Return: 0
 */
int main(void)
{
	int n;

	scanf("%d", &n);
	if(n < 0)
		printf("%d is negative", n);
	else if(n > 0)
		printf("%d is positive", n);
	else
		printf("0 is zero");
	printf("\n");
	return (0);
}
