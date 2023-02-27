#include <stdio.h>

/**
 * _strlen - length of string
 * @s: the pointer of the string
 *
 * Description: gets the length of a string
 *
 * Return: int
 */

int _strlen(char *s)
{
	char i = 0;
	int count;

	while (*(s + i) != '\0')
	{
		count++;

		i++;
	}

	return (count);
}
