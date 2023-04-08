#include "main.h"
/**
* _strcat - appends the src string to the dest string
* overwriting the null byte at the end ans then adds it
* @dest: first string
* @src: string to be appended
* Return: the concatenation of the two strings in dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
