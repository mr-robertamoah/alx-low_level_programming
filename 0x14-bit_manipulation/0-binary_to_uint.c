#include "main.h"

/**
 * _pow - power
 * @i: int
 *
 * Description: find power of 2
 *
 * Return: unsigned int
 */
unsigned int _pow(int i)
{
	unsigned int res = 1;

	if (i == 0)
		return (1);

	while (i != 0)
	{
		res *= 2;
		i--;
	}

	return (res);
}

/**
 * convert - convert
 * @b: binary as string
 * @res: pointer to unsigned int
 * @len: unsigned int
 *
 * Description: convert to decimal
 *
 * Return: void
 */
void convert(
	unsigned int *res, const char *b, unsigned int len
)
{
	int i = 0, a = 0;

	while (b[i] != '\0')
	{
		a++;
		*res = *res + ((b[i] - '0') * _pow(len - a));
		i++;
	}
}

/**
 * has_non_binary - check
 * @b: binary as string
 *
 * Description: check if string is valid not binary
 *
 * Return: int
 */
int has_non_binary(const char *b)
{
	int i = 0, status = 1;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (status);
		i++;
	}

	status--;
	return (status);
}

/**
 * binary_to_uint - convert
 * @b: binary as string
 *
 * Description: convert binary to an unsigned int
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, len = 0;

	if (b == NULL || has_non_binary(b))
		return (res);

	while (b[len] != '\0')
		len++;
	convert(&res, b, len);

	return (res);
}
