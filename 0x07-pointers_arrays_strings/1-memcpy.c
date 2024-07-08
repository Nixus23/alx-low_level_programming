#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: the area of memory to copy the data
 * @src: the area of memory to copy data from
 * @n: the int value
 * Return: the function returns a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
