#include "main.h"
/**
 * _strspn - function gets the length of a prefix substring
 * @s: pointer to the segment string
 * @accept: the initial string
 * Return: function returns an unsigned int type
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size = 0;

	int i, j, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				size++;
				check = 1;
			}

		}
		if (check == 0)
			return (size);
	}
	return (size);
}
