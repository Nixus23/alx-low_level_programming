#include "function_pointers.h"
/**
 * array_iterator - function executes given an element in array
 * @array: the array parameter
 * @size: the size parameter
 * @action: the function pointer
 * Return: the function has a void return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
	{
		action(*array++);
	}
}
