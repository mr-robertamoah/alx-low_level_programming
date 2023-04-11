#include "main.h"

/**
 * set_count - set
 * @count: pointer unsigned int
 * @n: pointer unsigned long int
 * @m: pointer unsigned long int
 *
 * Description: get the bit on an unsigned long int at a
 * specific index
 *
 * Return: int
 */
void set_count(
	unsigned int *count, unsigned long int *n,
	unsigned long int *m
)
{
	if (get_bit(*m, 0) != get_bit(*n, 0))
		*count = *count + 1;

	*m = *m >> 1;
	*n = *n >> 1;
}

/**
 * get_bit - get
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Description: get the bit on an unsigned long int at a
 * specific index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (n > 1)
	{
		if (index == 0)
			break;
		n = n >> 1;
		index--;
	}

	if (index != 0)
		return (-1);

	return (n & 1 ? 1 : 0);
}

/**
 * flip_bits - flip
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Description: flip the bits on an unsigned long int at a
 * specific index
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count = 0;

	i = n >= m ? n : m;

	while (i > 1)
	{
		set_count(&count, &m, &n);
		i = i >> 1;
	}

	set_count(&count, &m, &n);

	return (count);
}
