#include "main.h"
/**
* _strncat - concatenates two bytes but uses at most n bytes
* from src and src does not need to be terminated if it
* contains n or more bytes
* @dest: first string
* @src: string to added to dest
* @n: number of bytes from src
* Return: the concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
