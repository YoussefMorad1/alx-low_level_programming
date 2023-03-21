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
	d->name = malloc(strlen(name));
	d->owner = malloc(strlen(owner));
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	d->name[strlen(name)-1] = '\0';
	d->owner[strlen(owner)-1] = '\0';
}
