#include "main.h"
/**
 * _isdigit - this function checks for a digit (0 through 9)
 * @c: The digit to be checked
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
