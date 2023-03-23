#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print
 * @separator: the separator to use for printing
 * @n: number of integers
 *
 * Description: print all the numbers given using the
 * separator
 *
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(vl, int));

		if (separator != NULL && i != n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
