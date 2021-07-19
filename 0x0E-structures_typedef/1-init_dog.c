#include "dog.h"

/**
 *init_dog - initializes dog
 *@d: struct of dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *
 * Description: this function initializes dog.h
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
