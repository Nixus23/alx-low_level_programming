#include "main.h"
/**
 * _calloc - functions allocates memory but sets the memory to 0
 * @nmemb: function parameter
 * @size: function parameter
 * Return: function returns a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	void *ptr;
	unsigned int i, j = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		p[j++] = '\0';
	}
	ptr = p;

	return (ptr);
}
