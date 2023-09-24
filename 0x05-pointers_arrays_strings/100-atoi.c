#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer.
 * @s: the string to convert.
 *
 * Return: Integer.
 */
int _atoi(char *s)
{
	int symbol = 0;
	int exp;
	int i;
	int res = 0;

	if (s)
	{
		i = get_units_index(s, &symbol);
		exp = 0;
		while (i >= 0)
		{
			if (s[i] >= 48 && s[i] <= 57)
			{
				res += ((s[i] - 48) * power10(exp));
				exp++;
				i--;
			}
			else
				break;
		}
		if (symbol < 0)
			res *= (-1);
	}
	return (res);
}

/**
 * get_units_index - get index of the lowest power of 10;
 * @s: the string to check the index;
 * @symbol: address of the symbol indicator.
 *
 * Return: the index of the lowest indexed number.
 */

int get_units_index(char *s, int *symbol)
{
	int last_index = 0;
	int got_number = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
		{
			*symbol = *symbol + 1;
		}
		else if (s[i] == '-')
		{
			*symbol = *symbol - 1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			last_index = i;
			got_number = 1;
		}
		else if (s[i] < 48 || s[i] > 57)
		{
			if (!got_number)
			{
				i++;
				continue;
			}
			else
				break;
		}
		i++;
	}
	return (last_index);
}

/**
 * power10 - get nth power of 10.
 * @n: the number to raise to the power of.
 *
 * Return: the result.
 */
int power10(int n)
{
	int res = 1;
	int i;

	if (n == 0)
		return (1);
	for (i = 0; i < n; i++)
		res *= 10;
	return (res);
}
