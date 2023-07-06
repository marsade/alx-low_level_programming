#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index of the bit to be set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int op, res;

	if (index >= n)
		return (-1);
	op = 1 << index;
	res = num | op;
	return (res);
}
