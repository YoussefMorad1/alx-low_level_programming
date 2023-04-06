#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - hi
 * @head : hi
 * @n : hi
 * Return: hi
 */
list_t *add_nodeint(list_t **head, const int n)
{
	list_t *h = malloc(sizeof(*h));

	if (!h)
		return (0);
	h->n = n;
	h->next = NULL;
	if (*head)
	{
		h->next = *head;
		*head = h;
	}
	else
		*head = h;
	return (*head);
}
