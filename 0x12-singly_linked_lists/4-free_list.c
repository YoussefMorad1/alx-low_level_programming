#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - hi
 * @h : hi
 * Return: hi
 */
void free_list(list_t *h)
{
	while (h)
	{
		list_t *n = h->next;

		free(h);
		h = n;
	}
}
