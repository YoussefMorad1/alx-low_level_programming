#include "main.h"
/**
 * _pow_recursion - hi
 * @x : yo
 * @y : ho
 * Return: hi
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (n == 1)
		return (x);
	return (x * _pow_recursion(x, y-1));
}
