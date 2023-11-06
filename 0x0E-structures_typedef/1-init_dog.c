#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
