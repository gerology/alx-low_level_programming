#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer success, NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int h, w;

	if(width || height <= 0)
		return (NULL);
	
	
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);

		if(ptr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(ptr[h]);
				
			free(ptr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}

	return (ptr);
}
