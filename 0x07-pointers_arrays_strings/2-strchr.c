#include "main.h"
#include <stddef.h>
/**
 * _strchr - function locates a character in a string
 * @s: the pointer to the string
 * @c: the character to be found
 * Return: the function returns a char pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);

	}
	return (NULL);
}
