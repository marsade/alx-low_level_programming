#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: the size of the memory to be allocated
* Return: a pointer to allocated memory on success and exits on failure
*/
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	else
		return (a);
}
