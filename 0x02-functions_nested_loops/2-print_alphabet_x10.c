#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print alphabets in lowercase using the _putchar, 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = 26;
	int counter = 0;
	int times = 0;

	while(times < 10)
	{

		while (counter < len)
		{
			_putchar(alphabets[counter]);
			counter++;
		}

		_putchar('\n');
		times++;
	}
}
