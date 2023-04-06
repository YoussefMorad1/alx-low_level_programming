#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - hi
 * @h : hi
 * @index : hi
 * Return: hi
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i = 0;

	while (h && i < index)
	{
		h =  h->next;
		i++;
	}
	return (h);
}
