#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: the search array
 * @size: the array size
 * @cmp: the function pointer
 * Return: the function returns an int of the searched value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
