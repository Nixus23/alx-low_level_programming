#include "main.h"
/**
 * string_nconcat - function concatenates two strings
 * @s1: string 1 the destination string
 * @s2: string 2 the source string
 * @n: the number of bytes to be copied
 * Return: the function returns a char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j = 0, length;

	for (i = 0; s1[i]; i++)
	{
		length++;
	}
	for (i = 0; s2[i]; i++)
	{
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		str[j++] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str[j++] = s2[i];
	}

	return (str);
}
