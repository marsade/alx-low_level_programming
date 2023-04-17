#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees the dogs :)
* @d: struct to be freed
*/
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
