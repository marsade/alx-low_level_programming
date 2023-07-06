#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0s and 1
 * Return: the converted number or 0 if there is one or more chars in the
 * string b that is not 0 or 1 OR b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans;
	int bin, len = 0;

	if (!b)
		return (0);
	ans = 0;
	while (b[len] != '\0')
		len++;
	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			ans += bin;
	}
	return (ans);
}
