#include "main.h"
#include "_putchar.h"

/**
 * main - Entry point
 *
 * Description: printing _putchar and newline
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(string[i]);
		i--;
	}

	_putchar('\n');
	return (0);
}
