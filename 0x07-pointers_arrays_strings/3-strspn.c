#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: initial string
* @accept: string to be checked
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int res = 0, len = 0, i, j, lena, k, l;
	
	k = 0;
	while (s[k] != ' ')
	{
		len++;
		k++;
	}
	lena = 0;
	l = 0;
	while (accept[l] != '\0')
	{
		lena++;
		l++;
	}
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= lena; j++)
		{
			if (accept[j] == s[i])
			{
				res++;
			}
		}
	}
	return (res);
}
