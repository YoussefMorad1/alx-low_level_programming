#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - hi
 * @head : hi
 * @str : hi
 * Return: hi
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = 0;
	list_t *h = malloc(sizeof(*h));

	if (!h)
		return (0);
	if (str)
		s = strdup(str);
	if (!s && str)
	{
		free(h);
		return (0);
	}
	h->str = s;
	h->next = NULL;
	h->len = 0;
	if (s)
		h->len = strlen(s);
	if (*head)
	{
		h->next = *head;
		*head = h;
	}
	else
	{
		*head = h;
	}
	return (*head);
}
