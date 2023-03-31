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
	list_t *h = malloc(sizeof(*h)), *ptr = *head;

	if (!h || (!s && str))
	{
		if (h)
			free(h);
		if (s)
			free(s);
		return (0);
	}
	h->str = s;
	h->next = NULL;
	h->len = strlen(s);
	while (ptr && ptr->next)
	{
		ptr = ptr->next;
	}
	if (ptr)
		ptr->next = h;
	else{
		ptr = h;
		*head = h;
	}
	return (h);
}
