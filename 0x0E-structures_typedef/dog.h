#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of types struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age:
 * @owner: owner to initailize
 */
void init_dog(struct dog *d, char *nmae, float *age, char *owner)
{
        if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age =age;
	d->owner = owner;
}
