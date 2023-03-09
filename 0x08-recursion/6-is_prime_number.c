#include "main.h"
/**
 * p - hi
 * @n : aa
 * @i : aa
 * Return: aa
 */
int p(int n, int i)
{
	if (i * i > n) 		
		return (1);
	if (n % i == 0)
		return (0);
	return (p(n, i + 1));
}
/**
 * is_prime_number - hi
 * @n : yo
 * Return: hi
*/
int is_prime_number(int n)
{
	if (n <= 1) 
		return (0);
	return p(n, 2);
}
