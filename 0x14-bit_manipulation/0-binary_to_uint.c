#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer.
 * @b: the binary string.
 *
 * Return: the converted integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;
	int len;

	if (!b)
		return (0);
	len = 0;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '1') && (b[i] != '0'))
			return (0);
		len++;
		i++;
	}
	result = 0;
	i = 0;
	while (b[i])
	{
		if (b[i] == '1')
		{
			result += pow2(len - 1 - i);
		}
		i++;
	}
	return (result);
}

/**
 * pow2 - get a power of 2.
 * @c: the index.
 *
 * Return: a power of 2
 */
unsigned int pow2(int c)
{
	unsigned int res;
	int i;

	if (c == 0)
		return (1);
	res = 1;
	for (i = 0; i < c; i++)
	{
		res *= 2;
	}
	return (res);
}
