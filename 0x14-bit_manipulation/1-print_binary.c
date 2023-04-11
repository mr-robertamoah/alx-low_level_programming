#include "main.h"

/**
 * print_binary - print
 * @n: binary to print
 *
 * Description: convert binary to an unsigned int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(n & 1 ? '1' : '0');
}
