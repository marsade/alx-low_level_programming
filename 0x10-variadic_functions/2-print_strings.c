#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings, then new line
 * @seperator: string to be seperated
 * @n: number of strings passed
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 &&  seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
