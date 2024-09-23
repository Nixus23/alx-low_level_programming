#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @s: the memory area the bytes will fill
 * @b: the byte to occupy the area
 * @n: the number of bytes in the memory to be filled
 * Return: the function returns a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
