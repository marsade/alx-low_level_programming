#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed into the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s, *space = "";

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", space, s);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}

