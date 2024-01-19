#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of the array (number of elements)
 * @value: value to search for
 * Return: first index where value is stored
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = %d\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return ((-1));
}
