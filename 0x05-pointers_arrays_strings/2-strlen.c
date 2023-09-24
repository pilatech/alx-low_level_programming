#include "main.h"
/**
 *_strlen- counts string exccept \0
 *@s: checked
 *Return: i
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}


