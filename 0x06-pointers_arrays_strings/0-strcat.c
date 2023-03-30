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
	int i = 0, j = 0;

	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);

}
