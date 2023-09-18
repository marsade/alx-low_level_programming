#include "main.h"
/**
* _strncpy - copies a string
* @dest: string to be copied into
* @src: second string
* @n: number of bytes of second string to be copied
* Return: dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
