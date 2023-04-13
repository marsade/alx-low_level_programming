#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: minimum value (included)
* @max: maximum value (included)
* Return: array of integers
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, sum;

	sum = max - min + 1;
	arr = malloc(sum * sizeof(int));
	if (arr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
