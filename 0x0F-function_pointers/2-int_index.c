#include "function_pointers.h"
/**
* int_index - searches for an integer
* @size: nuber of elements in array
* @cmp: pointer to function used to compare values
* @array: array of numbers
* Return: returns the index of the first element for which the cmp
* function does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
