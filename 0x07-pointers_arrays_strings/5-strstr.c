#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: the string to compare with
 * @needle: the string providing the characters to check
 * Return: function returns a char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one = *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return ('\0');
}
