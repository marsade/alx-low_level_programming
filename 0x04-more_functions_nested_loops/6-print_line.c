#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: number of times character '_' should be printed
*/
void print_line(int n)
{
	int i;

	if (n != 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
