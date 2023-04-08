#include "main.h"
/**
* _strcmp - compares two strings
* @s1: string one
* @s2: string two
* Return: 15 if first character in s1 is greater than s2
* 0 if equal
* -15 if character in s1 is less than s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
