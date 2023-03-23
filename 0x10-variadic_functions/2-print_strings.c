#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print
 * @separator: the separator to use for printing
 * @n: number of integers
 *
 * Description: print all the strings given using the
 * separator
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *s;

	va_start(vl, n);

	for (i = 1; i <= n; i++)
	{
		printf("%s", (s = va_arg(vl, char *)) == NULL ? "(nil)" : s);

		if (separator != NULL && i != n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vl);
}
