#include "main.h"

/**
 * _calloc - allocate
 * @nmemb: integer
 * @size: integer
 *
 * Description: allocate memory based on b
 *
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		*(p + i) = 0;
		i++;
	}

	return ((void *) p);
}
/**
 * _strrev - reverse
 * @s: pointer to string
 * @n: integer
 *
 * Description: reverse string
 *
 * Return: char *
 */
char *_strrev(char *s, unsigned int n)
{
	unsigned int i = 0;
	char tmp;

	for (; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}

	return (s);
}

/**
 * isnotd - length
 * @s: pointer to string
 *
 * Description: determine if digits
 *
 * Return: int
 */
int isnotd(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < 48 && s[2] > 57)
			return (1);
	}

	return (0);
}

/**
 * _strlen - length
 * @s: pointer to string
 *
 * Description: find length of string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * freea - free
 * @p: array of array
 *
 * Description: free up memory
 *
 * Return: void
 */
void freea(char **p)
{
	int i = 0;

	while (p[i] != NULL)
		free(p[i]);

	free(p);
}

/**
 * add_flat - add
 * @p: array of array
 * @t: length of p
 *
 * Description: turn an array of array to an
 * array of the sums of the individual arrays
 *
 * Return: char *
 */
char *add_flat(char **p, int t)
{
	int i = 0, j = 0, sum = 0, ai = 0, tmp = 0, c_over = 0;
	char *a = malloc((t + 1) * sizeof(char));

	while (i < t)
	{
		j = 0;
		sum = 0;
		while (*(p + j) != NULL)
		{
			if (j == 0)
				sum = sum + c_over;

			if (p[j][i] == 0)
				continue;

			tmp = p[j][i] - '0';
			sum = sum + (tmp % 10);

			if (*(p + j + 1) != NULL)
			{
				c_over = sum / 10;
				a[ai] = (sum % 10) + '0';
				ai++;
			}

			j++;
		}
		i++;
	}

	if (c_over)
	{
		a[ai] = c_over + '0';
		ai++;
	}

	a[ai] = '\0';
	return (a);
}

/**
 * _mul - multiplication
 * @s1: string
 * @s2: string
 * @end1: int
 * @end2: int
 * @c_over: int
 * @i: int
 * @j: int
 *
 * Description: multiplies the digits of two strings
 *
 * Return: char *
 */
int *_mul(char *s1, char *s2, int end1, int end2, int c_over, int i, int j)
{
	int res[2];
	int res_int, a, b;
	int *r;

	if (!end2 && s2[j] == '\0')
		end2 = 1;

	if (end1)
		a = 1;
	else
		a = s1[i] + '0';

	if (end2)
		b = 1;
	else
		b = s2[i] + '0';

	res_int = a * b + c_over;
	res[1] = res_int / 10;
	res[0] = (res_int % 10);

	r = res;
	return (r);
}

/**
 * mul_array - multiplication
 * @s1: string
 * @s2: string
 * @len1: int
 * @len2: int
 * @t: int
 *
 * Description: multiplies the digits of two strings
 *
 * Return: char **
 */
char **mul_array(char *s1, char *s2, int len1, int len2, int t)
{
	int end1 = 0, end2 = 0, i, j, pi, c_over = 0;
	int *res;
	char *q;
	char **p = malloc((t + 1) * sizeof(char));

	if (p == NULL)
	{
		puts("Error");
		exit(98);
	}
	for (i = 0; i < len1; i++)
	{
		if (!end1 && s1[i] == '\0')
			end1 = 1;
		for (j = 0; j < len2; j++)
		{
			if (j == 0)
			{
				q = _calloc(t + 1, sizeof(char));
				if (q == NULL)
				{
					puts("Error");
					exit(98);
				}
			}
			res = _mul(s1, s2, end1, end2, c_over, i, j);
			q[j] = res[0] + '0';
			c_over = res[1];
			if (j + 1 == len2)
			{
				if (c_over)
					q[j + 1] = c_over + '0';
				p[pi] = q;
				pi++;
			}
		}
		if (i + 1 == len1)
			p[pi] = NULL;
	}
	return (p);
}

/**
 * _print - print
 * @s: string
 *
 * Description: print string and end with new line
 *
 * Return: void
 */
void _print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i]);

	_putchar('\n');
}

/**
 * main - entry point
 * @argc: integer
 * @argv: pointer of pointers
 *
 * Description: multiply two arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	char **p;
	char *s;
	int len1, len2, t;
	char *s1;
	char *s2;

	if (argc != 3 || isnotd(argv[1]) || isnotd(argv[2]))
	{
		puts("Error");
		exit(98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	t = len1 + len2;
	p = malloc((t + 1) * sizeof(char));
	s1 = malloc((t + 1) * sizeof(char));
	s2 = malloc((t + 1) * sizeof(char));

	if (p == NULL || s1 == NULL || s2 == NULL)
	{
		puts("Error");
		exit(98);
	}

	s1 = _strrev(argv[1], len1);
	s2 = _strrev(argv[2], len2);

	p = mul_array(s1, s2, len1, len2, t);
	free(s1);
	free(s2);
	s = add_flat(p, t);
	_print(_strrev(s, _strlen(s)));
	freea(p);

	return (0);
}
