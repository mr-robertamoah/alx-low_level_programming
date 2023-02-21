#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print alphabets in lowercase using the _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabets = "abcdefghijklmnopqrstuvwxyz";
	int len = 26;
	counter = 0;

	while (counter < len)
	{
		_putchar(alphabets[counter]);
	}

	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
