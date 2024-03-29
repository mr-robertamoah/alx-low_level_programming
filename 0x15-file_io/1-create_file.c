#include "main.h"

/**
 * create_file - read
 * @filename: name of file to read from
 * @text_content: string to write into file
 *
 * Description: create file and write into it
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t check = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	check = write(fd, text_content, len);
	close(fd);
	if (check == -1 || check != len)
		return (-1);

	return (1);
}
