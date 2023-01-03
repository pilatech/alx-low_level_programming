/**
 * _memcpy - copy memory content to another
 * @dest: Destination memory
 * @src: Source memory
 * @n: Number of bytes
 *
 * Return: Destinationa memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
