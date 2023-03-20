#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: create a new dog struct and initialize
 * with the values of name, age and owner variables
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_d;
	dog_t *d;

	d = malloc(sizeof(new_d));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
