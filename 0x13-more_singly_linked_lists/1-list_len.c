#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - hi
 * @h : hi
 * Return: hi
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
