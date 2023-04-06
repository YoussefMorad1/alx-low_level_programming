#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - hi
 * @h : hi
 * Return: hi
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (!h)
		printf("(nil)\n");
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
