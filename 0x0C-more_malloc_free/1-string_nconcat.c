#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: number of bytes from s2 to be added to s1 and in the pointer
* Return: pointer shall point to a newly allocated space in memory,
* which contains s1, followed by the first n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	k = j;
	l = i;
	new_str = malloc((i + j + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = j = 0;
	while (i < l)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (n < k && i < (l + n))
		new_str[i++] = s2[j++];
	while (n >= k && i < (k + l))
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
