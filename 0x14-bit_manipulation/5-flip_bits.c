#include "main.h"
/**
 * flip_bits - determines the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
