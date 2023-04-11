#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer tp a 2 dimesional array of integers
* @width: width of the array
* @height: height of the array
* Return: a pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	matrix = (int **) malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
	}
	for (int i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	if (matrix[i] == NULL)
	{
		for (int i = 0; i < height; i++)
		{
			free(matrix[i]);
		}
		free(matrix);
		return (NULL);
	}
	return (matrix);
}
