#include "main.h"
/**
 * binary_to_uint - function converts a binary string to unsigned int
 * @b: function has a parameter of a char pointer to a binary string
 * Return: the function returns an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, base = 1;
	int len = 0, i;

	if (*b == '\0')
		return (0);

	while (b[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			number += base;

		base *= 2;
	}
	return (number);
}
