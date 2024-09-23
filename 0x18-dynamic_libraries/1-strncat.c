#include "main.h"
/**
 * _strncat - function convatenates a specific number of characters
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to be concatenated
 * Return: the function returns a char pointer type
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	if (n == 0)
		return (dest);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
