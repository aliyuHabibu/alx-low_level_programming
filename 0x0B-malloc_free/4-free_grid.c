#include "main.h"

/**
 * free_grid - function name
 * @grid: double pointer
 * @height: my index
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
