#include "main.h"

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

	while (i != *n)
	{
		if (index == 0)
			break;
		i = i << 1;
		index--;
	}

	if (index != 0)
		return (-1);

	*n = *n | i;
	return (1);
}
