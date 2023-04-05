#include "main.h"
/**
* _puts_recursion - orints a string followed by a new line
* @s: string to be printed
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

