#include <stdio.h>

/**
 * _strlen - get len
 * @c: pointer to buffer
 *
 * Description: get length of the string
 *
 * Return: int
 */
int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}

/**
 * _strstr - get substring
 * @haystack: pointer to buffer
 * @needle: pointer to chars to search for
 *
 * Description: search for the occurence of needle
 * in haystack
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, track;
	int nlen = _strlen(needle), hlen = _strlen(haystack);

	if (!(*needle) || !(*haystack) || (nlen > hlen))
		return (NULL);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		track = *needle == *(haystack + i);

		for (j = 1; *(needle + j) != '\0'; j++)
		{
			if (*(needle + j) != *(haystack + i + j))
			{
				track = 0;
				break;
			}
		}

		if (!track)
			continue;

		if (*(needle + j) == '\0')
			return ((haystack + i));
	}

	return (NULL);
}
