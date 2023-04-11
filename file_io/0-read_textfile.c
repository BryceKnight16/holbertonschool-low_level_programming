#include "main.h"

/**
 * read_textfile -  reads a text file and prints to the POSIX standard output
 * @filename: name of the file
 * @letters: letters it could read and print
 *
 * Return: the letters it could read and print, or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *storedlets;
	int fd;
	ssize_t let_counter;
	ssize_t printed_let;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		return (0);
	}

	storedlets = malloc(sizeof(*storedlets) * letters);

	if (storedlets == NULL)
	{
		return (0);
	}

	let_counter = read(fd, storedlets, letters);

	if (let_counter == -1)
	{
		return (0);
	}

	printed_let = write(STDOUT_FILENO, storedlets, let_counter);

	if (printed_let == -1 || printed_let != let_counter)
	{
		return (0);
	}
	free(storedlets);
	close(fd);
	return (printed_let);
}
