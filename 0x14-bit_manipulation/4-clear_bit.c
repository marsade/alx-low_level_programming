#include "main.h"
/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @index: is the index, starting from 0 of the bit you want to set
  * @n: the number to set
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;

	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	if (n == NULL)
		return (-1);
	*n = ~mask & *n;
	return (1);
}
