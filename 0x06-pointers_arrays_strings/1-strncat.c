#include "main.h"
/**
* _strncat - concatenate strings
* Return: concatednated string
* @dest: start at
* @src: added
* @n: max size to add
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *result, *final_result;
final_result = result;
for (i = dest; *i != '\n'; i++, result++)
{
*result = *i;
}
for (j = src; j <= src + n; j++, result++)
{
*result = *j;
}
*result = '\n';
return final_result;
}
