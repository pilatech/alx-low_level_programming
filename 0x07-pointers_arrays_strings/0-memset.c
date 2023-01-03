/**
 * _memset - fills first n bytes of given memory add with b
 * @s: the memory location to populate
 * @b: the char to populate with
 * @n: number of bytes to populate
 *
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
