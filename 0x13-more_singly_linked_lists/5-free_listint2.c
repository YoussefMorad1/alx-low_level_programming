#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - hi
 * @he : hi
 * Return: hi
 */
void free_listint(listint_t **he)
{
	listint_t h = *he;

	while (h)
	{
		listint_t *n = h->next;

		free(h);
		h = n;
	}
	(*he) = 0;
}
