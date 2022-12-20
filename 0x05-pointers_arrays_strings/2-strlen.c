#include "main.h"

/**
 * _strlen - find the length of a string
 * Return: an integer of count
 * @s: the string pointer
 */

int _strlen(char *s)
{
 int count = 0;

 while (*s != 0)
 {
	 count++;
	 s + 1;
 }
 return (count);
}
