#include "main.h"
/**
 * _calloc - functions allocates memory but sets the memory to 0
 * @nmemb: function parameter
 * @size: function parameter
 * Return: function returns a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	void *ptr;
	unsigned int i, j = 0;

	p = (void *)malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[j++] = 0;
	}

	ptr = p;
	return (ptr);
}