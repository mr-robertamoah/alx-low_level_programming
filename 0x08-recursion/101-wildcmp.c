#include "main.h"

/**
 * hasast - asteriks
 * @a: char
 *
 * Description: get characters after asteriks
 *
 * Return: int
 */
int hasast(char *a)
{
	if (*a == '*')
		return (1 + hasast(a + 1));
	else if (*a == '\0')
		return (0);

	return (0 + hasast(a + 1));
}

/**
 * cafterast - asteriks
 * @a: char
 *
 * Description: get characters after asteriks
 *
 * Return: *char
 */
char *cafterast(char *a)
{
	if (*a == '*')
		return (cafterast(a + 1));

	return (a);
}

/**
 * len - length
 * @a: char
 *
 * Description: determine length of char
 *
 * Return: returns int
 */
int len(char *a)
{
	if (*a == '\0')
		return (0);

	return (1 + len(a + 1));
}

/**
 * lichar - last char
 * @a: pointer to string
 * @b: char
 * @c: pointer to string
 *
 * Description: determine position of charater
 *
 * Return: char *
 */
char *lichar(char *a, char b, char *c)
{
	if (*a == '\0' && *c != b)
	{
		return (a);
	}
	else if (*a == '\0' && *c == b)
	{
		if (*c != *(c - 1))
			return (c);

		return (lichar(a, b, c - 1));
	}

	if (*a == b)
		c = a;

	return (lichar(a + 1, b, c));
}

/**
 * is_equal - equal
 * @a: char
 * @b: char
 *
 * Description: determine if two chars are equal
 *
 * Return: returns int
 */
int is_equal(char *a,  char *b)
{
	printf("%c, %c \n", *a, *b);
	if (*a != *b && *(b - 1) != '*' && *b != '*' && *(b + 1) != '\0')
		return (0);
	else if (*a == '\0' && *b == '*' && *(b + 1) == '\0')
		return (1);
	else if (*a == *b && *a == '\0')
		return (1);
	else if (*b != '\0' && *(b + 1) != '*' && *a == '\0')
		return (0);
	else if (*b == '*' && *(b + 1) == '\0')
		return (1);

	if (*b == '*' && *(b + 1) != '\0' &&  *(b + 2) == '*')
	{

		return (is_equal(a, b + 1));
	}
	else if (*b == '*')
	{
		b = cafterast(b + 1);
		a = lichar(a, *b, a);

		if (*a == '\0')
			return (1);

		return (is_equal(a, b));
	}
	else
	{
		return (is_equal(a + 1, b + 1));
	}
}

/**
 * wildcmp - compare
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Description: determine if two strings are alike
 * even based on wildcards
 *
 * Return: returns int
 */
int wildcmp(char *s1, char *s2)
{
	int l1 = len(s1);
	int l2 = len(s2);
	int hast = hasast(s2);

	if (!hast && l1 != l2)
		return (0);

	if (hast == l2)
		return (1);

	return (is_equal(s1, s2));
}
