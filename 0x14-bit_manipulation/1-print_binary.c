#include "main.h"
/**
  * print_binary - prints the binary representation of a number
  * @n: number to be converted
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	while (mask <= n)
		mask = mask << 1;
	mask = mask >> 1;
	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}
}
