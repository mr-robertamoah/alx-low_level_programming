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
 * clear_bit - clear
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Description: clear the bit on an unsigned long int at a
 * specific index
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int count = 0, count_i = 1;

	count = count_bits(*n);
	while (count_i != count)
	{
		if (index == 0)
			break;
		i = i << 1;
		index--;
		count_i = count_bits(i);
	}

	*n = *n | i;
	*n = *n ^ i;
/*	if (index != 0)*/
/*		return (-1);*/

	return (1);
}
