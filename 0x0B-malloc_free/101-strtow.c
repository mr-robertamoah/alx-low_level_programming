#include "main.h"

/**
 * freea - free
 * @a: pointer of pointers
 * @p: number of pointers
 *
 * Description: get length of string
 *
 * Return: void
 */
void freea(char **a, int p)
{
	int i = 0;

	while (i < p)
	{
		free(a[i]);
	}

	free(a);
}

/**
 * _nextspace - create array
 * @s: pointer to string
 * @a: start from int
 *
 * Description: get length of string
 *
 * Return: int
 */
int _nextspace(char *s, int a)
{
	int i = a;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] !='\0')
		{
			return (i);
		}
		i++;
	}

	return (i);
}

/**
 * _strlen - create array
 * @s: pointer to string
 *
 * Description: get length of string
 *
 * Return: int
 */
int *_strlen(char *s)
{
	int i = 0, n = 0;
	int a[2];
	int *p;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == ' ' && (s[i + 1] != ' ' && s[i + 1] !='\0'))
		{
			n++;
		}
	}

	a[0] = i;
	a[1] = n;

	p = a;

	return (p);
}

/**
 * strtow - split
 * @str: array of char arrays
 *
 * Description: split a string into an
 * array of words
 *
 * Return: char **
 */
char **strtow(char *str)
{
	int i, cword = 0, space = 0, len = 0, wactive = 0;
	char *word;
	char **a;
	int *lenspace;

	lenspace = _strlen(str);
	len = lenspace[0];
	space = lenspace[1];

	if (str == NULL || len == 0)
		return (NULL);
	a = malloc((space + 1) * sizeof(char *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len + 1; i++)
	{
		if (str[i] != ' ')
		{
			if (!wactive)
			{
				word = malloc((_nextspace(str, i) - i) * sizeof(char));
				if (word == NULL)
				{
					freea(a, cword);
					return (NULL);
				}
			}
			word[wactive] = str[i];
			wactive++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				word[wactive + 1] = '\0';
				a[cword] = word;
				cword++;
				wactive = 0;
			}
		}
	}
	return (a);
}
