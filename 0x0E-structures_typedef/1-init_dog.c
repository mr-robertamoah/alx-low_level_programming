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
	d->name = malloc(sizeof(name));
	if (d->name != NULL || name != NULL)
		d->name = name;

	d->age = age;

	d->owner = malloc(sizeof(owner));
	if (d->owner != NULL || owner != NULL)
		d->owner = owner;
}