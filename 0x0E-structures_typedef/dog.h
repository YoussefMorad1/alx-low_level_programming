#ifndef dogg
#define dogg
typedef struct dog dog_t;
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

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
