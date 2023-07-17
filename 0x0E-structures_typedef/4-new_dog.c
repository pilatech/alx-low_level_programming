#include <stdlib.h>
#include "dog.h"

char *_dup(char *str);

/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _dup(name);
	new_dog->owner = _dup(owner);
	new_dog->age = age;
	return (new_dog);
}

/**
 * _dup - copy string.
 * @str: the string to copy.
 *
 * Return: a string.
 */
char *_dup(char *str)
{
	char *new_str;
	int size;
	int i;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	new_str = malloc(size + 1);
	if (new_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
