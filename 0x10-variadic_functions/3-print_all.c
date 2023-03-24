#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print
 * @format: the separator to use for printing
 *
 * Description: print all the strings given using the
 * separator
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	unsigned int i, j;
	char *va_s;
	struct ss
	{
		char c;
		void dt;
		char *s;
	};
	struct ss ss_array[] = {
		{'c', char, "%c"}, {'i', int, "%i"}, {'f', float, "%f"}, {'s', char *, "%s"}, {'\0', NULL, NULL}
	};
	struct ss *s = malloc((struct ss));

	va_start(vl, n);
	i = 0;
	while (format[i] != '\0')
	{
		s = ss_array[4];
		j = 0;
		while ((ss_array[j]).dt == NULL)
		{
			if ((ss_array[j]).c == format[i])
			{
				s = ss_array[j];
				break;
			}
			j++;
		}
		if (s.dt != NULL && s.c != 's')
			printf(s.s, va_arg(vl, s.dt);
		else if (s.c == 's')
			printf(s.s, (va_s = va_arg(vl, char *)) == NULL ? "(nil)" : va_s);

		if (format[i + 1] != '\0')
			printf("%s", ", ");
		i++;
	}
	free(s);
	printf("\n");
	va_end(vl);
}
