#include "main.h"
/**
 * alloc_grid - function returns a pointer to a 2 dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: the function returns a pointer to a pointer of arrays
 */
int **alloc_grid(int width, int height)
{
	int **alloc, i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			alloc[i][j] = 0;
		}
	}

	return (alloc);
}
