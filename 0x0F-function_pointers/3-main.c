#include "3-calc.h"

/**
 * main - Entry point
 * @argc: integer
 * @argv: array of strings
 *
 * Description: perform operation on two integers and
 * print the result
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	char sym[2];
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (
		argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
		argv[2][0] != '/' && argv[2][0] != '%'
	)
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		puts("Error");
		exit(100);
	}
	sym[0] = argv[2][0];
	sym[1] = '\0';

	f = get_op_func(sym);
	res = f(a, b);

	printf("%d\n", res);
	return (0);
}
