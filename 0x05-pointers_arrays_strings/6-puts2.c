#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: input string
*/
void puts2(char *str)
{
	int count = 0, i, j;

	while (str[count] != '\0')
		count++;
	j = count -1;
	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

