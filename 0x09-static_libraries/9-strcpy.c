#include "main.h"
/**
 * *_strcpy - function copies a string to another destination
 * @dest: the char pointer to the string destination
 * @src: the chsr pointer to the string source
 * Return: the function has a return of char type
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
