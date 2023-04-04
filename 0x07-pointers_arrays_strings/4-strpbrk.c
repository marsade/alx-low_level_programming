#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to be searched
* @accept: set of bytes being compared to s
* Return: a pointer to the byte s that matches one of the bytes in accept
* or Null if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
