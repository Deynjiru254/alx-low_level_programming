#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d integer grid previously created
 * @grid: double pointer
 * @height: rows
 * Return: null
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
