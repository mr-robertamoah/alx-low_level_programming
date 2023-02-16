#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this prints specific text using
 * a different function from printf and puts
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	char data[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", data);

	return (1);
}
