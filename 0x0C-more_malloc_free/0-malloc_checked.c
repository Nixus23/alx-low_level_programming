#include "main.h"
/**
 * malloc_checked - function allocates memory using malloc
 * @b: function int parameter
 * Return: function has no return type
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
