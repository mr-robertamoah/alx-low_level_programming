#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: struct dog pointer
 *
 * Description: initialize a struct dog with the values of
 * the name, age and owner
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
