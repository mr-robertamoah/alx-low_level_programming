#include "main.h"

/**
 * argstostr - concatenates
 * @ac: integer
 * @av: array of char arrays
 *
 * Description: free grid memory of ints
 *
 * Return: pointer to char
 */

char *argstostr(int ac, char **av)
{
	int i, j, l = 0, k = 0, len = 0;
	char *str;

	for (i = 0; i < ac; i++)
	{
		l = 0;

		while (av[i][l] != '\0')
		{
			l++;
		}

		len = len + l + 1;
	}

	str = malloc(len * sizeof(char));

	if (ac == 0 || av == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;

		while (av[i][len] != '\0')
			len++;

		for (j = 0; j < len + 1; j++, k++)
		{
			if (j == len)
			{
				*(str + k) = '\n';
				continue;
			}

			*(str + k) = av[i][j];
		}
	}

	return (str);
}
