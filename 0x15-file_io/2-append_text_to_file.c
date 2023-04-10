#include "main.h"

/**
 * append_text_to_file - read
 * @filename: name of file to read from
 * @text_content: string to append into file
 *
 * Description: create file and append text to it
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t check = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		buf = malloc(sizeof(char) * (len + 1));
		if (buf == NULL)
			return (-1);
		buf = text_content;
	}

	check = write(fd, buf, len);
	if (check == -1 || fd == -1)
		return (-1);

	close(fd);
	free(buf);
	return (1);
}
