#include <stdio.h>
#include "dog.h"

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
	dog_t new_d;
	dog_t *d;

	if (name != NULL)
	{
		new_d.name = malloc(sizeof(name));

		if (new_d.name == NULL)
			return (NULL);

		_strcpy(new_d.name, name);
	}

	if (owner != NULL)
	{
		new_d.owner = malloc(sizeof(owner));

		if (new_d.owner == NULL)
			return (NULL);

		_strcpy(new_d.owner, owner);
	}

	new_d.age = age;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d = &new_d;
	return (d);
}
