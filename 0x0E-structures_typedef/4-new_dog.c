#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - hi
 * @name : hi
 * @age : hi
 * @owner : hi
 * Return: hi
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(*dog));

	if (!dog)
		return (0);
	dog->age = age;
	if (name)
	{
		dog->name = malloc(1 + strlen(name));
		if (!dog->name)
		{
			free(dog);
			return (0);
		}
		strcpy(dog->name, name);
	}
	else
		dog->name = 0;
	if (owner)
	{
		dog->owner = malloc(1 + strlen(owner));
		if (!dog->owner)
		{
			if (dog->name)
				free(dog->name);
			free(dog);
			return (0);
		}
		strcpy(dog->owner, owner);
	}
	else
		dog->owner = 0;
	return (dog);
}
