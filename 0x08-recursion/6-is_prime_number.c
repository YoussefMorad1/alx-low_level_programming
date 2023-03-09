#include "main.h"
int p(int n, int i)
{
	if (n % i == 0)
		return 0;
	if (i * i > n) 
		return 1;
	return (p(n, i + 1));
}
/**
 * is_prime_number - hi
 * @n : yo
 * Return: hi
*/
int is_prime_number(int n)
{
	return p(n, 2);
}
