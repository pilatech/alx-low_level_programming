#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I ama %.1f ;)) - WOOF!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
