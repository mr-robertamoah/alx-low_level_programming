#include <stdio.h>
#include <string.h>

/**
 * is_valid - check
 * @a: character to check
 *
 * Description: check the validity of a character
 * based on task
 *
 * Return: 0 or 1
 */
int is_valid(char a)
{
	int result = 1, b = (int) a;

	if (b < 32 || b > 126)
		result = 0;

	return (result);
}

/**
 * print_buffer - print
 * @b: pointer to string
 * @size: number of bytes to copy
 *
 * Description: print size bytes of
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, exceeded = 0;
	char val;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			exceeded = (i + j >= size);

			if (exceeded)
				printf("  ");

			if (j % 2 == 0 && !exceeded)
				printf("%02x", *(b + i + j));
			else if (j % 2 == 1 && !exceeded)
				printf("%02x", *(b + i + j));

			if (j % 2 == 1)
				printf(" ");
		}
		printf(" ");

		for (j = 0; j < 10; j++)
		{
			exceeded = (i + j >= size);

			if (exceeded)
				continue;

			val = *(b + i + j);
			printf("%c", is_valid(val) ? val : '.');
		}
		printf("\n");
	}
}
