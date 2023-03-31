#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - hi
 * @h : hi
 * Return: hi
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] ", h->len);
		if (h->str)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		h = h->next;
		x++;
	}
	return (x);
}
