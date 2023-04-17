#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* @d: struct
* @name: name
* @age: age
* @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i = 0;

	while (name[i] != '\0')
	{
		p->name[i] = name[i];
		i++;
	}
	p->name[i] = '\0';
	d->name = name;
	d->age = age;
	d->owner = owner;
}
