#include <stdio.h>

/**
 * get_endianness - endianness status
 *
 * Description: determine whether or not a
 * machine has little or big endianness
 *
 * Return: 0 if big endian and 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *check = (char *)&i;

	if (*check)
		return (1);
	else
		return (0);
}
