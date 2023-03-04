#include "main.h"

/**
 * rev_array - Entry point
 * @a: pointer to the char array
 * @n: length of the array
 *
 * Description: reverse the contents of an
 * integer array
 *
 * Return: void
 */

void rev_array(char *a, int n)
{
	int i;
	char tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}

/**
 * get_digit - get digit
 * @a: char digit
 *
 * Description: get the int version of a digit
 *
 * Return: int
 */
int get_digit(char a)
{
	switch (a)
	{
		case '1':
			return (1);
		case '2':
			return (2);
		case '3':
			return (3);
		case '4':
			return (4);
		case '5':
			return (5);
		case '6':
			return (6);
		case '7':
			return (7);
		case '8':
			return (8);
		case '9':
			return (9);
		case '0':
		default:
			return (0);
	}
}

/**
 * get_sum_digits - get digits
 * @a: char digit
 * @b: char digit
 * @result: pointer to previous sum digits
 *
 * Description: get a pointer to the last digit and remainder
 *
 * Return: char pointer
 */
char *get_sum_digits(char a, char b, char *result)
{
	int sum;

	sum = get_digit(a) + get_digit(b) + get_digit(*(result + 1));

	result[0] = (int) (sum % 10) + 48;

	result[1] = (int) (sum / 10) + 48;

	return (result);
}

/**
 * _strlen - length
 * @c: pointer to string
 *
 * Description: get length of string
 *
 * Return: int
 */
int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}

/**
 * infinite_add - print sum
 * @n1: pointer to char digits
 * @n2: pointer to char digits
 * @r: pointer to buffer to contain result
 * @size_r: size of the buffer
 *
 * Description: add char digits and store result in buffer
 *
 * Return: void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char a, b;
	int len1 = _strlen(n1), len2 = _strlen(n2);
	int j = len2 - 1, i = len1 - 1, s = 0;
	char aa[3];
	char *result = aa;

	if (i >= size_r || j >= size_r)
		return (0);

	*(result + 1) = '0';

	for (; i >= 0 || j >= 0; i--, j--, s++)
	{
		a = n1[i];
		b = n2[j];

		if (i < 0)
			a = '0';

		if (j < 0)
			b = '0';

		result = get_sum_digits(a, b, result);
		*(r + s) = *result;
	}

	if (*(result + 1) != '0')
	{
		*(r + s) = *(result + 1);
		s++;
	}


	if (s >= size_r)
		return (0);
	*(r + s) = '\0';
	rev_array(r, s);
	return (r);
}
