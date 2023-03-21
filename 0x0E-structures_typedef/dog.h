#ifndef dogg
#define dogg
/**
 * struct dog - hi
 * @age: aa
 * @name: aa
 * @owner: aa
 */
struct dog
{
	float age;
	char *name, *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
