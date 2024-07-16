#include "main.h"
/**
 * str_concat - function concatenates two strings using malloc
 * @s1: the first string parameter
 * @s2: the second string parameter
 * Return: the function returns a char pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, length;
	char *cat;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		length++;
	}
	for (i = 0; s2[i]; i++)
	{
		length++;
	}
	cat = malloc(sizeof(char) * (length + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		cat[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		cat[j++] = s2[i];
	}

	/*cat[i] = '\0';*/

	return (cat);
}
