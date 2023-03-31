#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - hi
 * @head : hi
 * @str : hi
 * Return: hi
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *h = new list_t, *tmp = *head;

	if (!h || (!s && str))
	{
		return (0);
	}
	h->str = s;
	h->next = NULL;
	h->len = strlen(s);
	while ((*head)->next)
	{
		*head = (*head)->next;
	}
	(*head)->next = h;
	return (tmp);
}
