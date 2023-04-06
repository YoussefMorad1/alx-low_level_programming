#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - hi
 * @he : hi
 * Return: hi
 */
void free_listint2(listint_t **he)
{
	listint_t *h = *he;

	if (!he)
		return;
	while (h)
	{
		listint_t *n = h->next;

		free(h);
		h = n;
	}
	(*he) = 0;
}
