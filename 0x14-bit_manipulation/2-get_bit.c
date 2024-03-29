#include "main.h"

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
	if (index > 63)
		return (-1);
	while (n > 1)
	{
		if (index == 0)
			break;
		n = n >> 1;
		index--;
	}

	if (index != 0)
		return (0);

	return (n & 1 ? 1 : 0);
}
