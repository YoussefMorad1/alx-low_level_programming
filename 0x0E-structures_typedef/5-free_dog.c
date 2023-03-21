#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - hi
 * @d : hi
 * Return: hi
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
