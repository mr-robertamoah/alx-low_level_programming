#include <stdio.h>

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

	if (!(*needle) || !(*haystack))
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

		return ((haystack + i));
	}

	return (NULL);
}
