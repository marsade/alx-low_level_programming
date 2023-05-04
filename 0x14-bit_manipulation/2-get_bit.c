#include "main.h"
/**
  * get_bit - returns the value of a bit at a given index
  * @n: the bit
  * @index: the index starting from 0 of the bit you want to get
  * Return: the value of the bit at index or -1 if an error occurred
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > n)
		return (-1);
	mask = 1 << index;
	if (mask & n)
		return (1);
	else
		return (0);
}
