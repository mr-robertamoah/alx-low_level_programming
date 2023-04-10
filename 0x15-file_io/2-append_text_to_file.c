#include "main.h"

/**
 * create_file - read
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
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		buf = malloc(sizeof(char) * len);
		if (buf == NULL)
			return (-1);

		check = write(fd, buf, len);
		if (check == -1)
		{
			free(buf);
			return (-1);
		}

		free(buf);
	}

	close(fd);
	return (1);
}
