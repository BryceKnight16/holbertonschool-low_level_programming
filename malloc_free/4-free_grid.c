#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a 2 dimensional grid
* @grid: 2d grid
* @height: grid height
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
	free(grid[i]);
	i = i + 1;
	}
	free(grid);
}
