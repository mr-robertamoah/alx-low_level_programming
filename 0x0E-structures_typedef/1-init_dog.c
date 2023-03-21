#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: struct dog pointer
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: initialize a struct dog with the values of
 * the name, age and owner
 *
 * Return: returns 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
