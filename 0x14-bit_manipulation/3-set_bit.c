#include "main.h"
/**
  * set_bit - returns the value of a bit at a given index
  * @index: is the index starting 0 of the bit you want to get
  * @n: the number to be set
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	if (n == NULL)
		return (-1);
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n = mask | *n;
	return (1);
}
