#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: previously created grid
* @height: number of rows in grid
*
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
