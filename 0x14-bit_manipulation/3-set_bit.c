#include "main.h"

/**
 * count_bits - count
 * @n: unsigned long int
 *
 * Description: count the number of binaries in int
 *
 * Return: unsigned int
 */
unsigned int count_bits(unsigned long int n)
{
	unsigned int count = 1;

	while (n > 1)
	{
		n = n >> 1;
		count++;
	}

	return (count);
}

/**
 * set_bit - set
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Description: set the bit on an unsigned long int at a
 * specific index
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	while (index != 0)
	{
		i = i << 1;
		index--;
	}

	*n = *n | i;

	return (1);
}
