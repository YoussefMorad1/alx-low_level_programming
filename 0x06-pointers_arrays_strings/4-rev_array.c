#include "main.h"
/**
 * reverse_array - hi
 * @s : hi
 * @ss : yo
 * Return: hi
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	
	for (; i < n / 2; ++i)
	{
		int tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
