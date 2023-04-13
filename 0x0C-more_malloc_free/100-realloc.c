#include "main.h"
#include <stdlib.h>
/**
* _realloc - reallocates a block of memory using malloc and free
* @ptr: pointer to previous memory allocated
* @old_size: size in bytes of the allocated space for ptr
* @new_size: new size of the new memory block
* Return: newly allocated space
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	old = ptr;
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	free(ptr);
	return (new);
}
