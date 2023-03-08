#include "main.h"

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
	if (*a != *b)
		return (0);

	if (*(b + 1) == '\0')
		return (1);

	return (is_equal(a - 1, b + 1));
}

/**
 * is_palindrome - prime
 * @s: pointer to string
 *
 * Description: determine if string is a palindrome
 *
 * Return: returns int
 */
int is_palindrome(char *s)
{
	int mid, l = len(s);

	mid = l / 2;

	if (l == 0)
		return (0);

	return (is_equal(s + mid - 1, l % 2 == 0 ? s + mid : s + mid + 1));
}
