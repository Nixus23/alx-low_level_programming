#include "main.h"
/**
 * free_grid - function frees memory from another function using malloc
 * @grid: parameter 1 the return of the previous function
 * @height: individual malloc calls in the previous function
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
