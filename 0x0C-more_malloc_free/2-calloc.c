#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of array
* Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	j = nmemb * size;
	for (i = 0; i < j; i++)
		arr[i] = 0;
	return (arr);
}
