#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **usa;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	usa = malloc(sizeof(int *) * height);

	if (usa == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		usa[x] = malloc(sizeof(int) * width);

		if (usa[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(usa[x]);
			}
			free(usa);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			usa[x][y] = 0;
		}
	}

	return (usa);
}
