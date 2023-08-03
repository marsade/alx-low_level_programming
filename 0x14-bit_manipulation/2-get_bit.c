#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit
 * @index: the index
 * Return -1 on success and 0 in error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 62;  n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
