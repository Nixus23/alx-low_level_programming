#include "main.h"
/**
 * _calloc - functions allocates memory but sets the memory to 0
 * @nmemb: function parameter
 * @size: function parameter
 * Return: function returns a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i, j = 0;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[j++] = 0;
	}
	return (ptr);
}
