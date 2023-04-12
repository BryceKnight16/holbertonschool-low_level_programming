#include "main.h"

/**
 * create_file - Creates a file with the filename and text content
 * @filename: Name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int chars_written;
	int counter;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	counter = 0;

	if (text_content != NULL)
	{
		while (text_content[counter] != '\0')
		{
			counter = counter + 1;
		}

		chars_written = write(fd, text_content, counter);
		
		if (chars_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
