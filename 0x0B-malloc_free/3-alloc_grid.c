#include <stdlib.h>

/**
 * alloc_grid - create a grid.
 * @width: width of the grid.
 * @height: height of the grid
 *
 * Return: Pointer to an int Pointer.
 */

int **alloc_grid(int width, int height)
{
	/* if with or height is <= 0 return NULL */
	/* loop width mallocing int size
	 * loop inside doing the same.
	 * loop again for initialization */
	int i;
	int j;
	int **grid;

	if ((width <= 0) || (height <= 0))
			return (NULL);
	grid = (int**)malloc(width * height * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
