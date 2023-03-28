#include "main.h"
/**
* puts_half - prints second half of a string
* @str: input string
*/
void puts_half(char *str)
{
	int count = 0, j, k;

	while (str[count] != '\0')
		count++;
	if (count % 2 == 0)
	{
		for (j = count / 2; j <= count; j++)
		{
			_putchar(str[j]);
		}
	} else
	{
		for (k = (count - 1) / 2; k <= count; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
