#include "dog.h"
#include <stdlib.h>
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: new structure of dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len = 0, len1 = 0;

	while (name[len] != '\0')
	{
		len++;
	}
	while (owner[len1] != '\0')
	{
		len1++;
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->owner = malloc((len1 + 1) * sizeof(char));
	ndog->name = malloc((len + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog);
		return (NULL);
	}
	if (ndog->name == NULL)
	{
		free(ndog);
		free(ndog->owner);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
