#include "main.h"
/**
 * _strpbrk - function locates occurence of characters
 * @s: string to compare with
 * @accept: string with the comparison characters
 * Return: function returns a char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);

		}
	}
	return ('\0');
}
