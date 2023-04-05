#include "main.h"
/**
* _strlen_recursion - finds the length of a string
* @s: string to be found
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}

