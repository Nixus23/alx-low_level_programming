#include "main.h"
/**
 * _strncpy - function copies set number n of characters from a string
 * @dest: the destination string the string is copied to
 * @src: the source string to be copied from
 * @n: the number of characters to be copied
 * Return: the function has a char pointer return type
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (n == 0)
		return (dest);

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);

}
