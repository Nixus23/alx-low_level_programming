#include "main.h"
/**
 * string_toupper - function changes all lowercase letters to uppercase
 * @s: function has the argument of a char pointer
 * Return: the function returns a char pointer to a string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
