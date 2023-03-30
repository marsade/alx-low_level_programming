#include "main.h"
/**
* strcat - appends the src string to the dest string
* overwriting the null byte at the end ans then adds it
* @dest: first string
* @src: string to be appended
* Return: the concatenation of the two strings in dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
