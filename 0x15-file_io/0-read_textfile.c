#include "main.h"

/**
 * read_textfile - read
 * @filename: name of file to read from
 * @letters: the number of letters to read from
 *
 * Description: print alphabets in lowercase using the putchar
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_char = 0, printed_char = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_char = read(fd, buf, letters);
	if (read_char == -1)
		return (0);

	printed_char = write(STDOUT_FILENO, buf, read_char);
	if (read_char != printed_char)
		return (0);

	free(buf);
	close(fd);
	return (read_char);
}
