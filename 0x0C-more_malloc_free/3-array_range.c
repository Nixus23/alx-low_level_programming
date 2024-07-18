#include "main.h"
/**
 * array_range - function creates an array of integers
 * @min: the least number in the array
 * @max: the max number in the array
 * Return: function returns an int pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int l, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	l = max - min;
	l += 1;

	ptr = malloc(sizeof(int) * (l));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		ptr[j++] = i;
	}
	return (ptr);
}
