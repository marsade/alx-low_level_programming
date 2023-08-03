#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is a set of strings of 0 to 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int index = 0;
	char curr;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		curr = b[index];
		if (curr != '0' && curr != '1')
			return (0);
		res = res * 2  + (curr - '0');
		index++;
	}
	return (res);
}
