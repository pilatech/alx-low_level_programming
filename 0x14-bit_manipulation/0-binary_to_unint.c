#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - convert binary string to unsigned int.
 * @b: a string of 1s and 0s.
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i, j;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	j = 0;
	result = 0;
	while (j < i)
	{
		if (b[j] == 49)
			result += _pow(2, i - (j + 1));
		j++;
	}
	return (result);
}

/**
 * _pow - calculate the power
 * @num: number to calculate power of
 * @exp: exponent.
 *
 * Return: the value of the calculation
 */
unsigned int _pow(unsigned int num, unsigned int exp)
{
	if (exp == 0)
		return (1);
	return (num * _pow(num, exp - 1));
}
