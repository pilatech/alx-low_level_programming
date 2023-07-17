#include "dog.h"

/**
 * init_dog - initialize a dog structure.
 * @d: the dog pointer.
 * @name: the dog name,
 * @age: the dog age.
 * @owner: the dog owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
