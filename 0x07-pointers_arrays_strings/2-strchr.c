#include <stddef.h>

/**
 * _strchr - Check is string s has char c
 * @s: The string
 * @c: The char
 *
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
unsigned int i;

while (*(s + i) != 0)
{
if (*(s + i) == c)
return (s + i);
i++;
}
return (NULL);
}
