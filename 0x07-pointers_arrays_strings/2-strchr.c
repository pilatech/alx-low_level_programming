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

for (i = 0; i < sizeof(s + 1); i++)
{
if (*(s + i) == c)
return (s + i);
}
return (NULL);
}
