#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to be printed between the numbers
 * @n: number of integers passed into the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (seperator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
