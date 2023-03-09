#include "main.h"
/**
 * is_prime_number - hi
 * @n : yo
 * Return: hi
*/
int is_prime_number(int n)
{
	int i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
