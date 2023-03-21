#include <stdio.h>
#include "dog.h"

/**
 * _strcpy - copy string
 * @a: string
 * @b: string
 *
 * Description: copy from one string to another
 *
 * Return: void
 */
void _strcpy(char *a, char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
		a[i] = b[i];

	a[i] = '\0';
}

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
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name == NULL)
	{
		return (NULL);
	}
	else
	{
		d->name = malloc(sizeof(name));

		if (d->name == NULL)
			return (NULL);

		_strcpy(d->name, name);
	}

	if (owner == NULL)
	{
		return (NULL);
	}
	else
	{
		d->owner = malloc(sizeof(owner));

		if (d->owner == NULL)
			return (NULL);

		_strcpy(d->owner, owner);
	}

	d->age = age;

	return (d);
}
