#include "main.h"
/**
 * get_bit - returns the calue of a bit at a given index
 * @n: the number to be searched
 * @index: index
 * Return: the value of the bit at index index or -1 if an error
 * occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int set;

	if (index >= n || !n)
		return (-1);
	set = (n >> index) & 1;
	return (set);
}
