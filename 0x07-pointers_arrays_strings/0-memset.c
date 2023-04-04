#include "main.h"
/**
* _memset - fills the first n bytes of the memory
* @n: number of bytes to be filled
* @b: byte to be filled with
* @s: character array
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
