#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: number of parameters
 * Return: sum or if n = 0, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
