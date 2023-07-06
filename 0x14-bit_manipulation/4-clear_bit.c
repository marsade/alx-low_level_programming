#include "main.h"
/**
 * clear-bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, n_mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1 << index;
	n_mask = ~mask;
	*n &= n_mask;
	return (1);
}
