#include "main.h"
#include <stdlib.h>
/**
* create_array - creates san array of chars and initializes it
* with a specific char
* @size: size of the array
* @c: character to initiialize the array
* Return: Null is size = 0, pointer to array if successful
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
		return (ptr);
	}
	else
		return (NULL);
}
