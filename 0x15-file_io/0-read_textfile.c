#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t retr = 0, retw = 0;
	int fd = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	retr = read(fd, buf, letters);
	retw = write(STDOUT_FILENO, buf, retr);

	if (retr == -1 || retw == -1 || retw != retr)
		return (0);
	close(fd);
	free(buf);

	return (retw);
}
