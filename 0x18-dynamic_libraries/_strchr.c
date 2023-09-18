#include "main.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: string to search
* @c: character to be found
* Return: a pointer to the first occurence
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
