#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: the string to conacatenate to
 * @src: the string to concatenate
 * Return: a larger string
 */
char *_strcat(char *dest, char *src)
{
char *fin;
char *fin_ret;
fin_ret = fin;
while (*dest != '\0')
{
*fin = *dest;
fin++;
dest++;
}
fin++;
while (*src != '\0')
{
*fin = *src;
fin++;
src++;
}
fin++;
*fin = '\0';
return fin_ret;
}
