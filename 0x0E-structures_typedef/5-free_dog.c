#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - free memory allocated to a dog.
 * @d: the dog.
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
