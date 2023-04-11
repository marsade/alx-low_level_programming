#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: NULL on failure, newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2,
* and null terminated on success
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	new_str = (char *)malloc((i + j + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
