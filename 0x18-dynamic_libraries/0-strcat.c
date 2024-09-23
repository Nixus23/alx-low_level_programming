#include "main.h"
/**
 * _strcat - function cancatenates two strings
 * @dest: fuction has a destination pointer
 * @src: function has a source pointer
 * Return: the function returns a string pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/*dest = '\0';*/

	return (dest);
}
