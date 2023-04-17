#ifndef DOG_H
#define DOG_H
/**
* struct dog - creates a new struct type of dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
