#include "main.h"
 /*
 *  main - entry point.
 * @argc: number of arguments
 * @argv: char pointer.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, retr = 1024, retw, closure;
	char buf[1024];

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (retr == 1024)
	{
		retr = read(file_from, buf, 1024);
		if (retr == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	retw = write(file_to, buf, retr);
	if (retw == -1 || file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	closure = close(file_from);
	if (closure == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	closure = close(file_to);
	if (closure == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
