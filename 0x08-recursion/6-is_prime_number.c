#include "main.h"
/**
 * is_prime_number - hi
 * @x : yo
 * @y : ho
 * Return: hi
*/
int is_prime_number(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}	
	return (1);
}
