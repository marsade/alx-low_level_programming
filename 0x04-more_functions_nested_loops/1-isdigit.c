#include "main.h"
/**
 * _isdigit - this function checks for a digit (0 through 9)
 * @c: The digit to be checked
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 'ia' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
