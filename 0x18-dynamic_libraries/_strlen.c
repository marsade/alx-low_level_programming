#include "main.h"
/**
* _strlen - function that returns the length of a string
* @s: string to be checked
* Return: length of string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
