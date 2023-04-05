#include "main.h"
/**
* factorial - prints the factorial of a given number
* @n: number to find the factorila of
* Return: the factorial
*/
int factorial(int n)
{
	if (n <= 1 && n >= 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
