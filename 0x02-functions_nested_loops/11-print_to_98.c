#include "main.h"
#include <stdio.h>
/**
 * print_to_98- prints all natural numbers fom n to 98
 *@n: number to start from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			} else if (n == 98)
			{
				printf("%d\n", n);
			}
			n++;
		}
	} else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			} else if (n == 98)
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
}
