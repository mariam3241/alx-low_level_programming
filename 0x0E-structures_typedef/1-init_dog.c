#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - a fun that initilize a variable of type struct dog
 *@d: parameter
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
