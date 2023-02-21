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
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = 26;
	int counter = 0;

	while (counter < len)
	{
		_putchar(alphabets[counter]);
		counter++;
	}

	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
