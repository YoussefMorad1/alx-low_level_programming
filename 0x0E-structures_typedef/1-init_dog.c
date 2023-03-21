#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - hi
 * @d : hi
 * @name : hi
 * @age : hi
 * @owner : hi
 * Return: hi
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name)
		d->name = malloc(1 + strlen(name));
	if (owner)
		d->owner = malloc(1 + strlen(owner));
	if (name)
		strcpy(d->name, name);
	else
		d->name = 0;
	if (owner)
		strcpy(d->owner, owner);
	else
		d->owner = 0;
	d->age = age;
}
