#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - hi
 * @head : hi
 * @n : hi
 * Return: hi
 */
listint_t *add_nodent_end(listint_t **head, const int n)
{
	listint_t *h = malloc(sizeof(*h)), *ptr = *head;

	if (!h)
	{
		return (0);
	}
	h->next = NULL;
	h->n = n;
	while (ptr && ptr->next)
	{
		ptr = ptr->next;
	}
	if (ptr)
		ptr->next = h;
	else
	{
		ptr = h;
		*head = h;
	}
	return (h);
}
