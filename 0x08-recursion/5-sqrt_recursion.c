#include "main.h"
/**
 * _sqrt - hi
 * @n : ho
 * @i : ss
 * Return: hi
*/
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion- hi
 * @n : ho
 * Return: hi
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
