#include "main.h"

/**
 * main - copy
 * @ac: number of arguments
 * @av: arrary of arguments as strings
 *
 * Description: copy contents of a file into another
 *
 * Return: returns 0 (Success)
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to;
	ssize_t check_from, check_to;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	while ((check_from = read(fd_from, buf, 1024)))
	{
		check_to = write(fd_to, buf, check_from);
		if (check_from == -1 || check_to == -1)
			break;
	}
	if (fd_from == -1 || check_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_to == -1 || check_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	check_from = close(fd_from);
	check_to = close(fd_to);
	if (check_from || check_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n",
			check_from == -1 ? fd_from : fd_to);
		exit(100);
	}
	return (0);
}
