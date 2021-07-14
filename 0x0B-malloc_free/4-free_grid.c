#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid  - a function that frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: size of array
 * Return: free
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
