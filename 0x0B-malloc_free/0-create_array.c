#include "main.h"
/**
 * create_array - function creates an array of chars
 * @size: function takes a parameter size specifying the size of the array
 * @c: function takes a char parameter to initiliaze the array
 * Return: the function returns a char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
		if (size == 0)
		{
			return (NULL);
		}
	}
	return (array);

}
