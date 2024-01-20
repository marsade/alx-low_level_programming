#include "search_algos.h"
/**
 * binary_search - searches for a value in an array using binary search
 * algorigthm
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: the value to search for
 * Return: the index where value is found
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int middle, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");
		middle = left + (right - left) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}

	return (-1);
}
