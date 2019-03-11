#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: number of columns
* @height: number of rows
*
* Return: pointer
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof *grid * width);
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof *grid[i] * height);
		if (!grid[i])
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
