#include "main.h"
/**
  * flip_bits - returns the number of bits you would need to flip to get
  * from one number to another
  * @n: first number
  * @m: second number
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count;
	
	result = n ^ m;
	count = 0;
	while (result != 0)
	{
		count++;
		result = result & (result - 1);
	}
	return (count);
}
